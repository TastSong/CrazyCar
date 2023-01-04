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
#import <AccountKit/AKFConfiguring.h>
#import <AccountKit/AKFLoginType.h>
#import <AccountKit/AKFUIManaging.h>

@protocol AKFViewControllerDelegate;

/**
 @protocol

  A view controller for Account Kit that reports the status of the login through the delegate.
 */
@protocol AKFViewController <AKFUIManaging, AKFConfiguring>

/**
  The delegate for the receiver.
 */
@property (nonatomic, weak) id<AKFViewControllerDelegate> delegate;

/**
  The type of login that the receiver controls.
 */
@property (nonatomic, assign, readonly) AKFLoginType loginType;

@end

/**
 @protocol

  Receives callbacks from the View Controller when the login flow completes.
 */
@protocol AKFViewControllerDelegate <NSObject>

@optional

/**
  Called when the login completes with an authorization code response type.

 @param viewController the AKFViewController that was used
 @param code the authorization code that can be exchanged for an access token with the app secret
 @param state the state param value that was passed in at the beginning of the flow
 */
- (void)viewController:(UIViewController<AKFViewController> *)viewController didCompleteLoginWithAuthorizationCode:(NSString *)code state:(NSString *)state;

/**
  Called when the login completes with an access token response type.

 @param viewController the AKFViewController that was used
 @param accessToken the access token for the logged in account
 @param state the state param value that was passed in at the beginning of the flow
 */
- (void)viewController:(UIViewController<AKFViewController> *)viewController didCompleteLoginWithAccessToken:(id<AKFAccessToken>)accessToken state:(NSString *)state;

/**
  Called when the login failes with an error

 @param viewController the AKFViewController that was used
 @param error the error that occurred
 */
- (void)viewController:(UIViewController<AKFViewController> *)viewController didFailWithError:(NSError *)error;

/**
  Called when the login flow is cancelled through the UI.

 @param viewController the AKFViewController that was used
 */
- (void)viewControllerDidCancel:(UIViewController<AKFViewController> *)viewController;

@end
