//
//  KSApi.h
//  KwaiSDK
//
//  Created by MingBo Gao on 2019/12/11.
//

#import <Foundation/Foundation.h>
#import "KSApiObject.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - KSApiDelegate

/// 接受并处理来自快手终端的事件消息
/// KSApiDelegate 需要在registerApp:universalLink:delegate:注册
@protocol KSApiDelegate <NSObject>
@optional

/// 发送一个request后，收到快手终端的回应
/// @param response 具体的回应内容，回应类型详见KSApiObject.h
- (void)ksApiDidReceiveResponse:(__kindof KSBaseResponse *)response;

@end

#pragma mark - KwaiSDKLogDelegate

@protocol KwaiSDKLogDelegate <NSObject>

- (void)onLog:(NSString*)log logLevel:(KwaiSDKLogLevel)level;

- (void)onStatistics:(NSString*)key value:(NSString *)value;

@end

#pragma mark - KSApi

/// 快手Api接口函数类
/// 封装了快手终端SDK的所有接口
@interface KSApi : NSObject

/// 应用启动时调用此函数向快手终端SDK注册第三方应用
/// @param appId 快手开发者ID
/// @param universalLink 快手开发者UniversalLink
/// @param delegate KSApiDelegate对象，用来接收快手触发的消息
/// @return 注册成功返回YES，失败返回NO
+ (BOOL)registerApp:(NSString *)appId
      universalLink:(NSString *)universalLink
           delegate:(nullable id<KSApiDelegate>)delegate;

/// 检查目标app是否已经被用户安装
/// @return 已安装返回YES，未安装返回NO
+ (BOOL)isAppInstalledFor:(KSApiApplication)application;

/// 判断当前快手APP是否支持快手开放SDK
/// 支持返回YES，不支持返回NO
+ (BOOL)isKSAppSupportApi;

/// 判断当前快手APP是否支持视频裁切
/// 支持返回YES，不支持返回NO
+ (BOOL)isKSAppSupportMediaApi;

/// 判断当前快手APP是否支持视频发布、图片视频编辑
/// 支持返回YES，不支持返回NO
+ (BOOL)isKSAppSupportMediaApiV2;

/// 获取当前快手SDK的版本号
/// @return 快手SDK版本号
+ (NSString *)apiVersion;

/// 发送请求到快手
/// @param request 发送的请求对象
/// @param completion 调用结果回调block
+ (void)sendRequest:(KSBaseRequest *)request completion:(void (^ __nullable)(BOOL success))completion;

/// 处理快手通过scheme方式唤起第三方应用时传递的数据
/// 需要在 application:openURL:sourceApplication:annotation:或者application:handleOpenURL中调用
/// @param url 快手唤起第三方应用时传递的url
/// @return 成功返回YES，失败返回NO
+ (BOOL)handleOpenURL:(NSURL *)url;

/// 处理快手通过UniversalLink方式唤起第三方应用时传递的数据
/// 需要在AppDelegate或SceneDelegate的continueUserActivity中调用
/// @param userActivity 快手唤起第三方应用时系统API传递过来的userActivity对象
/// @return 成功返回YES，失败返回NO
+ (BOOL)handleOpenUniversalLink:(NSUserActivity *)userActivity;

/// 日志打印方法
/// @param level 打印log级别
/// @param logDelegate log代理对象
+ (void)startLogByLevel:(KwaiSDKLogLevel)level logDelegate:(id<KwaiSDKLogDelegate>)logDelegate;

@end

NS_ASSUME_NONNULL_END
