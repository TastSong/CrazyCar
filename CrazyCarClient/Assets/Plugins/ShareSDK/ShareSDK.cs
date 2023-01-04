using UnityEngine;
using System.Collections;
using System;  
using System.Collections.Generic;  
using System.IO;  
using System.Text;
using System.Reflection;

namespace cn.sharesdk.unity3d
{
    /// <summary>
    /// ShareSDK.
    /// </summary>

    public delegate void sendWXRequestToken(String uid, String token);
    public delegate void sendWXRefreshToken(String token);

    public class ShareSDK : MonoBehaviour 
	{
		private int reqID;
		//配置ShareSDK AppKey
		//注:此处区分仅为demo测试而区分，实际使用时可以不区分安卓或iOS
#if UNITY_ANDROID
		//public string appKey = "moba6b6c6d6";
		//public string appSecret = "b89d2427a3bc7ad1aea1e1e8c1d36bf3";
        
        //public string appKey = "moba0b0c0d0";
		//public string appSecret = "5713f0d88511f9f4cf100cade0610a34";
#elif UNITY_IPHONE
		public string appKey = "2c574691c6986";
		public string appSecret = "4b5cd595eb07b5cf17bb269f7a51391d";
        public List<string> customAssociatedDomains = new List<string>();
#endif

		public DevInfoSet devInfo;
		public ShareSDKImpl shareSDKUtils;

		public EventHandler authHandler;
		public EventHandler shareHandler;
		public EventHandler showUserHandler;
		public EventHandler getFriendsHandler;
		public EventHandler followFriendHandler;
		

#if UNITY_ANDROID
		
#elif UNITY_IPHONE
		public GetWXRequestTokenHanlerEvent wxRequestHandler;
        public GetWXRefreshTokenHanlerEvent wxRefreshTokenHandler;
		public GetShareCommandHanlerEvent shareCommandHandler;
		//public OnLoopShareCallBack onLoopsharecallback;
#endif
		void Awake()
		{				
			Type type = devInfo.GetType();
			Hashtable platformConfigs = new Hashtable();
			FieldInfo[] devInfoFields = type.GetFields();
			foreach (FieldInfo devInfoField in devInfoFields) 
			{	
				DevInfo info = (DevInfo) devInfoField.GetValue(devInfo);
				int platformId = (int) info.GetType().GetField("type").GetValue(info);
				FieldInfo[] fields = info.GetType().GetFields();
				Hashtable table = new Hashtable();
				foreach (FieldInfo field in fields) 
				{
					if ("type".EndsWith(field.Name)) {
						continue;
					} else if ("Enable".EndsWith(field.Name) || "ShareByAppClient".EndsWith(field.Name) || "BypassApproval".EndsWith(field.Name) || "WithShareTicket".EndsWith(field.Name)) {
						table.Add(field.Name, Convert.ToString(field.GetValue(info)).ToLower());

                        //Debug.Log("======================platformConfigs table info 1:" + Convert.ToString(field.GetValue(info)).ToLower());

                    } else {
						table.Add(field.Name, Convert.ToString(field.GetValue(info)));
                        //Debug.Log("======================platformConfigs table info 2:" + Convert.ToString(field.GetValue(info)));
                    }
				}

             
                platformConfigs.Add(platformId, table);
			}
            //Debug.Log("======================platformConfigs:" + platformConfigs);
#if UNITY_ANDROID
			shareSDKUtils = new AndroidImpl(gameObject);
			//shareSDKUtils.InitSDK(appKey,appSecret);
            
            //add listener for loopshare
            shareSDKUtils.PrepareLoopShare();
            shareSDKUtils.setChannelId();
			
#elif UNITY_IPHONE
            shareSDKUtils = new iOSImpl(gameObject);
#endif
			
			shareSDKUtils.SetPlatformConfig(platformConfigs);
		}
		
