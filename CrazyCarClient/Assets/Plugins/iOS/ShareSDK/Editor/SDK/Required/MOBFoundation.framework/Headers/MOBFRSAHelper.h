//
//  MOBFRSAHelper.h
//  MOBFoundation
//
//  Created by fenghj on 15/7/29.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MOBFRSAKey.h"


/**
 *  RSA加解密助手
 */
@interface MOBFRSAHelper : NSObject

/**
 *  密钥信息
 */
@property (nonatomic, readonly) MOBFRSAKey *key;

/**
 *  初始化RSA加密器
 *
 *  @param keySize 密钥长度
 *
 *  @return 加密器对象
 */
- (instancetype)initWithKeySize:(int)keySize;

/**
 *  初始化RSA加密器
 *
 *  @param keySize    密钥长度
 *  @param publicKey  公钥
 *  @param privateKey 私钥
 *  @param modulus    模数
 *
 *  @return 加密器对象
 */
- (instancetype)initWithKeySize:(int)keySize
                      publicKey:(NSString *)publicKey
                     privateKey:(NSString *)privateKey
                        modulus:(NSString *)modulus;

/**
 *  加密数据
 *
 *  @param data     数据
 *
 *  @return 加密后数据
 */
- (NSData *)encryptWithData:(NSData *)data;

/**
 *  解密数据
 *
 *  @param data 加密后数据
 *
 *  @return 解密后数据
 */
- (NSData *)decryptWithData:(NSData *)data;

@end
