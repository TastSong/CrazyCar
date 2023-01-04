///
/// \file TencentOAuth.h
/// \brief QQ互联开放平台授权登录及相关开放接口实现类
///
/// Created by Tencent on 12-12-21.
/// Copyright (c) 2012年 Tencent. All rights reserved.
///

#import <UIKit/UIKit.h>
#import "sdkdef.h"

@protocol TencentSessionDelegate;
@protocol TencentLoginDelegate;
@protocol TencentApiInterfaceDelegate;
@protocol TencentWebViewDelegate;

@class TencentApiReq;
@class TencentApiResp;

typedef NS_ENUM(NSUInteger, TencentAuthorizeState) {
    kTencentNotAuthorizeState,
    kTencentSSOAuthorizeState,
    kTencentWebviewAuthorzieState,
};

typedef NS_ENUM(NSUInteger, TencentAuthMode) {
    kAuthModeClientSideToken,
    kAuthModeServerSideCode,
};

#pragma mark - TencentOAuth(授权登录及相关开放接口调用)

/**
 * \brief TencentOpenAPI授权登录及相关开放接口调用
 *
 * TencentOAuth实现授权登录逻辑以及相关开放接口的请求调用
 */
@interface TencentOAuth : NSObject
{
    NSMutableDictionary* _apiRequests;
	NSString* _accessToken;
	NSDate* _expirationDate;
	id<TencentSessionDelegate> _sessionDelegate;
	NSString* _localAppId;
	NSString* _openId;
	NSString* _redirectURI;
	NSArray* _permissions;
}

/** Access Token凭证，用于后续访问各开放接口 */
@property(nonatomic, copy) NSString* accessToken;

/** Access Token的失效期 */
@property(nonatomic, copy) NSDate* expirationDate;

/** 已实现的开放接口的回调委托对象 */
@property(nonatomic, assign) id<TencentSessionDelegate> sessionDelegate;

/** 第三方应用在开发过程中设置的URLSchema，用于浏览器登录后后跳到第三方应用 */
@property(nonatomic, copy) NSString* localAppId;

/** 用户授权登录后对该用户的唯一标识 */
@property(nonatomic, copy) NSString* openId;

/** 用户登录成功过后的跳转页面地址 */
@property(nonatomic, copy) NSString* redirectURI;

/** 第三方应用在互联开放平台申请的appID */
@property(nonatomic, retain) NSString* appId;

/** 第三方应用在互联开放平台注册的UniversalLink */
@property(nonatomic, retain) NSString* universalLink;

/** 主要是互娱的游戏设置uin */
@property(nonatomic, retain) NSString* uin;

/** 主要是互娱的游戏设置鉴定票据 */
@property(nonatomic, retain) NSString* skey;

/** 登陆透传的数据 */
@property(nonatomic, copy) NSDictionary* passData;

/** 授权方式(Client Side Token或者Server Side Code) */
@property(nonatomic, assign) TencentAuthMode authMode;

/** union id */
@property(nonatomic, retain) NSString* unionid;

/** 第三方在授权登录/分享 时选择 QQ，还是TIM 。在授权前一定要指定其中一个类型*/
@property(nonatomic, assign) TencentAuthShareType authShareType;

/**
 * 获取上次登录得到的token
 *
 **/
- (NSString *)getCachedToken;

/**
 * 获取上次登录得到的openid
 *
 **/
- (NSString *)getCachedOpenID;

/**
 * 获取上次登录的token过期日期
 *
 **/
- (NSDate *)getCachedExpirationDate;

/**
 * 上次登录的token是否过期(本地判断)
 **/
- (BOOL)isCachedTokenValid;

/**
 * 删除上次登录登录的token信息
 *
 **/
- (BOOL)deleteCachedToken;

/**
 * 用来获得当前sdk的版本号
 * \return 返回sdk版本号
 **/

+ (NSString*)sdkVersion;

/**
 * 用来获得当前sdk的小版本号
 * \return 返回sdk小版本号
 **/

+ (NSString*)sdkSubVersion;