		/// <summary>
		/// callback the specified data.
		/// </summary>
		/// <param name='data'>
		/// Data.
		/// </param>
		private void _Callback (string data)
		{
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
			int reqID = Convert.ToInt32(res["reqID"]);
			PlatformType platform = (PlatformType)Convert.ToInt32(res["platform"]);
            
			int action = Convert.ToInt32(res["action"]);
			// Success = 1, Fail = 2, Cancel = 3
			switch(status) 
			{
				case 1: 
				{
					Console.WriteLine(data);
					Hashtable resp = (Hashtable) res["res"];
					OnComplete(reqID, platform, action, resp);

                    //LoopShareOnComplete(action, resp);

                    break;
				} 
				case 2: 
				{
					Console.WriteLine(data);
					Hashtable throwable = (Hashtable) res["res"];
					OnError(reqID, platform, action, throwable);

                    //LoopShareOnError(action, throwable);

                    break;
				} 
				case 3: 
				{
					OnCancel(reqID, platform, action);
					break;
				} 
			}
		}

        //public void LoopShareOnError(int action, Hashtable throwable)
        //{
            //switch (action)
            //{
                //case 10:
                    //{ // 10 == loopshare result
                        //if (onLoopsharecallback != null)
                        //{
                            //onLoopsharecallback(throwable);
                        //}
                        //break;
                    //}
            //}
        //}

        /// <summary>
        /// Raises the error event.
        /// </summary>
        /// <param name="platform">Platform.</param>
        /// <param name="action">Action.</param>
        /// <param name="throwable">Throwable.</param>
        public void OnError (int reqID, PlatformType platform, int action, Hashtable throwable) 
		{
			switch (action) 
			{
			case 1: 
			{ // 1 == Platform.ACTION_AUTHORIZING
				if (authHandler != null) 
				{
					authHandler(reqID, ResponseState.Fail, platform, throwable);
				}
				break;
			} 
			case 2:
			{ //2 == Platform.ACTION_GETTING_FRIEND_LIST
				if (getFriendsHandler != null) 
				{
					getFriendsHandler(reqID, ResponseState.Fail, platform, throwable);
				}
				break;
			}
			case 6:
			{ //6 == Platform.ACTION_FOLLOWING_USER
				if (followFriendHandler != null) 
				{
					followFriendHandler(reqID, ResponseState.Fail, platform, throwable);
				}
				break;
			}
			case 8: 
			{ // 8 == Platform.ACTION_USER_INFOR
				if (showUserHandler != null) 
				{
					showUserHandler(reqID, ResponseState.Fail, platform, throwable);
				}
				break;
			} 
			case 9: 
			{ // 9 == Platform.ACTION_SHARE
				if (shareHandler != null) 
				{
					shareHandler(reqID, ResponseState.Fail, platform, throwable);
				}
				break;
			}

            }
		}

        //public void LoopShareOnComplete(int action, Hashtable res)
        //{
            //switch (action)
            //{
                //case 10:
                    //{ // 10 == loopshare result
                        //if (onLoopsharecallback != null)
                        //{
                            //onLoopsharecallback(res);
                        //}
                        //break;
                    //}
            //}
        //}


