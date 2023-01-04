//
//  AppleAccountConnector.h
//  AppleAccountConnector
//
//  Created by maxl on 2019/10/17.
//  Copyright © 2019 mob. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*! @enum SSDKAppleAccountState

 @constant SSDKAppleAccountStateRevoke 被重置
 @constant SSDKAppleAccountStateAuthorized 有效
 @constant SSDKAppleAccountStateNotFound 没有登录
 @constant SSDKAppleAccountStateUnknowd 登录状态未知

*/
typedef NS_ENUM(NSInteger, SSDKAppleAccountState) {
    SSDKAppleAccountStateRevoke       = 0,
    SSDKAppleAccountStateAuthorized   = 1,
    SSDKAppleAccountStateNotFound     = 2,
    SSDKAppleAccountStateTransferred  = 3,
    SSDKAppleAccountStateUnknow   = 4
};
@interface AppleAccountConnector : NSObject

/**
 监听apple登录状态

@param object 添加监听的对象,在对象销毁时移除监听
@param isFirstAddCallBack 第一次添加时就回调当前状态
@param handler  返回apple登录状态
*/
+ (void)addObserve:(nullable id)object isFirstAddCallBack:(BOOL)isFirstAddCallBack forAppleAccountLoginStateHandler:(void (^) (SSDKAppleAccountState state, SSDKUser *user, NSError *error))handler;

/**
 获取当前登录状态
*/
+ (void)getUserInfoStatus:(SSDKAuthorizeStateChangedHandler)handler;

@end

NS_ASSUME_NONNULL_END
