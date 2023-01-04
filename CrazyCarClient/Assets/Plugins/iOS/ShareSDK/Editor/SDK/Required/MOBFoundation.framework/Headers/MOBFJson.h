//
//  MOBFJson.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-20.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  JSON工具类
 */
@interface MOBFJson : NSObject

/**
 *  通过JSON字符串反序列化为对象
 *
 *  @param jsonString JSON字符串
 *
 *  @return 对象
 */
+ (id)objectFromJSONString:(NSString *)jsonString;

/**
 *  通过JSON数据反序列化为对象
 *
 *  @param jsonData JSON数据
 *
 *  @return 对象
 */
+ (id)objectFromJSONData:(NSData *)jsonData;

/**
 *  通过对象序列化为JSON字符串
 *
 *  @param object 对象
 *
 *  @return JSON字符串
 */
+ (NSString *)jsonStringFromObject:(id)object;

/**
 *  通过对象序列化为JSON字符串
 *
 *  @param object 对象
 *  @param block  未解析类型回调
 *
 *  @return JSON字符串
 */
+ (NSString *)jsonStringFromObject:(id)object serializeUnsupportedClassesUsingBlock:(id(^)(id object))block;

/**
 *  通过对象序列化为JSON数据
 *
 *  @param object 对象
 *
 *  @return JSON数据
 */
+ (NSData *)jsonDataFromObject:(id)object;

/**
 *  通过对象序列化为JSON数据
 *
 *  @param object 对象
 *  @param block  未解析类型回调
 *
 *  @return JSON数据
 */
+ (NSData *)jsonDataFromObject:(id)object serializeUnsupportedClassesUsingBlock:(id(^)(id object))block;

@end