		/// <summary>
		/// Raises the success event.
		/// </summary>
		/// <param name="platform">Platform.</param>
		/// <param name="action">Action.</param>
		/// <param name="res">Res.</param>
		public void OnComplete (int reqID, PlatformType platform, int action, Hashtable res) 
		{
			switch (action) 
			{
			case 1: 
			{ // 1 == Platform.ACTION_AUTHORIZING
				if (authHandler != null) 
				{
					authHandler(reqID, ResponseState.Success, platform, res);
				}
				break;
			} 
			case 2:
			{ //2 == Platform.ACTION_GETTING_FRIEND_LIST
				if (getFriendsHandler != null) 
				{
					getFriendsHandler(reqID, ResponseState.Success, platform, res);
				}
				break;
			}
			case 6:
			{ //6 == Platform.ACTION_FOLLOWING_USER
				if (followFriendHandler != null) 
				{
					followFriendHandler(reqID, ResponseState.Success, platform, res);
				}
				break;
			}
			case 8: 
			{ // 8 == Platform.ACTION_USER_INFOR
				if (showUserHandler != null) 
				{
					showUserHandler(reqID, ResponseState.Success, platform, res);
				}
				break;
			} 
			case 9: 
			{ // 9 == Platform.ACTION_SHARE
				if (shareHandler != null) 
				{
					shareHandler(reqID, ResponseState.Success, platform, res);
				}
				break;
			}	
		

#if UNITY_ANDROID
		
#elif UNITY_IPHONE
			case 11:
			{ // 11 == shareCommand
					shareCommandHandler(res);
					break;
			}
			
            case 10: {

                        int isRefresh = Convert.ToInt32(res["isRefreshToken"]);
                        if (isRefresh == 1)
                        {
                            String uid = Convert.ToString(res["uid"]);
                            wxRefreshTokenHandler(uid, sendWXRefreshTokenMethod);
                        }
                        else {
                            String authCode = Convert.ToString(res["authCode"]);
                            wxRequestHandler(authCode, sendWXRequestTokenMehtod);
                        }
                        break;
                    }
#endif

			}
		}

		/// <summary>
		/// Raises the cancel event.
		/// </summary>
		/// <param name="platform">Platform.</param>
		/// <param name="action">Action.</param>
		public void OnCancel (int reqID, PlatformType platform, int action) 
		{
			switch (action) 
			{
			case 1: 
			{ // 1 == Platform.ACTION_AUTHORIZING
				if (authHandler != null) 
				{
					authHandler(reqID, ResponseState.Cancel, platform, null);
				}
				break;
			} 
			case 2:
			{ //2 == Platform.ACTION_GETTING_FRIEND_LIST
				if (getFriendsHandler != null) 
				{
					getFriendsHandler(reqID, ResponseState.Cancel, platform, null);
				}
				break;
			}
			case 6:
			{ //6 == Platform.ACTION_FOLLOWING_USER
				if (followFriendHandler != null) 
				{
					followFriendHandler(reqID, ResponseState.Cancel, platform, null);
				}
				break;
			}
			case 8: 
			{ // 8 == Platform.ACTION_USER_INFOR
				if (showUserHandler != null) 
				{
					showUserHandler(reqID, ResponseState.Cancel, platform, null);
				}
				break;
			} 
			case 9: 
			{ // 9 == Platform.ACTION_SHARE
				if (shareHandler != null) 
				{
					shareHandler(reqID, ResponseState.Cancel, platform, null);
				}
				break;
			}
			}
		}

        /// <summary>
        /// init the ShareSDK.
        /// </summary>
		public void InitSDK (String appKey)
		{			
			// if you don't add ShareSDK.xml in your assets folder, use the following line
			//shareSDKUtils.InitSDK (appKey);
		}

		public void InitSDK (String appKey,String appSecret)
		{			
			// if you don't add ShareSDK.xml in your assets folder, use the following line
			//shareSDKUtils.InitSDK (appKey,appSecret);
		}

		/// <summary>
		/// Sets the platform config.
		/// </summary>
		public void SetPlatformConfig (Hashtable configInfo)
		{			
			shareSDKUtils.SetPlatformConfig(configInfo);			
		}
		
		/// <summary>
		/// Authorize the specified type, observer and resultHandler.
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		/// <param name='observer'>
		/// Observer.
		/// </param>
		/// <param name='resultHandler'>
		/// Result handler.
		/// </param>
		public int Authorize (PlatformType platform)
		{
			reqID ++;
			shareSDKUtils.Authorize(reqID, platform);			
			return reqID;
		}
		
		/// <summary>
		/// Cancel authorized
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		public void CancelAuthorize (PlatformType platform)
		{
			shareSDKUtils.CancelAuthorize(platform);			
		}
		
		/// <summary>
		/// Has authorized
		/// </summary>
		/// <returns>
		/// true has authorized, otherwise not authorized.
		/// </returns>
		/// <param name='type'>
		/// Type.
		/// </param>
		public bool IsAuthorized (PlatformType platform)
		{
			return shareSDKUtils.IsAuthorized(platform);			
		}

