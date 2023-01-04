//
//  SSEShareHelper.h
//  ShareSDKExtension
//
//  Created by fenghj on 15/6/17.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ShareSDK/ShareSDK.h>
@class SSDKImage;

/**
 *  分享事件处理器
 *
 *  @param platformType 分享平台
 *  @param parameters   分享参数
 */
typedef void(^SSEShareHandler) (SSDKPlatformType platformType, NSMutableDictionary *parameters);

/**
 *  屏幕截图将要分享事件处理器
 *
 *  @param image        屏幕截图
 *  @param shareHandler 分享事件处理
 */
typedef void(^SSEScreenCaptureWillShareHandler) (SSDKImage *image, SSEShareHandler shareHandler);

/**
 *  摇一摇将要分享事件处理器
 *
 *  @param shareHandler 分享事件处理
 */
typedef void(^SSEShakeWillShareHandler) (SSEShareHandler shareHandler);

/**
 *  一键分享内容状态变更回调处理器
 *
 *  @param platformType     平台类型
 *  @param state            状态
 *  @param userData         附加数据
 *  @param contentEntity    分享内容实体
 *  @param error            错误信息
 *  @param end              是否结束分享，YES 表示整个一键分享完成， NO 表示还有其他平台正在分享
 */
typedef void(^SSEOneKeyShareStateChangeHandler) (SSDKPlatformType platformType, SSDKResponseState state, NSDictionary *userData, SSDKContentEntity *contentEntity, NSError *error, BOOL end);

/**
 *  分享助手
 */
@interface SSEShareHelper : NSObject

///**
// *  一键分享
// *
// *  @param platforms           平台标识列表，如:@[@(SSDKPlatformTypeSinaWeibo), @(SSDKPlatformTypeTencentWeibo)]
// *  @param parameters          分享参数
// *  @param stateChangedHandler 状态变更事件
// */
//+ (void)oneKeyShare:(NSArray *)platforms
//         parameters:(NSMutableDictionary *)parameters
//     onStateChanged:(SSEOneKeyShareStateChangeHandler)stateChangedHandler;

/**
 *  屏幕截图分享
 *
 *  @param willShareHandler     将要分享事件，在此事件中处理要分享的平台、参数
 *  @param stateChangedHandler  状态变更事件
 */
+ (void)screenCaptureShare:(SSEScreenCaptureWillShareHandler)willShareHandler
            onStateChanged:(SSDKShareStateChangedHandler)stateChangedHandler;

/**
 *  开始摇一摇分享
 *
 *  @param beginShakeHandler   开始摇动事件
 *  @param endShakeHandler     结束摇动事件
 *  @param willShareHandler    将要分享事件，在此事件中处理要分享的平台、参数
 *  @param stateChangedHandler 状态变更事件
 */
+ (void)beginShakeShare:(void(^)(void))beginShakeHandler
              onEndSake:(void(^)(void))endShakeHandler
     onWillShareHandler:(SSEShakeWillShareHandler)willShareHandler
         onStateChanged:(SSDKShareStateChangedHandler)stateChangedHandler;

/**
 *  结束摇一摇分享
 */
+ (void)endShakeShare;

@end
