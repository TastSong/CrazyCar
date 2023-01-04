// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

#import <AccountKit/AKFAccessToken.h>
#import <AccountKit/AKFAccount.h>
#import <AccountKit/AKFResponseType.h>
#import <AccountKit/AKFViewController.h>

@class AKFPhoneNumber;

NS_ASSUME_NONNULL_BEGIN

/**
 AKFRequestAccountHandler

 Callback that receives AccountKit account information.
 */
typedef void (^AKFRequestAccountHandler)(id<AKFAccount> _Nullable account, NSError *_Nullable error);

/**
 AKFLogoutHandler

 Callback that receives result of logout request from server.
 */
typedef void (^AKFLogoutHandler)(BOOL success, NSError *_Nullable error);

/**
  Primary interface for authenticating AccountKit accounts.
 */
@interface AKFAccountKit : NSObject

/**
  The version of the Account Kit Graph API used.
 */
+ (NSString *)graphVersionString;

/**
 #abstract The version of the Account Kit SDK.
 */
+ (NSString *)versionString;

/**
  Retrieve the current access token, if any.
 */
@property (nullable, nonatomic, copy, readonly) id<AKFAccessToken> currentAccessToken;

/**
  Init Account Kit with a specified response type.
 */
- (instancetype)initWithResponseType:(AKFResponseType)responseType
NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

/**
  Cancels the pending login request.
 */
- (void)cancelLogin;

/**
  Logs out currently logged in account.
 */
- (void)logOut;

/**
  Logs out currently logged in account asynchronously.
 */
- (void)logOut:(nullable AKFLogoutHandler)handler;

/**
  Asynchronously returns Account Kit account information
 */
- (void)requestAccount:(AKFRequestAccountHandler)handler;

/**
  Returns a view controller to be presented to initiate an email login.
 */
- (UIViewController<AKFViewController> *)viewControllerForEmailLogin;

/**
  Returns a view controller to be presented to initiate an email login.

 @param email the email to be used for login.
 @param state the state for the login request.
 */
- (UIViewController<AKFViewController> *)viewControllerForEmailLoginWithEmail:(nullable NSString *)email
                                                                        state:(nullable NSString *)state;

/**
  Returns a view controller to be presented to initiate a phone login.
 */
- (UIViewController<AKFViewController> *)viewControllerForPhoneLogin;

/**
  Returns a view controller to be presented to initiate a phone login.

 @param phoneNumber the phone number to be used for login.
 @param state the state for the login request.
 */
- (UIViewController<AKFViewController> *)viewControllerForPhoneLoginWithPhoneNumber:(nullable AKFPhoneNumber *)phoneNumber
                                                                              state:(nullable NSString *)state;

/**
  Returns a view controller to resume a login that was pending when the app shutdown.
 */
- (nullable UIViewController<AKFViewController> *)viewControllerForLoginResume;

@end

NS_ASSUME_NONNULL_END
