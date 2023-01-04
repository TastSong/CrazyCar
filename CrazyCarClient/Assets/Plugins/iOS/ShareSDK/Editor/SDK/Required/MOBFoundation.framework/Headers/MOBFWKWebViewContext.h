//
//  MOBFWKWebViewContext.h
//  MOBFoundation
//
//  Created by 崔林豪 on 2018/11/6.
//  Copyright © 2018年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MOBFJSTypeDefine.h"
#import <WebKit/WebKit.h>
#include <JavaScriptCore/JavaScript.h>


NS_ASSUME_NONNULL_BEGIN


@interface MOBFWKWebViewContext : NSObject

@property (nonatomic, strong) WKWebView *webView;

/**
 *  初始化
 *
 *  @return 单例对象
 */
+ (instancetype)defaultContext;

/**
 初始化
 
 @param webview Web视图，如果传入视图带有委托处理，请在传入该参数前将委托设置，否则会奔溃。
 @return 类实例
 */
- (instancetype)initWithWKWebView:(WKWebView *)webview;


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
 *  创建新版本JS解析器
 */
- (void)setupWKWebViewNewJSParser;


- (void)initWKWebViewDelegate:(WKWebView *)wkWebView;

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



/**
 *  回调JS
 *
 *  @param callback   回调方法名称
 *  @param resultData 回调数据
 */
- (void)callback:(NSString *)callback resultData:(NSDictionary *)resultData;

@end

NS_ASSUME_NONNULL_END
