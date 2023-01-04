using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Reflection;

namespace cn.sharesdk.unity3d{
	public class MobSDK : MonoBehaviour {
		public MobSDKImpl mobSDKImpl;
		public OnSubmitPolicyGrantResultCallback onSubmitPolicyGrantResultCallback;
		#if UNITY_IPHONE
		public getPolicyHandle getPolicy;
		public delegate void getPolicyHandle(string content);
		#endif

		void Awake() {
         #if UNITY_IPHONE
                mobSDKImpl = new iOSMobSDKImpl(gameObject);
         #elif UNITY_ANDROID
				mobSDKImpl = new AndroidMobSDKImpl (gameObject);
         #endif
		}

		private void _PolicyGrantResultCallback (bool success) {
			onSubmitPolicyGrantResultCallback(success);
		}

		/// <summary>
		/// 获取MobSDK隐私协议内容, url为true时返回MobTech隐私协议链接，false返回协议的内容
		/// </summary>
		///
#if UNITY_IPHONE
        public void getPrivacyPolicy (bool url, string language)
        {
			mobSDKImpl.getPrivacyPolicy(url,language);
        }


        public string getDeviceCurrentLanguage() {
            return mobSDKImpl.getDeviceCurrentLanguage();
         }
        private void _Callback (string data){
            if (data == null) 
			{
				return;
			}
			
			Hashtable res = (Hashtable) MiniJSON.jsonDecode(data);
			if (res == null || res.Count <= 0) 
			{
				return;
			}
			
			int status = Convert.ToInt32(res["status"]);
            int action = Convert.ToInt32(res["action"]);

            switch(status) 
			{
				case 1: 
				{
					Console.WriteLine(data);
					Hashtable resp = (Hashtable) res["res"];
					if (action == 1){
                          if (getPolicy != null){
                             getPolicy((string)resp["url"]);
                          }
                    }

                    //LoopShareOnComplete(action, resp);

                    break;
				} 
				case 2: 
				{
					

                    //LoopShareOnError(action, throwable);

                    break;
				} 
				case 3: 
				{
					
					break;
				} 
			}
        }
#elif UNITY_ANDROID
		public string getPrivacyPolicy (bool url, string language) {
            string urlString =  mobSDKImpl.getPrivacyPolicy (url,language);
			return urlString;
		}
#endif
		/// <summary>
		/// 提交用户授权结果给MobSDK
		/// </summary>
		public Boolean submitPolicyGrantResult (bool granted) {
		    Boolean result = mobSDKImpl.submitPolicyGrantResult (granted);            return result;
		}

		/// <summary>
		/// 是否允许展示二次确认框
		/// 在以下情况下，个别接口会默认向用户展示隐私协议二次确认框：
		/// - 开发者未反馈用户隐私协议授权结果
		/// - 用户拒绝隐私协议
		/// </summary>
		public void setAllowDialog (bool allowDialog) {
			mobSDKImpl.setAllowDialog (allowDialog);
		}

		/// <summary>
		/// 设置二次确认框样式
		/// backgroundColorRes  弹框背景色资源名
		/// positiveBtnColorRes 同意按钮背景色资源名
		/// negativeBtnColorRes 拒绝按钮背景色资源名
		/// </summary>

		public void setPolicyUi (String backgroundColorRes, String positiveBtnColorRes, String negativeBtnColorRes) {
			mobSDKImpl.setPolicyUi (backgroundColorRes, positiveBtnColorRes, negativeBtnColorRes);
		}

		/// <summary>
		/// 返回提交授权结果MobTech后的响应结果
		/// </summary>
		public delegate void OnSubmitPolicyGrantResultCallback(bool success);
	}
}
