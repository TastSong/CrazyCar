//
//  SSDKAuthViewManager.h
//  ShareSDK
//
//  Created by Max on 2018/5/30.
//  Copyright © 2018年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSDKAuthViewManager : NSObject

@property (strong, nonatomic) UIImage *navigationBarBackgroundImage;
@property (strong, nonatomic) UIColor *navigationBarBackgroundColor;
@property (copy, nonatomic) NSString *title;
@property (strong, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (strong, nonatomic) UIColor *cancelButtonTitleColor;
@property (strong, nonatomic) UIImage *cancelButtonImage;
@property (assign, nonatomic) CGFloat cancelButtonLeftMargin;
@property (assign, nonatomic) CGFloat rightButtonRightMargin;
@property (assign, nonatomic) UIInterfaceOrientationMask toInterfaceOrientation;
@property (assign, nonatomic) UIStatusBarStyle statusBarStyle;
@property (strong, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) NSString *shareTitle;
@property (assign, nonatomic) UIModalPresentationStyle style;
@property (nonatomic, assign) NSTimeInterval timeOut;


+ (instancetype)defaultManager;

- (void)showAuthViewWithPlatform:(SSDKPlatformType)platformType authUrl:(NSString *)url redirectUrl:(NSString *)redirectUrl callback:(NSString *)callback;
- (void)hiddenAuthWindowForViewController:(UIViewController *)viewController;

@end
