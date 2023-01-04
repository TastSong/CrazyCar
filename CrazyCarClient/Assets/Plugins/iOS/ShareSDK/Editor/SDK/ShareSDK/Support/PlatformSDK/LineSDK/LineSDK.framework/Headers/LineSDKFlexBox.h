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

#import <Foundation/Foundation.h>
#import "LineSDKAttributes.h"
#import "LineSDKFlexComponent.h"
#import "LineSDKTemplateMessageAction.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LineSDKFlexBoxLayout) {
    LineSDKFlexBoxLayoutHorizontal,
    LineSDKFlexBoxLayoutVertical,
    LineSDKFlexBoxLayoutBaseline,
} NS_SWIFT_NAME(LineSDKFlexBoxLayout);


/**
 This is a component that defines the layout of child components. You can also include a box in a box.
 */
NS_SWIFT_NAME(FlexBox)
@interface LineSDKFlexBox : NSObject<LineSDKFlexComponent>

/**
 The placement style of components in this box.

 Specify one of the following values:

 horizontal: Components are placed horizontally. The direction property of the bubble container specifies the order.

 vertical: Components are placed vertically from top to bottom.

 baseline: Components are placed in the same way as horizontal is specified except the baselines of the components are aligned.

 For more information, see Types of box layouts.
 */
@property (nonatomic, assign) LineSDKFlexBoxLayout layout;

/**
 Components in this box.

 Here are the types of components available:

 When the layout property is horizontal or vertical: Box, button, filler, image, separator, and text components

 When the layout property is baseline: filler, icon, and text components
 */
@property (nonatomic, copy) NSArray<id<LineSDKFlexComponent>> *contents;

/**
 The ratio of the width or height of this box within the parent box.

 The default value for the horizontal parent box is 1, and the default value for the vertical parent box is 0.
 For more information, see Width and height of components.
 */
@property (nonatomic, assign, nullable) NSNumber *flex;

/**
 Minimum space between components in this box.

 You can specify one of the following values: none, xs, sm, md, lg, xl, or xxl.
 none does not set a space while the other values set a space whose size increases in the order of listing.
 The default value is none.
 To override this setting for a specific component, set the margin property of that component.
 */
@property (nonatomic, assign) LineSDKFlexComponentSpacing spacing;

/**
 Minimum space between this box and the previous component in the parent box.

 You can specify one of the following values: none, xs, sm, md, lg, xl, or xxl.
 none does not set a space while the other values set a space whose size increases in the order of listing.
 The default value is the value of the spacing property of the parent box.
 If this box is the first component in the parent box, the margin property will be ignored.
 */
@property (nonatomic, assign) LineSDKFlexComponentSpacing margin;

/**
 Action performed when this box is tapped. Specify an action object.

 This property is supported on the following versions of LINE.

 LINE for iOS and Android: 8.11.0 and later

 LINE for Windows and macOS: 5.9.0 and later
 */
@property (nonatomic, strong, nullable) id<LineSDKTemplateMessageAction> action;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithLayout:contents:` instead");

- (instancetype)initWithLayout:(LineSDKFlexBoxLayout)layout contents:(NSArray<id<LineSDKFlexComponent>> *)contents NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END



