//
//  SSDKTypeDefine.h
//  ShareSDK
//
//  Created by 冯 鸿杰 on 15/2/6.
//  Copyright (c) 2015年 掌淘科技. All rights reserved.
//

#ifndef ShareSDK_SSDKTypeDefine_h
#define ShareSDK_SSDKTypeDefine_h

@class SSDKContentEntity;
@class SSDKUser;

/**
 *  平台类型
 */
typedef NS_ENUM(NSUInteger, SSDKPlatformType){
    /**
     *  未知
     */
    SSDKPlatformTypeUnknown             = 0,
    /**
     *  新浪微博
     */
    SSDKPlatformTypeSinaWeibo           = 1,
    /**
     *  QQ空间
     */
    SSDKPlatformSubTypeQZone            = 6,
    /**
     *  开心网
     */
    SSDKPlatformTypeKaixin              = 8,
    /**
     *  Facebook
     */
    SSDKPlatformTypeFacebook            = 10,
    /**
     *  Twitter
     */
    SSDKPlatformTypeTwitter             = 11,
    /**
     *  印象笔记
     */
    SSDKPlatformTypeYinXiang            = 12,
    /**
     *  Google+
     */
    SSDKPlatformTypeGooglePlus          = 14,
    /**
     *  Instagram
     */
    SSDKPlatformTypeInstagram           = 15,
    /**
     *  LinkedIn
     */
    SSDKPlatformTypeLinkedIn            = 16,
    /**
     *  Tumblr
     */
    SSDKPlatformTypeTumblr              = 17,
    /**
     *  邮件
     */
    SSDKPlatformTypeMail                = 18,
    /**
     *  短信
     */
    SSDKPlatformTypeSMS                 = 19,
    /**
     *  打印
     */
    SSDKPlatformTypePrint               = 20,
    /**
     *  拷贝
     */
    SSDKPlatformTypeCopy                = 21,
    /**
     *  微信好友
     */
    SSDKPlatformSubTypeWechatSession    = 22,
    /**
     *  微信朋友圈
     */
    SSDKPlatformSubTypeWechatTimeline   = 23,
    /**
     *  QQ好友
     */
    SSDKPlatformSubTypeQQFriend         = 24,
    /**
     *  Instapaper
     */
    SSDKPlatformTypeInstapaper          = 25,
    /**
     *  Pocket
     */
    SSDKPlatformTypePocket              = 26,
    /**
     *  有道云笔记
     */
    SSDKPlatformTypeYouDaoNote          = 27,
    /**
     *  Pinterest
     */
    SSDKPlatformTypePinterest           = 30,
    /**
     *  Flickr
     */
    SSDKPlatformTypeFlickr              = 34,
    /**
     *  Dropbox
     */
    SSDKPlatformTypeDropbox             = 35,
    /**
     *  VKontakte
     */
    SSDKPlatformTypeVKontakte           = 36,
    /**
     *  微信收藏
     */
    SSDKPlatformSubTypeWechatFav        = 37,
    /**
     *  易信好友
     */
    SSDKPlatformSubTypeYiXinSession     = 38,
    /**
     *  易信朋友圈
     */
    SSDKPlatformSubTypeYiXinTimeline    = 39,
    /**
     *  易信收藏
     */
    SSDKPlatformSubTypeYiXinFav         = 40,
    /**
     *  明道
     */
    SSDKPlatformTypeMingDao             = 41,
    /**
     *  Line
     */
    SSDKPlatformTypeLine                = 42,
    /**
     *  WhatsApp
     */
    SSDKPlatformTypeWhatsApp            = 43,
    /**
     *  KaKao Talk
     */
    SSDKPlatformSubTypeKakaoTalk        = 44,
    /**
     *  KaKao Story
     */
    SSDKPlatformSubTypeKakaoStory       = 45,
    /**
     *  Facebook Messenger
     */
    SSDKPlatformTypeFacebookMessenger   = 46,
    /**
     *  Telegram
     */
    SSDKPlatformTypeTelegram            = 47,
    /**
     *  支付宝好友
     */
    SSDKPlatformTypeAliSocial           = 50,
    /**
     *  支付宝朋友圈
     */
    SSDKPlatformTypeAliSocialTimeline   = 51,
    /**
     *  钉钉
     */
    SSDKPlatformTypeDingTalk            = 52,
    /**
     *  youtube
     */
    SSDKPlatformTypeYouTube             = 53,
    /**
     * Reddit
     */
    SSDKPlatformTypeReddit              = 56,
    /**
     * Facebook账户系统
     */
    SSDKPlatformTypeFacebookAccount     = 58,
    /**
     * 抖音
     */
    SSDKPlatformTypeDouyin              = 59,
    /**
     * 抖音
     */
    SSDKPlatformTypeTikTokChina         = SSDKPlatformTypeDouyin,
    /**
     * 企业微信
     */
    SSDKPlatformTypeWework              = 60,
    /**
     * Apple
     */
    SSDKPlatformTypeAppleAccount        = 61,
   
    /**
     * TikTok
     */
    SSDKPlatformTypeTikTok              = 70,
    /**
     * 绿洲
     */
    SSDKPlatformTypeOasis               = 64,
    /**
     * SnapChat
     */
    SSDKPlatformTypeSnapChat              = 66,
    
    /**
     * 快手
     */
    SSDKPlatformTypeKuaiShou              = 68,
    /**
     * 西瓜视频
     */
    SSDKPlatformTypeWatermelonVideo       = 69,
    /**
     *  易信
     */
    SSDKPlatformTypeYiXin               = 994,
    /**
     *  KaKao
     */
    SSDKPlatformTypeKakao               = 995,
    /**
     *  印象笔记国际版
     */
    SSDKPlatformTypeEvernote            = 996,
    /**
     *  微信平台,
     */
    SSDKPlatformTypeWechat              = 997,
    /**
     *  QQ平台
     */
    SSDKPlatformTypeQQ                  = 998,
    /**
     *  任意平台
     */
    SSDKPlatformTypeAny                 = 999
};

