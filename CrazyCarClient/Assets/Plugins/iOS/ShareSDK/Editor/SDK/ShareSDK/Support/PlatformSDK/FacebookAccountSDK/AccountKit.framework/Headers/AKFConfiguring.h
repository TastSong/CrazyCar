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

/**
 @protocol

  Defines the properties that can be configured for the Account Kit UI.
 */
@protocol AKFConfiguring

/**
  List of country codes to disallow.
 */
@property (nonatomic, copy) NSArray<NSString *> *blacklistedCountryCodes;

/**
  Specifies the default country code to select.
 */
@property (nonatomic, copy) NSString *defaultCountryCode;

/**
 Specifies if the app supports sending codes to Facebook (as an SMS alternative)
 */
@property (nonatomic, assign) BOOL enableSendToFacebook;

/**
 Specifies if the app supports receiving a phone call back for codes (as an SMS alternative)
 */
@property (nonatomic, assign) BOOL enableGetACall;

/**
  List of country codes to allow.
 */
@property (nonatomic, copy) NSArray<NSString *> *whitelistedCountryCodes;

@end
