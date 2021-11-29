using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

namespace MoreMountains.NiceVibrations
{
    [CreateAssetMenu(fileName = "MMNVPathDefinition", menuName = "MoreMountains/NiceVibrations/MMNVPathDefinition")]
    public class MMNVPath : ScriptableObject
    {
        [Header("Swift")]
        /// whether or not the post processing build should force ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES to true on the Framework
        /// it's usually not needed, but it's solved build errors for some people
        public bool ForceAlwaysEmbedSwiftSLForFramework = false;
        /// whether or not the post processing build should force ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES to true on the Main Project
        public bool ForceAlwaysEmbedSwiftSLForMainTarget = false;
        [Header("Bindings")]
        /// a link to the bridging header class (UnitySwift-Bridging-Header.h)
        public Object Header;
        /// a link to the module map file, module.modulemap
        public Object ModuleMap;
    }
}
