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

NS_ASSUME_NONNULL_BEGIN

extern NSString *const LineSDKVersion;

/**
 Contains the settings that are needed to initialize the SDK.
 */
NS_SWIFT_NAME(Configuration)
@interface LineSDKConfiguration : NSObject

/**
 The Channel ID that the application is configured to use. This value is read from the `LineSDKConfig` section in
 the application's `Info.plist`.
 */
@property (nonatomic, strong, readonly) NSString *channelID;

/**
 The universal link used to navigate back to your app from the LINE app. This value is read from the
 `LineSDKConfig` section in the application's `Info.plist` and used as an optional redirect URI for user
 authorization with the LINE app.
 */
@property (nonatomic, strong, readonly, nullable) NSString *universalLink;

/**
 Gets the default configuration.
 */
+ (instancetype)defaultConfig;

/**
 :nodoc:
 Use `+defaultConfig` to retrieve the default LineSDKConfiguration instance.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `+defaultConfig` to retrieve the default LineSDKConfiguration instance");

/**
 Gets the access token that is stored by the SDK.
 */
- (nullable LineSDKAccessToken *)currentAccessToken;

/**
 :nodoc:
 Gets the return URL string.
 */
- (NSString *)returnURLString;

/**
 :nodoc:
 Gets the app-to-app URL string.
*/
- (NSString *)app2AppURLString;

@end

NS_ASSUME_NONNULL_END
