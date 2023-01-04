//
//  MOBFPluginManager.h
//  MOBFoundation
//
//  Created by fenghj on 15/6/2.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMOBFPlugin.h"

/**
 *  插件创建事件处理
 *
 *  @return 插件对象
 */
typedef id<IMOBFPlugin>(^MOBFPluginConstructHandler) ();

/**
 *  插件管理器
 */
@interface MOBFPluginManager : NSObject

/**
 *  获取默认的插件管理器
 *
 *  @return 插件管理器
 */
+ (instancetype) defaultManager;

/**
 *  注册插件
 *
 *  @param pluginConstructHandler 插件构造事件处理器
 *  @param key                    插件标识
 *
 *  @return YES 表示注册成功，NO 表示注册失败，有可能已存在此插件
 */
- (BOOL)registerPlugin:(MOBFPluginConstructHandler)pluginConstructHandler forKey:(NSString *)key;

/**
 *  判断是否已经注册插件
 *
 *  @param key 插件标识
 *
 *  @return YES 表示已经注册， NO 表示尚未注册
 */
- (BOOL)isRegisterPluginForKey:(NSString *)key;

/**
 *  获取插件对象
 *
 *  @param key 插件标识
 *
 *  @return 插件对象，nil 表示该标志的插件不存在
 */
- (id<IMOBFPlugin>)pluginForKey:(NSString *)key;

/**
 *  卸载插件
 *
 *  @param key 插件标识
 */
- (void)unloadPluginForKey:(NSString *)key;

@end
