using UnityEngine;
using System;
using System.Collections;

namespace cn.sharesdk.unity3d
{
	public class ShareSDKRestoreScene : MonoBehaviour {

        // 场景还原功能
        public RestoreSceneConfigure restoreSceneConfig;

        // 第一步：定义委托
        public delegate void RestoreSceneHandler(RestoreSceneInfo scene);

        // 第一步：定义委托
        public delegate void AnalysisCommandHandler(Hashtable parameters);

        // 第二步：创建委托对象
        private static event RestoreSceneHandler onRestoreScene;

        // 第二步：创建委托对象
        private static event AnalysisCommandHandler OnAnalysisCommand;

        private static bool isInit;
		private static ShareSDKRestoreScene _instance;
		private static ShareSDKRestoreSceneImpl restoreSceneUtils;

		void Awake()
		{
			if (!isInit) 
			{
#if UNITY_ANDROID
				//restoreSceneUtils = new ShareSDKRestoreSceneImpl();
#elif UNITY_IPHONE
                //restoreSceneUtils = new ShareSDKRestoreSceneImpl();//iOS不需要
#endif
				isInit = true;
			}

			if (_instance != null) 
			{
				Destroy(_instance.gameObject);
			}
			_instance = this;

			DontDestroyOnLoad(this.gameObject);
		}

        public static void setRestoreSceneListener(cn.sharesdk.unity3d.ShareSDKRestoreScene.RestoreSceneHandler sceneHandler)
        {
#if UNITY_ANDROID
            //restoreSceneUtils.setRestoreSceneListener();
#elif UNITY_IPHONE
            //restoreSceneUtils.setRestoreSceneListener();//iOS不需要
#endif
            onRestoreScene += sceneHandler;

        }


        public static void setCommandListener(cn.sharesdk.unity3d.ShareSDKRestoreScene.AnalysisCommandHandler commandHandler)
        {
#if UNITY_ANDROID
            //restoreSceneUtils.setRestoreSceneListener();
#elif UNITY_IPHONE
            //restoreSceneUtils.setRestoreSceneListener();//iOS不需要
#endif
            OnAnalysisCommand += commandHandler;

        }

        private void _RestoreCallBack(string data)
        {
            Debug.Log("[sharesdk-unity]_RestoreCallBack：" + data);
            Debug.Log("QQQ " + data);

            Hashtable res = (Hashtable)MiniJSON.jsonDecode(data);
            if (res == null || res.Count <= 0)
            {
                return;
            }
            string path = res ["path"].ToString();
            Hashtable customParams = (Hashtable)res ["params"];
            RestoreSceneInfo scene = new RestoreSceneInfo (path, customParams);

            onRestoreScene(scene);
        }

        private void _AnalysisCommandCallBack(string data)
        {
            Debug.Log("[sharesdk-unity]_AnalysisCommandCallBack：" + data);
            Debug.Log("QQQ " + data);

            Hashtable res = (Hashtable)MiniJSON.jsonDecode(data);
            if (res == null || res.Count <= 0)
            {
                return;
            }
            OnAnalysisCommand(res);
        }

    }

}


