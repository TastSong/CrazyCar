//
//  MOBHttpPostedFile.h
//  MOBFoundation
//
//  Created by 冯 鸿杰 on 15/1/30.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	HTTP上传文件
 */
@interface MOBFHttpPostedFile : NSObject

/**
 *	@brief	文件名称
 */
@property (nonatomic, copy) NSString *fileName;

/**
 *	@brief	内容类型
 */
@property (nonatomic, copy) NSString *contentType;

/**
 *	@brief	文件数据
 */
@property (nonatomic, retain) NSData *fileData;

/**
 *	@brief	内容传输编码
 */
@property (nonatomic, copy) NSString *transferEncoding;

/**
 *	@brief	创建上传文件
 *
 *  @param  fileName    文件名称
 *	@param 	data 	文件数据
 *  @param  contentType 内容类型
 *  @param  transferEncoding     传输编码
 *
 *	@return	上传文件信息
 */
+ (MOBFHttpPostedFile *)httpPostedFileByFileName:(NSString *)fileName
                                           data:(NSData *)data
                                    contentType:(NSString *)contentType
                               transferEncoding:(NSString *)transferEncoding;

/**
 *	@brief	创建上传文件
 *
 *	@param 	path 	文件路径
 *  @param  contentType 内容类型
 *
 *	@return	上传文件信息
 */
+ (MOBFHttpPostedFile *)httpPostedFileByPath:(NSString *)path
                                contentType:(NSString *)contentType;


@end
