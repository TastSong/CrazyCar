//
//  MobSDK.h
//  MOBFoundation
//
//  Created by liyc on 17/2/23.
//  Copyright © 2017年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MOBSDKDef.h"

/**
 MobSDK
 */
@interface MobSDK : NSObject

/**
 获取版本号

 @return 版本号
 */
+ (NSString * _Nonnull)version;

/**
 获取应用标识
 
 @return 应用标识
 */
+ (NSString * _Nullable)appKey;

/**
 获取应用密钥

 @return 应用密钥
 */
+ (NSString * _Nullable)appSecret;

/**
 获取当前国际域名

 @return 域名
 */
+ (NSString *_Nullable)getInternationalDomain;

/**
 设置国际域名

 @param domainType 域名类型
 */
+ (void)setInternationalDomain:(MOBFSDKDomainType)domainType;

/**
 变更应用密钥，针对服务器刷新应用密钥后，可以通过该方法进行修改

 @param appSecret 应用密钥
 */
+ (void)changeAppSecret:(NSString * _Nonnull)appSecret;

/**
 注册appKey、appSecret

 @param appKey appKey
 @param appSecret appSecret
 */
+ (void)registerAppKey:(NSString * _Nonnull)appKey
             appSecret:(NSString * _Nonnull)appSecret;

#pragma mark - User


/**
 设置用户

 @param uid 用户标识，对应应用自身用户系统的用户唯一标志，不一定是实际的用户ID，可以通过数据变换的方式（如：MD5（userID））来生成该ID，但一定要能够唯一标识用户。设置nil表示注销用户，解除绑定
 @param nickname 昵称
 @param avatar 头像
 @param userData 用户自定义数据
 */
+ (void)setUserWithUid:(NSString * _Nullable)uid
              nickName:(NSString * _Nullable)nickname
                avatar:(NSString * _Nullable)avatar
              userData:(NSDictionary * _Nullable)userData;

/**
 设置用户
 
 @param uid 用户标识，对应应用自身用户系统的用户唯一标志，不一定是实际的用户ID，可以通过数据变换的方式（如：MD5（userID））来生成该ID，但一定要能够唯一标识用户。设置nil表示注销用户，解除绑定
 @param nickname 昵称
 @param avatar 头像
 @param userData 用户自定义数据
 */
+ (void)setUserWithUid:(NSString * _Nullable)uid
              nickName:(NSString * _Nullable)nickname
                avatar:(NSString * _Nullable)avatar
                  sign:(NSString * _Nullable)sign
              userData:(NSDictionary * _Nullable)userData;


/**
 清空用户
 */
+ (void)clearUser;

@end
