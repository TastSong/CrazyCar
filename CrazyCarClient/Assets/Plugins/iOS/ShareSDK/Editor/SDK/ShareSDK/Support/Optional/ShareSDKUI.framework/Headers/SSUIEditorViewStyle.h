//
//  SSUIEditorViewStyle.h
//  ShareSDKUI
//
//  Created by chenjd on 15/7/15.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SSUIEditorConfiguration;

@interface SSUIEditorViewStyle : NSObject

/**
*  设置导航栏背景
*
*  @param image 背景图片
*/
+ (void)setiPhoneNavigationBarBackgroundImage:(UIImage *)image __deprecated_msg("discard form v4.1.2");

/**
 *  设置iPhone导航栏颜色
 *
 *  @param color 背景颜色
 */
+ (void)setiPhoneNavigationBarBackgroundColor:(UIColor *)color __deprecated_msg("discard form v4.1.2");

/**
 *  设置iPad导航栏颜色
 *
 *  @param color 背景颜色
 */
+ (void)setiPadNavigationBarBackgroundColor:(UIColor *)color __deprecated_msg("discard form v4.1.2");

/**
 *  设置编辑界面背景颜色
 *
 *  @param color 背景颜色
 */
+ (void)setContentViewBackgroundColor:(UIColor *)color __deprecated_msg("discard form v4.1.2");

/**
 *  设置标题
 *
 *  @param title 标题
 */
+ (void)setTitle:(NSString *)title __deprecated_msg("discard form v4.1.2");

/**
 *  设置标题文本颜色
 *
 *  @param color 颜色
 */
+ (void)setTitleColor:(UIColor *)color __deprecated_msg("discard form v4.1.2");

/**
 *  设置取消按钮标签
 *
 *  @param label 取消按钮标签
 */
+ (void)setCancelButtonLabel:(NSString *)label __deprecated_msg("discard form v4.1.2");

/**
 *  设置取消按钮标签文本颜色
 *
 *  @param color 颜色
 */
+ (void)setCancelButtonLabelColor:(UIColor *)color __deprecated_msg("discard form v4.1.2");

/**
 *  设置取消按钮背景
 *
 *  @param image 图片
 */
+ (void)setCancelButtonImage:(UIImage *)image __deprecated_msg("discard form v4.1.2");

/**
 *  设置分享按钮标签
 *
 *  @param label 取消按钮标签
 */
+ (void)setShareButtonLabel:(NSString *)label __deprecated_msg("discard form v4.1.2");

/**
 *  设置分享按钮标签文本颜色
 *
 *  @param color 颜色
 */
+ (void)setShareButtonLabelColor:(UIColor *)color __deprecated_msg("discard form v4.1.2");

/**
 *  设置分享按钮背景
 *
 *  @param image 图片
 */
+ (void)setShareButtonImage:(UIImage *)image __deprecated_msg("discard form v4.1.2");

/**
 *  设置支持的页面方向（单独分享编辑页面）
 */
+ (void)setSupportedInterfaceOrientation:(UIInterfaceOrientationMask)toInterfaceOrientation __deprecated_msg("discard form v4.1.2");

/**
 *  设置分享编辑页面状态栏风格
 */
+ (void)setStatusBarStyle:(UIStatusBarStyle)statusBarStyle __deprecated_msg("discard form v4.1.2");

/**
 *  默认的编辑界面配置
 */
+ (SSUIEditorConfiguration *)defaultEditorStyle __deprecated_msg("discard form v4.1.2");

@end
