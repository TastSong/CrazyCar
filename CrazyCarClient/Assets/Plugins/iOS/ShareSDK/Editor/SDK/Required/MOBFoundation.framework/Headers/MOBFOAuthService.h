//
//  MOBFOAuthService.h
//  MOBFoundation
//
//  Created by fenghj on 15/6/9.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <MOBFoundation/MOBFoundation.h>

/**
 *  OAuth服务
 */
@interface MOBFOAuthService : MOBFHttpService

/**
 *  设置密钥
 *
 *  @param consumerSecret   消费者密钥，不允许为nil
 *  @param oauthTokenSecret 令牌密钥，如果尚未取得令牌密钥，可以传入nil
 */
- (void)setSecretByConsumerSecret:(NSString *)consumerSecret
                 oauthTokenSecret:(NSString *)oauthTokenSecret;

/**
 *  添加OAuth参数
 *
 *  @param value 参数值
 *  @param key   参数名字
 */
- (void)addOAuthParameter:(id)value forKey:(NSString *)key;

/**
 *  添加OAuth参数
 *
 *  @param oauthParameters OAuth参数集合
 */
- (void)addOAuthParameters:(NSDictionary *)oauthParameters;

/**
 *  发送HTTP请求
 *
 *  @param urlString             请求地址
 *  @param method                请求方式
 *  @param parameters            请求参数
 *  @param headers               请求头集合
 *  @param oauthParameters       OAuth请求参数
 *  @param consumerSecret        消费者密钥
 *  @param oauthSecret           OAuth令牌密钥
 *  @param resultHandler         返回回调
 *  @param faultHandler          错误回调
 *  @param uploadProgressHandler 上传数据进度回调
 *
 *  @return HTTP服务对象
 */
+ (MOBFOAuthService *)sendRequestByURLString:(NSString *)urlString
                                      method:(NSString *)method
                                  parameters:(NSDictionary *)parameters
                                     headers:(NSDictionary *)headers
                             oauthParameters:(NSDictionary *)oauthParameters
                              consumerSecret:(NSString *)consumerSecret
                            oauthTokenSecret:(NSString *)oauthTokenSecret
                                    onResult:(MOBFHttpResultEvent)resultHandler
                                     onFault:(MOBFHttpFaultEvent)faultHandler
                            onUploadProgress:(MOBFHttpUploadProgressEvent)uploadProgressHandler;

@end
