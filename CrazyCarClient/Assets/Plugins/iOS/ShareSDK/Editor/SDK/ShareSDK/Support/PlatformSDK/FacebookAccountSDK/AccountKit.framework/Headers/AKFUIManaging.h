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

#import <AccountKit/AKFUIManager.h>

/**
 @protocol

  Protocol for classes that manage UI.
 */
@protocol AKFUIManaging <NSObject>

/**
  The UI manager.
 */
@property (nonatomic, strong) id<AKFUIManager> uiManager;

/**
 Helper setter for backwards compatibility with older versions.
 Should be removed in the future versions
 */
// TODO: t15955381 deprecate all the extras for backwards compatibility
- (void)setAdvancedUIManager:(id<AKFAdvancedUIManager>)uiManager;

/**
 Helper setter for backwards compatibility with older versions.
 Should be removed in the future versions
 */
// TODO: t15955381 deprecate all the extras for backwards compatibility
- (void)setTheme:(AKFTheme *)theme;

@end
