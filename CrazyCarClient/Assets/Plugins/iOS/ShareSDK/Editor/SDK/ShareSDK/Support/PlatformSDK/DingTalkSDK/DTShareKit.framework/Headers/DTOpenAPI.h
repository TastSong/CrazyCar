//
//  DTOpenAPI.h
//  DTShareSDK
//
//  Created by 青山 on 15/12/3.
//  Copyright (c) 2015年 Alibaba(China)Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DTBaseReq;
@class DTBaseResp;

/**
 接受并处理来自钉钉的事件消息.
 
 钉钉向第三方APP发送事件期间, 钉钉界面会向切换到第三方APP. DTOpenAPIDelegate 会在 +[DTOpenAPI handleOpenURL:delegate:] 中触发.
 */
@protocol DTOpenAPIDelegate <NSObject>
@optional

/**
 收到一个来自钉钉的请求, 第三方APP处理完成后要调用 +[DTOpenAPI sendResp:] 将处理结果返回给钉钉.
 
 @param req 来自钉钉具体的请求.
 */
- (void)onReq:(DTBaseReq *)req;

/**
 第三方APP使用 +[DTOpenAPI sendReq:] 向钉钉发送消息后, 钉钉会处理完请求后会回调该接口.
 
 @param resp 来自钉钉具体的响应.
 */
- (void)onResp:(DTBaseResp *)resp;
@end



/**
 钉钉SDK接口函数类.
 */
@interface DTOpenAPI : NSObject

/**
 第三方APP向钉钉注册申请的appId. 
 
 第三方应用程序需要在程序启动时调用. @note 请在主线程中调用此方法.
 
 @param appid 在钉钉开放平台申请的应用ID.
 
 @return YES 注册成功. NO 注册失败.
 */
+ (BOOL)registerApp:(NSString *)appId;

/**
 第三方APP向钉钉注册申请的appId.
 
 第三方应用程序需要在程序启动时调用. @note 请在主线程中调用此方法.
 
 @param appid 在钉钉开放平台申请的应用ID.
 @param appDescription 第三方描述信息, 长度不超过1K.
 
 @retrun YES 注册成功. NO 注册失败.
 */
+ (BOOL)registerApp:(NSString *)appId appDescription:(NSString *)appDescription;


/**
 第三方应用处理钉钉回调的接口.
 
 第三方应用需要在 -[UIApplicationDelegate application:openURL:sourceApplication:annotation:] 或者 -[UIApplicationDelegate application:openURL:options:] 中调用该方法.

 @param url 钉钉给第三方回调的URL.
 @param delegate 实现DTOpenAPIDelegate的对象, 通过DTOpenAPIDelegate处理钉钉的回调结果.
 
 @return YES 回调处理成功. NO 回调处理失败.
 */
+ (BOOL)handleOpenURL:(NSURL *)URL delegate:(id<DTOpenAPIDelegate>)delegate;


/**
 检测设备是否安装了钉钉客户端.
 
 @return YES 设备安装了钉钉客户端. NO 设备没有安装钉钉客户端.
 */
+ (BOOL)isDingTalkInstalled;

/**
 检测设备安装的钉钉是否支持钉钉OpenAPI.
 
 @return YES 设备安装的钉钉客户端支持钉钉OpenAPI. NO 设备安装的钉钉客户端不支持钉钉OpenAPI.
 */
+ (BOOL)isDingTalkSupportOpenAPI;

/**
 获取钉钉在AppStore的安装地址.
 
 @return 钉钉在AppStore的安装地址.
 */
+ (NSString *)appStoreURLOfDingTalk;

/**
 获取当前OpenSDK的版本号.
 
 @return 当前OpenSDK的版本号.
 */
+ (NSString *)openAPIVersion;


/**
 打开钉钉客户端.
 
 @return YES 成功打开钉钉客户端. NO 未能打开钉钉客户端.
 */
+ (BOOL)openDingTalk;


/**
 发送请求到钉钉, 钉钉处理完请求后会回调第三方APP, 第三方APP需在 -[DTOpenAPIDelegate onReq:] 处理钉钉的响应结果.
 
 @param req 封装请求的对象. 支持的类型: DTSendMessageToDingTalkReq.
 
 @return YES 请求发送成功. NO 请求发送失败.
 */
+ (BOOL)sendReq:(DTBaseReq *)req;

/**
 第三方APP需在 -[DTOpenAPIDelegate onResp:] 处理完收到钉钉的请求后, 使用改方法将处理结果返回给钉钉, 界面会切换到钉钉客户端.
 
 @param req 封装响应的对象. 支持的类型:DTSendMessageToDingTalkResp.
 
 @return YES 响应发送成功. NO 响应发送失败.
 */
+ (BOOL)sendResp:(DTBaseResp *)resp;
@end
