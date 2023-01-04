//
//  MOBFCore.h
//  MOBFoundation
//
//  Created by fenghj on 15/8/31.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  应用程序崩溃通知
 */
extern NSString *const MOBFApplicationCrashNotif;

/**
 *  核心对象
 */
@interface MOBFNotificationCenter : NSObject

/**
 *  添加观察者
 *
 *  @param observer 观察者对象
 *  @param selector 处理器方法
 *  @param name     通知名称
 *  @param object   对象信息
 */
+ (void)addObserver:(NSObject *)observer
           selector:(SEL)selector
               name:(NSString *)name
             object:(id)object;

/**
 *  移除观察者
 *
 *  @param observer 观察者对象
 */
+ (void)removeObserver:(NSObject *)observer;

/**
 *  移除观察者
 *
 *  @param observer 观察者对象
 *  @param name     通知名称
 *  @param object   对象信息
 */
+ (void)removeObserver:(NSObject *)observer
                  name:(NSString *)name
                object:(id)object;

@end
