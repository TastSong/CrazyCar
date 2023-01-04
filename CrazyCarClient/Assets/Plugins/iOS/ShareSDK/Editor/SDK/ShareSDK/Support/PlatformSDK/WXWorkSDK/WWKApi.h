//
//  WWKApi.h
//  wxwork
//
//  Created by WXWork on 16/5/25.
//  Copyright © 2016年 rdgz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WWKApiObject.h"

#pragma mark - WWKApiDelegate
/*! @brief 接收并处理来自企业微信终端程序的事件消息
 *
 * 接收并处理来自企业微信终端程序的事件消息，期间企业微信界面会切换到第三方应用程序。
 * WWKApiDelegate 会在handleOpenURL:delegate:中使用并触发。
 */
@protocol WWKApiDelegate <NSObject>
@optional

// 企业微信展示对外名称.
typedef NS_ENUM(NSInteger, WWKDiplayNameType) {
    WWKDefaultName = 0,    // 企业微信
    WWKLocalName = 1       // 政务微信
};

/*! @brief 收到一个来自企业微信的请求，第三方应用程序处理完后调用sendResp向企业微信发送结果
 *
 * 收到一个来自企业微信的请求，异步处理完成后必须调用sendResp发送处理结果给企业微信。
 * 目前并未使用。
 * @param req 具体请求内容，是自动释放的
 */
- (void)onReq:(WWKBaseReq *)req;

/*! @brief 发送一个sendReq后，收到企业微信的回应
 *
 * 收到一个来自企业微信的处理结果。调用一次sendReq后会收到onResp。
 * 可能收到的处理结果有WWKSendMessageResp等。
 * @param resp 具体的回应内容，是自动释放的
 */
- (void)onResp:(WWKBaseResp *)resp;

@end


#pragma mark - WWKApi

/*! @brief 企业微信Api接口函数类
 *
 * 该类封装了企业微信终端SDK的所有接口
 */
@interface WWKApi : NSObject

/*! @brief WWKApi的成员函数，向企业微信终端程序注册第三方应用。
 *
 * 需要在每次启动第三方应用程序时调用。第一次调用后，会在企业微信的可用应用列表中出现。
 * iOS7及以上系统需要调起一次企业微信才会出现在企业微信的可用应用列表中。
 * @attention 请保证在主线程中调用此函数
 * @param appid 企业微信开发者ID
 * @return 成功返回YES，失败返回NO。
 */
+ (BOOL)registerApp:(NSString *)appid;



/*! @brief WWKApi的成员函数，向企业微信终端程序注册企业应用。
 *
 * 需要在每次启动第三方应用程序时调用。第一次调用后，会在企业微信的可用应用列表中出现。
 * @see registerApp
 * @param appid 企业微信开发者ID
 * @param corpid 企业微信企业ID
 * @param agentid 企业微信企业应用ID
 * @return 成功返回YES，失败返回NO。
 */
+ (BOOL)registerApp:(NSString *)appid corpId:(NSString *)corpid agentId:(NSString *)agentid;



/*! @brief 处理企业微信通过URL启动App时传递的数据
 *
 * 需要在 application:openURL:sourceApplication:annotation:或者application:handleOpenURL中调用。
 * @param url 企业微信启动第三方应用时传递过来的URL
 * @param delegate  WWKApiDelegate对象，用来接收企业微信触发的消息。
 * @return 成功返回YES，失败返回NO。
 */
+ (BOOL)handleOpenURL:(NSURL *)url delegate:(id<WWKApiDelegate>) delegate;



/*! @brief 检查企业微信是否已被用户安装
 *
 * @return 企业微信已安装返回YES，未安装返回NO。
 * @note 由于iOS系统的限制，在iOS9及以上系统检测企业微信是否安装，需要将企业微信的scheme"wxwork"(云端版本)及"wxworklocal"(本地部署版本)添加到工程的Info.plist中的LSApplicationQueriesSchemes白名单里，否则此方法总是会返回NO。
 * 详情参考 https://developer.apple.com/documentation/uikit/uiapplication/1622952-canopenurl
 */
+ (BOOL)isAppInstalled;



/*! @brief 获取企业微信的itunes安装地址
 *
 * @return 企业微信的安装地址字符串。
 */
+ (NSString *)getAppInstallUrl;



/*! @brief 获取当前企业微信SDK的版本号
 *
 * @return 返回当前企业微信SDK的版本号
 */
+ (NSString *)getApiVersion;



/*! @brief 打开企业微信
 *
 * @return 成功返回YES，失败返回NO。
 */
+ (BOOL)openApp;



/*! @brief 发送请求到企业微信，等待企业微信返回onResp
 *
 * 函数调用后，会切换到企业微信的界面。第三方应用程序等待企业微信返回onResp。企业微信在异步处理完成后一定会调用onResp。支持以下类型
 * WWKSendMessageReq等。
 * @param req 具体的发送请求，在调用函数后，请自己释放。
 * @return 成功返回YES，失败返回NO。
 */
+ (BOOL)sendReq:(WWKBaseReq *)req;



/*! @brief 收到企业微信onReq的请求，发送对应的应答给企业微信，并切换到企业微信界面
 *
 * 函数调用后，会切换到企业微信的界面。第三方应用程序收到企业微信onReq的请求，异步处理该请求，完成后必须调用该函数。
 * 目前暂未使用
 * @param resp 具体的应答内容，调用函数后，请自己释放
 * @return 成功返回YES，失败返回NO。
 */
+ (BOOL)sendResp:(WWKBaseResp *)resp;


/*! @brief 获取当前企业微信展示名称
 *
 * @return 返回当前企业微信展示名称
 */
+ (WWKDiplayNameType)displayNameType;


@end
