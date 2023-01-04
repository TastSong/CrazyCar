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

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LineSDKFlexIconAspectRatio) {
    LineSDKFlexIconAspectRatio_1x1,
    LineSDKFlexIconAspectRatio_2x1,
    LineSDKFlexIconAspectRatio_3x1,
} NS_SWIFT_NAME(FlexIconAspectRatio);

typedef NS_ENUM(NSUInteger, LineSDKFlexIconSize) {
    LineSDKFlexIconSize_XXS,
    LineSDKFlexIconSize_XS,
    LineSDKFlexIconSize_SM,
    LineSDKFlexIconSize_MD,
    LineSDKFlexIconSize_LG,
    LineSDKFlexIconSize_XL,
    LineSDKFlexIconSize_XXL,
    LineSDKFlexIconSize_3x1,
    LineSDKFlexIconSize_4x1,
    LineSDKFlexIconSize_5x1,
} NS_SWIFT_NAME(FlexIconSize);

/**
 This component draws an icon. The icon's flex property is fixed to 0.
 */
NS_SWIFT_NAME(FlexIcon)
@interface LineSDKFlexIcon : NSObject<LineSDKFlexComponent>

/**
 Image URL

 Protocol: HTTPS

 Image format: JPEG or PNG

 Maximum image size: 240×240 pixels

 Maximum data size: 1 MB
 */
@property (nonatomic, strong, nullable) NSURL *url;

/**
 Minimum space between this component and the previous component in the parent box.

 You can specify one of the following values: none, xs, sm, md, lg, xl, or xxl.
 none does not set a space while the other values set a space whose size increases in the order of listing.
 The default value is the value of the spacing property of the parent box.
 If this component is the first component in the parent box, the margin property will be ignored.
 */
@property (nonatomic, assign) LineSDKFlexComponentSpacing margin;

/**
 Maximum size of the icon width.

 You can specify one of the following values: xxs, xs, sm, md, lg, xl, xxl, 3xl, 4xl, or 5xl.
 The size increases in the order of listing.
 The default value is md.
 */
@property (nonatomic, copy, nullable) NSString *size;

/**
 Aspect ratio of the icon.
 
 You can specify one of the following values: 1:1, 2:1, or 3:1.
 The default value is 1:1.
 */
@property (nonatomic, assign) LineSDKFlexIconAspectRatio aspectRatio;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithURL:` instead");

- (instancetype)initWithURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
