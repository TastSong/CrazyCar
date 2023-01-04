//
//  ShareSDK+Base.h
//  ShareSDK
//
//  Created by Max on 2018/5/10.
//  Copyright © 2018年 掌淘科技. All rights reserved.
//

#import <ShareSDK/ShareSDK.h>
@class SSDKUserQueryCondition;

@interface ShareSDK (Base)

/**
 版本号
 
 @return 版本号字符串
 */
+ (NSString *)sdkVersion;

/**
 返回该平台的配置信息
 
 @param platform 平台类型
 @return 配置信息
 */
+ (NSDictionary *)configWithPlatform:(SSDKPlatformType)platform;


/**
 获取激活的平台列表

 @return 平台列表
 */
+ (NSMutableArray *)activePlatforms;

/**
 获取授权用户信息
 
 @param platformType 平台类型
 @param condition 查询条件
 @param stateChangedHandler 状态变更回调处理
 @return 会话id
 */
+ (SSDKSession *)getUserInfo:(SSDKPlatformType)platformType
                   condition:(SSDKUserQueryCondition *)condition
              onStateChanged:(SSDKGetUserStateChangedHandler)stateChangedHandler;


/**
 分享事件记录
 
 @param platformType 分享平台
 @param eventType 分享事件类型
 */
+ (void)recordShareEventWithPlatform:(SSDKPlatformType)platformType eventType:(SSDKShareEventType)eventType;

/**
 是否开启sdk自动统计意向分享事件
 
 @param record YES:开启 NO:关闭
 */
+ (void)enableAutomaticRecordingEvent:(BOOL)record;

/**
 是否开启设备tags获取，如果开启，则在用户授权成功时在user的tags字段返回设备标签

 @param enable 是否开启，默认关闭
 */
+ (void)enableGetTags:(BOOL)enable;


#pragma mark - Deprecated

typedef void(^SSDKAuthorizeViewDisplayHandler) (UIView *view) __deprecated_msg("Discard form v4.2.0");
typedef void(^SSDKNeedAuthorizeHandler)(SSDKAuthorizeStateChangedHandler authorizeStateChangedHandler) __deprecated_msg("Discard form v4.2.0");

+ (void)authorize:(SSDKPlatformType)platformType
         settings:(NSDictionary *)settings
    onViewDisplay:(SSDKAuthorizeViewDisplayHandler)viewDisplayHandler
   onStateChanged:(SSDKAuthorizeStateChangedHandler)stateChangedHandler __deprecated_msg("Discard form v4.2.0");

+ (void)getUserInfo:(SSDKPlatformType)platformType
        conditional:(SSDKUserQueryCondition *)conditional
        onAuthorize:(SSDKNeedAuthorizeHandler)authorizeHandler
     onStateChanged:(SSDKGetUserStateChangedHandler)stateChangedHandler __deprecated_msg("Discard form v4.2.0");

+ (void)share:(SSDKPlatformType)platformType
   parameters:(NSMutableDictionary *)parameters
  onAuthorize:(SSDKNeedAuthorizeHandler)authorizeHandler
onStateChanged:(SSDKShareStateChangedHandler)stateChangedHandler __deprecated_msg("Discard form v4.2.0");

@end


