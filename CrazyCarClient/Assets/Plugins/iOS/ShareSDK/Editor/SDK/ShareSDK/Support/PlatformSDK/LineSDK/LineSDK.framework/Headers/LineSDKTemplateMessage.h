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
#import "LineSDKLayoutTemplate.h"
#import "LineSDKMessage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a template message in the User Message API.
 */
NS_SWIFT_NAME(TemplateMessage)
@interface LineSDKTemplateMessage : LineSDKMessage

/**
 The alternative text for this message. This is used for push notification or
 message preview in chats.
 */
@property (nonatomic, copy) NSString *altText;

/**
 The layout template of the template message, can be either
 LineSDKLayoutTemplateTypeButtons, LineSDKLayoutTemplateTypeConfirm,
 LineSDKLayoutTemplateTypeCarousel or LineSDKLayoutTemplateTypeImageCarousel.
 */
@property (nonatomic, strong) id<LineSDKLayoutTemplate> template;

/**
 Use `initWithAltText:template:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithAltText:template:` instead");

/**
 Instantiates a new instance of a template message with the provided alt text
 and template.

 @param altText The alternative text for the message.
 @param template The layout template of the template message.
 */
- (instancetype)initWithAltText:(NSString *)altText
                       template:(id<LineSDKLayoutTemplate>)template;

@end

NS_ASSUME_NONNULL_END
