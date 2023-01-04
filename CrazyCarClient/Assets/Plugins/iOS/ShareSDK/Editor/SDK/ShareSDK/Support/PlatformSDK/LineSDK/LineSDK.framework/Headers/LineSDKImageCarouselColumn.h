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
#import "LineSDKTemplateMessageAction.h"

NS_ASSUME_NONNULL_BEGIN

/**
 The column object for Image Carousel Template.
 */
NS_SWIFT_NAME(ImageCarouselColumn)
@interface LineSDKImageCarouselColumn : NSObject

/**
 The image URL. Maximum length of 1000 characters. Only HTTPS is allowed.
 The image may be JPEG or PNG, with an aspect ratio of 1:1. Image maximum
 width is 1024px, maximum file size is 1 MB.
 */
@property (nonatomic, strong) NSURL *imageURL;

/**
 An action that your account takes when a user taps an image.
 */
@property (nonatomic, strong) id<LineSDKTemplateMessageAction> action;

/**
 Use `initWithText:actions:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithText:actions:` instead");

/**
 Instantiates a new instance of LineSDKImageCarouselColumn.

 @param imageURL The image URL.
 @param action An action that your account takes when a user taps an image.
 */
- (instancetype)initWithImageURL:(NSURL *)imageURL
                          action:(id<LineSDKTemplateMessageAction>)action;

@end

NS_ASSUME_NONNULL_END
