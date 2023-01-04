//
//  MOBFJSMethod.h
//  MOBFoundation
//
//  Created by 冯 鸿杰 on 15/2/27.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MOBFJSTypeDefine.h"

/**
 *  JS方法
 */
@interface MOBFJSMethod : NSObject

/**
 *  方法名称
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 *  方法实现
 */
@property (nonatomic, strong, readonly) MOBFJSMethodIMP imp;

/**
 *  初始化方法
 *
 *  @param name 方法名称
 *  @param imp  方法实现
 *
 *  @return 方法对象
 */
- (id)initWithName:(NSString *)name imp:(MOBFJSMethodIMP)imp;

@end
