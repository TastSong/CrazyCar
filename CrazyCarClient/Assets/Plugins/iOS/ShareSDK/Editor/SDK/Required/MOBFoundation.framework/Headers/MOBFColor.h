//
//  MOBFColorUtils.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-19.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  颜色工具类
 */
@interface MOBFColor : NSObject

/**
 *  获取颜色对象
 *
 *  @param rgb RGB颜色值
 *
 *  @return 颜色对象
 */
+ (UIColor *)colorWithRGB:(NSUInteger)rgb;

/**
 *  获取颜色对象
 *
 *  @param argb ARGB颜色值
 *
 *  @return 颜色对象
 */
+ (UIColor *)colorWithARGB:(NSUInteger)argb;

@end
