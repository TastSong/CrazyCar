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
#import "LineSDKLayoutTemplate.h"

NS_ASSUME_NONNULL_BEGIN

@class LineSDKCarouselColumn;

/**
 Template with multiple columns which can be cycled like a carousel. The
 columns will be shown in order by scrolling horizontally.
 */
NS_SWIFT_NAME(CarouselLayoutTemplate)
@interface LineSDKCarouselLayoutTemplate : NSObject<LineSDKLayoutTemplate>

/**
 Array of LineSDKCarouselColumn. Maximum of 10.
 */
@property (nonatomic, copy) NSArray<LineSDKCarouselColumn *> *columns;

/**
 Aspect ratio of the image.

 Specify one of the following values:

 - LineSDKTemplateMessageImageAspectRatioRectangle: 1.51:1

 - LineSDKTemplateMessageImageAspectRatioSquare: 1:1

 Applies to all columns.
 The default value is LineSDKTemplateMessageImageAspectRatioRectangle.
 */
@property (nonatomic, assign) LineSDKTemplateMessageImageAspectRatio imageAspectRatio;

/**
 Size of the image.

 Specify one of the following values:

 LineSDKTemplateMessageImageSizeCover: The image fills the entire image area.
 Parts of the image that do not fit in the area are not displayed.

 LineSDKTemplateMessageImageSizeContain: The entire image is displayed in the
 image area. A background is displayed in the unused areas to the left and
 right of vertical images and in the areas above and below horizontal images.

 Applies to all columns. The default value is cover.
 */
@property (nonatomic, assign) LineSDKTemplateMessageImageSize imageSize;

/**
 Use `initWithColumns:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithColumns:` instead");

/**
 Initializes a new instance of a Carousel Column with a provided an array of
 LineSDKCarouselColumn

 @param columns Array of LineSDKCarouselColumn. Maximum of 10.
 */
- (instancetype)initWithColumns:(NSArray<LineSDKCarouselColumn *> *)columns NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
