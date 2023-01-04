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

NS_ASSUME_NONNULL_BEGIN

/**
 AKFHeaderTextType

  The type of header text to use within the UI.
 */
typedef NS_ENUM(NSUInteger, AKFHeaderTextType)
{
  AKFHeaderTextTypeLogin = 0,
  AKFHeaderTextTypeAppName,
};

/**
 AKFInputStyle

 The style to use for inputs within the UI.
 */
typedef NS_ENUM(NSInteger, AKFInputStyle) {
  AKFInputStyleDefault,
  AKFInputStyleUnderline,
  AKFInputStyleBlurLight,
  AKFInputStyleBlurDark,
};

/**
 AKFButtonTranslucentStyle

 This style will be applied to buttons if `buttonBackgroundColor` is set to `[UIColor clearColor]`
 */
typedef NS_ENUM(NSInteger, AKFButtonTranslucentStyle) {
  AKFButtonTranslucentStyleDefault,
  AKFButtonTranslucentStyleBlurLight,
  AKFButtonTranslucentStyleBlurDark,
};

FOUNDATION_EXPORT const NSUInteger AKFHeaderTextTypeCount;

/**
  A theme for the Account Kit UI
 */
@interface AKFTheme : NSObject <NSCopying>

/**
  Returns the default theme.


 This theme can be used as a starting point and then updated as desired.
 */
+ (instancetype)defaultTheme;

/**
  Returns a default theme that uses an outline style instead of filled in components.
 */
+ (instancetype)outlineTheme;

/**
  Returns a theme that uses an outline style with simple color groups that will be applied to the theme.

 @param primaryColor The color used for `buttonBackgroundColor`, `buttonBorderColor`, `buttonDisabledBorderColor`,
 `buttonDisabledTextColor`, `buttonHighlightedBackgroundColor`, `buttonHighlightedBorderColor`,
 `headerBackgroundColor`, `iconColor`, `inputBorderColor`
 @param primaryTextColor The color used for `buttonHighlightedTextColor`, `buttonTextColor`, `headerTextColor`.
 @param secondaryTextColor The color used for `inputTextColor`, `textColor`, `titleColor`.
 @param statusBarStyle The style to use for the status bar.
 */
+ (instancetype)outlineThemeWithPrimaryColor:(UIColor *)primaryColor
                            primaryTextColor:(UIColor *)primaryTextColor
                          secondaryTextColor:(UIColor *)secondaryTextColor
                              statusBarStyle:(UIStatusBarStyle)statusBarStyle;

/**
  Returns a theme with simple color groups that will be applied to the theme.

 @param primaryColor The color used for `buttonBackgroundColor`, `buttonBorderColor`,
 `buttonHighlightedBackgroundColor`, `buttonHighlightedBorderColor`, `headerBackgroundColor`, `iconColor`.
 @param primaryTextColor The color used for `buttonHighlightedTextColor`, `buttonTextColor`, `headerTextColor`.
 @param secondaryColor The color used for `buttonDisabledBackgroundColor`, `buttonDisabledBorderColor`,
 `inputBackgroundColor`, `inputBorderColor`.
 @param secondaryTextColor The color used for `buttonDisabledTextColor`, `inputTextColor`, `textColor`, `titleColor`.
 @param statusBarStyle The style to use for the status bar.
 */
+ (instancetype)themeWithPrimaryColor:(UIColor *)primaryColor
                     primaryTextColor:(UIColor *)primaryTextColor
                       secondaryColor:(UIColor *)secondaryColor
                   secondaryTextColor:(UIColor *)secondaryTextColor
                       statusBarStyle:(UIStatusBarStyle)statusBarStyle;

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nullable, nonatomic, copy) UIImage *backgroundImage;
@property (nonatomic, copy) UIColor *buttonBackgroundColor;
@property (nonatomic, copy) UIColor *buttonBorderColor;
@property (nonatomic, copy) UIColor *buttonDisabledBackgroundColor;
@property (nonatomic, copy) UIColor *buttonDisabledBorderColor;
@property (nonatomic, copy) UIColor *buttonDisabledTextColor;
@property (nonatomic, copy) UIColor *buttonHighlightedBackgroundColor;
@property (nonatomic, copy) UIColor *buttonHighlightedBorderColor;
@property (nonatomic, copy) UIColor *buttonHighlightedTextColor;
@property (nonatomic, copy) UIColor *buttonTextColor;
@property (nonatomic, assign) AKFButtonTranslucentStyle buttonTranslucenStyle;
@property (nonatomic, assign) NSUInteger contentBodyLayoutWeight;
@property (nonatomic, assign) NSUInteger contentBottomLayoutWeight;
@property (nonatomic, assign) NSUInteger contentFooterLayoutWeight;
@property (nonatomic, assign) NSUInteger contentHeaderLayoutWeight;
@property (nonatomic, assign) CGFloat contentMarginLeft;
@property (nonatomic, assign) CGFloat contentMarginRight;
@property (nonatomic, assign) CGFloat contentMaxWidth;
@property (nonatomic, assign) CGFloat contentMinHeight;
@property (nonatomic, assign) NSUInteger contentTextLayoutWeight;
@property (nonatomic, assign) NSUInteger contentTopLayoutWeight;
@property (nonatomic, copy) UIColor *headerBackgroundColor;
@property (nonatomic, strong) UIColor *headerButtonTextColor;
@property (nonatomic, copy) UIColor *headerTextColor;
@property (nonatomic, assign) AKFHeaderTextType headerTextType;
@property (nonatomic, copy) UIColor *iconColor;
@property (nonatomic, copy) UIColor *inputBackgroundColor;
@property (nonatomic, copy) UIColor *inputBorderColor;
@property (nonatomic, assign) AKFInputStyle inputStyle;
@property (nonatomic, copy) UIColor *inputTextColor;
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) UIColor *titleColor;

- (BOOL)isEqualToTheme:(AKFTheme *)theme;

@end

NS_ASSUME_NONNULL_END
