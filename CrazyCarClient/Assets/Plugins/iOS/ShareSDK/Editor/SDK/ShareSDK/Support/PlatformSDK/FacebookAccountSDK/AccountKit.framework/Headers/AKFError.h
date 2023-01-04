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

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0

/**
  The AccountKit error domain.
 */
FOUNDATION_EXPORT NSErrorDomain const AKFErrorDomain;

#else

/**
 The AccountKit error domain.
 */
FOUNDATION_EXPORT NSString *const AKFErrorDomain;

#endif

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_11_0

/**
 The userInfo key for the developer message in errors.
 */
FOUNDATION_EXPORT NSErrorUserInfoKey const AKFErrorDeveloperMessageKey;

/**
 The userInfo key for the user message in errors.
 */
FOUNDATION_EXPORT NSErrorUserInfoKey const AKFErrorUserMessageKey;

/**
 The userInfo key for the object that caused the error.
 */
FOUNDATION_EXPORT NSErrorUserInfoKey const AKFErrorObjectKey;

#else

/**
  The userInfo key for the developer message in errors.
 */
FOUNDATION_EXPORT NSString *const AKFErrorDeveloperMessageKey;

/**
  The userInfo key for the user message in errors.
 */
FOUNDATION_EXPORT NSString *const AKFErrorUserMessageKey;

/**
  The userInfo key for the object that caused the error.
 */
FOUNDATION_EXPORT NSString *const AKFErrorObjectKey;

#endif

#ifndef NS_ERROR_ENUM
#define NS_ERROR_ENUM(_domain, _name) \
enum _name: NSInteger _name; \
enum __attribute__((ns_error_domain(_domain))) _name: NSInteger
#endif

/**
 AKFError

 Top level error codes from the AccountKit framework.


 Use the NSUnderlyingErrorKey to retrieve underlying errors with more details if necessary.
 */
typedef NS_ERROR_ENUM(AKFErrorDomain, AKFError)
{
  /**
   A request failed due to a network error.


   It is generally suitable to present UI to check the network connection when this error code is received.
   */
  AKFErrorNetworkConnection = 100,

  /**
   Server generated an error.


   Use AKFErrorDeveloperMessageKey to retrieve the details of the server error from the underlying error.
   */
  AKFErrorServer = 200,

  /**
   The existing login request has become invalid.


   A new login request must be initiated. See AKFLoginRequestError for underlying error codes.
   */
  AKFErrorLoginRequestInvalidated = 300,

  /**
   A parameter value that is entered is invalid.


   The data passed into the SDK has an invalid value. In most cases this can be resolved by presenting UI to
   re-enter the data correctly. See AKFInvalidParameterValueErrorCode for underlying error codes.
   */
  AKFErrorInvalidParameterValue = 400,
};

/**
 Deprecated
 */
typedef NS_ENUM(NSInteger, AKFErrorCode)
{
  AKFNetworkConnectionError DEPRECATED_MSG_ATTRIBUTE("use AKFErrorNetworkConnection instead") = 100,
  AKFServerError DEPRECATED_MSG_ATTRIBUTE("use AKFErrorServer instead") = 200,
  AKFLoginRequestInvalidatedError DEPRECATED_MSG_ATTRIBUTE("use AKFErrorLoginRequestInvalidated instead") = 300,
  AKFInvalidParameterValueError DEPRECATED_MSG_ATTRIBUTE("use AKFErrorInvalidParameterValue instead") = 400,
} DEPRECATED_MSG_ATTRIBUTE("use AKFError instead");

NS_ASSUME_NONNULL_END
