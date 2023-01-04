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

/**
 Predefined layouts of template message.
 */
typedef NS_ENUM(NSUInteger, LineSDKLayoutTemplateType) {
    /**
     Template with an image, title, text, and multiple action buttons.
     */
    LineSDKLayoutTemplateTypeButtons,

    /**
     Template with two action buttons.
     */
    LineSDKLayoutTemplateTypeConfirm,

    /**
     Template with multiple columns which can be cycled like a carousel. The
     columns will be shown in order by scrolling horizontally.
     */
    LineSDKLayoutTemplateTypeCarousel,

    /**
     Template with multiple images which can be cycled like a carousel. The
     images will be shown in order by scrolling horizontally.
     */
    LineSDKLayoutTemplateTypeImageCarousel,
} NS_SWIFT_NAME(LayoutTemplateType);

/**
 Represents the aspect ratio of the image.
 */
typedef NS_ENUM(NSUInteger, LineSDKTemplateMessageImageAspectRatio) {
    /**
     Aspect ratio of 1.51:1. This is the default value.
     */
    LineSDKTemplateMessageImageAspectRatioRectangle,

    /**
     Aspect ratio of 1:1.
     */
    LineSDKTemplateMessageImageAspectRatioSquare,
} NS_SWIFT_NAME(TemplateMessageImageAspectRatio);

/**
 Represents the size of the image.
 */
typedef NS_ENUM(NSUInteger, LineSDKTemplateMessageImageSize) {
    /**
     The image fills the entire image area. Parts of the image that do not fit
     in the area are not displayed. This is the default value.
     */
    LineSDKTemplateMessageImageSizeCover,

    /**
     The entire image is displayed in the image area. A background is displayed
     in the unused areas to the left and right of vertical images and in the
     areas above and below horizontal images.
     */
    LineSDKTemplateMessageImageSizeContain,
} NS_SWIFT_NAME(TemplateMessageImageSize);

/**
 The LineSDKLayoutTemplate protocol.
 */
NS_SWIFT_NAME(LayoutTemplate)
@protocol LineSDKLayoutTemplate <NSObject>

/**
 The layout template type. See LineSDKLayoutTemplateType for available types.
 */
@property (nonatomic, assign, readonly) LineSDKLayoutTemplateType type;

@end

NS_ASSUME_NONNULL_END
