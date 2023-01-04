//
//  ShareSDK+XML.h
//  ShareSDK
//
//  Created by chenjd on 16/6/6.
//  Copyright © 2016年 掌淘科技. All rights reserved.
//

#import <ShareSDK/ShareSDK.h>

@interface ShareSDK (XML)

/**
 *  使用配置文件的方式分享
 *
 *  @param contentName         ShareContent.xml内<Content>标签name属性的值
 *  @param platformType        平台类型
 *  @param customFields        自定义字段
 *  @param stateChangedHandler 状态变更回调处理
 */
+ (void)shareWithContentName:(NSString *)contentName
                    platform:(SSDKPlatformType)platformType
                customFields:(NSDictionary *)customFields
              onStateChanged:(SSDKShareStateChangedHandler)stateChangedHandler;

/**
 *  获取配置文件分享参数
 *
 *  @param contentName  分享内容节点名称
 *  @param customFields 自定义字段
 *
 *  @return 分享参数
 */
+ (NSMutableDictionary *)getShareParamsWithContentName:(NSString *)contentName customFields:(NSDictionary *)customFields;


@end
