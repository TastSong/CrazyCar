import Foundation
import CoreHaptics

@available(iOS 13.0, *)
class MMNViOSCoreHapticsInterface : NSObject
{
    //MARK: Variables

    static var HapticEngine: CHHapticEngine!
    static var ContinuousPlayer: CHHapticAdvancedPatternPlayer!
    static var EngineStarted = false;
    static var DebugMode = false;
    static var HapticEngineFinishedCallback : HapticCallback?;
    static var HapticEngineErrorCallback : HapticCallback?;
    static var HapticEngineResetCallback : HapticCallback?;
    static var jsonData : Data!

    override init()
    {
        // init goes here
    }

    //MARK: Support

    @objc static func CoreHapticsSupported() -> Bool
    {
        if #available(iOS 9.0, *)
        {
          return CHHapticEngine.capabilitiesForHardware().supportsHaptics;
        }
        else
        {
          return false;
        }
    }

	//MARK : Debug

	@objc static func SetDebugMode(status: Bool)
	{
		DebugMode = status;
	}

  //MARK: Engine initialization

  @objc static func CreateEngine()
  {
    DebugLog("CreateEngine method");

    if (EngineStarted)
    {
        return;
    }

    if (!CoreHapticsSupported())
    {
      return;
    }

    do
    {
        self.HapticEngine = try CHHapticEngine();
    }
    catch let error
    {
        DebugLog("Engine Creation Error: \(error)");
    }

    self.HapticEngine.playsHapticsOnly = true;

    self.HapticEngine.stoppedHandler = { reason in
        DebugLog("Stop Handler: The engine stopped for reason: \(reason.rawValue)");
        switch reason
        {
            case .audioSessionInterrupt: DebugLog("Audio session interrupt");
            case .applicationSuspended: DebugLog("Application suspended");
            case .idleTimeout: DebugLog("Idle timeout");
            case .systemError: DebugLog("System error");
            case .notifyWhenFinished: DebugLog("Playback finished");
            @unknown default: DebugLog("Unknown error");
        }
        EngineStarted = false;
    }

    self.HapticEngine.resetHandler = {

		if (HapticEngineResetCallback != nil) { HapticEngineResetCallback!(); }
        DebugLog("Reset Handler: restarting the engine.");
        do
        {
            try self.HapticEngine.start();
            EngineStarted = true;
        }
        catch
        {
            DebugLog("Failed to restart the engine");
        }
    }
    do
    {
        try self.HapticEngine.start();
        EngineStarted = true;
    }
    catch
    {
		if (HapticEngineErrorCallback != nil) { HapticEngineErrorCallback!(); }
        DebugLog("Failed to start the engine: \(error)");
    }
  }

    @objc static func StopEngine()
    {
        self.HapticEngine.stop();
        EngineStarted = false;
    }



  //MARK: Transient

  @objc static func PlayTransientHaptic(intensity: Float, sharpness: Float)
  {
    DebugLog("PlayTransientHaptic method");

    if (!CoreHapticsSupported())
    {
        return;
    }

    CreateEngine();

    let clampedIntensity = Clamp(value: intensity, min: 0, max: 1);
    let clampedSharpness = Clamp(value: sharpness, min: 0, max: 1);

    let hapticIntensity = CHHapticEventParameter(parameterID: .hapticIntensity, value: clampedIntensity);
    let hapticSharpness = CHHapticEventParameter(parameterID: .hapticSharpness, value: clampedSharpness);
    let event = CHHapticEvent(eventType: .hapticTransient, parameters: [hapticIntensity, hapticSharpness], relativeTime: 0);

    do {
        let pattern = try CHHapticPattern(events: [event], parameters: []);
        let player = try self.HapticEngine?.makePlayer(with: pattern);
        try player?.start(atTime: CHHapticTimeImmediate);
    }
    catch let error
    {
		if (HapticEngineErrorCallback != nil) { HapticEngineErrorCallback!(); }
        DebugLog("Failed to play pattern: \(error.localizedDescription).");
    }
  }

  //MARK: From JSON string


  @objc static func PlayHapticsFromJSON(patternAsString: String)
  {
    DebugLog("PlayHapticsFromJSON method");

    if (!CoreHapticsSupported())
    {
        return;
    }

    CreateEngine();

    do
    {
        jsonData = patternAsString.data(using: String.Encoding.utf8);
        try self.HapticEngine?.playPattern(from: jsonData);
        EngineStarted = true;

        self.HapticEngine.notifyWhenPlayersFinished { (Error) -> CHHapticEngine.FinishedAction in
            DebugLog("haptic from JSON play complete");
            EngineStarted = false;
            if (HapticEngineFinishedCallback != nil)
            {
                HapticEngineFinishedCallback!();
            }
            return CHHapticEngine.FinishedAction.leaveEngineRunning;
        }
    }
    catch let error
    {
		if (HapticEngineErrorCallback != nil) { HapticEngineErrorCallback!(); }
        DebugLog("Failed to play pattern from JSON: \(error.localizedDescription).");
    }
  }

