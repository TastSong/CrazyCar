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
 Represents an action that will open a specified URI when a user taps a button
 or an image in a message.
 */
NS_SWIFT_NAME(TemplateMessageURIAction)
@interface LineSDKTemplateMessageURIAction : NSObject<LineSDKTemplateMessageAction>

/**
 The label for the action. Required for templates other than image carousel
 (maximum length of 20 characters). Optional for image carousel templates
 (maximum length of 12 characters).
 */
@property (nonatomic, copy, nullable) NSString *label;

/**
 URI opened when the action is performed (Max: 1000 characters)
 The available schemes are http, https, line, and tel.
 */
@property (nonatomic, strong) NSURL *uri;

/**
 Use `initWithLabel:uri:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithLabel:uri:` instead");

/**
 Instantiates a new instance of TemplateMessageURIAction.

 @param label The label for the action.
 @param uri The URI opened when the action is performed.
 */
- (instancetype)initWithLabel:(nullable NSString *)label uri:(NSURL *)uri;

@end

NS_ASSUME_NONNULL_END
