//
//  ShareSDKLinkService.h
//  ShareSDKLink
//
//  Created by lujh on 2018/7/12.
//  Copyright © 2018年 Mob. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ShareSDKLinkConfig;
@class ShareSDKLinkScene;

/**
 应用状态枚举
 */
typedef NS_ENUM(NSInteger, ShareSDKLinkAppState) {
    /**
     应用首次启动
     */
    ShareSDKLinkAppStateFirstRun = 1,
    
    /**
     应用普通启动
     */
    ShareSDKLinkAppStateNomalRun = 2,
    
    /**
     应用前置激活
     */
    ShareSDKLinkAppStateBecomeActive = 3
};

/**
 服务类型枚举
 */
typedef NS_ENUM(NSInteger, ShareSDKLinkServiceType) {
    /**
     获取服务器配置
     */
    ShareSDKLinkServiceTypeGetConfig = 1,
    
    /**
     获取场景信息
     */
    ShareSDKLinkServiceTypeGetScene = 2,
    
    /**
     获取mobid
     */
    ShareSDKLinkServiceTypeGetMobId = 3,
    
    /**
     发送跳转日志
     */
    ShareSDKLinkServiceTypeSendJumpLog = 4,
    
    /**
     解析短链id
     */
    ShareSDKLinkServiceTypeParseULParams = 5
};

/**
 跳转场景日志类型枚举
 */
typedef NS_ENUM(NSInteger, ShareSDKLinkJumpState) {
    /**
     跳转成功
     */
    ShareSDKLinkJumpStateSuccess = 1,
    /**
     跳转失败
     */
    ShareSDKLinkJumpStateFail,
    /**
     参数解析错误
     */
    ShareSDKLinkJumpStateParamsFail,
    /**
     缺少action字段
     */
    ShareSDKLinkJumpStateNotAction,
    /**
     找不到对应Class
     */
    ShareSDKLinkJumpStateNotFoundClass,
    /**
     用户自定义恢复
     */
    ShareSDKLinkJumpStateCustomRestore
};

/**
 服务器请求服务类
 */
@interface ShareSDKLinkService : NSObject

/**
 获取请求服务类对象
 
 @return 请求服务类对象
 */
+ (ShareSDKLinkService *)sharedService;

/**
 获取服务器配置
 
 @param resultHandler 回调处理
 */
- (void)getConfig:(void (^)(ShareSDKLinkConfig *config, NSError *error))resultHandler;

/**
 获取MobId
 
 @param path 控制器路径
 @param params 自定义参数
 @param resultHandler 回调处理
 */
- (void)getMobIdWithPath:(NSString *)path
                  params:(NSDictionary *)params
                  result:(void (^)(NSString *mobid, NSString *domain, NSError *error))resultHandler;

/**
 获取场景信息
 
 @param stat 应用状态
 @param resultHandler 回调处理
 */
- (void)getSceneWithStatus:(ShareSDKLinkAppState)stat result:(void (^)(ShareSDKLinkScene *scene))resultHandler;

/**
 发送跳转日志
 
 @param mobid 标识
 @param source 跳转方式
 @param state 状态
 @param retry 重试标识
 */
- (void)sendJumpLogWithMobId:(NSString *)mobid source:(NSInteger)source state:(ShareSDKLinkJumpState)state needRetry:(BOOL)retry;

/**
 解析mobid
 
 @param mobid 标识
 @param resultHandler 成功回调
 */
- (void)parseULParamsWithMobId:(NSString *)mobid result:(void (^)(ShareSDKLinkScene *scene, NSError *error))resultHandler;

@end