/**
 * 用来获得当前sdk的是否精简版
 * \return 返回YES表示精简版
 **/

+ (BOOL)isLiteSDK;

/** 
 * 主要是用来帮助判断是否有登陆被发起，但是还没有过返回结果 
 * \return 
 *          kTencentNotAuthorizeState:无授权 
 *          kTencentSSOAuthorizeState:有人发起了sso授权但无返回
 *          kTencentWebviewAuthorzieState:有人发起了webview授权还未返回
 **/

+ (TencentAuthorizeState *)authorizeState;

/**
 * 用来获得当前手机qq的版本号
 * \return 返回手机qq版本号
 **/
+ (int)iphoneQQVersion __attribute__((deprecated("已过期, 建议删除调用")));


/**
 * 用来获得当前手机TIM的版本号
 * \return 返回手机qq版本号
 **/
+ (int)iphoneTIMVersion __attribute__((deprecated("已过期, 建议删除调用")));

/**
 * 初始化TencentOAuth对象
 * \param appId 不可为nil，第三方应用在互联开放平台申请的唯一标识
 * \param delegate 不可为nil，第三方应用用于接收请求返回结果的委托对象
 * \return 初始化后的授权登录对象
 */
- (id)initWithAppId:(NSString *)appId
        andDelegate:(id<TencentSessionDelegate>)delegate;

/**
* 初始化TencentOAuth对象（>=3.3.7）
* \param appId 不可为nil，第三方应用在互联开放平台申请的唯一标识
* \param universalLink 可以为nil，第三方应用在互联开放平台注册的UniversalLink，和bundleID一一对应（当为nil时，互联平台会按规则生成universallink，详见官网说明）
* \param delegate 不可为nil，第三方应用用于接收请求返回结果的委托对象
* \return 初始化后的授权登录对象
*
****【使用说明】*****
* 1、支持BundleId与UniversalLink的一一对应，主要目的“是为了解决应用的iPhone版本和iPad HD版本共用同一个AppId，导致同时安装情况下的跳转问题"。
* 2 、由于手Q版本在 >=8.1.8 后才支持了这种对应方式，所以一旦使用，“务必做到”及时知会用户升级手Q版本。
****
*/
- (id)initWithAppId:(NSString *)appId
   andUniversalLink:(NSString *)universalLink
        andDelegate:(id<TencentSessionDelegate>)delegate;

/**
* 初始化TencentOAuth对象（>=3.3.8）
* \param appId 不可为nil，第三方应用在互联开放平台申请的唯一标识
* \param enabled  默认为NO，第三方应用是否将sdk和手机QQ的交互方式切换为UniversalLink方式，启用后则在iOS9及以上的系统都会生效UniversalLink方式；否则，默认仅在iOS13及以上的系统生效UniversalLink方式。
* \param universalLink 可以为nil，第三方应用在互联开放平台注册的UniversalLink，和bundleID一一对应（当为nil时，互联平台会按规则生成UniversalLink，详见官网说明）
* \param delegate 不可为nil，第三方应用用于接收请求返回结果的委托对象
* \return 初始化后的授权登录对象
*
*****【使用说明】*****
*  1、支持sdk与手Q的交互切换为UniversalLink模式，主要目的"是为了避免手Q的UrlScheme被其他应用抢注后，导致sdk接口功能受到影响"。
*  2 、由于手Q版本在 >=8.1.3 后才适配了UniversalLink，所以一旦开启了enabled开关，“务必做到”及时知会用户升级手Q版本。
*****
*/
- (id)initWithAppId:(NSString *)appId
 enableUniveralLink:(BOOL)enabled
      universalLink:(NSString *)universalLink
           delegate:(id<TencentSessionDelegate>)delegate;

/**
 * 判断用户手机上是否安装手机QQ
 * \return YES:安装 NO:没安装
 *
 * \note SDK目前已经支持QQ、TIM授权登录及分享功能， 会按照QQ>TIM的顺序进行调用。
 * 只要用户安装了QQ、TIM中任意一个应用，都可为第三方应用进行授权登录、分享功能。
 * 第三方应用在接入SDK时不需要判断是否安装QQ、TIM。若有判断安装QQ、TIM的逻辑建议移除。
 */
