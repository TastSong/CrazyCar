//
//  SSDKContentEntity.h
//  ShareSDK
//
//  Created by 冯 鸿杰 on 15/2/9.
//  Copyright (c) 2015年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  内容实体
 */
@interface SSDKContentEntity : SSDKDataModel

/**
 *  内容标识
 */
@property (nonatomic, strong) id cid;

/**
 *  分享文本
 */
@property (nonatomic, copy) NSString *text;

/**
 *  分享图片列表,元素为SSDKImage
 */
@property (nonatomic, retain) NSMutableArray *images;

/**
 *  分享链接列表,元素为NSURL
 */
@property (nonatomic, retain) NSMutableArray *urls;

/**
 *  原始数据
 */
@property (nonatomic, retain) NSDictionary *rawData;

@end
