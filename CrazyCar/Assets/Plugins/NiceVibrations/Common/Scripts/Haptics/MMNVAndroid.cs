using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This class handles all Android haptics specific calls
    /// </summary>
    public static class MMNVAndroid
    {
        /// <summary>
        /// A struct used to pass data to threaded calls
        /// </summary>
        public struct MMNVAndroidVibrateThreadData
        {
            public long[] Pattern;
            public int[] Amplitudes;
            public int Repeat;

            public MMNVAndroidVibrateThreadData(long[] pattern, int[] amplitudes, int repeat)
            {
                Pattern = pattern;
                Amplitudes = amplitudes;
                Repeat = repeat;
            }
        }

        private static MMNVAltThread<MMNVAndroidVibrateThreadData> _androidVibrateThread;
        private static MMNVAndroidVibrateThreadData _androidVibrateThreadData;
        private static int _sdkVersion = -1;

        #if UNITY_ANDROID && !UNITY_EDITOR
			private static AndroidJavaClass UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
			private static AndroidJavaObject CurrentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
			private static AndroidJavaObject AndroidVibrator = CurrentActivity.Call<AndroidJavaObject>("getSystemService", "vibrator");
			private static AndroidJavaClass VibrationEffectClass;
			private static AndroidJavaObject VibrationEffect;
			private static int DefaultAmplitude;
            private static IntPtr AndroidVibrateMethodRawClass = AndroidJNIHelper.GetMethodID(AndroidVibrator.GetRawClass(), "vibrate", "(J)V", false);
            private static jvalue[] AndroidVibrateMethodRawClassParameters = new jvalue[1];
        #else
            private static AndroidJavaClass UnityPlayer;
            private static AndroidJavaObject CurrentActivity;
            private static AndroidJavaObject AndroidVibrator = null;
            private static AndroidJavaClass VibrationEffectClass = null;
            private static AndroidJavaObject VibrationEffect;
            private static int DefaultAmplitude;
            private static IntPtr AndroidVibrateMethodRawClass = IntPtr.Zero;
            private static jvalue[] AndroidVibrateMethodRawClassParameters = null;
        #endif

        /// <summary>
        /// Requests a default vibration on Android, for the specified duration, in milliseconds
        /// </summary>
        /// <param name="milliseconds">Milliseconds.</param>
        public static void AndroidVibrate(long milliseconds) 
        {
            if (!MMNVPlatform.Android()) { return; }
            AndroidVibrateMethodRawClassParameters[0].j = milliseconds;
            AndroidJNI.CallVoidMethod(AndroidVibrator.GetRawObject(), AndroidVibrateMethodRawClass, AndroidVibrateMethodRawClassParameters);
        }

        /// <summary>
        /// Requests a vibration of the specified amplitude and duration. If amplitude is not supported by the device's SDK, a default vibration will be requested
        /// </summary>
        /// <param name="milliseconds">Milliseconds.</param>
        /// <param name="amplitude">Amplitude.</param>
        public static void AndroidVibrate(long milliseconds, int amplitude)
        {
            if (!MMNVPlatform.Android()) { return; }
            // amplitude is only supported after API26
            if ((AndroidSDKVersion() < 26))
            {
                AndroidVibrate(milliseconds);
            }
            else
            {
                AndroidVibrationEffectClassInitialization();
                
                VibrationEffect = VibrationEffectClass.CallStatic<AndroidJavaObject>("createOneShot", new object[] { milliseconds, amplitude });
                AndroidVibrator.Call("vibrate", VibrationEffect);
            }
        }

        // Requests a vibration on Android for the specified pattern and optional repeat
        // Straight out of the Android documentation :
        // Pass in an array of ints that are the durations for which to turn on or off the vibrator in milliseconds. 
        // The first value indicates the number of milliseconds to wait before turning the vibrator on. 
        // The next value indicates the number of milliseconds for which to keep the vibrator on before turning it off. 
        // Subsequent values alternate between durations in milliseconds to turn the vibrator off or to turn the vibrator on.
        // repeat:  the index into pattern at which to repeat, or -1 if you don't want to repeat.
        public static void AndroidVibrate(long[] pattern, int repeat)
        {
            if (!MMNVPlatform.Android()) { return; }
            
            if (pattern == null)
            {
                return;
            }
            
            if ((AndroidSDKVersion() < 26))
            {
                AndroidVibrator.Call("vibrate", pattern, repeat);
            }
            else
            {
                AndroidVibrationEffectClassInitialization(); 
                try
                {
                    VibrationEffect = VibrationEffectClass.CallStatic<AndroidJavaObject>("createWaveform", new object[] { pattern, repeat });
                    AndroidVibrator.Call("vibrate", VibrationEffect);
                }
                catch (Exception e)
                {
                    Debug.LogException(e);
                }
            }
        }

        /// <summary>
        /// Requests a vibration on Android for the specified pattern, amplitude and optional repeat
        /// </summary>
        /// <param name="pattern">Pattern.</param>
        /// <param name="amplitudes">Amplitudes.</param>
        /// <param name="repeat">Repeat : -1 : no repeat, 0 : infinite, 1 : repeat once, 2 : repeat twice, etc</param>
        public static void AndroidVibrate(long[] pattern, int[] amplitudes, int repeat, bool threaded = false)
        {
            if (!MMNVPlatform.Android()) { return; }
            
            if ((pattern == null) || (amplitudes == null))
            {
                return;
            }

            if ((pattern.Length == 0) || (amplitudes.Length == 0))
            {
                return;
            }
            
            if ((AndroidSDKVersion() < 26))
            {
                AndroidVibrator.Call("vibrate", pattern, repeat);
            }
            else
            {
                if (threaded)
                {
                    if (_androidVibrateThread == null)
                    {
                        _androidVibrateThread = new MMNVAltThread<MMNVAndroidVibrateThreadData>();
                        _androidVibrateThreadData = new MMNVAndroidVibrateThreadData();
                    }

                    _androidVibrateThreadData.Pattern = pattern;
                    _androidVibrateThreadData.Amplitudes = amplitudes;
                    _androidVibrateThreadData.Repeat = repeat;
                    _androidVibrateThread.Run(AndroidVibrateThread, _androidVibrateThreadData);
                }
                else
                {
                    
                    AndroidVibrateNoThread(pattern, amplitudes, repeat);
                }                
            }
        }

        /// <summary>
        /// An internal method used to vibrate on a pattern/amplitude model using a secondary thread
        /// If you use that, you should call MMNVAndroid.ClearThreads() on exit (where exactly depends on your game, but OnDisable should cover most cases)
        /// </summary>
        /// <param name="threadData"></param>
        private static void AndroidVibrateThread(MMNVAndroidVibrateThreadData threadData)
        { 
            AndroidJNI.AttachCurrentThread();
            AndroidVibrateNoThread(threadData.Pattern, threadData.Amplitudes, threadData.Repeat);
            AndroidJNI.DetachCurrentThread();
        }

        /// <summary>
        /// An internal method used to vibrate on a pattern/amplitude model using the main thread
        /// </summary>
        /// <param name="threadData"></param>
        private static void AndroidVibrateNoThread(long[] pattern, int[] amplitudes, int repeat)
        {
            if ((pattern == null) || (amplitudes == null))
            {
                return;
            }
            AndroidVibrationEffectClassInitialization();
            VibrationEffect = VibrationEffectClass.CallStatic<AndroidJavaObject>("createWaveform", new object[] { pattern, amplitudes, repeat });
            AndroidVibrator.Call("vibrate", VibrationEffect);
        }

        /// <summary>
        /// A method to call once you're done with haptics on Android, usually OnDisable, to avoid memory leaks
        /// </summary>
        public static void ClearThreads()
        {
            _androidVibrateThread = null;
            _androidVibrateThread?.CloseThread();
        }

        /// <summary>
        /// Stops all Android vibrations that may be active
        /// </summary>
        public static void AndroidCancelVibrations()
        {
            if (!MMNVPlatform.Android()) { return; }
            AndroidVibrator.Call("cancel");
        }

        /// <summary>
        /// Returns true if the device running the game has vibrations
        /// </summary>
        /// <returns></returns>
        public static bool AndroidHasVibrator()
        {
            if (!MMNVPlatform.Android()) { return false; }
            return AndroidVibrator.Call<bool>("hasVibrator");
        }

        /// <summary>
        /// Returns true if the device running the game has amplitude control
        /// </summary>
        /// <returns></returns>
        public static bool AndroidHasAmplitudeControl()
        {
            if ((AndroidSDKVersion() < 26))
            {
                return false;
            }
            if (!MMNVPlatform.Android()) { return false; }
            return AndroidVibrator.Call<bool>("hasAmplitudeControl");
        }

        /// <summary>
        /// Initializes the VibrationEffectClass if needed.
        /// </summary>
        private static void AndroidVibrationEffectClassInitialization()
        {
            if (VibrationEffectClass == null)
            {
                VibrationEffectClass = new AndroidJavaClass("android.os.VibrationEffect");
            }
        }

        /// <summary>
        /// Returns the current Android SDK version as an int
        /// </summary>
        /// <returns>The SDK version.</returns>
        public static int AndroidSDKVersion()
        {
            if (_sdkVersion == -1)
            {
                int apiLevel = int.Parse(SystemInfo.operatingSystem.Substring(SystemInfo.operatingSystem.IndexOf("-") + 1, 3));
                _sdkVersion = apiLevel;
                return apiLevel;
            }
            else
            {
                return _sdkVersion;
            }
        }
    }
}
