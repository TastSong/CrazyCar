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

#import <UIKit/UIKit.h>
#import "LineSDKAttributes.h"
#import "LineSDKTemplateMessageAction.h"
#import "LineSDKFlexComponent.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LineSDKFlexButtonHeight) {
    LineSDKFlexButtonHeightSM,
    LineSDKFlexButtonHeightMD,
} NS_SWIFT_NAME(FlexButtonHeight);

typedef NS_ENUM(NSUInteger, LineSDKFlexButtonStyle) {
    LineSDKFlexButtonStyleLink,
    LineSDKFlexButtonStylePrimary,
    LineSDKFlexButtonStyleSecondary,
} NS_SWIFT_NAME(FlexButtonStyle);

/**
 This component draws a button. When the user taps a button, a specified action is performed.
 */
NS_SWIFT_NAME(FlexButton)
@interface LineSDKFlexButton : NSObject<LineSDKFlexComponent>

/**
 Action performed when this button is tapped. Specify an action object.
 */
@property (nonatomic, strong) id<LineSDKTemplateMessageAction> action;

/**
 The ratio of the width or height of this component within the parent box.
 
 The default value for the horizontal parent box is 1, and the default value for the vertical parent box is 0.
 For more information, see Width and height of components.
 */
@property (nonatomic, assign, nullable) NSNumber *flex;

/**
 Minimum space between this component and the previous component in the parent box.

 You can specify one of the following values: none, xs, sm, md, lg, xl, or xxl.
 none does not set a space while the other values set a space whose size increases in the order of listing.
 The default value is the value of the spacing property of the parent box.
 If this component is the first component in the parent box, the margin property will be ignored.
 */
@property (nonatomic, assign) LineSDKFlexComponentSpacing margin;

/**
 Height of the button. You can specify sm or md. The default value is md.
 */
@property (nonatomic, assign) LineSDKFlexButtonHeight height;

/**
 Style of the button.

 Specify one of the following values:

 link: HTML link style

 primary: Style for dark color buttons

 secondary: Style for light color buttons

 The default value is link.
 */
@property (nonatomic, assign) LineSDKFlexButtonStyle style;

/**
 Character color when the style property is link. Background color when the style property is primary or secondary.
 */
@property (nonatomic, copy, nullable) UIColor *color;

/**
 Vertical alignment style.

 Specify one of the following values:

 top: Top-aligned

 bottom: Bottom-aligned

 center: Center-aligned

 The default value is top.

 If the layout property of the parent box is baseline, the gravity property will be ignored.
 */
@property (nonatomic, assign) LineSDKFlexComponentGravity gravity;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithAction:` instead");

- (instancetype)initWithAction:(id<LineSDKTemplateMessageAction>)action NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
