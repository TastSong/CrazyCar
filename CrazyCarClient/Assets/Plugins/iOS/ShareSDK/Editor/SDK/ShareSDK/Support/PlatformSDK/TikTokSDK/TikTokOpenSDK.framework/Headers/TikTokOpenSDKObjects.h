//
//  TikTokOpenSDKObjects.h
//
//  Created by ByteDance on 2019/7/8.
//  Copyright (c) 2018年 ByteDance Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TikTokOpenSDKBaseResponse;

typedef NS_ENUM(NSInteger, TikTokOpenSDKErrorCode) {
    TikTokOpenSDKSuccess = 0,
    TikTokOpenSDKErrorCodeCommon = -1,
    TikTokOpenSDKErrorCodeUserCanceled = -2,
    TikTokOpenSDKErrorCodeSendFailed = -3,
    TikTokOpenSDKErrorCodeAuthDenied = -4,
    TikTokOpenSDKErrorCodeUnsupported = -5,
};

NS_ASSUME_NONNULL_BEGIN
typedef void (^TikTokOpenSDKRequestCompletedBlock) (TikTokOpenSDKBaseResponse *resp);

@interface TikTokOpenSDKBaseRequest : NSObject
/**
   Passing additional sharing requests param;
 */
@property (nonatomic, copy, nullable) NSDictionary *extraInfo;

@end

@interface TikTokOpenSDKBaseResponse : NSObject

@property (nonatomic, assign, readonly) BOOL isSucceed;//!< YES for succeess

@property (nonatomic, assign) TikTokOpenSDKErrorCode errCode;//!< if failed failed error code

@property (nonatomic, copy, nullable) NSString *errString;//!< if failed error description

@end

NS_ASSUME_NONNULL_END