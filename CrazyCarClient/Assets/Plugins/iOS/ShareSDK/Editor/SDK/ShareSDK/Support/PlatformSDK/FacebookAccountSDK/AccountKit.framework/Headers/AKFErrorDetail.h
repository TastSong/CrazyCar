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

#import "AKFError.h"

NS_ASSUME_NONNULL_BEGIN

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0

/**
 The AccountKit error domain for server errors (underlying errors).
 */
FOUNDATION_EXPORT NSErrorDomain const AKFServerErrorDomain;

#else

/**
  The AccountKit error domain for server errors (underlying errors).
 */
FOUNDATION_EXPORT NSString *const AKFServerErrorDomain;

#endif

#ifndef NS_ERROR_ENUM
#define NS_ERROR_ENUM(_domain, _name) \
enum _name: NSInteger _name; \
enum __attribute__((ns_error_domain(_domain))) _name: NSInteger
#endif

/**
 AKFServerErrorCode

 Detail error codes for server errors.
 */
typedef NS_ERROR_ENUM(AKFServerErrorDomain, AKFServerErrorCode)
{
  /**
   An invalid parameter value was found.


   The SDK does not know how to handle this parameter value from the server.
   */
  AKFServerErrorInvalidParameterValue = 201,

  AKFInvalidServerParameterValueError DEPRECATED_MSG_ATTRIBUTE("use AKFServerErrorInvalidParameterValue instead") = AKFServerErrorInvalidParameterValue,
};

/**
 AKFLoginRequestError

 Detail error codes for login request invalidated errors.
 */
typedef NS_ERROR_ENUM(AKFErrorDomain, AKFLoginRequestError)
{
  /**
   The request has expired without completing.
   */
  AKFLoginRequestErrorExpired = 301,
};

/**
 AKFInvalidParameterError

  Detail error codes for invalid parameter errors.
 */
typedef NS_ERROR_ENUM(AKFErrorDomain, AKFParameterError)
{
  /**
    The email address value is invalid.
   */
  AKFParameterErrorEmailAddress = 401,

  /**
    The phone number value is invalid.
   */
  AKFParameterErrorPhoneNumber = 402,

  /**
    The value is not of the appropriate type for NSCoding.
   */
  AKFParameterErrorCodingValue = 403,

  /**
    No valid access token is available.
   */
  AKFParameterErrorAccessToken = 404,

  /**
    The key for account preferences is invalid.
   */
  AKFParameterErrorAccountPreferenceKey = 405,

  /**
    The value for account preferences is invalid.
   */
  AKFParameterErrorAccountPreferenceValue = 406,

  /**
    The operation was not successful.
   */
  AKFParameterErrorOperationNotSuccessful = 407,

  /**
    The provided UIManager is not valid
   */
  AKFParameterErrorUIManager = 408,
};

/**
 AKFServerResponseErrorCode

  Detail error codes for server response errors.
 */
typedef NS_ERROR_ENUM(AKFErrorDomain, AKFServerResponseError)
{
  AKFServerResponseErrorInvalidConfirmationCode = 15003,
};


/**
 Deprecated
 */
typedef NS_ENUM(NSInteger, AKFLoginRequestInvalidatedErrorCode)
{
  AKFLoginRequestExpiredError DEPRECATED_MSG_ATTRIBUTE("use AKFLoginRequestErrorExpired instead") = 301,
} DEPRECATED_MSG_ATTRIBUTE("use AKFLoginRequestError instead");

/**
 Deprecated
 */
typedef NS_ENUM(NSInteger, AKFInvalidParameterValueErrorCode)
{
  AKFInvalidEmailAddressError DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorEmailAddress instead") = 401,
  AKFInvalidPhoneNumberError DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorPhoneNumber instead") = 402,
  AKFInvalidCodingValueError DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorCodingValue instead") = 403,
  AKFInvalidAccessTokenError DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorAccessToken instead") = 404,
  AKFInvalidAccountPreferenceKeyError DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorAccountPreferenceKey instead") = 405,
  AKFInvalidAccountPreferenceValueError DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorAccountPreferenceValue instead") = 406,
  AKFOperationNotSuccessful DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorOperationNotSuccessful instead") = 407,
  AKFInvalidUIManager DEPRECATED_MSG_ATTRIBUTE("use AKFParameterErrorUIManager instead") = 408,
} DEPRECATED_MSG_ATTRIBUTE("use AKFInvalidParameterError instead");

typedef NS_ENUM(NSInteger, AKFServerResponseErrorCode)
{
  AKFServerResponseErrorCodeInvalidConfirmationCode  DEPRECATED_MSG_ATTRIBUTE("use AKFServerResponseErrorInvalidConfirmationCode instead") = 15003,
} DEPRECATED_MSG_ATTRIBUTE("use AKFServerResponseError instead");

NS_ASSUME_NONNULL_END
