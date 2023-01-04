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

typedef NS_ENUM(NSUInteger, LineSDKFlexTextWeight) {
    LineSDKFlexTextWeightRegular,
    LineSDKFlexTextWeightBold,
} NS_SWIFT_NAME(FlexTextWeight);

typedef NS_ENUM(NSUInteger, LineSDKFlexTextSize) {
    LineSDKFlexTextSize_XXS,
    LineSDKFlexTextSize_XS,
    LineSDKFlexTextSize_SM,
    LineSDKFlexTextSize_MD,
    LineSDKFlexTextSize_LG,
    LineSDKFlexTextSize_XL,
    LineSDKFlexTextSize_XXL,
    LineSDKFlexTextSize_3x1,
    LineSDKFlexTextSize_4x1,
    LineSDKFlexTextSize_5x1,
} NS_SWIFT_NAME(FlexTextSize);

/**
 This component draws text. You can format the text.
 */
NS_SWIFT_NAME(FlexText)
@interface LineSDKFlexText : NSObject<LineSDKFlexComponent>

@property (nonatomic, copy) NSString *text;

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
 Font size.

 You can specify one of the following values: xxs, xs, sm, md, lg, xl, xxl, 3xl, 4xl, or 5xl.
 The size increases in the order of listing. The default value is md.
 */
@property (nonatomic, assign) LineSDKFlexTextSize size;

/**
 Horizontal alignment style. Specify one of the following values:

 start: Left-aligned

 end: Right-aligned

 center: Center-aligned

 The default value is start.
 */
@property (nonatomic, assign) LineSDKFlexComponentHorizontalAlignment alignment;

/**
 Vertical alignment style. Specify one of the following values:

 - top: Top-aligned

 - bottom: Bottom-aligned

 - center: Center-aligned

 - The default value is top.

 If the layout property of the parent box is baseline, the gravity property will be ignored.
 */
@property (nonatomic, assign) LineSDKFlexComponentGravity gravity;

/**
 True to wrap text.

 The default value is false. If set to true, you can use a new line character (\n) to begin on a new line.
 */
@property (nonatomic, assign) BOOL wrap;

/**
 Max number of lines.

 If the text does not fit in the specified number of lines, an ellipsis (…) is displayed at the end of the last line.
 If set to 0, all the text is displayed. The default value is 0.

 This property is supported on the following versions of LINE.

 LINE for iOS and Android: 8.11.0 and later

 LINE for Windows and macOS: 5.9.0 and later
 */
@property (nonatomic, assign) NSUInteger maxLines;

/**
 Font weight.

 You can specify one of the following values: regular, or bold.
 Specifying bold makes the font bold. The default value is regular.
 */
@property (nonatomic, assign) LineSDKFlexTextWeight weight;

/**
 Font color.
 */
@property (nonatomic, copy, nullable) UIColor *color;

/**
 Action performed when this text is tapped. Specify an action object.
 */
@property (nonatomic, strong, nullable) id<LineSDKTemplateMessageAction> action;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithText:` instead");

- (instancetype)initWithText:(NSString *)text NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