+ (BOOL)iphoneQQInstalled;

/**
 * 判断用户手机上是否安装手机TIM
 * \return YES:安装 NO:没安装
 *
 * \note SDK目前已经支持QQ、TIM授权登录及分享功能， 会按照QQ>TIM的顺序进行调用。
 * 只要用户安装了QQ、TIM中任意一个应用，都可为第三方应用进行授权登录、分享功能。
 * 第三方应用在接入SDK时不需要判断是否安装QQ、TIM。若有判断安装QQ、TIM的逻辑建议移除。
 */
+ (BOOL)iphoneTIMInstalled;
 
/**
 * 判断用户手机上的手机QQ是否支持SSO登录
 * \return YES:支持 NO:不支持
 */
+ (BOOL)iphoneQQSupportSSOLogin __attribute__((deprecated("QQ版本均支持SSO登录。该接口已过期, 建议删除调用")));

/**
 * 判断用户手机上的手机TIM是否支持SSO登录
 * \return YES:支持 NO:不支持
 */
+ (BOOL)iphoneTIMSupportSSOLogin __attribute__((deprecated("TIM版本均支持SSO登录。该接口已过期, 建议删除调用")));

/**
 * 登录授权
 *
 * \param permissions 授权信息列
 */
- (BOOL)authorize:(NSArray *)permissions;

/**
 * 登录授权
 * \param permissions 授权信息列表
 * \param bInSafari 是否使用safari进行登录.<b>IOS SDK 1.3版本开始此参数废除</b>
 */
- (BOOL)authorize:(NSArray *)permissions
		 inSafari:(BOOL)bInSafari;

/**
 * 登录授权
 * \param permissions 授权信息列表
 * \param localAppId 应用APPID
 * \param bInSafari 是否使用safari进行登录.<b>IOS SDK 1.3版本开始此参数废除</b>
 */
- (BOOL)authorize:(NSArray *)permissions
       localAppId:(NSString *)localAppId
		 inSafari:(BOOL)bInSafari;

/**
 * 登录授权<web为二维码扫码方式>
 *
 * \param permissions 授权信息列
 */
- (BOOL)authorizeWithQRlogin:(NSArray *)permissions;

/**
 * 增量授权，因用户没有授予相应接口调用的权限，需要用户确认是否授权
 * \param permissions 需增量授权的信息列表
 * \return 增量授权调用是否成功
 */
- (BOOL)incrAuthWithPermissions:(NSArray *)permissions;

/**
 * 重新授权，因token废除或失效导致接口调用失败，需用户重新授权
 * \param permissions 授权信息列表，同登录授权
 * \return 授权调用是否成功
 */
- (BOOL)reauthorizeWithPermissions:(NSArray *)permissions;

/**
 * 获取UnindID,可以根据UnindID的比较来确定OpenID是否属于同一个用户
 * \return NO未登录，信息不足；YES条件满足，发送请求成功，请等待回调
 */
- (BOOL)RequestUnionId;

/**
 * (静态方法)处理应用拉起协议
 * \param url 处理被其他应用呼起时的逻辑
 * \return 处理结果，YES表示成功，NO表示失败
 */
+ (BOOL)HandleOpenURL:(NSURL *)url;

/**
 * (静态方法)sdk是否可以处理应用拉起协议
 * \param url 处理被其他应用呼起时的逻辑
 * \return 处理结果，YES表示可以 NO表示不行
 */
+ (BOOL)CanHandleOpenURL:(NSURL *)url;

/**
 * (静态方法)处理应用的UniversalLink拉起协议
 * \param url 处理被其他应用呼起时的逻辑
 * \return 处理结果，YES表示成功，NO表示失败
 */
+ (BOOL)HandleUniversalLink:(NSURL *)url;

