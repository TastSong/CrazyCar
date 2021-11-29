using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    public static class MMNVPlatform
    {

        /// <summary>
        /// Returns true if the current platform is Android, false otherwise.
        /// </summary>
        public static bool Android()
        {
#if UNITY_ANDROID && !UNITY_EDITOR
				        return true;
#else
            return false;
#endif
        }

        /// <summary>
        /// Returns true if the current platform is iOS, false otherwise
        /// </summary>
        /// <returns><c>true</c>, if O was ied, <c>false</c> otherwise.</returns>
        public static bool iOS()
        {
#if UNITY_IOS && !UNITY_EDITOR
				        return true;
#else
            return false;
#endif
        }
    }
}