/**
 *  印象笔记服务器类型
 */
typedef NS_ENUM(NSUInteger, SSDKEvernoteHostType){
    /**
     *  沙箱
     */
    SSDKEvernoteHostTypeSandbox         = 0,
    /**
     *  印象笔记
     */
    SSDKEvernoteHostTypeCN              = 1,
    /**
     *  Evernote International
     */
    SSDKEvernoteHostTypeUS              = 2,
};

/**
 *  回调状态
 */
typedef NS_ENUM(NSUInteger, SSDKResponseState){
    
    /**
     *  开始
     */
    SSDKResponseStateBegin      = 0,
    
    /**
     *  成功
     */
    SSDKResponseStateSuccess    = 1,
    
    /**
     *  失败
     */
    SSDKResponseStateFail       = 2,
    
    /**
     *  ShareSDK取消
     */
    SSDKResponseStateCancel     = 3,
    
    
    //视频文件上传
    SSDKResponseStateUpload     = 4,
    
    /**
     *  平台取消
     */
    SSDKResponseStatePlatformCancel     = 5,
};

/**
 *  内容类型
 */
typedef NS_ENUM(NSUInteger, SSDKContentType){
    
    /**
     *  自动适配类型，视传入的参数来决定
     */
    SSDKContentTypeAuto         = 0,
    
    /**
     *  文本
     */
    SSDKContentTypeText         = 1,
    
    /**
     *  图片
     */
    SSDKContentTypeImage        = 2,
    
    /**
     *  网页
     */
    SSDKContentTypeWebPage      = 3,
    
    /**
     *  应用
     */
    SSDKContentTypeApp          = 4,
    
    /**
     *  音频
     */
    SSDKContentTypeAudio        = 5,
    
    /**
     *  视频
     */
    SSDKContentTypeVideo        = 6,
    
    /**
     *  文件类型(暂时仅微信可用)
     */
    SSDKContentTypeFile         = 7,
    
    //图片类型 仅FacebookMessage 分享图片并需要明确结果时 注此类型分享后不会显示应用名称与icon
    //v3.6.2 增加
    SSDKContentTypeFBMessageImages = 8,
    
    //图片类型 仅FacebookMessage 分享视频并需要明确结果时 注此类型分享后不会显示应用名称与icon
    //所分享的视频地址必须为相册地址
    //v3.6.2 增加
    SSDKContentTypeFBMessageVideo = 9,
    
    //3.6.3 小程序分享(暂时仅微信 QQ可用)
    SSDKContentTypeMiniProgram  = 10,
    
    //快手-分享到私信
    SSDKContentTypeMessage  = 11
};