/**
 * (静态方法)sdk是否可以处理应用的Universallink拉起协议
 * \param url 处理被其他应用呼起时的逻辑(应用的Universallink链接须满足官网注册时的格式要求)
 * \return 处理结果，YES表示可以 NO表示不行
 * 注：在调用其他Universallink相关处理接口之前，均需进行此项判断
 */
+ (BOOL)CanHandleUniversalLink:(NSURL *)url;

/**
 * (静态方法)获取TencentOAuth调用的上一次错误信息
 */
+ (NSString *)getLastErrorMsg;

/**
 * 以Server Side Code模式授权登录时，通过此接口获取返回的code值;
 * 以Client Side Token模式授权登录时，忽略此接口。
 */
- (NSString *)getServerSideCode;

/**
 * 退出登录(退出登录后，TecentOAuth失效，需要重新初始化)
 * \param delegate 第三方应用用于接收请求返回结果的委托对象
 */
- (void)logout:(id<TencentSessionDelegate>)delegate;

/**
 * 判断登录态是否有效
 * \return 处理结果，YES表示有效，NO表示无效，请用户重新登录授权
 */
- (BOOL)isSessionValid;

/**
 * 获取用户个人信息
 * \return 处理结果，YES表示API调用成功，NO表示API调用失败，登录态失败，重新登录
 */
- (BOOL)getUserInfo;

/**
 * 退出指定API调用
 * \param userData 用户调用某条API的时候传入的保留参数
 * \return 处理结果，YES表示成功 NO表示失败
 */
- (BOOL)cancel:(id)userData;

/**
 * CGI类任务创建接口
 * \param apiURL CGI请求的URL地址
 * \param method CGI请求方式："GET"，"POST"
 * \param params CGI请求参数字典
 * \param callback CGI请求结果的回调接口对象
 * \return CGI请求任务实例，用于取消任务，返回nil代表任务创建失败
 */
- (TCAPIRequest *)cgiRequestWithURL:(NSURL *)apiURL method:(NSString *)method params:(NSDictionary *)params callback:(id<TCAPIRequestDelegate>)callback;

/**
 * TencentOpenApi发送任务统一接口
 * \param request 请求发送的任务
 * \param callback 任务发送后的回调地址
 */
- (BOOL)sendAPIRequest:(TCAPIRequest *)request callback:(id<TCAPIRequestDelegate>)callback;

- (NSString *)getUserOpenID;

@end

#pragma mark - TencentLoginDelegate(授权登录回调协议)

/**
 * \brief TencentLoginDelegate iOS Open SDK 1.3 API回调协议
 *
 * 第三方应用实现登录的回调协议
 */
@protocol TencentLoginDelegate <NSObject>

@required

/**
 * 登录成功后的回调
 */
- (void)tencentDidLogin;

/**
 * 登录失败后的回调
 * \param cancelled 代表用户是否主动退出登录
 */
- (void)tencentDidNotLogin:(BOOL)cancelled;

/**
 * 登录时网络有问题的回调
 */
- (void)tencentDidNotNetWork;

@optional
/**
 * 登录时权限信息的获得
 */
- (NSArray *)getAuthorizedPermissions:(NSArray *)permissions withExtraParams:(NSDictionary *)extraParams;

/**
 * unionID获得
 */
- (void)didGetUnionID;

/**
 * 强制网页登录，包括账号密码登录和二维码登录
 * return YES时，就算本地有手Q也会打开web界面
 */
- (BOOL)forceWebLogin;
@end

#pragma mark - TencentSessionDelegate(开放接口回调协议)

/**
 * \brief TencentSessionDelegate iOS Open SDK 1.3 API回调协议
 *
 * 第三方应用需要实现每条需要调用的API的回调协议
 */
@protocol TencentSessionDelegate<NSObject, TencentLoginDelegate,
                                TencentWebViewDelegate>

@optional

/**
 * 退出登录的回调
 */
- (void)tencentDidLogout;

