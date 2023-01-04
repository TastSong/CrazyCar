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
#import "LineSDKLayoutTemplate.h"
#import "LineSDKTemplateMessageAction.h"

NS_ASSUME_NONNULL_BEGIN

@class LineSDKMessageSender;

/**
 Represents the Buttons Template in the Template Message.
 */
NS_SWIFT_NAME(ButtonsLayoutTemplate)
@interface LineSDKButtonsLayoutTemplate : NSObject<LineSDKLayoutTemplate>

/**
 An array of actions your account takes when a user taps a button or an image
 in a message.
 */
@property (nonatomic, copy) NSArray<id<LineSDKTemplateMessageAction>> *actions;

/**
 The URL to the thumnail image.
 */
@property (nonatomic, strong, nullable) NSURL *thumbnailImageURL;

/**
 The image aspect ratio.
 */
@property (nonatomic, assign) LineSDKTemplateMessageImageAspectRatio imageAspectRatio;

/**
 The image size.
 */
@property (nonatomic, assign) LineSDKTemplateMessageImageSize imageSize;

/**
 The background color of the image.
 */
@property (nonatomic, strong, nullable) UIColor *imageBackgroundColor;

/**
 The title of the template message. Maximum of 40 characters.
 */
@property (nonatomic, copy, nullable) NSString *title;

/**
 The template message text. Maximum 160 characters without image and title,
 or 60 characters with image or title.
 */
@property (nonatomic, copy) NSString *text;

/**
 Action when image is tapped; set for the entire image, title, and text area.
 */
@property (nonatomic, strong, nullable) id<LineSDKTemplateMessageAction> defaultAction;

/**
 The message sender object.
 */
@property (nonatomic, strong, nullable) LineSDKMessageSender *sender;

/**
 Use `initWithText:actions:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithText:actions:` instead");

/**
 Initializes a new instance of a Buttons Template with the provided text and
 an array of actions.

 @param text The template message text.
 @param actions An array of actions your account takes when a user taps a button
 or an image in a message.
 */
- (instancetype)initWithText:(NSString *)text
                     actions:(NSArray<id<LineSDKTemplateMessageAction>> *)actions;

@end

NS_ASSUME_NONNULL_END
