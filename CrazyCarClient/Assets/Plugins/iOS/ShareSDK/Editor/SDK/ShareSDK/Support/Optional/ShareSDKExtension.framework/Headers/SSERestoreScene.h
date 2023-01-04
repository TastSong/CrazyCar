//
//  SSERestoreScene.h
//  ShareSDKExtension
//
//  Created by wkx on 2019/7/22.
//  Copyright © 2019年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSERestoreScene : NSObject

/**
 路径，自定义的路径
 */
@property (nonatomic, copy, readonly, nullable) NSString *path;

/**
 自定义参数
 */
@property (nonatomic, copy, readonly, nullable) NSDictionary *params;

/**
 类名，即需要恢复的控制器名称
 */
@property (nonatomic, copy, readonly, nullable) NSString *className;

@end
