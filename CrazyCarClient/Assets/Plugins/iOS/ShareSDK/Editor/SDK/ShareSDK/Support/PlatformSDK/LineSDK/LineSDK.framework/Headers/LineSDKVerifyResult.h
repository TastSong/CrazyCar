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

NS_ASSUME_NONNULL_BEGIN

/**
 Represents the result of an attempt to verify the access token.
 */
NS_SWIFT_NAME(VerifyResult)
@interface LineSDKVerifyResult : NSObject

/**
 The channel ID that is used by your app.
 */
@property (nonatomic, copy, readonly) NSString *channelID;

/**
 The amount of time in milliseconds until the access token expires.
 */
@property (nonatomic, readonly) NSTimeInterval expiresIn;

/**
 The set of permissions that the access token holds. The following is a list of the permission codes.

 profile: The permission to get the user’s profile information in the login response.
 
 openid: The permission to get an ID token in the login response.
 
 email: The permission to get the user’s email from an ID Token in the login response.
 */
@property (nonatomic, copy, readonly, nullable) NSOrderedSet<NSString *> *permissions;

/**
 :nodoc:
 Use `initWithChannelID:expiresIn:permissions:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithChannelID:expiresIn:permissions:` instead");

/**
 Instantiates a `LineSDKVerifyResult` object.

 @param channelID The channel ID that is used by your app.
 @param expiresIn The amount of time in milliseconds until the access token expires.
 @param permissions The set of permissions that the access token holds.
 */
- (instancetype)initWithChannelID:(NSString *)channelID
                        expiresIn:(NSTimeInterval)expiresIn
                      permissions:(nullable NSOrderedSet<NSString *> *)permissions NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
