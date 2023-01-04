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

NS_ASSUME_NONNULL_BEGIN

/**
 The column object for Carousel Template.
 */
NS_SWIFT_NAME(CarouselColumn)
@interface LineSDKCarouselColumn : NSObject

/**
 The URL to the thumbnail image. Maximum of 1000 characters.
 */
@property (nonatomic, strong, nullable) NSURL *thumbnailImageURL;

/**
 The background color of the image. Default is white if not specified.
 */
@property (nonatomic, strong, nullable) UIColor *imageBackgroundColor;

/**
 The title of the template message. Maximum of 40 characters.
 */
@property (nonatomic, copy, nullable) NSString *title;

/**
 The message text. Maximum 120 characters without any image or title,
 or 60 characters with an image or a title.
 */
@property (nonatomic, copy) NSString *text;

/**
 Action when image is tapped; set for the entire image, title, and text area.
 */
@property (nonatomic, strong, nullable) id<LineSDKTemplateMessageAction> defaultAction;

/**
 An array of actions your account takes when a user taps a button or an image
 in a message.
 */
@property (nonatomic, copy) NSArray<id<LineSDKTemplateMessageAction>> *actions;

/**
 Use `initWithText:actions:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithText:actions:` instead");

/**
 Initializes a new instance of a Carousel Column with the provided text and
 an array of actions.

 @param text The message text.
 @param actions An array of actions your account takes when a user taps a button
 or an image in a message.
 */
- (instancetype)initWithText:(NSString *)text
                     actions:(NSArray<id<LineSDKTemplateMessageAction>> *)actions NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
