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
#import "LineSDKMessage.h"

NS_ASSUME_NONNULL_BEGIN

@class LineSDKMessageSender;

/**
 Represents a text message in the User Message API.
 */
NS_SWIFT_NAME(TextMessage)
@interface LineSDKTextMessage : LineSDKMessage

/**
 The message text.
 */
@property (nonatomic, copy) NSString *text;

/**
 Use `initWithText:` or `initWithText:sender:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithText:` or `initWithText:sender:` instead");

/**
 Convenience method to instantiate a new instance of a text message.

 @param text The message text.
 */
- (instancetype)initWithText:(NSString *)text;

/**
 Initializes a new text message instance.

 @param text The message text.
 @param sender The entity sending this message on behalf of
     the logged-in account. Information contained within this object
     will be displayed in a footer view in the text message bubble.
 */
- (instancetype)initWithText:(NSString *)text
                      sender:(LineSDKMessageSender *)sender;

@end

NS_ASSUME_NONNULL_END
