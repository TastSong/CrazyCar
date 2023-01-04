//
//  SSCFacebookAccountConfiguration.h
//  FacebookAccountConnector
//
//  Created by Max on 2018/10/16.
//  Copyright © 2018 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol AKFUIManager; // 此协议申明在AccountKit.framework内，可实现对登录界面的深度定制



NS_ASSUME_NONNULL_BEGIN

typedef void(^SSCFBAccountKitAuthResumeHandler)(NSString *autCode, void(^resumeOperation)(NSDictionary *credentialInfo));

@interface SSCFacebookAccountConfiguration : NSObject

/**
 List of country codes to disallow.
 */
@property (nonatomic, copy) NSArray<NSString *> *blacklistedCountryCodes;

/**
 Specifies the default country code to select.
 */
@property (nonatomic, copy) NSString *defaultCountryCode;

/**
 Specifies if the app supports sending codes to Facebook (as an SMS alternative)
 */
@property (nonatomic, assign) BOOL enableSendToFacebook;

/**
 Specifies if the app supports receiving a phone call back for codes (as an SMS alternative)
 */
@property (nonatomic, assign) BOOL enableGetACall;

/**
 List of country codes to allow.
 */
@property (nonatomic, copy) NSArray<NSString *> *whitelistedCountryCodes;

/**
 The type of login that the receiver controls.  0:AccessToken, 1:AuthorizationCode
 */
@property (assign, nonatomic) NSInteger responseType;

/**
 The UI manager.
 */
@property (nonatomic, strong) id<AKFUIManager> uiManager;

/**
 在 responseType为1 的时候会执行
 */
@property (nonatomic, copy) SSCFBAccountKitAuthResumeHandler authResumeHandler;

@end

NS_ASSUME_NONNULL_END
