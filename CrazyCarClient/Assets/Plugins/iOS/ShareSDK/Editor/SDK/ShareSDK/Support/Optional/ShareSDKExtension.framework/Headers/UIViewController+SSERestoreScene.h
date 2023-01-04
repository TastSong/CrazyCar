//
//  UIViewController+SSERestoreScene.h
//  ShareSDKExtension
//
//  Created by wkx on 2019/7/22.
//  Copyright © 2019年 mob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ShareSDKExtension/SSERestoreScene.h>

@class SSERestoreScene;
@interface UIViewController (SSERestoreScene)

/**
 控制器初始化
 
 @param scene 场景参数
 @return 控制器对象
 */
- (instancetype)initWithShareSDKScene:(SSERestoreScene *)scene;

@end
