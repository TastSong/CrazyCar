//
//  MOBFUser.h
//  MOBFoundation
//
//  Created by 冯鸿杰 on 17/3/17.
//  Copyright © 2017年 MOB. All rights reserved.
//

#import <MOBFoundation/MOBFoundation.h>
#import "IMOBBaseUser.h"
#import "MOBFDataModel.h"

/**
 用户信息
 */
@interface MOBFUser : MOBFDataModel <IMOBBaseUser>

/**
 用户标识
 */
@property (nonatomic, copy, readonly, nullable) NSString * uid;

/**
 应用的用户标识
 */
@property (nonatomic, copy, readonly, nullable) NSString * appUid;

/**
 用户头像
 */
@property (nonatomic, copy, nullable) NSString * avatar;

/**
 用户昵称
 */
@property (nonatomic, copy, nullable) NSString * nickname;

/**
 签名信息
 */
@property (nonatomic, copy, nullable) NSString * sign;

/**
 用户自定义数据
 */
@property (nonatomic, strong, nullable) NSDictionary * userdata;

/**
 创建第三方用户信息

 @param uid 用户标识，能够表示你的用户唯一性的标识
 @param avatar 用户头像地址
 @param nickname 用户名称
 @return 用户信息
 */
+ (MOBFUser* _Nullable)userWithUid:(NSString * _Nonnull)uid
                            avatar:(NSString * _Nullable)avatar
                          nickname:(NSString * _Nullable)nickname __deprecated_msg("use userWithAppUid:avatar:nickname:userData: method instead.");

/**
 创建第三方用户信息

 @param appUid 用户标识，能够表示你的用户唯一性的标识
 @param avatar 用户头像地址
 @param nickname 用户名称
 @param userdata 用户自定义数据
 @return 用户信息
 */
+ (MOBFUser* _Nullable)userWithAppUid:(NSString * _Nonnull )appUid
                               avatar:(NSString * _Nullable)avatar
                             nickname:(NSString * _Nullable)nickname
                             userdata:(NSDictionary * _Nullable)userdata;

/**
 创建第三方用户信息
 
 @param appUid 用户标识，能够表示你的用户唯一性的标识
 @param avatar 用户头像地址
 @param nickname 用户名称
 @param userdata 用户自定义数据
 @return 用户信息
 */
+ (MOBFUser* _Nullable)userWithAppUid:(NSString * _Nonnull )appUid
                               avatar:(NSString * _Nullable)avatar
                             nickname:(NSString * _Nullable)nickname
                                 sign:(NSString * _Nullable)sign
                             userdata:(NSDictionary * _Nullable)userdata;


@end