		public bool IsClientValid (PlatformType platform)
		{
			return shareSDKUtils.IsClientValid(platform);			
		}
		
		/// <summary>
		/// Gets the user info.
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		/// <param name='callback'>
		/// Callback.
		/// </param>
		public int GetUserInfo (PlatformType platform)
		{
			reqID ++;
			shareSDKUtils.GetUserInfo(reqID, platform);			
			return reqID;
		}

		/// <summary>
		/// Shares the content.
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		/// <param name='content'>
		/// Content.
		/// </param>
		/// <param name='resultHandler'>
		/// Callback.
		/// </param>
		public int ShareContent(PlatformType platform, ShareContent content)
		{
			reqID ++;
			shareSDKUtils.ShareContent(reqID, platform, content);			
			return reqID;
		}

		/// <summary>
		/// Shares the content.
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		/// <param name='content'>
		/// Content.
		/// </param>
		/// <param name='resultHandler'>
		/// Callback.
		/// </param>
		public int ShareContent(PlatformType[] platforms, ShareContent content)
		{
			reqID ++;
			shareSDKUtils.ShareContent(reqID, platforms, content);			
			return reqID;
		}

		/// <summary>
		/// Shares the content.
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		/// <param name='content'>
		/// Content.
		/// </param>
		/// <param name='resultHandler'>
		/// Callback.
		/// </param>
		public int ShareContentWithActivity(PlatformType platform, ShareContent content)
		{
			reqID++;

#if UNITY_IPHONE
			shareSDKUtils.ShareContentWithActivity(reqID, platform, content);
#endif

			return reqID;
		}

		/// <summary>
		/// Shows the share menu of using onekeyshare.
		/// </summary>
		/// <param name='types'>
		/// Types.
		/// </param>
		/// <param name='content'>
		/// Content.
		/// </param>
		/// <param name='callback'>
		/// Callback.
		/// </param>
		public int ShowPlatformList (PlatformType[] platforms, ShareContent content, int x, int y)
		{
			reqID ++;
			shareSDKUtils.ShowPlatformList(reqID, platforms, content, x, y);			
			return reqID;
		}
		
		/// <summary>
		/// Shows the share view of using onekeyshare.
		/// </summary>
		/// <param name='type'>
		/// Type.
		/// </param>
		/// <param name='content'>
		/// Content.
		/// </param>
		/// <param name='callback'>
		/// Callback.
		/// </param>
		public int ShowShareContentEditor (PlatformType platform, ShareContent content)
		{			
			reqID ++;
			shareSDKUtils.ShowShareContentEditor(reqID, platform, content);		
			return reqID;
		}

		/// <summary>
		/// share according to the name of node<Content> in ShareContent.xml(you can find it in Xcode) [only valid in iOS temporarily][此接口暂时仅支持iOS环境]
		/// </summary>
		/// <param name='platform'>
		/// Platform Type
		/// </param>
		/// <param name='contentName'>
		/// the name of node<Content> in ShareContent.xml file
		/// </param>
		/// <param name='customFields'>
		/// your share customFields which will be replace in ShareContent.xml
		/// </param>
		public int ShareWithContentName (PlatformType platform, string contentName, Hashtable customFields)
		{
			reqID++;
			shareSDKUtils.ShareWithContentName (reqID, platform, contentName, customFields);
			return reqID;
		}

		/// <summary>
		/// share according to the name of node<Content> in ShareContent.xml(you can find it in Xcode)   (only valid in iOS temporarily)(此接口暂时仅支持iOS环境)
		/// </summary>
		/// </param>
		/// <param name='contentName'>
		/// the name of node<Content> in ShareContent.xml file
		/// </param>
		/// <param name='customFields'>
		/// your share customFields which will be replace in ShareContent.xml
		/// </param>
		/// <param name='platforms'>
		/// Platform Types
		/// </param>
		/// <param name='x','y'>
		/// the coordinates of the share menu
		/// </param>
		public int ShowPlatformListWithContentName (string contentName, Hashtable customFields, PlatformType[] platforms, int x, int y)
		{
			reqID++;
			shareSDKUtils.ShowPlatformListWithContentName (reqID, contentName, customFields, platforms, x, y);
			return reqID;
		}

