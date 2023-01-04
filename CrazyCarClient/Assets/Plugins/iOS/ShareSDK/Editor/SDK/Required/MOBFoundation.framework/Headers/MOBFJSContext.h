//
//  MOBFJSContext.h
//  MOBFoundation
//
//  Created by 冯 鸿杰 on 15/2/27.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MOBFJSTypeDefine.h"

@class JSContext;

/**
 *  JavaScript上下文环境
 */
@interface MOBFJSContext : NSObject

/**
 *  获取默认的上下文环境
 *
 *  @return JS上下文环境
 */
+ (instancetype)defaultContext;


/**
 初始化

 @param context JS上下文
 @return JS上下文
 */
- (instancetype)initWithContext:(JSContext *)context;

/**
 *  注册方法
 *
 *  @param name  方法名称
 *  @param block 方法执行
 */
- (void)registerJSMethod:(NSString *)name block:(MOBFJSMethodIMP)block;

/**
 *  调用方法
 *
 *  @param name      方法名称
 *  @param arguments 参数
 *
 *  @return 返回值
 */
- (NSString *)callJSMethod:(NSString *)name arguments:(NSArray *)arguments;

/**
 *  加载插件
 *
 *  @param path 插件脚本文件路径
 *  @param name 插件名称
 */
- (void)loadPluginWithPath:(NSString *)path forName:(NSString *)name;

/**
 *  加载插件
 *
 *  @param content 插件脚本内容
 *  @param name 插件名称
 */
- (void)loadPlugin:(NSString *)content forName:(NSString *)name;

/**
 *  执行脚本
 *
 *  @param script 脚本
 */
- (void)runScript:(NSString *)script;

@end
