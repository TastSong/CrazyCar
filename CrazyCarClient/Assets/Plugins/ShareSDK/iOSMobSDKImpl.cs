using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace cn.sharesdk.unity3d
{
#if UNITY_IPHONE
	public class iOSMobSDKImpl : MobSDKImpl
    {
		[DllImport("__Internal")]
		private static extern void __iosMobSDKGetPolicy(bool type,string language, string observer);
		[DllImport("__Internal")]
		private static extern void __iosMobSDKSubmitPolicyGrantResult(bool granted);
		[DllImport("__Internal")]
		private static extern void __iosMobSDKSetAllowDialog(bool allowDialog);
        [DllImport("__Internal")]
        private static extern string __iosMobSDKGetCurrentLanguage();
        [DllImport("__Internal")]
		private static extern void __iosMobSDKSetPolicyUI(String backgroundColorRes, String positiveBtnColorRes, String negativeBtnColorRes);

		private string _callbackObjectName = "Main Camera";
		
		public iOSMobSDKImpl(GameObject go)
		{
			Debug.Log("iOSUtils  ===>>>  iOSUtils");
			try
			{
				_callbackObjectName = go.name;
			}
			catch (Exception e)
			{
				Console.WriteLine("{0} Exception caught.", e);
			}
		}
		public override string getPrivacyPolicy(bool url, string language)
		{
			__iosMobSDKGetPolicy(url, language, _callbackObjectName);
			return "";
		}

		public override bool submitPolicyGrantResult(bool granted)
		{
			__iosMobSDKSubmitPolicyGrantResult(granted);
			return true;
		}
        public override string getDeviceCurrentLanguage()
        {
            return __iosMobSDKGetCurrentLanguage();
        }
        public override void setAllowDialog(bool allowDialog)
		{
			__iosMobSDKSetAllowDialog(allowDialog);
		}

		public override void setPolicyUi(String backgroundColorRes, String positiveBtnColorRes, String negativeBtnColorRes)
		{
			__iosMobSDKSetPolicyUI(backgroundColorRes, positiveBtnColorRes, negativeBtnColorRes);
		}
	}
#endif
}