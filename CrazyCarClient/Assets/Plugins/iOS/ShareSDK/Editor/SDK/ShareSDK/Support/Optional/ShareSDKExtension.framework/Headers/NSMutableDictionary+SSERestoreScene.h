//
//  NSMutableDictionary+SSERestoreScene.h
//  ShareSDKExtension
//
//  Created by maxl on 2019/8/28.
//  Copyright © 2019 mob. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSMutableDictionary (SSERestoreScene)

/**
 *  设置分享参数
 *
 *  @param text     文本
 *  @param images   图片集合,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param url      网页路径/应用路径
 *  @param title    标题
 *  @param linkParameter     场景的自定义参数
 */
- (void)SSDKSetupShareParamsByText:(NSString *)text
                            images:(id)images
                               url:(NSURL *)url
                             title:(NSString *)title
                      linkParameter:(NSDictionary <NSString *,NSString*>*)linkParameter;
@end

