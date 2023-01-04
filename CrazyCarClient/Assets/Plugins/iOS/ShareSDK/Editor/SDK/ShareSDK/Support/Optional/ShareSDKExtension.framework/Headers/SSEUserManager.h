//
//  SSEUserManager.h
//  ShareSDKExtension
//
//  Created by fenghj on 15/6/24.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SSEBaseUser;

/**
 *  用户管理器
 */
@interface SSEUserManager : NSObject

/**
 *  当前用户关联标识
 */
@property (nonatomic, copy) NSString *currentUserLinkId;

/**
 *  用户集合
 */
@property (nonatomic, strong, readonly) NSDictionary *users;

/**
 *  获取用户默认管理器
 *
 *  @return 管理器对象
 */
+ (instancetype)defaultManager;

/**
 *  添加用户
 *
 *  @param user 用户信息
 */
- (void)addUser:(SSEBaseUser *)user;

/**
 *  移除用户
 *
 *  @param user 用户信息
 */
- (void)removeUser:(SSEBaseUser *)user;

/**
 *  保存信息
 */
- (void)save;

@end
