//
//  SSEBaseUser.h
//  ShareSDKExtension
//
//  Created by fenghj on 15/6/24.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MOBFoundation/MOBFDataModel.h>

/**
 *  基础用户信息对象
 */
@interface SSEBaseUser : MOBFDataModel

/**
 *  关联标识, 能够与应用用户系统中的用户唯一对应的标识
 */
@property (nonatomic, copy) NSString *linkId;

/**
 *  关联的社交用户信息
 */
@property (nonatomic, strong) NSMutableDictionary *socialUsers;

/**
 *  更新用户信息, 当成功登录后会自动触发此方法进行用户信息更新, 一般用于在登录成功后将服务器端用户信息赋值于该对象，子类需要覆盖此方法实现
 *
 *  @param data 数据
 */
- (void)updateInfo:(id)data;

@end
