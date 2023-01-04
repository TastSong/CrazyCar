//
//  SSUIShareSheetConfiguration.h
//  ShareSDKUI
//
//  Created by Max on 2018/4/3.
//  Copyright © 2018年 Max. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  ShareSDK UI风格
 */
typedef NS_ENUM(NSInteger, SSUIActionSheetStyle)  {
    SSUIActionSheetStyleSystem     = 0,    // 系统类型，默认
    SSUIActionSheetStyleSimple     = 1,    // 简洁类型
};

typedef NS_ENUM(NSUInteger, SSUIItemAlignment) {
    SSUIItemAlignmentLeft,
    SSUIItemAlignmentCenter,
    SSUIItemAlignmentRight,
};


@interface SSUIShareSheetConfiguration : NSObject


@property (nonatomic, assign) SSUIUserInterfaceStyle overrideUserInterfaceStyle;

/**
 *  设置ShareSDK UI风格
 */
@property (assign, nonatomic) SSUIActionSheetStyle style;

/**
 * 竖屏设置每行多少个item
 */
@property (assign, nonatomic) NSInteger columnPortraitCount;

/**
 * 横屏设置每行多少个item
 */
@property (assign, nonatomic) NSInteger columnLandscapeCount;

/**
 *  设置分享菜单栏的背景颜色
 */
@property (strong, nonatomic) UIColor *shadeColor;

/**
 *  设置分享菜单栏的背景颜色
 */
@property (strong, nonatomic) UIColor *menuBackgroundColor;

/**
 *  设置标题文本颜色
 */
@property (strong, nonatomic) UIColor *itemTitleColor;

/**
 *  设置标题文本字体
 */
@property (strong, nonatomic) UIFont *itemTitleFont;

/**
 *  取消按钮是否隐藏，默认不隐藏
 */
@property (assign, nonatomic, getter=isCancelButtonHidden) BOOL cancelButtonHidden;

/**
 *  设置取消按钮标签文本颜色
 */
@property (strong, nonatomic) UIColor *cancelButtonTitleColor;

/**
 *  设置取消按钮背景色
 */
@property (strong, nonatomic) UIColor *cancelButtonBackgroundColor;

/**
 *  设置UIPageControl的默认Indicator的颜色
 */
@property (strong, nonatomic) UIColor *pageIndicatorTintColor;

/**
 *  设置UIPageControl的选中Indicator的颜色
 */
@property (strong, nonatomic) UIColor *currentPageIndicatorTintColor;

/**
 *  设置支持的页面方向（单独控制分享菜单栏）
 */
@property (assign, nonatomic) UIInterfaceOrientationMask interfaceOrientationMask;

/**
 *  设置分享菜单栏状态栏风格
 */
@property (assign, nonatomic) UIStatusBarStyle statusBarStyle;

/**
 *  对齐方式 注：简约版菜单无居中对齐
 */
@property (assign, nonatomic) SSUIItemAlignment itemAlignment;

/**
 *  设置直接分享的平台（不弹编辑界面）
 */
@property (strong, nonatomic) NSArray *directSharePlatforms;

@end
