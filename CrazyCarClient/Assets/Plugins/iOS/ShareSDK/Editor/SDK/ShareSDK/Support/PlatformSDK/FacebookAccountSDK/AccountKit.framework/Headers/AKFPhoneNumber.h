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

/**
  This class represents a phone number.
 */
@interface AKFPhoneNumber : NSObject <NSCopying, NSSecureCoding>

/**
  This is the designated initializer.

 @param countryCode the country code for the phone number
 @param phoneNumber the remaining portion of the phone number


 While it is safe to provide any characters for the `countryCode` and `phoneNumber`, the values should only
 contain digits.  All other characters will be stripped from this value when it is used.
 */
- (instancetype)initWithCountryCode:(NSString *)countryCode
                        phoneNumber:(NSString *)phoneNumber
NS_DESIGNATED_INITIALIZER;

/**
 This additional initializer stores the corresponding country ISO code
 to the country code for the phone number
 */
- (instancetype)initWithCountryCode:(NSString *)countryCode
                         countryISO:(NSString *)iso
                        phoneNumber:(NSString *)phoneNumber;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
  The country code for the phone number.
 */
@property (nonatomic, copy, readonly) NSString *countryCode;

/**
 The country ISO code for the phone number.
 The ISO code for the country code can be nil
 */
@property (nonatomic, copy, readonly) NSString *countryISO;


/**
  The remaining portion of the phone number after the country code.
 */
@property (nonatomic, copy, readonly) NSString *phoneNumber;

/**
  Compares the receiver to another phone number

 @param phoneNumber the phone number to compare to
 */
- (BOOL)isEqualToPhoneNumber:(AKFPhoneNumber *)phoneNumber;

/**
  Converts the receiver to an `NSString`.


 All characters that are not digits will be stripped from the phone number and a `+` character will precede
 the country code value.
 */
- (NSString *)stringRepresentation;

@end

NS_ASSUME_NONNULL_END
