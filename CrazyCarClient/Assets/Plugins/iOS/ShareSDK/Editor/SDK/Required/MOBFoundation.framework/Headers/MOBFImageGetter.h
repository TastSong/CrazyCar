//
//  MOBFImageGetter.h
//  MOBFoundation
//
//  Created by fenghj on 16/1/21.
//  Copyright © 2016年 MOB. All rights reserved.
//

#import "MOBFImageObserver.h"
#import "MOBFImageServiceTypeDef.h"
#import <Foundation/Foundation.h>

@class MOBFImageCachePolicy;

/**
 *  图片获取器
 */
@interface MOBFImageGetter : NSObject

/**
 *  获取共享图片服务实例
 *
 *  @return 图片服务实例
 */
+ (instancetype _Nullable )sharedInstance;

/**
 初始化图片服务实例

 @param cachePolicy 缓存策略
 @return 图片服务实例
 */
- (instancetype _Nullable )initWithCachePolicy:(MOBFImageCachePolicy *_Nullable)cachePolicy;

/**
 *  是否存在图片缓存
 *
 *  @param url 图片URL
 *
 *  @return YES 表示图片已缓存，NO 图片未缓存
 */
- (BOOL)existsImageCacheWithURL:(NSURL *_Nullable)url;

/**
 *  获取图片
 *
 *  @param url           图片路径
 *  @param resultHandler 返回事件
 *
 *  @return 服务观察者
 */
- (MOBFImageObserver *_Nonnull)getImageWithURL:(NSURL *_Nullable)url
                                        result:(MOBFImageGetterResultHandler _Nullable )resultHandler;


/**
 *  获取图片
 *
 *  @param url            图片路径
 *  @param allowReadCache 是否允许读取缓存
 *  @param resultHandler  返回事件
 *
 *  @return 服务观察者
 */
- (MOBFImageObserver *_Nullable)getImageWithURL:(NSURL * _Nullable)url
                        allowReadCache:(BOOL)allowReadCache
                                result:(MOBFImageGetterResultHandler _Nullable )resultHandler;

/**
 获取图片数据

 @param url           图片路径
 @param resultHandler 返回事件

 @return 服务观察者
 */
- (MOBFImageObserver *_Nullable)getImageDataWithURL:(NSURL * _Nullable)url
                                    result:(MOBFImageDataGetterResultHandler _Nullable)resultHandler;

/**
 获取图片数据
 
 @param url            图片路径
 @param allowReadCache 是否允许读取缓存
 @param resultHandler  返回事件
 
 @return 服务观察者
 */
- (MOBFImageObserver *_Nullable)getImageDataWithURL:(NSURL * _Nullable)url
                            allowReadCache:(BOOL)allowReadCache
                                    result:(MOBFImageDataGetterResultHandler _Nullable)resultHandler;

/**
 *  移除图片观察者
 *
 *  @param imageObserver 图片观察者
 */
- (void)removeImageObserver:(MOBFImageObserver * _Nullable)imageObserver;

/**
 *  删除磁盘中缓存中图片
 *
 *  @param url 图片地址
 */
- (void)removeImageForURL:(nullable NSURL *)url;

/**
 *  删除当前缓存策略下磁盘目录中所有图片
 *
 */
- (void)clearDisk;

@end
