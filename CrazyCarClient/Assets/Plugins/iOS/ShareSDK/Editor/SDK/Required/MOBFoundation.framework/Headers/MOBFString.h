//
//  MOBFStringUtils.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-16.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  字符串工具
 */
@interface MOBFString : NSObject

/**
 *  URL编码
 *
 *  @param string   原始字符串
 *  @param encoding 字符串编码
 *
 *  @return 编码后字符串
 */
+ (NSString *)urlEncodeString:(NSString *)string forEncoding:(NSStringEncoding)encoding;

/**
 *  URL解码
 *
 *  @param string   原始字符串
 *  @param encoding 字符串编码
 *
 *  @return 解码后字符串
 */
+ (NSString *)urlDecodeString:(NSString *)string forEncoding:(NSStringEncoding)encoding;

/**
 *  使用SHA1算法进行字符串签名
 *
 *  @param string 原始字符串
 *
 *  @return 签名后字符串
 */
+ (NSString *)sha1String:(NSString *)string;

/**
 *  使用MD5算法进行字符串签名
 *
 *  @param string 原始字符串
 *
 *  @return 签名后字符串
 */
+ (NSString *)md5String:(NSString *)string;

/**
 *  获取GUID字符串
 *
 *  @return GUID字符串
 */
+ (NSString *)guidString;

/**
 *  使用HMAC-SHA1进行签名
 *
 *  @param string 原始字符串
 *  @param key    密钥
 *
 *  @return 签名后的数据
 */
+ (NSData *)dataByHMACSha1String:(NSString *)string forKey:(NSString *)key;

/**
 使用HMAC-MD5进行签名

 @param string 原始字符串
 @param key 密钥
 @return 签名后的数据
 */
+ (NSData *)dataByHMACMd5String:(NSString *)string forKey:(NSString *)key;

/**
 *  使用BASE64进行解码
 *
 *  @param string 原始字符串
 *
 *  @return 解码后数据
 */
+ (NSData *)dataByBase64DecodeString:(NSString *)string;

/**
 *  使用BASE64进行解码
 *
 *  @param string 原始字符串
 *
 *  @return 解码后数据string
 */
+ (NSString *)stringByBase64DecodeString:(NSString *)string;

/**
 *  判断字符串中是否包含链接
 *
 *  @param string 原始字符串
 *
 *  @return YES 表示包含URL，NO 表示不包含
 */
+ (BOOL)containsURLByString:(NSString *)string;

/**
 *	@brief	解析HTTP参数字符串，字符串格式为：参数名=参数值&参数名=参数值
 *
 *	@param 	string 	参数字符串
 *
 *	@return	解析后字典对象
 */
+ (NSDictionary *)parseURLParametersString:(NSString *)string;

/**
 *	@brief	转换16进制字符串为NSData
 *
 *  @param  string  二进制流的16进制字符串
 *
 *	@return	二进制数据对象
 */
+ (NSData *)dataByHexString:(NSString *)string;


/**
 *  @brief    转换版本号
 
 *  @param ver 版本号
 *  @return 转换为5位整数表示。
 */
+ (NSInteger)convertVersion:(NSString *)ver;

@end
