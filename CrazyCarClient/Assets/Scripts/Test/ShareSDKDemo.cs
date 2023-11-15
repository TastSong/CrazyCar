using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using cn.sharesdk.unity3d;
using LitJson;
public class ShareSDKDemo : MonoBehaviour {

	public GUISkin demoSkin;
	public ShareSDK ssdk;
	
	public MobSDK mobsdk;
	
	// Use this for initialization
	void Start ()
	{	
		ssdk = gameObject.GetComponent<ShareSDK>();
		ssdk.authHandler = OnAuthResultHandler;
		ssdk.shareHandler = OnShareResultHandler;
		ssdk.showUserHandler = OnGetUserInfoResultHandler;
		ssdk.getFriendsHandler = OnGetFriendsResultHandler;
		ssdk.followFriendHandler = OnFollowFriendResultHandler;
		mobsdk = gameObject.GetComponent<MobSDK>();
        #if UNITY_ANDROID
		ShareSDKRestoreScene.setRestoreSceneListener(OnRestoreScene);
		
        #elif UNITY_IPHONE
		mobsdk.getPolicy = OnFollowGetPolicy;
        ssdk.wxRequestHandler = GetWXRequestTokenResultHandler;
        ShareSDKRestoreScene.setRestoreSceneListener(OnRestoreScene);
        #endif

    }

	// Update is called once per frame
	void Update () 
	{
		if (Input.GetKeyDown(KeyCode.Escape)) {
			Application.Quit();
		}
	}
	
