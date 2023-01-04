//
//  BDOpenPlatformAuth.h
//
//  Created by ByteDance on 2019/7/8.
//  Copyright (c) 2018年 ByteDance Ltd. All rights reserved.
//

#import "DouyinOpenSDKObjects.h"
#import "DouyinOpenSDKApplicationDelegate.h"

NS_ASSUME_NONNULL_BEGIN
@class DouyinOpenSDKAuthResponse;

typedef void(^DouyinOpenSDKAuthCompleteBlock)(DouyinOpenSDKAuthResponse *resp);//!< Auth Result callback block

#pragma mark - Auth Request
@interface DouyinOpenSDKAuthRequest : DouyinOpenSDKBaseRequest

/**
The type of required permission applied by the third-party application to Open Platform is finally returned to the third-party application based on the actual authorization result after the App authorization is completed
 e.g. [NSOrderedSet orderedSetWithObjects:@"user_info", ..., nil]
 
 */
@property (nonatomic, strong, nullable) NSOrderedSet<NSString *> *permissions;

/**
The additional permission type that the third-party application applies to Open Platform, the user can check whether to grant this part of the permission, and finally return to the third-party application according to the actual authorization result after the App authorization is completed;
 @key permission
 @key defaultChecked Initial check state, @"1" means check, @"0" means unchecked
 e.g. [NSOrderedSet orderedSetWithObjects:@{@"permission":@"user_info",@"defaultChecked":@"0"}, ..., nil]
 */
@property (nonatomic, strong, nullable) NSOrderedSet<NSDictionary<NSString *,NSString *> *> *additionalPermissions;

/**
 Used to identify the uniqueness of the request, and finally returned by App when jumping back to the third-party program
 */
@property (nonatomic, copy, nullable) NSString *state;

/**
 * @brief Send authorization request to Open Platform. If not install App will open authorized web page.

 *
 * @param viewController The view controller which show authorized web page
 * @param completed      The async result call back. You can get reslut via resp.isSucceed.
 *
 * @return Authorization request is valid will return YES;
 */
- (BOOL)sendAuthRequestViewController:(UIViewController *)viewController completeBlock:(DouyinOpenSDKAuthCompleteBlock)completed;

@end


#pragma mark - Auth Response
@interface DouyinOpenSDKAuthResponse : DouyinOpenSDKBaseResponse

/**
 You apply for certain permissions to Open Platform, and finally return to the third-party application based on the actual authorization result after the App authorization is completed.
 */
@property (nonatomic, copy, readonly, nullable) NSString *code;

/**
 State can be used to identify the uniqueness of the request, and finally returned by Open Platform when jumping back to a third-party program
 */
@property (nonatomic, copy, readonly, nullable) NSString *state;

/**
 The users agree to give your applications permission, if the authorization is successful, all necessary permissions and additional permissions checked by the user;
 */
@property (nonatomic, strong, nullable) NSOrderedSet<NSString *> *grantedPermissions;

@end


NS_ASSUME_NONNULL_END