  //MARK: Continuous

  @objc static func PlayContinuousHaptic(intensity: Float, sharpness: Float, duration: Double)
  {
    DebugLog("PlayContinuousHaptic method, intensity : \(intensity) sharpness : \(sharpness) duration : \(duration)");
    
    if (!CoreHapticsSupported())
    {
        return;
    }

    CreateEngine();

    let clampedIntensity = Clamp(value: intensity, min: 0, max: 1);
    let clampedSharpness = Clamp(value: sharpness, min: 0, max: 1);

    let hapticIntensity = CHHapticEventParameter(parameterID: .hapticIntensity, value: clampedIntensity);
    let hapticSharpness = CHHapticEventParameter(parameterID: .hapticSharpness, value: clampedSharpness);
    let event = CHHapticEvent(eventType: .hapticContinuous, parameters: [hapticIntensity, hapticSharpness], relativeTime: 0, duration: duration);

    do
    {
        let pattern = try CHHapticPattern(events: [event], parameters: []);
        self.ContinuousPlayer = try self.HapticEngine?.makeAdvancedPlayer(with: pattern);
        try self.ContinuousPlayer.start(atTime: CHHapticTimeImmediate);
    }
    catch
    {
		if (HapticEngineErrorCallback != nil) { HapticEngineErrorCallback!(); }
        DebugLog("Error while creating the continuous player : \(error.localizedDescription)");
    }

    self.ContinuousPlayer.completionHandler = { _ in
        DispatchQueue.main.async
            {
            DebugLog("Continuous haptic complete");
            if (HapticEngineFinishedCallback != nil)
            {
                HapticEngineFinishedCallback!();
            }
        }
    }
  }

  @objc static func UpdateContinuousHaptic(intensity: Float, sharpness: Float)
  {
    if (!CoreHapticsSupported())
    {
        return;
    }

    if (!EngineStarted)
    {
        DebugLog("Engine wasn't started");
        return;
    }
    if (self.ContinuousPlayer == nil)
    {
        DebugLog("Continuous player is nil");
        return;
    }

    let intensityParameter = CHHapticDynamicParameter(parameterID: .hapticIntensityControl,
                                                      value: intensity,
                                                      relativeTime: 0)
    let sharpnessParameter = CHHapticDynamicParameter(parameterID: .hapticSharpnessControl,
                                                      value: sharpness,
                                                      relativeTime: 0)
    do
    {
		DebugLog("updating intensity : \(intensity)");
		DebugLog("updating sharpness : \(sharpness)");
        try self.ContinuousPlayer.sendParameters([intensityParameter, sharpnessParameter],
        atTime: 0)
    }
	catch let error
	{
		if (HapticEngineErrorCallback != nil) { HapticEngineErrorCallback!(); }
        DebugLog("Error updating continuous player: \(error)")
    }
  }

  @objc static func StopContinuousHaptic()
  {
    DebugLog("StopContinuousHaptic method");

    if (!CoreHapticsSupported())
    {
        return;
    }

    if (!EngineStarted)
    {
        DebugLog("Engine wasn't started");
        return;
    }
    if (self.ContinuousPlayer == nil)
    {
        DebugLog("Continuous player is nil");
        return;
    }

    do {
      try ContinuousPlayer.stop(atTime: CHHapticTimeImmediate)
        DebugLog("Stopping continuous player");
        EngineStarted = false;
    }
    catch let error
    {
		if (HapticEngineErrorCallback != nil) { HapticEngineErrorCallback!(); }
        DebugLog("Error stopping the continuous haptic player: \(error)");
    }
  }

  //MARK: Callbacks



    @objc static func RegisterHapticEngineFinishedCallback(callback: @escaping HapticCallback)
  {
      HapticEngineFinishedCallback = callback;
  }

    @objc static func RegisterHapticEngineResetCallback(callback: @escaping HapticCallback)
  {
      HapticEngineResetCallback = callback;
  }

    @objc static func RegisterHapticEngineErrorCallback(callback: @escaping HapticCallback)
  {
      HapticEngineErrorCallback = callback;
  }

    //MARK: helper functions

    static func Clamp(value: Float, min: Float, max: Float ) -> Float
    {
        if (value > max)
        {
            return max;
        }
        if (value < min)
        {
            return min;
        }
        return value;
    }

    static func DebugLog(_ item: @autoclosure () -> Any, separator: String = " ", terminator: String = "\n")
    {
        if (DebugMode)
        {
            Swift.print(item(), separator: separator, terminator: terminator)
        }
    }

    static func ConvertToDictionary(text: String) -> [String: Any]?
    {
        if let data = text.data(using: .utf8)
        {
            do {
                return try JSONSerialization.jsonObject(with: data, options:[]) as? [String: Any]
            }
            catch {
                print(error.localizedDescription)
            }
        }
        return nil;
    }

}
