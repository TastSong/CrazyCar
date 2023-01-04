//
//  BDOpenPlatformObjects.h
//
//  Created by ByteDance on 2019/7/8.
//  Copyright (c) 2018年 ByteDance Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DouyinOpenSDKBaseResponse;

typedef NS_ENUM(NSInteger, DouyinOpenSDKErrorCode) {
    DouyinOpenSDKSuccess                = 0,
    DouyinOpenSDKErrorCodeCommon        = -1,
    DouyinOpenSDKErrorCodeUserCanceled  = -2,
    DouyinOpenSDKErrorCodeSendFailed    = -3,
    DouyinOpenSDKErrorCodeAuthDenied    = -4,
    DouyinOpenSDKErrorCodeUnsupported   = -5,
};

NS_ASSUME_NONNULL_BEGIN
typedef void(^DouyinOpenSDKRequestCompletedBlock) (DouyinOpenSDKBaseResponse *resp);

@interface DouyinOpenSDKBaseRequest : NSObject
/**
Passing additional sharing requests param;
*/
@property (nonatomic, copy, nullable) NSDictionary *extraInfo;
@end

@interface DouyinOpenSDKBaseResponse : NSObject

@property (nonatomic, readonly, assign) BOOL isSucceed;//!< YES for succeess

@property (nonatomic, assign) DouyinOpenSDKErrorCode errCode;//!< if failed failed error code

@property (nonatomic, copy, nullable) NSString *errString;//!< if failed error description

@end

NS_ASSUME_NONNULL_END
