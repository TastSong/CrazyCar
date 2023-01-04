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

/**
 Represents a message sender object.
 */
NS_SWIFT_NAME(MessageSender)
@interface LineSDKMessageSender : NSObject

/**
 The sender label. Maximum length of 50 characters.
 */
@property (nonatomic, copy, readonly) NSString *label;

/**
 The URL to the icon of the sender. Maximum length of 1000 characters. Only
 HTTPS is allowed. The icon image must be JPEG or PNG with a maximum size of
 15x15px.
 */
@property (nonatomic, strong, readonly) NSURL *iconURL;

/**
 The URL that will be opened when the user taps the sender view.
 */
@property (nonatomic, strong, readonly, nullable) NSURL *linkURL;

/**
 Use `initWithLabel:iconURL:linkURL:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithLabel:iconURL:linkURL:` instead");

/**
 Instantiates a new instance of the sender object.

 @param label The sender label.
 @param iconURL The URL to the icon of the sender.
 @param linkURL The URL that will be opened when the user taps the sender view.
 */
- (instancetype)initWithLabel:(NSString *)label
                      iconURL:(NSURL *)iconURL
                      linkURL:(nullable NSURL *)linkURL;

@end

NS_ASSUME_NONNULL_END
