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

NS_ASSUME_NONNULL_BEGIN

extern NSString *const LineSDKServerErrorDomain;
extern NSString *const LineSDKServerErrorUserInfoKey;

extern NSString *const LineSDKInternalErrorDomain;
typedef NS_ENUM(NSInteger, LineSDKInternalErrorCode) {
    LineSDKInternalErrorCodeUnknown = 0,
    LineSDKInternalErrorCodeLoginError,
    LineSDKInternalErrorCodeMissingConfiguration,
    LineSDKInternalErrorCodeAuthenticationCanceled,
    LineSDKInternalErrorCodeMissingAccessToken,
    LineSDKInternalErrorCodeInvalidTokenType,
    LineSDKInternalErrorCodeMissingRequiredField,
    LineSDKInternalErrorCodeInvalidValueType,
    LineSDKInternalErrorCodeInvalidJSONWebKeyType,
    LineSDKInternalErrorCodeTokenIDVerificationFailed,
} NS_SWIFT_NAME(InternalErrorCode);

extern NSString *const LineSDKMessageErrorDomain;

typedef NS_ENUM(NSInteger, LineSDKMessageError) {
    LineSDKMessageErrorUnknown,
    LineSDKMessageErrorDiscarded,
} NS_SWIFT_NAME(MessageError);

@interface NSError (LineSDK)

+ (instancetype)LineSDK_socialAPIErrorWithStatusCode:(NSInteger)statusCode
                                                data:(nullable NSDictionary *)data
                                     underlyingError:(nullable NSError *)underlyingError;

+ (instancetype)LineSDK_authenticationAPIErrorWithStatusCode:(NSInteger)statusCode
                                                        data:(nullable NSDictionary *)data
                                             underlyingError:(nullable NSError *)underlyingError;

+ (instancetype)LineSDK_internalErrorWithErrorCode:(enum LineSDKInternalErrorCode)errorCode
                                       description:(NSString *)description
                                   underlyingError:(nullable NSError *)underlyingError;

+ (instancetype)LineSDK_internalErrorWithErrorCode:(enum LineSDKInternalErrorCode)errorCode
                                       description:(NSString *)description;


+ (instancetype)LineSDK_missingAccessTokenError;
+ (instancetype)LineSDK_invalidTokenTypeWithTokenType:(NSString *)tokenType;
+ (instancetype)LineSDK_invalidJSONWebKeyError;
@end

NS_ASSUME_NONNULL_END
