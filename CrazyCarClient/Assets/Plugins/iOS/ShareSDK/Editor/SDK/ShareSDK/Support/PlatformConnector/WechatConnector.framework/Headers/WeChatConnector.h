//
//  SSPWeChatConnector.h
//  ShareSDKConnector
//
//  Created by 冯鸿杰 on 16/9/28.
//  Copyright © 2016年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ShareSDK/ShareSDK.h>

/**
 请求Token 类型

 @param authCode 授权返回的authCode
 @param getUserinfo 继续获取用户信息
 */
typedef void(^SSDKRequestTokenOperation)(NSString *authCode, void(^getUserinfo)(NSString *uid, NSString *token));

/**
 刷新Token 类型

 @param uid 当前请求的用户id
 @param getUserinfo 继续获取用户信息
 */
typedef void(^SSDKRefreshTokenOperation)(NSString *uid, void(^getUserinfo)(NSString *token));

/**
小程序回调回应用程序

@param uid 当前请求的用户id
@param getUserinfo 继续获取用户信息
*/
typedef void(^SSDKOpenAppFromMiniProgramCallback)(SSDKResponseState state, NSString *extStr, NSError *error);

/**
 *  微信连接器
 */
@interface WeChatConnector : NSObject

/**
 在用户不希望暴露微信appSecret情况下，可以设置此block，传入token继续请求用户信息
 
 @param operation 请求authToken业务
 */
+ (void)setRequestAuthTokenOperation:(SSDKRequestTokenOperation)operation;

/**
 微信token过期时，在此block中刷新，执行getUserInfo继续执行
 
 @param operation 刷新token业务
 */
+ (void)setRefreshAuthTokenOperation:(SSDKRefreshTokenOperation)operation;

/**
 可以获取被sharesdk截取的微信sdk回调

 @param operation 设置的回调block
 */
+ (void)setWXCallbackOperation:(void(^)(id req,id resp))operation;


/**
 拉起小程序功能

 @param userName 拉起的小程序的username
 @param path 拉起小程序页面的可带参路径，不填默认拉起小程序首页
 @param miniProgramType //拉起小程序的类型, 0:正式版; 1:开发版; 2:体验版
 */
+ (void)openMiniProgramWithUserName:(NSString *)userName
                               path:(NSString *)path
                    miniProgramType:(NSInteger)miniProgramType
                           complete:(void(^) (BOOL success))complete __deprecated_msg("Discard form v4.3.16");

/**
拉起小程序功能

@param userName 拉起的小程序的username
@param path 拉起小程序页面的可带参路径，不填默认拉起小程序首页
@param miniProgramType 拉起小程序的类型, 0:正式版; 1:开发版; 2:体验版
@param extMsg 拉起小程序带带自定义参数 ext信息
@param extDic 拉起小程序带带自定义参数 可存放图片等比较大的数据
@param complete 打开小程序是否成功
*/
+ (void)openMiniProgramWithUserName:(NSString *)userName
                               path:(NSString *)path
                    miniProgramType:(NSInteger)miniProgramType
                             extMsg:(NSString *)extMsg
                             extDic:(NSDictionary *)extDic
                           complete:(void(^)(BOOL success))complete;


/// 小程序带参数打开应用程序进行监听，结果通过callback回调
/// 注意此回调callback将被单例持有 可通过openAppFromMiniProgramWithCallback:nil 进行释放取消监听或者其他值进行更换
/// @param callback 回调
+ (void)openAppFromMiniProgramWithCallback:(SSDKOpenAppFromMiniProgramCallback)callback;

/**
 指定返回用户信息的语言，zh_CN 简体中文，zh_TW 繁体中文，en 英文。默认为en。
 @param lang 语言
 */
+ (void)setLang:(NSString *)lang;

@end
