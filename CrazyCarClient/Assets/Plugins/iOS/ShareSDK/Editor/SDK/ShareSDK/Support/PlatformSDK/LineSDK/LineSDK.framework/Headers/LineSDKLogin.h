//
//  Copyright (c) 2016-present, LINE Corporation All rights reserved.
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

#import <Foundation/Foundation.h>
#import "LineSDKAttributes.h"
#import "LineBotPrompt.h"

@class LineSDKConfiguration;
@class LineSDKAccessToken;
@class LineSDKCredential;
@class LineSDKProfile;

NS_ASSUME_NONNULL_BEGIN

@class LineSDKLogin;

/**
 Defines methods used to receive event notifications from `LineSDKLogin` objects.
 */
@protocol LineSDKLoginDelegate <NSObject>

/**
 Receives the login result.
 
 @param login The `LineSDKLogin` object that is used to make the login request.
 @param credential The credentials granted by the login request.
 @param profile The profile information of the user.
 @param error The information about the failure if the login request fails. `nil` if the login request is
 successful.
 */
- (void)didLogin:(LineSDKLogin *)login
      credential:(nullable LineSDKCredential *)credential
         profile:(nullable LineSDKProfile *)profile
           error:(nullable NSError *)error;

@end

/**
 Provides methods that are used to perform LINE login.
 */
NS_SWIFT_NAME(Login)
@interface LineSDKLogin : NSObject

/**
 Contains various LINE SDK configuration values such as the channel ID and the access token.
 */
@property (nonatomic, strong, readonly) LineSDKConfiguration *configuration;

/**
 The delegate object that handles event notifications from `LineSDKLogin` objects.
 */
@property (nonatomic, weak, nullable) id<LineSDKLoginDelegate>delegate;

/**
 Includes an option to add a bot as friend on the consent screen.
 */
@property (nonatomic, assign) LineSDKBotPrompt botPrompt;

/**
 Sets the preferred language used when login with the web authorization flow.

 If not set, the web authentication flow shows the web page for login with user's device language or English as
 a fallback. Once set, the web page will be displayed in the preferred language.
 */
@property (nonatomic, copy) NSString *preferredWebLoginLanguage;

/**
 Gets the singleton instance of the `LineSDKLogin` class.
 */
+ (instancetype)sharedInstance;

/**
 :nodoc:
 Use `+sharedInstance` to retrieve the shared LineSDKLogin instance.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `+sharedInstance` to retrieve the shared LineSDKLogin instance");

/**
 Handles the return data from LINE during app-to-app authentication. You must call the `handleOpenUrl` method in
 your application's `openURL` method as in the following example.

     - (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> *)options
     {
         return [[LineSDKLogin sharedInstance] handleOpenURL:url];
     }

 @param aURL The URL that LINE passes to the `openURL` method during app-to-app authentication. You don't need to
 set the value explicitly.
 @return `YES` if the URL is successfully handled by the SDK; `NO` otherwise.
 */
- (BOOL)handleOpenURL:(nullable NSURL *)aURL;

/**
 Checks whether the login is in progress.

 @return `YES` if the login is in progress; `NO` otherwise.
 */
- (BOOL)isAuthorizing;

/**
 Checks whether the user is logged in and has an access token.

 @return `YES` if the SDK has an access token for the user. This signifies that the user is logged in. `NO`
 otherwise.
 */
- (BOOL)isAuthorized;

/**
 Checks whether it is possible to log in using LINE.

 @return `YES` if it is possible to log in using LINE; `NO` otherwise. If `NO`, LINE is not installed on the
 device.
 */
- (BOOL)canLoginWithLineApp;

/**
 Transitions to the app store to install LINE.
 */
- (void)installLineApp;

/**
 [Deprecated] Begins the login process. If LINE is installed, the SDK defaults to using the LINE app-to-app
 authentication flow. If it is not installed, the SDK logs in the user using the web authentication flow.
 */
- (void)startLogin LSDK_DEPREACATED("You need to specify permissions explicitly.", "startLoginWithPermissions:");

/**
 [Deprecated] Begins the login process. Uses the web authentication flow instead of the LINE app-to-app
 authentication flow.
 */
- (void)startWebLogin LSDK_DEPREACATED("You need to specify permissions explicitly.", "startWebLoginWithPermissions:");

/**
 Begins the login process with the permissions specified. If LINE is installed, the SDK defaults to using the
 LINE app-to-app authentication flow. If it is not installed, the SDK logs in the user using the web
 authentication flow.

 @param permissions An array of permissions.
 */
- (void)startLoginWithPermissions:(NSArray<NSString *> *)permissions;

/**
 Begins the login process with the permissions specified. Uses the web authentication flow instead of the LINE
 app-to-app authentication flow.

 @param permissions An array of permissions.
 */
- (void)startWebLoginWithPermissions:(NSArray<NSString *> *)permissions;

@end
NS_ASSUME_NONNULL_END
