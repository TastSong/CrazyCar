//
//  SSEThirdPartyLoginHelper.h
//  ShareSDKExtension
//
//  Created by fenghj on 15/6/17.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ShareSDK/ShareSDK.h>

@class SSEBaseUser;

/**
 *  用户关联事件处理器
 *
 *  @param linkId 关联ID，能够标识用户在应用中的唯一标识。
 *  @param user   用户信息
 *  @param userData 用于将自定义数据传递到用户信息中。
 */
typedef void (^SSEUserAssociateHandler) (NSString *linkId, SSDKUser *user, id userData);

/**
 *  用户同步事件处理器
 *
 *  @param user             社交用户信息
 *  @param associateHandler 关联事件处理
 */
typedef void (^SSEUserSyncHandler) (SSDKUser *user, SSEUserAssociateHandler associateHandler);

/**
 *  用户登录返回事件处理器
 *
 *  @param state 状态
 *  @param user  用户信息
 *  @param error 错误信息
 */
typedef void (^SSELoginResultHandler) (SSDKResponseState state, SSEBaseUser *user, NSError *error);

/**
 *  第三方登录助手
 */
@interface SSEThirdPartyLoginHelper : NSObject

/**
 *  用户登录
 *
 *  @param platform             平台类型
 *  @param userSyncHandler      用户同步处理，如关联授权用户信息操作在此事件中进行
 *  @param loginResultHandler   登录返回事件处理
 */
+ (void)loginByPlatform:(SSDKPlatformType)platform
             onUserSync:(SSEUserSyncHandler)userSyncHandler
          onLoginResult:(SSELoginResultHandler)loginResultHandler;

/**
 *  注销用户
 *
 *  @param user 用户信息
 *
 *  @return YES 注销成功, NO 注销失败
 */
+ (BOOL)logout:(SSEBaseUser *)user;

/**
 *  当前登录用户, 如果为nil则表示尚未有用户进行登陆
 *
 *  @return 用户信息
 */
+ (SSEBaseUser *)currentUser;

/**
 *  切换用户
 *
 *  @param user 用户信息
 *
 *  @return YES 切换成功，NO 切换失败
 */
+ (BOOL)changeUser:(SSEBaseUser *)user;

/**
 *  获取当前已登录的用户集合, 集合中元素为SSEBaseUser
 *
 *  @return 用户集合
 */
+ (NSDictionary *)users;

/**
 *  设置用户类型，用于扩展SSEBaseUser类型后更新接口中返回的用户对象类型，如：创建名叫ExtUser类继承于SSEBaseUser，那么在此接口中传入ExtUser则其他的接口中返回的用户类型均为ExtUser类型。
 *
 *  @param userClass 用户类型, 必须为继承SSEBaseUser类的子类型
 */
+ (void)setUserClass:(Class)userClass;

@end
