//
//  MOBFLogService.h
//  MOBFoundation
//
//  Created by 冯鸿杰 on 17/2/16.
//  Copyright © 2017年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MOBFLogService;


/**
 日志服务协议
 */
@protocol MOBFLogServiceDelegate <NSObject>


/**
 是否需要发送日志

 @param logService 日志服务
 @param logs 已有日志信息集合
 @return YES 表示需要发送日志，NO 表示不需要发送日志
 */
- (BOOL)logService:(MOBFLogService *)logService
     needsSendLogs:(NSArray *)logs;

/**
 发送日志

 @param logService 日志服务
 @param logs 需要发送的日志信息集合
 @param result 发送完成回调，成功时传入YES，否则传入NO
 */
- (void)logService:(MOBFLogService *)logService
       didSendLogs:(NSArray *)logs
            result:(void (^)(BOOL succeed, NSArray *sentLogs))result;

@end

/**
 日志服务
 */
@interface MOBFLogService : NSObject

/**
 委托对象
 */
@property (nonatomic, weak) id<MOBFLogServiceDelegate> delegate;

/**
 失败最大重试次数
 */
@property (nonatomic) NSInteger failRetryMaxCount;

/**
 初始化

 @param name 日志服务名称
 @return 日志服务对象
 */
- (instancetype)initWithName:(NSString *)name;

/**
 初始化

 @param name 日志服务名称
 @param secretKey 密钥（AES）
 @return 日志服务对象
 */
- (instancetype)initWithName:(NSString *)name
                   secretKey:(NSString *)secretKey;

/**
 写入数据

 @param data 日志数据
 */
- (void)writeData:(id<NSCoding>)data;

/**
 写入数据数组

 @param data 日志数据
 */
- (void)writeDatas:(NSArray *)data;

/**
 同步写入数据

 @param data 日志数据
 */

- (void)syncWriteData:(id<NSCoding>)data;

/**
 需要发送日志，服务会对当前日志进行检测，如果发现存在日志会跟委托进行确认是否需要发送，然后再进行后续操作
 */
- (void)needsSendLog;

/**
 需要发送日志，服务会对当前日志进行检测，如果发现存在日志会跟委托进行确认是否需要发送，然后再进行后续操作

 @param time 延时检测时间
 */
- (void)needsSendLogAfterTime:(NSTimeInterval)time;

@end
