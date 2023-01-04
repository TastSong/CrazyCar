//
//  SSDKFriendsPaging.h
//  ShareSDK
//
//  Created by 冯 鸿杰 on 15/2/6.
//  Copyright (c) 2015年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MOBFoundation/MOBFDataModel.h>

/**
 *  好友分页信息
 */
@interface SSEFriendsPaging : MOBFDataModel

/**
 *  前一个游标位置
 */
@property (nonatomic) NSInteger prevCursor;

/**
 *  下一个游标位置
 */
@property (nonatomic) NSInteger nextCursor;

/**
 *  总数
 */
@property (nonatomic) NSUInteger total;

/**
 *  是否存在下一页标识
 */
@property (nonatomic) BOOL hasNext;

/**
 *  好友用户信息列表
 */
@property (nonatomic, strong) NSArray *users;

@end
