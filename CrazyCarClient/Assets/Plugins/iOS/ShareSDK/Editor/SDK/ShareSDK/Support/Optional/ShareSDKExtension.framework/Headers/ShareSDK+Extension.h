//
//  ShareSDK+Extension.h
//  ShareSDKExtension
//
//  Created by fenghj on 15/7/28.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <ShareSDK/ShareSDK.h>
#import "SSETypeDefine.h"
#import <ShareSDKExtension/SSERestoreSceneHeader.h>

/**
 * ShareSDK扩展类目
 */
@interface ShareSDK (Extension)

/**
 *  是否安装客户端（支持平台：微博、微信、QQ、QZone、Facebook、FBMessage、抖音、Twitter、AliSocial、instagram、whatsapp、Line、pinterest、kakao、kakaoStory、易信、钉钉、美拍、youube、telegram、VKontakte、Pocket）
 *
 *  @param platformType 平台类型
 *
 *  @return YES 已安装，NO 尚未安装
 */
+ (BOOL)isClientInstalled:(SSDKPlatformType)platformType;


/// openurl的方式打开APP
/// @param platformType 平台类型
+ (void)openAppUrl:(SSDKPlatformType)platformType;

/**
 *  获取当前授权用户
 *
 *  @param platformType 平台类型
 *
 *  @return 用户信息
 */
+ (SSDKUser *)currentUser:(SSDKPlatformType)platformType;

/**
 *  设置当前授权用户
 *
 *  @param user         用户信息
 *  @param platformType 平台类型
 */
+ (void)setCurrentUser:(SSDKUser *)user forPlatformType:(SSDKPlatformType)platformType;

/**
 *  根据API接口返回的原始数据来创建用户对象
 *
 *  @param userRawData 用户资料
 *  @param credentialRawData 用户授权信息
 *  @param platformType 平台类型
 *
 *  @return 用户信息对象
 */
+ (SSDKUser *)userByRawData:(NSDictionary *)userRawData credential:(NSDictionary *)credentialRawData forPlatformType:(SSDKPlatformType)platformType;

/**
 *  添加/关注好友
 *
 *  @param platformType       平台类型
 *  @param user               添加/关注用户信息，注：用户信息中的Id或者name项必须有一项填写（不同平台要求不一样），其他字段可选填
 *  @param stateChangedHandler 状态变更回调处理
 */
+ (void)addFriend:(SSDKPlatformType)platformType
             user:(SSDKUser *)user
   onStateChanged:(SSDKAddFriendStateChangedHandler)stateChangedHandler;

/**
 *  获取好友列表
 *
 *  @param platformType       平台类型
 *  @param cursor             分页游标
 *  @param size               分页大小
 *  @param stateChangedHandler 状态变更回调处理
 */
+ (void)getFriends:(SSDKPlatformType)platformType
            cursor:(NSInteger)cursor
              size:(NSUInteger)size
    onStateChanged:(SSDKGetFriendsStateChangedHandler)stateChangedHandler;

#pragma - mark 原Base层

/**
 *  调用分享平台API
 *
 *  @since v3.1.4
 *
 *  @param type                平台类型
 *  @param url                 接口请求地址
 *  @param method              请求方式：GET/POST/DELETE
 *  @param parameters          请求参数
 *  @param headers             请求头
 *  @param stateChangedHandler 状态变更回调处理
 */
+ (void)callApi:(SSDKPlatformType)type
            url:(NSString *)url
         method:(NSString *)method
     parameters:(NSMutableDictionary *)parameters
        headers:(NSMutableDictionary *)headers
 onStateChanged:(SSDKCallApiStateChangedHandler)stateChangedHandler;




/**
 场景还原功能

 @param delegate 场景还原设置代理
 */
+ (void)setRestoreSceneDelegate:(id<ISSERestoreSceneDelegate>)delegate;

+ (void)setShareVideoEnable:(BOOL)shareVideoEnable;

/**
 *  口令分享功能
 *
 *  @param paramters 口令分享参数
 *  @param completeHandler 完成回调处理
 */
+ (void)getCommandText:(NSDictionary *_Nullable)paramters withComplete:(void (^_Nullable) (NSString * _Nullable text, NSError *_Nullable error, void (^ _Nullable complete)(NSString * _Nullable text)))completeHandler;

/**
 视频分享功能
 @param videoUrl 视频网络地址
 @param model 参数模型
 @param completeHandler 回调
 */

/// 务必先把视频下载到本地，再进行分享！！！
+ (void)shareVideoWithUrl:(NSURL *_Nullable)videoUrl model:(SSDKShareVideoModel *)model withComplete:(void (^_Nullable)(BOOL success, NSError *_Nullable error))completeHandler;
@end
