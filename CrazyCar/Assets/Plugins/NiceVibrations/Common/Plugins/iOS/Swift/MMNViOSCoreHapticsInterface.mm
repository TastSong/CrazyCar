#import <Foundation/Foundation.h>
#import <CoreHaptics/CoreHaptics.h>
//#import "unityswift-Swift.h"
#import "UnitySwift-Bridging-Header.h"
#import "UnityFramework/UnityFramework-Swift.h"


extern "C"
{

  void MMNViOS_CoreHapticsRegisterHapticEngineFinishedCallback(HapticCallback callback)
  {
      [MMNViOSCoreHapticsInterface RegisterHapticEngineFinishedCallbackWithCallback:callback];
  }
  void MMNViOS_CoreHapticsRegisterHapticEngineErrorCallback(HapticCallback callback)
  {
      [MMNViOSCoreHapticsInterface RegisterHapticEngineErrorCallbackWithCallback:callback];
  }
  void MMNViOS_CoreHapticsRegisterHapticEngineResetCallback(HapticCallback callback)
  {
      [MMNViOSCoreHapticsInterface RegisterHapticEngineResetCallbackWithCallback:callback];
  }

  bool MMNViOS_CoreHapticsSupported()
  {
    return [MMNViOSCoreHapticsInterface CoreHapticsSupported];
  }

  void MMNViOS_CoreHapticsSetDebugMode(bool status)
  {
	[MMNViOSCoreHapticsInterface SetDebugModeWithStatus:status];
  }

  void MMNViOS_CreateEngine()
  {
    [MMNViOSCoreHapticsInterface CreateEngine];
  }

  void MMNViOS_StopEngine()
  {
    [MMNViOSCoreHapticsInterface StopEngine];
  }

  void MMNViOS_PlayTransientHapticPattern(float intensity, float sharpness, bool threaded)
  {
    [MMNViOSCoreHapticsInterface PlayTransientHapticWithIntensity:intensity sharpness:sharpness threaded:threaded];
  }

  void MMNViOS_PlayContinuousHapticPattern(float intensity, float sharpness, float duration, bool threaded, bool fullIntensity)
  {
    [MMNViOSCoreHapticsInterface PlayContinuousHapticWithIntensity: intensity sharpness:sharpness duration:duration threaded:threaded fullIntensity:fullIntensity];
  }

  void MMNViOS_StopContinuousHaptic()
  {
    [MMNViOSCoreHapticsInterface StopContinuousHaptic];
  }

  void MMNViOS_UpdateContinuousHapticPattern(float intensity, float sharpness, bool threaded)
  {
    [MMNViOSCoreHapticsInterface UpdateContinuousHapticWithIntensity:intensity sharpness:sharpness threaded:threaded];
  }

  void MMNViOS_PlayCoreHapticsFromJSON(const char* jsonDict, bool threaded)
  {
      if (jsonDict == nil)
      {
          printf("jsonDict is nil");
          return;
      }

      NSError* error = nil;
      NSString *jsonAsString = [[NSString alloc] initWithUTF8String:jsonDict];

      //NSLog(jsonAsString);

      /*NSData* data = [jsonAsString dataUsingEncoding:NSUTF8StringEncoding];
      NSDictionary* dict = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:&error];
      CHHapticPattern* pattern = [[CHHapticPattern alloc] initWithDictionary:dict error:&error];*/
      [MMNViOSCoreHapticsInterface PlayHapticsFromJSONWithPatternAsString:jsonAsString threaded:threaded];

  }


}
