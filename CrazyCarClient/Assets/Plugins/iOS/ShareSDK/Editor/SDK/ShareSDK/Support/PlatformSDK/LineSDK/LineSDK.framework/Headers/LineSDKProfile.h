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

#import <Foundation/Foundation.h>
#import "LineSDKAttributes.h"
#import "LineSDKUser.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a user's LINE profile.
 */
NS_SWIFT_NAME(Profile)
@interface LineSDKProfile : LineSDKUser

/**
 The user’s status message.
 */
@property (nonatomic, copy, readonly, nullable) NSString *statusMessage;

/**
 :nodoc:
 Use `initWithUserID:displayName:pictureURL:statusMessage:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithUserID:displayName:pictureURL:statusMessage:` instead");

/**
 :nodoc:
 Instantiates a user's profile.

 @param userID The user's user ID.
 @param displayName The user's display name.
 @param pictureURL The user's profile media URL.
 @param statusMessage The user's status message.
 */
- (instancetype)initWithUserID:(NSString *)userID
                   displayName:(NSString *)displayName
                    pictureURL:(nullable NSURL *)pictureURL
                 statusMessage:(nullable NSString *)statusMessage;

@end

NS_ASSUME_NONNULL_END
