//
//  SSUIEditorConfiguration.h
//  ShareSDKUI
//
//  Created by Max on 2018/4/10.
//  Copyright © 2018年 Max. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SSUIEditorConfiguration : NSObject

//设置显示模式
@property (nonatomic, assign) SSUIUserInterfaceStyle overrideUserInterfaceStyle;
/**
 设置iPhone导航栏背景
 */
@property (strong, nonatomic) UIImage *iPhoneNavigationBarBackgroundImage;

/**
 设置iPhone导航栏颜色
 */
@property (strong, nonatomic) UIColor *iPhoneNavigationBarBackgroundColor;

/**
 设置iPad导航栏颜色
 */
@property (strong, nonatomic) UIColor *iPadNavigationBarBackgroundColor;

/**
 设置编辑界面背景颜色
 */
@property (strong, nonatomic) UIColor *editorViewBackgroundColor;

/**
 设置文本视图背景色
 */
@property (strong, nonatomic) UIColor *textViewBackgroundColor;

/**
 设置标题
 */
@property (nonatomic, copy) NSString *title;

/**
 标题颜色
 */
@property (strong, nonatomic) UIColor *titleColor;

/**
 取消按钮标签
 */
@property (copy, nonatomic) NSString *cancelButtonTitle;

/**
 取消按钮标题文本颜色
 */
@property (strong, nonatomic) UIColor *cancelButtonTitleColor;

/**
 取消按钮图片
 */
@property (strong, nonatomic) UIImage *cancelButtonImage;

/**
 分享按钮标签
 */
@property (copy, nonatomic) NSString *shareButtonTitle;

/**
 分享按钮标题文本颜色
 */
@property (strong, nonatomic) UIColor *shareButtonTitleColor;

/**
 分享按钮图片
 */
@property (strong, nonatomic) UIImage *shareButtonImage;

/**
 *  设置支持的页面方向（单独控制分享菜单栏）
 */
@property (assign, nonatomic) UIInterfaceOrientationMask interfaceOrientationMask;

/**
 *  设置分享菜单栏状态栏风格
 */
@property (assign, nonatomic) UIStatusBarStyle statusBarStyle;

@end
