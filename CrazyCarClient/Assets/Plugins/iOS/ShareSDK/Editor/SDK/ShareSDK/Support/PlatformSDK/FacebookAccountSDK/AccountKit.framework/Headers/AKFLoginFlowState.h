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

#import <UIKit/UIKit.h>

/**
 AKFLoginFlowState

  States for the login flow.
 */
typedef NS_ENUM(NSUInteger, AKFLoginFlowState)
{
  /**
    No flow state is available.
   */
  AKFLoginFlowStateNone = 0,

  /**
    The phone number is being entered.
   */
  AKFLoginFlowStatePhoneNumberInput,

  /**
    The email address is being entered.
   */
  AKFLoginFlowStateEmailInput,

  /**
    The email is being verified.
   */
  AKFLoginFlowStateEmailVerify,

  /**
    The confirmation code is sending.
   */
  AKFLoginFlowStateSendingCode,

  /**
    The confirmation code is sent.
   */
  AKFLoginFlowStateSentCode,

  /**
    The confirmation code is being entered.
   */
  AKFLoginFlowStateCodeInput,

  /**
    The confirmation code is being verified.
   */
  AKFLoginFlowStateVerifyingCode,

  /**
    The confirmation code is verified.
   */
  AKFLoginFlowStateVerified,

  /**
    An error is being presented.
   */
  AKFLoginFlowStateError,

  /**
    Resend code screen is being entered
   */
  AKFLoginFlowStateResendCode,

  /**
   Country code screen is being entered
   */
  AKFLoginFlowStateCountryCode,
};

FOUNDATION_EXPORT const NSUInteger AKFLoginFlowStateCount;
