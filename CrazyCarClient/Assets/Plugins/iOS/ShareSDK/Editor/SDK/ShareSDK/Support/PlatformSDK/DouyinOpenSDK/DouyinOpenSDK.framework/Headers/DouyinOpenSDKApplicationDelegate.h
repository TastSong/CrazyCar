//
//  BDOpenPlatformApplicationDelegate.h
//
//  Created by ByteDance on 2019/7/8.
//  Copyright (c) 2018年 ByteDance Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DouyinOpenSDKLogDelegate <NSObject>

/**
 * @brief Open Platform internal log in level ERROR or Warning will callback in this method.
 * You need to register log delgate in BDOpenPlatformApplicationDelegate
 *
 * @param  logInfo Open Platform internal log info.
 *
 */
- (void)onLog:(NSString *)logInfo;

@end

@interface DouyinOpenSDKApplicationDelegate : NSObject

@property (nonatomic, copy, readonly) NSString *currentVersion; //!< Open Platform SDK currtent version
@property (nonatomic, weak) id<DouyinOpenSDKLogDelegate> logDelegate;//!< Open Platform internal log delegate

+ (instancetype) sharedInstance;

/**
 * @brief iTunes Url to download app.
 *
 * @return iTunes iTunes Url if international it will return empty string
 */
- (NSString *)iTunesUrl;

/**
 * @brief Call when you application delegate receive UIApplication didFinishLaunchingWithOptions
 *
 * @param  application Your singleton app object.
 * @param  launchOptions A dictionary indicating the reason the app was launched (if any). The contents of this dictionary may be empty in situations where the user launched the app directly. For information about the possible keys in this dictionary and how to handle them, see Launch Options Keys.
 *
 */
- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(nullable NSDictionary *)launchOptions;

/**
 * @brief Call when you application delegate receive OpenURL action
 *
 * @param application Your singleton app object.
 * @param url The URL resource to open. This resource can be a network resource or a file. For information about the Apple-registered URL schemes, see Apple URL Scheme Reference.
 * @param sourceApplication you receive in you App Delegate
 * @param annotation you receive in you App Delegate
 * @return if Open Platform is handle this URL request will return YES
 */
- (BOOL)application:(nullable UIApplication *)application openURL:(nonnull NSURL *)url sourceApplication:(nullable NSString *)sourceApplication annotation:(nonnull id)annotation;

/**
 * @brief If you didn't set you ClientKey in Project.info.plisty you can set it manually.
 *
 * @param  appid The ClientKey you got in Open platform.
 *
 * @return register results if success return YES
 */
- (BOOL)registerAppId:(NSString *)appid;

/**
 * @brief Get the ClientKey registed.
 *
 * @return if not registered will return nil
 */
- (nullable NSString *)appId;

/**
 * @brief The result of target App is installed
 *
 * @return if installed will return YES
 */
- (BOOL)isAppInstalled;

@end

NS_ASSUME_NONNULL_END
