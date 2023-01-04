//
//  MOBFDataUtils.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-16.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>
#import <zlib.h>

/**
 *  数据工具类
 */
@interface MOBFData : NSObject

/**
 将一个NSData对象转换为NSString对象，处理由于结束符导致json解析错误问题

 @param data 原始data
 @return 处理后字符串
 */
+ (NSString *)stringByData:(NSData *)data;

/**
 *  使用HMAC-SHA1进行加密
 *
 *  @param data 原始数据
 *  @param key  密钥
 *
 *  @return 加密后数据
 */
+ (NSData *)hmacSha1Data:(NSData *)data forKey:(NSData *)key;

/**
 使用HMAC-MD5进行签名

 @param data 原始数据
 @param key 密钥
 @return 加密后数据
 */
+ (NSData *)hmacMd5Data:(NSData *)data forKey:(NSData *)key;

/**
 *  对数据进行MD5签名
 *
 *  @param data 原始数据
 *
 *  @return 签名后数据
 */
+ (NSData *)md5Data:(NSData *)data;

/**
 *  对数据进行AES128加密
 *
 *  @param data     原始数据
 *  @param key      密钥
 *  @param encoding 字符串编码
 *
 *  @return 加密后数据
 */
+ (NSData *)aes128EncryptData:(NSData *)data
                          key:(NSString *)key
                     encoding:(NSStringEncoding)encoding;

/**
 *  对数据进行AES128解密
 *
 *  @param data     原始数据
 *  @param key      密钥
 *  @param encoding 字符串编码
 *
 *  @return 解密后数据
 */
+ (NSData *)aes128DecryptData:(NSData *)data
                          key:(NSString *)key
                     encoding:(NSStringEncoding)encoding;

/**
 *  对数据进行AES128加密
 *
 *  @param data    原始数据
 *  @param key     密钥
 *  @param options 选项
 *
 *  @return 加密后数据
 */
+ (NSData *)aes128EncryptData:(NSData *)data
                          key:(NSData *)key
                      options:(CCOptions)options;

/**
 *  对数据进行AES128解密
 *
 *  @param data    原始数据
 *  @param key     密钥
 *  @param options 选项
 *
 *  @return 解密后数据
 */
+ (NSData *)aes128DecryptData:(NSData *)data
                          key:(NSData *)key
                      options:(CCOptions)options;

/**
 *  使用GZip压缩数据
 *
 *  @param data 原始数据
 *
 *  @return 压缩后数据
 */
+ (NSData *)compressDataUsingGZip:(NSData *)data;

/**
 *  使用GZip解压缩数据
 *
 *  @param data 原始数据
 *
 *  @return 解压缩后数据
 */
+ (NSData *)uncompressDataUsingGZip:(NSData *)data;

/**
 *  对数据进行MD5签名
 *
 *  @param data 原始数据
 *
 *  @return 签名后字符串
 */
+ (NSString *)stringByMD5Data:(NSData *)data;

/**
 *  使用BASE64编码数据
 *
 *  @param data 原始数据
 *
 *  @return 编码后字符串
 */
+ (NSString *)stringByBase64EncodeData:(NSData *)data;

/**
 *  对数据进行CRC32校验
 *
 *  @param data 数据对象
 *
 *  @return 校验值
 */
+ (uLong)valueByCRC32Data:(NSData *)data;

/**
 *  对数据进行CRC32检验
 *
 *  @param data 原始数据
 *
 *  @return 检验值
 */
+ (NSString *)stringByCRC32Data:(NSData *)data;

/**
 *  将数据转换成16进制字符串
 *
 *  @param data 原始数据
 *
 *  @return 字符串
 */
+ (NSString *)hexStringByData:(NSData *)data;

/**
 *  写入一个32位整数到数据对象中
 *
 *  @param value 整数值
 *  @param data  数据对象
 */
+ (void)writeInt32:(int32_t)value toData:(NSMutableData *)data;

/**
 *  写入一个16位整数到数据对象中
 *
 *  @param value 整数值
 *  @param data  数据对象
 */
+ (void)writeInt16:(int16_t)value toData:(NSMutableData *)data;

/**
 *  读取一个16位整数
 *
 *  @param data   数据对象
 *  @param offset 偏移位置
 *
 *  @return 短整型数据
 */
+ (int16_t)readInt16FromData:(NSData *)data offset:(NSInteger)offset;

/**
 *  读取一个32位整数
 *
 *  @param data   数据对象
 *  @param offset 偏移位置
 *
 *  @return 整型数据
 */
+ (int32_t)readInt32FromData:(NSData *)data offset:(NSInteger)offset;

@end