	void OnGUI ()
	{

		GUI.skin = demoSkin;
		
		float scale = 1.0f;

		if (Application.platform == RuntimePlatform.IPhonePlayer)
		{
			scale = Screen.width / 320;
		}
		
		//float btnWidth = 165 * scale;
		float btnWidth= Screen.width / 5 * 2;
        float btnWidth2 = btnWidth + 80 * scale;

        float btnHeight = Screen.height / 25;
		float btnTop = 30 * scale;
		float btnGap = 20 * scale;
		GUI.skin.button.fontSize = Convert.ToInt32(13 * scale);

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "Authorize"))
		{
			print(ssdk == null);

#if UNITY_ANDROID
		    ssdk.Authorize(PlatformType.SinaWeibo);
#elif UNITY_IPHONE
            ssdk.Authorize(PlatformType.Line);
#endif
		}

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "Get User Info"))
		{
            //ssdk.GetUserInfo(PlatformType.Douyin);

            //print("share result :" + ssdk.GetUserInfo(PlatformType.WeChat));
			print("share result :" + ssdk.Authorize(PlatformType.WeChat));
			
			
			//print("share result : " + ssdk.GetUserInfo(PlatformType.GooglePlus));
        }

		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "Show Share Menu"))
		{
            	ShareContent content = new ShareContent();

            //	//(Android only) 隐藏九宫格里面不需要用到的平台（仅仅是不显示平台）
            //	//(Android only) 也可以把jar包删除或者把Enabl属性e改成false（对应平台的全部功能将用不了）
                String[] platfsList = {((int)PlatformType.Facebook).ToString(), ((int)PlatformType.TencentWeibo).ToString()};
            	content.SetHidePlatforms (platfsList);

            	content.SetText("this is a test string.");
            	//content.SetImageUrl("http://pic28.photophoto.cn/20130818/0020033143720852_b.jpg");
				content.SetImageUrl("https://cdn.pixabay.com/photo/2019/08/08/11/33/stingray-4392776_960_720.jpg");
            	content.SetTitle("test title");

            //(Android only) 针对Android绕过审核的多图分享，传图片String数组 
            //String[] imageArray =  {"/sdcard/test.jpg", "http://f1.webshare.mob.com/dimgs/1c950a7b02087bf41bc56f07f7d3572c11dfcf36.jpg", "/sdcard/test.jpg"};
            //content.SetImageArray (imageArray);

            //content.SetTitleUrl("https://www.baidu.com/");
            //content.SetSite("Test site params test test");
            //content.SetSiteUrl("https://www.baidu.com/");
            //content.SetUrl("https://www.baidu.com/");
            //content.SetComment("test description");
            //content.SetMusicUrl("http://i.y.qq.com/v8/playsong.html?hostuin=0&songid=&songmid=002x5Jje3eUkXT&_wv=1&source=qq&appshare=iphone&media_mid=002x5Jje3eUkXT");

            content.SetShareType(ContentType.Image);

			//不同平台分享不同内容
			//ShareContent customizeShareParams = new ShareContent();
			//customizeShareParams.SetText("Sina share content");
			//customizeShareParams.SetImageUrl("http://git.oschina.net/alexyu.yxj/MyTmpFiles/raw/master/kmk_pic_fld/small/107.JPG");
			//customizeShareParams.SetShareType(ContentType.Text);
			//customizeShareParams.SetObjectID("SinaID");
			//content.SetShareContentCustomize(PlatformType.SinaWeibo, customizeShareParams);

			//KakaoTalk原生只支持分享链接
			ShareContent kakaoTalkCustomizeShareParams = new ShareContent();
			kakaoTalkCustomizeShareParams.SetUrl("http://www.mob.com");
			kakaoTalkCustomizeShareParams.SetShareType(ContentType.Webpage);
			kakaoTalkCustomizeShareParams.SetTemplateId("11820");
			content.SetShareContentCustomize(PlatformType.KakaoTalk, kakaoTalkCustomizeShareParams);

			//KakaoStory分享图片
			ShareContent kakaoStoryCustomizeShareParams = new ShareContent();
			kakaoStoryCustomizeShareParams.SetText("");
			kakaoStoryCustomizeShareParams.SetTitle("http://www.mob.com");
			kakaoStoryCustomizeShareParams.SetImageUrl("http://ww3.sinaimg.cn/mw690/be159dedgw1evgxdt9h3fj218g0xctod.jpg");
			kakaoStoryCustomizeShareParams.SetUrl("");
			kakaoStoryCustomizeShareParams.SetPermission("0");
			kakaoStoryCustomizeShareParams.SetEnableShare(true);

			Hashtable androidExecParams = new Hashtable();
			androidExecParams["andParam1"] = "value1";
			androidExecParams["andParam2"] = "value2";
			kakaoStoryCustomizeShareParams.SetAndroidExecParam(androidExecParams);

			Hashtable iOSExecParams = new Hashtable();
			iOSExecParams["iosParam1"] = "value1";
			iOSExecParams["iosParam2"] = "value2";
			kakaoStoryCustomizeShareParams.SetIphoneExecParam(iOSExecParams);

			kakaoStoryCustomizeShareParams.SetShareType(ContentType.Image);
			content.SetShareContentCustomize(PlatformType.KakaoStory, kakaoStoryCustomizeShareParams);

			//TikTok分享多图
			String[] imageArray = { "http://ww3.sinaimg.cn/mw690/be159dedgw1evgxdt9h3fj218g0xctod.jpg", "http://ww3.sinaimg.cn/mw690/be159dedgw1evgxdt9h3fj218g0xctod.jpg" };
			ShareContent tiktokCustomizeShareParams = new ShareContent();
			tiktokCustomizeShareParams.SetImageArray(imageArray);
			tiktokCustomizeShareParams.SetShareType(ContentType.Image);
			content.SetShareContentCustomize(PlatformType.TikTok, tiktokCustomizeShareParams);

			// //SnapChat分享图片
			// ShareContent snapChatShareParams = new ShareContent();
			// snapChatShareParams.SetTitle("https://www.mobtech.com");
			// snapChatShareParams.SetSnapAttachmentUrl("http://m.93lj.com/sharelink");
			// snapChatShareParams.SetImageUrl("http://git.oschina.net/alexyu.yxj/MyTmpFiles/raw/master/kmk_pic_fld/small/107.JPG");
			// snapChatShareParams.setSnapStickerImage("http://pic28.photophoto.cn/20130818/0020033143720852_b.jpg");
			// snapChatShareParams.setSnapStickerAnimated(0);
			// snapChatShareParams.setSnapStickerRotation(0);
			// snapChatShareParams.SetShareType(ContentType.Image);
			// content.SetShareContentCustomize(PlatformType.SnapChat, snapChatShareParams);
   //
   //          //快手SDK-分享私信
   //          ShareContent ksShareParams = new ShareContent();
   //          ksShareParams.SetTitle("title");
   //          ksShareParams.SetDesc("desc");
   //          ksShareParams.SetLinkURL("https://www.mob.com");
   //          ksShareParams.SetThumbImageUrl("http://download.sdk.mob.com/web/images/2019/07/30/14/1564468183056/750_750_65.12.png");
   //          ksShareParams.SetExtraInfo("message");
   //          ksShareParams.SetShareType(ContentType.Message);
   //          content.SetShareContentCustomize(PlatformType.KuaiShou, ksShareParams);


            //优先客户端分享
            content.SetEnableClientShare(true);
                
                //使用微博API接口应用内分享 iOS only
                //content.SetEnableSinaWeiboAPIShare(true);

                //通过分享菜单分享
                ssdk.ShowPlatformList (null, content, 100, 100);

		}
			
		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "Show Share View"))
		{
			ShareContent content = new ShareContent();
			content.SetText("this is a test string.");
			content.SetImageUrl("http://ww3.sinaimg.cn/mw690/be159dedgw1evgxdt9h3fj218g0xctod.jpg");
			content.SetTitle("test title");
			content.SetTitleUrl("http://www.mob.com");
			content.SetSite("Mob-ShareSDK");
			content.SetSiteUrl("http://www.mob.com");
			content.SetUrl("http://www.mob.com");
			content.SetComment("test description");
			content.SetMusicUrl("http://mp3.mwap8.com/destdir/Music/2009/20090601/ZuiXuanMinZuFeng20090601119.mp3");
			content.SetShareType(ContentType.Image);

			ssdk.ShowShareContentEditor (PlatformType.SinaWeibo, content);
		}

		btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "Share Content"))
		{
            ShareContent content = new ShareContent();
            content.SetTitle("Test title");
            content.SetText("Test text");
            content.SetImagePath("/storage/emulated/0/Pictures/Instagram/IMG_20201130_161102_590.jpg");
            content.SetShareType(ContentType.Image);
            ssdk.ShareContent(PlatformType.Douyin, content);

            /*iOS Only*/

            ////※单个平台的分享示例如下※：

            ////调用公用参数构造方法的，通过如下方式，如TikTok分享多图
            //String[] imageArray = { "http://ww3.sinaimg.cn/mw690/be159dedgw1evgxdt9h3fj218g0xctod.jpg", "http://ww3.sinaimg.cn/mw690/be159dedgw1evgxdt9h3fj218g0xctod.jpg" };
            //content.SetImageArray(imageArray);
            //content.SetShareType(ContentType.Image);
            //ssdk.ShareContent(PlatformType.TikTok, content);


            ////调用自定义的参数构造方法的，需要通过如下方式，如：KakaoTalk
            //ShareContent customizeShareParams = new ShareContent();
            //customizeShareParams.SetUrl("http://www.mob.com");
            //customizeShareParams.SetShareType(ContentType.Webpage);
            //customizeShareParams.SetTemplateId("11820");
            //content.SetShareContentCustomize(PlatformType.KakaoTalk, customizeShareParams);
            //ssdk.ShareContent(PlatformType.KakaoTalk, content);

            ////快手SDK-分享私信
            //ShareContent ksShareParams = new ShareContent();
            //ksShareParams.SetTitle("title");
            //ksShareParams.SetDesc("desc");
            //ksShareParams.SetLinkURL("https://www.mob.com");
            //ksShareParams.SetThumbImageUrl("http://download.sdk.mob.com/web/images/2019/07/30/14/1564468183056/750_750_65.12.png");
            //ksShareParams.SetExtraInfo("message");
            //ksShareParams.SetShareType(ContentType.Message);
            //content.SetShareContentCustomize(PlatformType.KuaiShou, ksShareParams);
            //ssdk.ShareContent(PlatformType.KuaiShou, content);



            // ShareContent content = new ShareContent();
            // content.SetText("Test text");
            // content.SetImageUrl("http://pic28.photophoto.cn/20130818/0020033143720852_b.jpg");
            // ssdk.ShareContent (PlatformType.Twitter, content);

        }

		//if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "Get Friends SinaWeibo "))
		//{
		//获取新浪微博好友，第一页，每页15条数据
		//print ("Click Btn Of Get Friends SinaWeibo");
		//			ssdk.GetFriendList (PlatformType.SinaWeibo, 15, 0);
		//ssdk.openMiniProgram("gh_afb25ac019c9","pages/index/index",0);
		//}

		btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "Get Token "))
		{
			Hashtable authInfo = ssdk.GetAuthInfo (PlatformType.QQ);			
			print ("share result :");
			print (MiniJSON.jsonEncode(authInfo));
		}
			
		//if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap , btnTop, btnWidth, btnHeight), "Close SSO Auth"))
		//{
			//ssdk.DisableSSO (true);			
		//}

		btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "Remove Authorize "))
		{
			ssdk.CancelAuthorize (PlatformType.QQ);			
		}

        //if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "Add Friend "))
        //{
        //关注新浪微博
        //ssdk.AddFriend (PlatformType.SinaWeibo, "3189087725");			
        //}

        btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2 , btnTop, btnWidth2, btnHeight), "ShareWithContentName(IOS only)"))
		{
			Hashtable customFields = new Hashtable ();
			customFields["imgUrl"] = "http://ww1.sinaimg.cn/mw690/006dJESWgw1f6iyb8bzraj31kw0v67a2.jpg";
			//根据配置文件分享【本接口功能仅暂时支持iOS】
			ssdk.ShareWithContentName(PlatformType.SinaWeibo, "ShareSDK", customFields);		
		}

		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "ShowShareMenuWithContentName(IOS only)"))
		{
			Hashtable customFields = new Hashtable ();
			customFields["imgUrl"] = "http://ww1.sinaimg.cn/mw690/006dJESWgw1f6iyb8bzraj31kw0v67a2.jpg";
			//根据配置文件展示分享菜单分享【本接口功能仅暂时支持iOS】
			ssdk.ShowPlatformListWithContentName ("ShareSDK", customFields, null, 100, 100);
		}

		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "ShowShareViewWithContentName(IOS only)"))
		{
			Hashtable customFields = new Hashtable ();
			//根据配置文件展示编辑界面分享【本接口功能仅暂时支持iOS】
			customFields["imgUrl"] = "http://ww1.sinaimg.cn/mw690/006dJESWgw1f6iyb8bzraj31kw0v67a2.jpg";
			ssdk.ShowShareContentEditorWithContentName(PlatformType.SinaWeibo, "ShareSDK", customFields);		
		}

		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "SMS Authorize"))
		{
			ssdk.Authorize(PlatformType.SMS);		
		}

		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "submitPolicyGrantResult"))
		{
			
			Debug.Log("ssdk ======> " + ssdk);
			Debug.Log("mobsdk ======> " + mobsdk);
			
			mobsdk.submitPolicyGrantResult(true);
			Debug.Log("mobsdk submitPolicyGrantResult======> " + mobsdk.submitPolicyGrantResult(true).ToString());
		}

		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "getPrivacyPolicy"))
		{
			
			Debug.Log("ssdk ======> " + ssdk);
			Debug.Log("mobsdk ======> " + mobsdk);
			#if UNITY_IPHONE
            mobsdk.getPrivacyPolicy(true,mobsdk.getDeviceCurrentLanguage());
#elif UNITY_ANDROID
			mobsdk.getPrivacyPolicy(true, "en");
			Debug.Log("mobsdk getPrivacyPolicy======> " + mobsdk.getPrivacyPolicy(true, "en"));
#endif
		}

        
		btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "Share wxMiniProgram"))
		{
#if UNITY_IPHONE
            ShareContent content = new ShareContent ();
			content.SetTitle ("MiniProgram");
			content.SetText ("test MiniProgram");
			content.SetUrl("http://www.mob.com");
			content.SetMiniProgramPath ("pages/index/index");
			content.SetThumbImageUrl ("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1527484508213&di=d993c2ca41fec50717d137718511120f&imgtype=0&src=http%3A%2F%2Fimg5.2345.com%2Fduoteimg%2FzixunImg%2Flocal%2F2017%2F05%2F03%2F14938009295612.jpg");
			content.SetMiniProgramHdThumbImage ("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1522154322305&di=7f4bf3d0803fe8c2c66c140f0a6ea0b4&imgtype=0&src=http%3A%2F%2Fa4.topitme.com%2Fo%2F201007%2F29%2F12803876734174.jpg");
			content.SetMiniProgramUserName ("gh_afb25ac019c9");
			content.SetMiniProgramWithShareTicket (true);
            // iOS/Android 微信小程序的版本（0-正式，1-开发，2-体验）
            content.SetMiniProgramType (0);
			//content.SetShareType (ContentType.MiniProgram);

			ShareContent shareContent = new ShareContent ();
			shareContent.SetShareContentCustomize (PlatformType.WeChat, content);
			ssdk.ShareContent (PlatformType.WeChat, shareContent);
#elif UNITY_ANDROID
            ShareContent content = new ShareContent ();
            content.SetTitle ("MiniProgram");
            content.SetText ("test MiniProgram");
            content.SetUrl("http://www.mob.com");
            content.SetMiniProgramType (0);
            content.SetMiniProgramUserName ("gh_52568203455c");
            content.SetImageUrl("http://pic28.photophoto.cn/20130818/0020033143720852_b.jpg");
            content.SetShareType (ContentType.MiniProgram);
            
            ShareContent shareContent = new ShareContent ();
			shareContent.SetShareContentCustomize (PlatformType.WeChat, content);
			ssdk.ShareContent (PlatformType.WeChat, shareContent);
#endif
        }



        //
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "Share qqMiniProgram(IOS only)"))
        {
#if UNITY_IPHONE
            ShareContent content = new ShareContent();
            content.SetTitle("MiniProgram");
            content.SetText("test MiniProgram");
            content.SetUrl("http://www.mob.com");
            content.SetThumbImageUrl("http://download.sdk.mob.com/web/images/2019/07/30/14/1564468183056/750_750_65.12.png");
            content.SetMiniProgramPath("pages/index/index");
            content.SetMiniProgramHdThumbImage("http://download.sdk.mob.com/web/images/2019/07/30/14/1564468183056/750_750_65.12.png");
            content.SetMiniProgramAppID("1108318575");
            content.SetMiniProgramWebpageUrl("www.qq.com");
            //iOS/Android QQ小程序的类型，默认正式版(3)，可选测试版(1)、预览版(4)
            content.SetMiniProgramType(3);
            content.SetShareType(ContentType.MiniProgram);

            ShareContent shareContent = new ShareContent();
            shareContent.SetShareContentCustomize(PlatformType.QQ, content);
            ssdk.ShareContent(PlatformType.QQ, shareContent);

#elif UNITY_ANDROID
            //===============================================================
            //when you test QQ miniprogram, you should use this params
            //At the same time, the package name and signature should 
            //correspond to the package name signature of the specific 
            //QQ sharing small program applied in the background of tencent
            //===============================================================
            //ShareContent content = new ShareContent();
            //content.SetTitle("MiniProgram");
            //content.SetText("test MiniProgram");
            //content.SetTitleUrl("http://www.mob.com");
            //content.SetImageUrl("http://www.3wyu.com/wp-content/uploads/6e0eaf15gy1fvr5tnm2dfj20f108gtad.jpg");//必须为网络图片
            //content.SetShareType(ContentType.QQ_MINI_PROGRAM);
            //content.SetMiniProgramAppID("1108318575");
            //content.SetMiniProgramPath("page/share/index.html?share_name=QQ%E9%9F%B3%E4%B9%90&share_key=5aIqFGg&from=disk");
            //content.SetQQMiniProgramType("");

            //ShareContent shareContent = new ShareContent();
            //shareContent.SetShareContentCustomize(PlatformType.QQ, content);
            //ssdk.ShareContent(PlatformType.QQ, shareContent);
#endif
        }

        //btnTop += btnHeight + 20 * scale;
        //if (GUI.Button(new Rect((Screen.width - btnWidth2) / 2, btnTop, btnWidth2, btnHeight), "Share Sina LinkCard"))
        //{
        //#if UNITY_IPHONE
        //ShareContent content = new ShareContent();
        //content.SetText("sina LinkCard");
        //content.SetUrl("http://www.mob.com");
        //content.SetImageUrl("http://www.mob.com/assets/images/ShareSDK_pic_1-09d293a6.png");//必须为网络图片
        //content.SetSinaLinkCard(true);
        //content.SetSinaCardTitle("这是Title");
        //content.SetSinaCardSummary("这是Summary");
        //content.SetShareType(ContentType.Webpage);

        //ShareContent shareContent = new ShareContent();
        //shareContent.SetShareContentCustomize(PlatformType.SinaWeibo, content);
        //ssdk.ShareContent(PlatformType.SinaWeibo, shareContent);


        //#elif UNITY_ANDROID
        //JsonData jsonData = new JsonData();
        //jsonData["url"] = "http://wx4.sinaimg.cn/large/006WfoFPly1fq0jo9svnaj30dw0dwdhv.jpg";
        //jsonData["width"] = "120";
        //jsonData["height"] = "120";


        //ShareContent content = new ShareContent();
        //content.SetText("sina LinkCard");
        //content.SetSinaCardCreateAtAndroid("2019-01-24");
        //content.SetSinaCardDisplayNameAndroid("displayName");
        //content.SetSinaCardSummary("Summary");
        //content.SetSinaCardURLAndroid("http://www.mob.com/");
        //content.SetSinaCardTypeAndroid("webpage");
        //content.SetSinaCardImageAndroid(jsonData);
        //content.SetEnableClientShare(true);

        //ShareContent shareContent = new ShareContent();
        //shareContent.SetShareContentCustomize(PlatformType.SinaWeibo, content);

        //ssdk.ShareContent(PlatformType.SinaWeibo, shareContent);
        //#endif
        //}
    }
	
	void OnAuthResultHandler(int reqID, ResponseState state, PlatformType type, Hashtable result)
	{
		if (state == ResponseState.Success)
		{
			if (result != null && result.Count > 0) {
				print ("authorize success !" + "Platform :" + type + "result:" + MiniJSON.jsonEncode(result));
			} else {
				print ("authorize success !" + "Platform :" + type);
			}
		}
		else if (state == ResponseState.Fail)
		{
#if UNITY_ANDROID
			print ("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
#elif UNITY_IPHONE
			print ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
#endif
		}
		else if (state == ResponseState.Cancel) 
		{
			print ("cancel !");
		}
	}
	
	void OnGetUserInfoResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result)
	{
		if (state == ResponseState.Success)
		{
			print ("get user info result :");
			print (MiniJSON.jsonEncode(result));
            print ("AuthInfo:" + MiniJSON.jsonEncode (ssdk.GetAuthInfo (type)));
			print ("Get userInfo success !Platform :" + type );
		}
		else if (state == ResponseState.Fail)
		{
#if UNITY_ANDROID
			print ("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
#elif UNITY_IPHONE
			print ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
#endif
		}
		else if (state == ResponseState.Cancel) 
		{
			print ("cancel !");
		}
	}
	
	void OnShareResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result)
	{
		if (state == ResponseState.Success)
		{
			print ("share successfully - share result :");
			print (MiniJSON.jsonEncode(result));
		}
		else if (state == ResponseState.Fail)
		{
#if UNITY_ANDROID
			print ("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
#elif UNITY_IPHONE
			print ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
#endif
		}
		else if (state == ResponseState.Cancel) 
		{
			print ("cancel !");
		}
	}

	void OnGetFriendsResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result)
	{
		if (state == ResponseState.Success)
		{			
			print ("get friend list result :");
			print (MiniJSON.jsonEncode(result));
		}
		else if (state == ResponseState.Fail)
		{
#if UNITY_ANDROID
			print ("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
#elif UNITY_IPHONE
			print ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
#endif
		}
		else if (state == ResponseState.Cancel) 
		{
			print ("cancel !");
		}
	}

	void OnFollowFriendResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result)
	{
		if (state == ResponseState.Success)
		{
			print ("Follow friend successfully !");
		}
		else if (state == ResponseState.Fail)
		{
#if UNITY_ANDROID
			print ("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
#elif UNITY_IPHONE
			print ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
#endif
		}
		else if (state == ResponseState.Cancel) 
		{
			print ("cancel !");
		}
	}

    public static void OnRestoreScene(RestoreSceneInfo scene)
    {
        Hashtable customParams = scene.customParams; 
        if (customParams != null)
        {
            Debug.Log("[sharesdk-unity-Demo]OnRestoreScen(). path:" + scene.path.ToString() + ", params:" + scene.customParams.toJson());
        }
        else
        {
            Debug.Log("[sharesdk-unity-Demo]OnRestoreScen(). path:" + scene.path.ToString() + ", params:null");
        }

        //根据scene开发者自己处理场景转换
        //SceneManager.LoadScene("SceneA");
    }


#if UNITY_IPHONE

    public static void GetWXRequestTokenResultHandler(String authcode, sendWXRequestToken send)
    {
        Debug.Log("[GetWXRequestTokenResultHandler:" + authcode);
        send("11", "22");
    }

    public static void GetWXRefreshTokenResultHandler(String uid, sendWXRefreshToken send)
    {
        send("11");
    }
#endif
    //隐私协议回调
	public static void OnFollowGetPolicy(string url)
	{
		Debug.Log("[OnFollowGetPolicy:" + url);
	}
}