		/// <summary>
		/// share according to the name of node<Content> in ShareContent.xml file  (only valid in iOS temporarily)(此接口暂时仅支持iOS环境)
		/// </summary>
		/// <param name='platform'>
		/// Platform Type
		/// </param>
		/// <param name='contentName'>
		/// the name of node<Content> in ShareContent.xml file
		/// </param>
		/// <param name='customFields'>
		/// your share customFields which will be replace in ShareContent.xml
		/// </param>
		public int ShowShareContentEditorWithContentName (PlatformType platform, string contentName, Hashtable customFields)
		{
			reqID++;
			shareSDKUtils.ShowShareContentEditorWithContentName (reqID, platform, contentName, customFields);
			return reqID;
		}
		/// <summary>
		/// Gets the friends.
		/// </summary>
		/// <param name="type">Type.</param>
		/// <param name="count">Count.</param>
		/// <param name="page">Page.</param>
		public int GetFriendList (PlatformType platform, int count, int page)
		{
			reqID ++;
			shareSDKUtils.GetFriendList (reqID, platform, count, page);			
			return reqID;
		}

		/// <summary>
		/// Follows the friend.
		/// </summary>
		/// <param name="type">Type.</param>
		/// <param name="account">Account.</param>
		public int AddFriend (PlatformType platform, String account)
		{
			reqID ++;
			shareSDKUtils.AddFriend (reqID, platform, account);			
			return reqID;
		}

		/// <summary>
		/// Gets the auth info.
		/// </summary>
		/// <param name="type">Type.</param>
		public Hashtable GetAuthInfo (PlatformType platform)
		{
			return shareSDKUtils.GetAuthInfo (platform);			
		}

		/// <summary>
		/// Close the SSO when authorize.
		/// </summary>
		/// <param name="open">If set to <c>true</c> open.</param>
		public void DisableSSO(Boolean open)
		{
			shareSDKUtils.DisableSSO (open);			
		}

		/// <summary>
		/// Open Wechat miniProgram, 0:正式版; 1:开发版; 2:体验版
		/// </summary>
		public bool openMiniProgram (String userName, String path, int miniProgramType)
		{
			return shareSDKUtils.openMiniProgram (userName,path,miniProgramType);
		}

#if UNITY_ANDROID
		
#elif UNITY_IPHONE

		/// <summary>
		/// shareWithCommand
		/// </summary>
		public void ShareWithCommand(Hashtable customFields)
		{
			shareSDKUtils.shareSDKWithCommand(customFields);
		}

        public void getWXRequestToken()
        {
            shareSDKUtils.getWXRequestToken();
        }

        public void sendWXRequestTokenMehtod(String uid, String token)
        {
            shareSDKUtils.sendWXRequestToken(uid, token);
        }

        public void getWXRefreshToken()
        {
            shareSDKUtils.getWXRefreshToken();
        }

		public void sendWXRefreshTokenMethod(String token)
        {
            shareSDKUtils.sendWXRefreshToken(token);
        }

#endif
		/// <summary>
		/// Event result listener.
		/// </summary>
		public delegate void EventHandler (int reqID, ResponseState state, PlatformType type, Hashtable data);
		

#if UNITY_ANDROID
		
#elif UNITY_IPHONE
        public delegate void GetWXRequestTokenHanlerEvent(String authCode, sendWXRequestToken send);
        public delegate void GetWXRefreshTokenHanlerEvent(String uid, sendWXRefreshToken send);
		public delegate void GetShareCommandHanlerEvent(Hashtable data);
#endif


		//public delegate void OnLoopShareCallBack (Hashtable data);


	}
}