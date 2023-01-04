//
//  MOBFDataService.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-21.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  数据服务
 */
@interface MOBFDataService : NSObject

/**
 *  获取数据服务共享实例对象
 *
 *  @return 数据服务对象
 */
+ (MOBFDataService *)sharedInstance;

/**
 *  设置共享数据
 *
 *  @param data 数据
 *  @param key  标识
 */
- (void)setSharedData:(id)data forKey:(NSString *)key;

/**
 *  获取共享数据
 *
 *  @param key 标识
 *
 *  @return 数据
 */
- (id)sharedDataForKey:(NSString *)key;

/**
 *  开始缓存数据事务
 *
 *  @param domain   数据域
 */
- (void)beginCacheDataTransForDomain:(NSString *)domain;

/**
 *  结束缓存数据事务
 *
 *  @param domain   数据域
 */
- (void)endCacheDataTransForDomain:(NSString *)domain;

/**
 *  设置缓存数据
 *
 *  @param data     数据
 *  @param key      标识
 *  @param domain   数据域
 */
- (void)setCacheData:(id)data forKey:(NSString *)key domain:(NSString *)domain;

/**
 *  获取缓存数据
 *
 *  @param key 标识
 *  @param domain   数据域
 *
 *  @return 数据
 */
- (id)cacheDataForKey:(NSString *)key domain:(NSString *)domain;

/**
 *  开始安全数据事务
 */
- (void)beginSecureDataTrans;

/**
 *  结束安全数据事务
 */
- (void)endSecureDataTrans;

/**
 *  设置安全数据
 *
 *  @param data 数据
 *  @param key  标识
 */
- (void)setSecureData:(id)data forKey:(NSString *)key;

/**
 *  获取安全数据
 *
 *  @param key 标识
 *
 *  @return 数据
 */
- (id)secureDataForKey:(NSString *)key;

@end
