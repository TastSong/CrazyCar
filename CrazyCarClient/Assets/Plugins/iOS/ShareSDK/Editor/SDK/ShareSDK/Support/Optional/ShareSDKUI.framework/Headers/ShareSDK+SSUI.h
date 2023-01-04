//
//  ShareSDK+SSUI.h
//  ShareSDKUI
//
//  Created by Max on 2018/4/3.
//  Copyright © 2018年 Max. All rights reserved.
//

#import <ShareSDK/ShareSDK.h>
#import "ShareSDK+SSUIDeprecated.h"
#import "SSUITypeDef.h"
@class SSUIShareSheetConfiguration;
@class SSUIEditorConfiguration;

/**
 分享状态变更

 @param state 返回状态
 @param platformType 平台类型
 @param userData 用户数据
 @param contentEntity 分享内容实体
 @param error 错误信息
 @param end 是否已经结束本次分享标识
 */

@interface ShareSDK (SSUI)


/**
 显示分享菜单

 @param view 要显示菜单的视图, iPad版中此参数作为弹出菜单的参照视图
 @param items  菜单项，如果传入nil，则显示已集成的平台列表
 @param shareParams 分享内容参数
 @param configuration 分享菜单的设置
 @param stateChangedHandler 分享状态变更事件
 @return 分享菜单控制器
 */
+ (id)showShareActionSheet:(UIView *)view
               customItems:(NSArray *)items
               shareParams:(NSMutableDictionary *)shareParams
        sheetConfiguration:(SSUIShareSheetConfiguration *)configuration
            onStateChanged:(SSUIShareStateChangedHandler)stateChangedHandler;

/**
  显示分享菜单（此方式只通过openurl跳转，不进行分享参数设置）
 
  @param view view
  @param items items
  @param configuration 分享菜单的设置

  */
+ (id)showShareActionSheet:(UIView *)view
       customItems:(NSArray *)items
        sheetConfiguration:(SSUIShareSheetConfiguration *)config
            onStateChanged:(SSUIShareStateChangedHandler)stateChangedHandler;

/**
 设置分享菜单点击后的弹出的编辑界面配置

 @param sheet 需要设置的分享菜单
 @param configuration 点击菜单后弹出的编辑界面的配置项
 */
+ (void)shareActionSheet:(id)sheet setEditorConfiguration:(SSUIEditorConfiguration *)configuration;


/**
 显示内容编辑视图

 @param platformType 分享的平台类型
 @param platformTypes 除分享平台外，还可以分享的平台类型。
 @param shareParams 分享内容参数
 @param configuration 编辑视图的设置
 @param shareStateChangedHandler 分享状态变更事件
 @return 内容编辑视图控制器
 */
+ (id)showShareEditor:(SSDKPlatformType)platformType
       otherPlatforms:(NSArray *)platformTypes
          shareParams:(NSMutableDictionary *)shareParams
  editorConfiguration:(SSUIEditorConfiguration *)configuration
       onStateChanged:(SSUIShareStateChangedHandler)shareStateChangedHandler;

/**
 隐藏分享菜单/编辑视图

 @param controller 要隐藏的控制器
 */
+ (void)dismissShareController:(id)controller;


/**
设置暗黑模式样式

@param style 暗黑模式样式
*/
+ (void)setUserInterfaceStyle:(SSUIUserInterfaceStyle)style;

@end