/**
 授权方式

 - SSDKAuthorizeTypeSSO: SSO授权
 - SSDKAuthorizeTypeWeb: 网页授权
 - SSDKAuthorizeTypeBoth: SSO＋网页授权
 */
typedef NS_ENUM(NSUInteger, SSDKAuthorizeType) {
    SSDKAuthorizeTypeSSO,
    SSDKAuthorizeTypeWeb,
    SSDKAuthorizeTypeBoth,
};

/**
 分享行为事件统计

 - SSDKShareEventTypeOpenMenu: 打开分享菜单
 - SSDKShareEventTypeCloseMenu: 关闭分享菜单
 - SSDKShareEventTypeOpenEditor: 打开内容编辑视图
 - SSDKShareEventTypeFailed: 分享失败
 - SSDKShareEventTypeCancel: 分享取消
 */
typedef NS_ENUM(NSUInteger, SSDKShareEventType) {
    SSDKShareEventTypeOpenMenu,
    SSDKShareEventTypeCloseMenu,
    SSDKShareEventTypeOpenEditor,
    SSDKShareEventTypeFailed,
    SSDKShareEventTypeCancel
};

/**
 文件上传状态

 - SSDKUploadStateBegin: 开始上传
 - SSDKUploadStateUploading: 上传中
 - SSDKUploadStateFinish: 结束上传
 */
typedef NS_ENUM(NSUInteger, SSDKUploadState) {
    SSDKUploadStateBegin = 1,
    SSDKUploadStateUploading,
    SSDKUploadStateFinish,
};

/**
 YouTube 视频的隐私状态
 */
typedef NS_ENUM(NSUInteger, SSDKPrivacyStatus){
    
    /**
     *  私有（只有自己可以观看）
     */
    SSDKPrivacyStatusPublic = 0,
    /**
     *  公开（任何人都可以搜索和观看）
     */
    SSDKPrivacyStatusPrivate = 1,
    
    /**
     *  不公开（知道链接的人可以观看）
     */
    SSDKPrivacyStatusUnlisted = 2

};

typedef NS_ENUM(NSUInteger, SSDKFacebookShareType){
    /**
     * 进入facebook分享
     */
    SSDKFacebookShareTypeNative = 1,
    /**
      在app内分享
     */
    SSDKFacebookShareTypeShareSheet,
    /**
       Safari分享
    */
    SSDKFacebookShareTypeBrowser,
    /**
       WKWebView分享
    */
    SSDKFacebookShareTypeWeb,
    /**
       Safari提示对话框
    */
    SSDKFacebookShareTypeFeedBrowser,
    /**
        WKWebView提示对话框
    */
    SSDKFacebookShareTypeFeedWeb
};
/**
 *  授权状态变化回调处理器
 *
 *  @param state      状态
 *  @param user       授权用户信息，当且仅当state为SSDKResponseStateSuccess时返回
 *  @param error      错误信息，当且仅当state为SSDKResponseStateFail时返回
 */
typedef void(^SSDKAuthorizeStateChangedHandler) (SSDKResponseState state, SSDKUser *user, NSError *error);

/**
 *  获取用户状态变更回调处理器
 *
 *  @param state 状态
 *  @param user  用户信息，当且仅当state为SSDKResponseStateSuccess时返回
 *  @param error 错误信息，当且仅当state为SSDKResponseStateFail时返回
 */
typedef void(^SSDKGetUserStateChangedHandler) (SSDKResponseState state, SSDKUser *user, NSError *error);


/**
 *  分享内容状态变更回调处理器
 *
 *  @param state            状态
 *  @param userData         附加数据, 返回状态以外的一些数据描述，如：邮件分享取消时，标识是否保存草稿等
 *
 *  @param contentEntity    分享内容实体,当且仅当state为SSDKResponseStateSuccess时返回
 *  @param error            错误信息,当且仅当state为SSDKResponseStateFail时返回
 */
typedef void(^SSDKShareStateChangedHandler) (SSDKResponseState state, NSDictionary *userData, SSDKContentEntity *contentEntity,  NSError *error);

/**
 * 当前分享处理的
 * application:continueUserActivity:restorationHandler:或application:openURL:sourceApplication:annotation:或者application:handleOpenURL中的数据
 * 类型为NSURL或NSUserActivity或字符串
 * 当分享状态为取消时，此值为空，表明是用户自己返回app，如果此值不为空，表明是用户点取消返回app
 */
extern NSString * SSDKShareUserDataHandleOpenObjectKey;

#endif