/**
 * 因用户未授予相应权限而需要执行增量授权。在用户调用某个api接口时，如果服务器返回操作未被授权，则触发该回调协议接口，由第三方决定是否跳转到增量授权页面，让用户重新授权。
 * \param tencentOAuth 登录授权对象。
 * \param permissions 需增量授权的权限列表。
 * \return 是否仍然回调返回原始的api请求结果。
 * \note 不实现该协议接口则默认为不开启增量授权流程。若需要增量授权请调用\ref TencentOAuth#incrAuthWithPermissions: \n注意：增量授权时用户可能会修改登录的帐号
 */
- (BOOL)tencentNeedPerformIncrAuth:(TencentOAuth *)tencentOAuth withPermissions:(NSArray *)permissions;

/**
 * [该逻辑未实现]因token失效而需要执行重新登录授权。在用户调用某个api接口时，如果服务器返回token失效，则触发该回调协议接口，由第三方决定是否跳转到登录授权页面，让用户重新授权。
 * \param tencentOAuth 登录授权对象。
 * \return 是否仍然回调返回原始的api请求结果。
 * \note 不实现该协议接口则默认为不开启重新登录授权流程。若需要重新登录授权请调用\ref TencentOAuth#reauthorizeWithPermissions: \n注意：重新登录授权时用户可能会修改登录的帐号
 */
- (BOOL)tencentNeedPerformReAuth:(TencentOAuth *)tencentOAuth;

/**
 * 用户通过增量授权流程重新授权登录，token及有效期限等信息已被更新。
 * \param tencentOAuth token及有效期限等信息更新后的授权实例对象
 * \note 第三方应用需更新已保存的token及有效期限等信息。
 */
- (void)tencentDidUpdate:(TencentOAuth *)tencentOAuth;

/**
 * 用户增量授权过程中因取消或网络问题导致授权失败
 * \param reason 授权失败原因，具体失败原因参见sdkdef.h文件中\ref UpdateFailType
 */
- (void)tencentFailedUpdate:(UpdateFailType)reason;

/**
 * 获取用户个人信息回调
 * \param response API返回结果，具体定义参见sdkdef.h文件中\ref APIResponse
 * \remarks 正确返回示例: \snippet example/getUserInfoResponse.exp success
 *          错误返回示例: \snippet example/getUserInfoResponse.exp fail
 */
- (void)getUserInfoResponse:(APIResponse*) response;

/**
 * 社交API统一回调接口
 * \param response API返回结果，具体定义参见sdkdef.h文件中\ref APIResponse
 * \param message 响应的消息，目前支持‘SendStory’,‘AppInvitation’，‘AppChallenge’，‘AppGiftRequest’
 */
- (void)responseDidReceived:(APIResponse*)response forMessage:(NSString *)message;

/**
 * post请求的上传进度
 * \param tencentOAuth 返回回调的tencentOAuth对象
 * \param bytesWritten 本次回调上传的数据字节数
 * \param totalBytesWritten 总共已经上传的字节数
 * \param totalBytesExpectedToWrite 总共需要上传的字节数
 * \param userData 用户自定义数据
 */
- (void)tencentOAuth:(TencentOAuth *)tencentOAuth didSendBodyData:(NSInteger)bytesWritten totalBytesWritten:(NSInteger)totalBytesWritten totalBytesExpectedToWrite:(NSInteger)totalBytesExpectedToWrite userData:(id)userData;


/**
 * 通知第三方界面需要被关闭
 * \param tencentOAuth 返回回调的tencentOAuth对象
 * \param viewController 需要关闭的viewController
 */
- (void)tencentOAuth:(TencentOAuth *)tencentOAuth doCloseViewController:(UIViewController *)viewController;

@end

#pragma mark - TencentWebViewDelegate(H5登录webview旋转方向回调)

/**
 * \brief TencentWebViewDelegate: H5登录webview旋转方向回调协议
 *
 * 第三方应用可以根据自己APP的旋转方向限制，通过此协议设置
 */
@protocol TencentWebViewDelegate <NSObject>
@optional
- (BOOL) tencentWebViewShouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
- (NSUInteger) tencentWebViewSupportedInterfaceOrientationsWithWebkit;
- (BOOL) tencentWebViewShouldAutorotateWithWebkit;
@end
