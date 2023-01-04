//
//  SSDKRegister.h
//  ShareSDK
//
//  Created With Max on 2018/5/7.
//  Copyright © 2018年 掌淘科技. All rights reserved.
//

#import <MOBFoundation/MOBFDataModel.h>
#import <ShareSDK/SSDKTypeDefine.h>

@interface SSDKRegister : NSObject

@property (strong, nonatomic, readonly) NSMutableDictionary *platformsInfo;

/**
 设置新浪微博应用信息
 
 @param appkey 应用标识
 @param appSecret 应用密钥
 @param redirectUrl 回调地址
 @param universalLink ul地址
 */
- (void)setupSinaWeiboWithAppkey:(NSString *)appkey
                       appSecret:(NSString *)appSecret
                     redirectUrl:(NSString *)redirectUrl
                   universalLink:(NSString *)universalLink;

/**
 设置微信(微信好友，微信朋友圈、微信收藏)应用信息
 
 @param appId 应用标识
 @param appSecret 应用密钥
 @param universalLink 应用深度连接
 */
- (void)setupWeChatWithAppId:(NSString *)appId
                   appSecret:(NSString *)appSecret
               universalLink:(NSString *)universalLink;

/**
 设置QQ分享平台（QQ空间，QQ好友分享）应用信息
 
 @param appId 应用id
 @param appkey 应用Key
 @param enableUniversalLink 只支持universallink， 手Q版本>=8.1.3,  可选
 @param universalLink universallink链接 ，手Q版本 >=8.1.8， 可选
 
 */
- (void)setupQQWithAppId:(NSString *)appId
                  appkey:(NSString *)appkey
     enableUniversalLink:(BOOL)enableUniversalLink
           universalLink:(NSString *)universalLink;
                  


/**
 设置Twitter应用信息
 
 @param key 应用标识
 @param secret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupTwitterWithKey:(NSString *)key
                     secret:(NSString *)secret
                redirectUrl:(NSString *)redirectUrl;

/**
 设置Facebook应用信息 使用facebook客户端分享使用此方法 displayName必须
 
 @param appkey 应用标识
 @param appSecret 应用密钥
 @param displayName 分享后显示的app名称 需与facebook后台配置一致 使用facebook客户端分享必须
 */
- (void)setupFacebookWithAppkey:(NSString *)appkey
                      appSecret:(NSString *)appSecret
                    displayName:(NSString *)displayName;



/**
  设置易信(易信好友，易信朋友圈、易信收藏)应用信息

 @param appId 应用标识
 @param appSecret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupYiXinByAppId:(NSString *)appId
                appSecret:(NSString *)appSecret
              redirectUrl:(NSString *)redirectUrl;

/**
 *  设置印象笔记应用信息，注：中国版和国际版都是调用此接口进行初始化操作。
 *
 *  @param consumerKey    应用标识
 *  @param consumerSecret 应用密钥
 *  @param sandbox        是否为沙箱模式, YES 沙箱模式，NO 非沙箱模式
 */
- (void)setupEvernoteByConsumerKey:(NSString *)consumerKey
                    consumerSecret:(NSString *)consumerSecret
                           sandbox:(BOOL)sandbox;



/**
 设置开心网应用信息
 
 @param apiKey 应用标识
 @param secretKey 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupKaiXinByApiKey:(NSString *)apiKey
                  secretKey:(NSString *)secretKey
                redirectUrl:(NSString *)redirectUrl;

/**
 设置Pocket应用信息
 
 @param consumerKey 应用标识
 @param redirectUrl 回调地址
 */
- (void)setupPocketWithConsumerKey:(NSString *)consumerKey
                       redirectUrl:(NSString *)redirectUrl;

