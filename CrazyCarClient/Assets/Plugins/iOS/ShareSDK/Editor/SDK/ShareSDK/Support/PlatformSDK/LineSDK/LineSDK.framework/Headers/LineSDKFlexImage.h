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

typedef NS_ENUM(NSUInteger, LineSDKFlexImageAspectMode) {
    LineSDKFlexImageAspectModeCover,
    LineSDKFlexImageAspectModeFit,
} NS_SWIFT_NAME(FlexImageAspectMode);

typedef NS_ENUM(NSUInteger, LineSDKFlexImageAspectRatio) {
    LineSDKFlexImageAspectRatio_1x1,
    LineSDKFlexImageAspectRatio_1_51x1,
    LineSDKFlexImageAspectRatio_1_91x1,
    LineSDKFlexImageAspectRatio_4x3,
    LineSDKFlexImageAspectRatio_16x9,
    LineSDKFlexImageAspectRatio_20x13,
    LineSDKFlexImageAspectRatio_2x1,
    LineSDKFlexImageAspectRatio_3x1,
    LineSDKFlexImageAspectRatio_3x4,
    LineSDKFlexImageAspectRatio_9x16,
    LineSDKFlexImageAspectRatio_1x2,
    LineSDKFlexImageAspectRatio_1x3,
} NS_SWIFT_NAME(FlexImageAspectRatio);

typedef NS_ENUM(NSUInteger, LineSDKFlexImageSize) {
    LineSDKFlexImageSize_XXS,
    LineSDKFlexImageSize_XS,
    LineSDKFlexImageSize_SM,
    LineSDKFlexImageSize_MD,
    LineSDKFlexImageSize_LG,
    LineSDKFlexImageSize_XL,
    LineSDKFlexImageSize_XXL,
    LineSDKFlexImageSize_3x1,
    LineSDKFlexImageSize_4x1,
    LineSDKFlexImageSize_5x1,
    LineSDKFlexImageSize_Full,
} NS_SWIFT_NAME(FlexImageSize);

/**
 This component draws an image.
 */
NS_SWIFT_NAME(FlexImage)
@interface LineSDKFlexImage : NSObject<LineSDKFlexComponent>

/**
 Image URL.

 Protocol: HTTPS.

 Image format: JPEG or PNG.

 Maximum image size: 1024×1024 pixels.

 Maximum data size: 1 MB.
 */
@property (nonatomic, strong, nullable) NSURL *url;

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
 Horizontal alignment style. Specify one of the following values:

 start: Left-aligned

 end: Right-aligned

 center: Center-aligned

 The default value is start.
 */
@property (nonatomic, assign) LineSDKFlexComponentHorizontalAlignment alignment;

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

/**
 Maximum size of the image width.

 You can specify one of the following values: xxs, xs, sm, md, lg, xl, xxl, 3xl, 4xl, 5xl, or full.
 The size increases in the order of listing. The default value is md.
 */
@property (nonatomic, assign) LineSDKFlexImageSize size;

/**
 Aspect ratio of the image.

 You can specify one of the following values: 1:1, 1.51:1, 1.91:1, 4:3, 16:9, 20:13, 2:1, 3:1, 3:4, 9:16, 1:2, or 1:3. The default value is 1:1.
 */
@property (nonatomic, assign) LineSDKFlexImageAspectRatio aspectRatio;

/**
 Style of the image.

 Specify one of the following values:

 cover: The image fills the entire drawing area.
 Parts of the image that do not fit in the drawing area are not displayed.

 fit: The entire image is displayed in the drawing area.
 The background is displayed in the unused areas to the left and right of vertical images and in the areas above and below horizontal images.
 The default value is fit.
 */
@property (nonatomic, assign) LineSDKFlexImageAspectMode aspectMode;

/**
 Background color of the image.
 */
@property (nonatomic, copy, nullable) UIColor *backgroundColor;

/**
 Action performed when this image is tapped. Specify an action object.
 */
@property (nonatomic, strong, nullable) id<LineSDKTemplateMessageAction> action;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithURL:` instead");

- (instancetype)initWithURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
