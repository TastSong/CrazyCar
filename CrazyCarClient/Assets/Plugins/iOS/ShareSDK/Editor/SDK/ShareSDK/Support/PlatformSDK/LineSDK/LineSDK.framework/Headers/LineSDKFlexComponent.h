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

NS_ASSUME_NONNULL_BEGIN

#pragma mark - common

typedef NS_ENUM(NSUInteger, LineSDKFlexComponentType) {
    LineSDKLayoutFlexComponentTypeBox,
    LineSDKLayoutFlexComponentTypeButton,
    LineSDKLayoutFlexComponentTypeFiller,
    LineSDKLayoutFlexComponentTypeIcon,
    LineSDKLayoutFlexComponentTypeImage,
    LineSDKLayoutFlexComponentTypeSeparator,
    LineSDKLayoutFlexComponentTypeSpacer,
    LineSDKLayoutFlexComponentTypeText,
} NS_SWIFT_NAME(FlexComponentType);

typedef NS_ENUM(NSUInteger, LineSDKFlexComponentSpacing) {
    LineSDKFlexComponentSpacingNone,
    LineSDKFlexComponentSpacingXS,
    LineSDKFlexComponentSpacingSM,
    LineSDKFlexComponentSpacingMD,
    LineSDKFlexComponentSpacingLG,
    LineSDKFlexComponentSpacingXL,
    LineSDKFlexComponentSpacingXXL,
} NS_SWIFT_NAME(FlexComponentSpacing);

typedef NS_ENUM(NSUInteger, LineSDKFlexComponentGravity) {
    LineSDKFlexComponentGravityTop,
    LineSDKFlexComponentGravityCenter,
    LineSDKFlexComponentGravityBottom,
} NS_SWIFT_NAME(FlexComponentGravity);

typedef NS_ENUM(NSUInteger, LineSDKFlexComponentHorizontalAlignment) {
    LineSDKFlexComponentHorizontalAlignmentStart,
    LineSDKFlexComponentHorizontalAlignmentCenter,
    LineSDKFlexComponentHorizontalAlignmentEnd,
} NS_SWIFT_NAME(FlexComponentHorizontalAlignment);

typedef NS_ENUM(NSUInteger, LineSDKFlexComponentSize) {
    LineSDKFlexComponentSizeXXS,
    LineSDKFlexComponentSizeXS,
    LineSDKFlexComponentSizeSM,
    LineSDKFlexComponentSizeMD,
    LineSDKFlexComponentSizeLG,
    LineSDKFlexComponentSizeXL,
    LineSDKFlexComponentSizeXXL,
    LineSDKFlexComponentSize3x1,
    LineSDKFlexComponentSize4x1,
    LineSDKFlexComponentSize5x1,
    LineSDKFlexComponentSizeFull,
} NS_SWIFT_NAME(FlexComponentSize);

NS_SWIFT_NAME(FlexComponent)
@protocol LineSDKFlexComponent <NSObject>

@property (nonatomic, assign, readonly) LineSDKFlexComponentType type;

@end

NS_ASSUME_NONNULL_END