/**
 设置Google＋应用信息
 
 @param clientId 应用标识
 @param clientSecret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupGooglePlusByClientID:(NSString *)clientId
                     clientSecret:(NSString *)clientSecret
                      redirectUrl:(NSString *)redirectUrl;

/**
 设置Instagram应用信息
 
 @param clientId 应用标识
 @param clientSecret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupInstagramWithClientId:(NSString *)clientId
                      clientSecret:(NSString *)clientSecret
                       redirectUrl:(NSString *)redirectUrl;
/**
设置Instagram应用信息

@param clientId 应用标识
@param clientSecret 应用密钥
@param redirectUrl 回调地址
*/
- (void)setupInstagramInFBWithClientId:(NSString *)clientId
                      clientSecret:(NSString *)clientSecret
                       redirectUrl:(NSString *)redirectUrl;
/**
 设置LinkedIn应用信息
 
 @param apiKey 应用标识
 @param secretKey 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupLinkedInByApiKey:(NSString *)apiKey
                    secretKey:(NSString *)secretKey
                  redirectUrl:(NSString *)redirectUrl;

/**
 设置Tumblr应用信息
 
 @param consumerKey 应用标识
 @param consumerSecret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupTumblrByConsumerKey:(NSString *)consumerKey
                  consumerSecret:(NSString *)consumerSecret
                     redirectUrl:(NSString *)redirectUrl;

/**
 设置Flickr应用信息
 
 @param apiKey 应用标识
 @param apiSecret 应用密钥
 */
- (void)setupFlickrWithApiKey:(NSString *)apiKey
                    apiSecret:(NSString *)apiSecret;

/**
 设置有道云笔记应用信息
 
 @param consumerKey 应用标识
 @param consumerSecret 应用密钥
 @param oauthCallback 回调地址
 */
- (void)setupYouDaoNoteWithConsumerKey:(NSString *)consumerKey
                        consumerSecret:(NSString *)consumerSecret
                         oauthCallback:(NSString *)oauthCallback;

/**
 设置支付宝好友应用信息
 
 @param appId 应用标识
 */
- (void)setupAliSocialWithAppId:(NSString *)appId;

/**
 设置Pinterest应用信息
 
 @param clientId 应用标识
 */
- (void)setupPinterestByClientId:(NSString *)clientId;

/**
 设置KaKao应用信息
 
 @param appkey 应用标识, 当使用客户端授权分享和授权时需要传入该标识
 @param restApiKey RestApi标识
 @param redirectUrl 回调地址
 */
- (void)setupKaKaoWithAppkey:(NSString *)appkey
                  restApiKey:(NSString *)restApiKey
                 redirectUrl:(NSString *)redirectUrl;

/**
 设置Dropbox应用信息
 
 @param appId 应用标识
 @param appSecret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupDropboxWithAppKey:(NSString *)appId
                     appSecret:(NSString *)appSecret
                   redirectUrl:(NSString *)redirectUrl;

/**
 设置VKontakte应用信息
 
 @param applicationId 应用标识
 @param secretKey 应用密钥
 @param authType 授权方式。值可以是：SSDKAuthorizeTypeSSO、SSDKAuthorizeTypeWeb、SSDKAuthorizeTypeBoth，分别代表SSO、网页授权、SSO＋网页授权。
 */
- (void)setupVKontakteWithApplicationId:(NSString *)applicationId
                              secretKey:(NSString *)secretKey
                               authType:(SSDKAuthorizeType)authType;

/**
 设置Instapaper应用信息
 
 @param consumerKey 应用标识
 @param consumerSecret 应用密钥
 */
- (void)setupInstapaperWithConsumerKey:(NSString *)consumerKey
                        consumerSecret:(NSString *)consumerSecret;

/**
 设置钉钉应用信息 适用于分享
 
 @param appId 应用标识
 */
- (void)setupDingTalkWithAppId:(NSString *)appId;

/**
 设置钉钉应用信息 适用于授权
 
 @param appId 授权应用标识
 @param appSecret 授权应用密钥
 @param redirectUrl 授权回调地址
 */
