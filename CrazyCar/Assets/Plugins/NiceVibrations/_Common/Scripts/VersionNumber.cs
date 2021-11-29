using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace MoreMountains.NiceVibrations
{
    [RequireComponent(typeof(Text))]
    public class VersionNumber : MonoBehaviour
    {
        public string Version = "v3.3";

        protected Text _text;

        protected virtual void Awake()
        {
            _text = this.gameObject.GetComponent<Text>();
        }

        protected virtual void Start()
        {
            _text.text = Version;

            if (MMVibrationManager.iOS())
            {
                _text.text += " iOS " + MMVibrationManager.iOSVersion.ToString();
            }

            if (MMVibrationManager.Android())
            {
                _text.text += " Android " + MMNVAndroid.AndroidSDKVersion().ToString();
            }
        }
        
    }
}
