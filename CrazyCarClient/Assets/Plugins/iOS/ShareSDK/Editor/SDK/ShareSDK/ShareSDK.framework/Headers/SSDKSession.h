//
//  SSDKSession.h
//  ShareSDK
//
//  Created by Max on 2018/7/27.
//  Copyright © 2018年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSDKSession : NSObject

/**
 会话是否被主动取消
 */
@property (assign, nonatomic, readonly) BOOL isCancelled;

/**
 session的目标平台
 */
@property (assign, nonatomic) NSInteger platformType;

/**
 主动取消此次会话
 */
- (void) cancel;

@end
