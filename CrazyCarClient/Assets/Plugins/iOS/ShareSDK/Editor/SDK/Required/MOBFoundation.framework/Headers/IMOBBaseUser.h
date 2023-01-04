//
//  IMOBBaseUser.h
//  MOBFoundation
//
//  Created by 冯鸿杰 on 2017/9/5.
//  Copyright © 2017年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMOBFDataModel.h"

/**
 基础用户信息
 */
@protocol IMOBBaseUser <IMOBFDataModel>

/**
 获取用户ID
 
 @return 用户ID
 */
- (NSString *)uid;

/**
 获取用户头像
 
 @return 头像
 */
- (NSString *)avatar;

/**
 获取用户昵称
 
 @return 昵称
 */
- (NSString *)nickname;

@end
