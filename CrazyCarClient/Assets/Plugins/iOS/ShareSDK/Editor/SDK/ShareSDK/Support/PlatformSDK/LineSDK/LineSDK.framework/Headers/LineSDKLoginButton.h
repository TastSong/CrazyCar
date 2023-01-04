//
//  Copyright (c) 2016-present, LINE Corporation. All rights reserved.
//
//  You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
//  copy and distribute this software in source code or binary form for use
//  in connection with the web services and APIs provided by LINE Corporation.
//
//  As with any software that integrates with the LINE Corporation platform, your use of this software
//  is subject to the LINE Developers Agreement [http://terms2.line.me/LINE_Developers_Agreement].
//  This copyright notice shall be included in all copies or substantial portions of the software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
//  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>
#import "LineSDKCredential.h"
#import "LineSDKProfile.h"

@class LineSDKLoginButton;

/**
 Represents the size of the login button.
 */
typedef NS_ENUM(NSUInteger, LoginButtonSize) {
    /**
     The size of the login button is small.
     */
    LoginButtonSizeSmall,
    /**
     The size of the login button is normal.
     */
    LoginButtonSizeNormal
};

/**
 Defines methods that allow you to handle different login states if you use the predefined LINE Login button by
 using the `LineSDKLoginButton` class.
 */
@protocol LineSDKLoginButtonDelegate <NSObject>

/**
 Called after the login action is started.
 */
- (void)loginButtonDidStartLogin:(nonnull LineSDKLoginButton *)button;

/**
 Called if the login action succeeded.
 */
- (void)loginButton:(nonnull LineSDKLoginButton *)button
didSucceedLoginWithCredential:(nullable LineSDKCredential *)credential
            profile:(nullable LineSDKProfile *)profile;

/**
 Called if the login action failed.
 */
- (void)loginButton:(nonnull LineSDKLoginButton *)button
didFailLoginWithError:(nullable NSError *)error;

@end

/**
 Represents a login button which executes the login function when the user taps the button.
 */
@interface LineSDKLoginButton : UIButton

/**
 Conforms to the `LineSDKLoginButtonDelegate` protocol and implements the methods defined in the protocol to
 handle different login states.
 */
@property (nonatomic, weak, nullable) id<LineSDKLoginButtonDelegate> delegate;

/**
 Represents a set of permissions. The default value is `@[@"profile"]`.
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nonnull permissions;

/**
 The size of the login button. The default value is `normal`.
 */
@property (nonatomic, assign) LoginButtonSize buttonSize;

/**
 The text on the login button. Its value is "Log in with LINE" in the English environment and localized for
 different environments. The button will be resized if you change this property.
 */
@property (nonatomic, copy) NSString * _Nullable buttonText;

@end
