//
//  SSUIPlatformInfo.h
//  ShareSDKUI
//
//  Created by Max on 2018/4/9.
//  Copyright © 2018年 Max. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSUIPlatformItem : NSObject

+ (instancetype)itemWithPlatformType:(SSDKPlatformType)platformType;

@property (copy, nonatomic) NSString *platformId;
@property (strong, nonatomic)  UIImage *iconNormal;
@property (strong, nonatomic)  UIImage *iconSimple;
@property (strong, nonatomic)  NSString *platformName;

- (void)addTarget:(id)target action:(SEL)selector;

/**
 *  触发点击
 */
- (void)triggerClick;

@end