- (void)setupDingTalkAuthWithAppId:(NSString *)appId
                         appSecret:(NSString *)appSecret
                       redirectUrl:(NSString *)redirectUrl;


/**
 设置youtube应用信息
 
 @param clientId 应用标识
 @param clientSecret 应用密钥
 @param redirectUrl 回调地址 可以使用 http://localhost 或 iOSURLscheme:/ 例如：com.googleusercontent.apps.906418427202-jinnbqal1niq4s8isbg2ofsqc5ddkcgr:/
 */
- (void)setupYouTubeWithClientId:(NSString *)clientId
                    clientSecret:(NSString *)clientSecret
                     redirectUrl:(NSString *)redirectUrl;

/**
 设置Line应用信息
 
 @param authType 授权方式。值可以是：SSDKAuthorizeTypeSSO、SSDKAuthorizeTypeWeb、SSDKAuthorizeTypeBoth，分别代表SSO、网页授权、SSO＋网页授权。
 */
- (void)setupLineAuthType:(SSDKAuthorizeType)authType;

/**
 设置短信登录
 
 @param open 打开短信登录的国家列表选择
 */
- (void)setupSMSOpenCountryList:(BOOL)open;



/**
 设置明道应用信息

 @param appKey 应用标识
 @param appSecret 应用密钥
 @param redirectUrl 回调地址
 */
- (void)setupMingDaoByAppKey:(NSString *)appKey
                   appSecret:(NSString *)appSecret
                 redirectUrl:(NSString *)redirectUrl;


/**
 设置Telegram 机器人bot 该方法主要用于用户登录使用 使用分享可以不配置
 
 @param botToken e.g "123456789:XXXXXXXXXXXXXX" 其中123456789为botId,如果botToken值使用botId则授权信息平台不校验 hash 开发者自己校验
 @param botDomain domain
 */
- (void)setupTelegramByBotToken:(NSString *)botToken
                      botDomain:(NSString *)botDomain;

/**
 设置Reddit应用信息
 
 @param appkey 应用标识(请使用 Reddit 应用)
 @param redirectUri 回调地址 请使用在Reddit开发者平台创建的应用所填写的uri回调地址
 如：回调地址https://www.mob.com/reddit_callback
 */
- (void)setupRedditByAppKey:(NSString *)appkey
                redirectUri:(NSString *)redirectUri;



/**
 设置抖音应用信息
 
 @param appKey 应用标识
 @param appSecret 应用密钥
 */
- (void)setupDouyinByAppKey:(NSString *)appKey
                  appSecret:(NSString *)appSecret;

/**
 设置TikTok应用信息
 
 @param appKey 应用标识
 @param appSecret 应用密钥
 */
- (void)setupTikTokByAppKey:(NSString *)appKey
                  appSecret:(NSString *)appSecret;

/**
 设置企业微信应用信息
 
 @param appKey 应用appKey
 @param corpId 企业ID
 @param agentId 应用编号
 @param appSecret 应用密钥
 */
- (void)setupWeWorkByAppKey:(NSString *)appKey
                     corpId:(NSString *)corpId
                    agentId:(NSString *)agentId
                  appSecret:(NSString *)appSecret;

/**
设置绿洲appKey,与新浪的appkey相同
 
@param appKey 应用标识
 */
- (void)setOasisByAppkey:(NSString *)appKey;


/**
设置SnapChat应用信息
 
@param cliendId 应用标识
@param redirectUrl 回传地址，需要在urlTypes设置此scheme
 */
- (void)setSnapChatClientId:(NSString *)cliendId    
               clientSecret:(NSString *)clientSecret
                redirectUrl:(NSString *)redirectUrl;

/**
 设置快手应用信息
 
 @param appId 应用标识
 @param universalLink 应用深度连接
 */
- (void)setupKuaiShouWithAppId:(NSString *)appId
                     appSecret:(NSString *)appSecret
               universalLink:(NSString *)universalLink
                      delegate:(id)delegate;
@end
