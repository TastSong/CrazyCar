//
//  MOBFDebug.h
//  MOBFoundation
//
//  Created by 冯 鸿杰 on 15/2/4.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  调试工具类
 */
@interface MOBFDebug : NSObject

/**
 *  输出调试日志
 *
 *  @param format 日志格式
 *  @param ... 日志参数
 */
+ (void)log:(NSString *)format, ... NS_FORMAT_FUNCTION(1, 2);

/**
 *  观察释放对象，指定类型的被释放对象会打印在Console中。
 *
 *  @param type 对象类型
 */
+ (void)watchDeallocObjectWithType:(Class)type;

@end
