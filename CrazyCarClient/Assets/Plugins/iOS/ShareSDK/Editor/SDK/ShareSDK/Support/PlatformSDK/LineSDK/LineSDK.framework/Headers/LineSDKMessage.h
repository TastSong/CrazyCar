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

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LineSDKMessageType) {
    LineSDKMessageTypeText,
    LineSDKMessageTypeImage,
    LineSDKMessageTypeVideo,
    LineSDKMessageTypeAudio,
    LineSDKMessageTypeLocation,
    LineSDKMessageTypeTemplate,
    LineSDKMessageTypeFlex,
} NS_SWIFT_NAME(MessageType);

@class LineSDKMessageSender;

/**
 Represents a user message.
 */
NS_SWIFT_NAME(Message)
@interface LineSDKMessage : NSObject

/**
 The type of the user message. See LineSDKMessageType for available types.
 */
@property (nonatomic, assign, readonly) LineSDKMessageType type;

/**
 The message sender.
 */
@property (nonatomic, strong, readonly, nullable) LineSDKMessageSender *sender;

/**
 Use `initWithType:` or `initWithType:sender:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithType:` or `initWithType:sender:` instead");

/**
 Instantiates a new message with the provided type.

 @param type The message type.
 */
- (instancetype)initWithType:(LineSDKMessageType)type;

/**
 Instantiates a new message with a provided message type and a message sender.

 @param type The message type.
 @param sender An instance of the message sender.
 */
- (instancetype)initWithType:(LineSDKMessageType)type
                      sender:(LineSDKMessageSender *)sender;

@end

NS_ASSUME_NONNULL_END
