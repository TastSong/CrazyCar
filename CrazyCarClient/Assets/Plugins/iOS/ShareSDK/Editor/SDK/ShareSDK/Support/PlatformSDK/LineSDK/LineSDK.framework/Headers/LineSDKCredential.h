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

@class LineSDKAccessToken;
@class LineSDKJSONWebToken;

NS_ASSUME_NONNULL_BEGIN

/**
 Represents credentials that are used to grant access to the LINE Platform.
 */
NS_SWIFT_NAME(Credential)
@interface LineSDKCredential : NSObject

/**
 The access token.
 */
@property (nonatomic, strong, readonly, nullable) LineSDKAccessToken *accessToken;

/**
 The set of permissions that the access token holds. The following is a list of
 the permission codes.

 profile: The permission to get the user’s profile information in the login response.
 
 openid: The permission to get an ID token in the login response.
 
 email: The permission to get the user’s email from an ID Token in the login response.
 */
@property (nonatomic, strong, readonly) NSOrderedSet<NSString *> *permissions;

/**
 The ID token returned by the LINE Platform if the OpenID scope is requested in the authorization request. The
 LINE SDK parses the returned string value to a valid `LineSDKJSONWebToken` object and verifies the token
 signature and contents before the login process finishes. If the verification fails, the login process fails
 with an error.
 */
@property (nonatomic, strong, readonly) LineSDKJSONWebToken *IDToken;

/**
 Indicates that the friendship status between the user and the bot changed during the login. `@YES` if the
 friendship status changed during login; `@NO` otherwise. This value exists only if the `botPrompt` property is
 specified in the `LineSDKLogin` object.
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *friendshipStatusChanged;

/**
 :nodoc:
 Use `initWithAccessToken:permissions:` to instantiate an instance of
 LineSDKCredential.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithAccessToken:permissions:` instead");

/**
 :nodoc:
 Instantiates a `LineSDKCredential` object.
 
 @param accessToken A `LineSDKAccessToken` object.
 @param permissions A set of permissions.
 */
- (instancetype)initWithAccessToken:(nullable LineSDKAccessToken *)accessToken
                        permissions:(NSOrderedSet<NSString *> *)permissions;

/**
 :nodoc:
 Instantiates a `LineSDKCredential` object.
 
 @param accessToken A `LineSDKAccessToken` object.
 @param permissions A set of permissions.
 @param IDToken The received ID token string.
 @param friendshipStatusChanged Whether the friendship status between the user and the bot changes during the
 login.
 */
- (instancetype)initWithAccessToken:(nullable LineSDKAccessToken *)accessToken
                        permissions:(NSOrderedSet<NSString *> *)permissions
                            IDToken:(nullable LineSDKJSONWebToken *)IDToken
            friendshipStatusChanged:(nullable NSNumber *)friendshipStatusChanged NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
