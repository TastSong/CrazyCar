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
#import "LineSDKFlexContainer.h"
#import "LineSDKFlexComponent.h"
#import "LineSDKMessage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Flex Messages are messages with a customizable layout.
 You can customize the layout freely by combining multiple elements.
 For more information, see https://developers.line.me/en/docs/messaging-api/using-flex-messages/
 Note: Flex Messages are only supported on LINE 6.7.0 and later for iOS and Android.
 */
NS_SWIFT_NAME(FlexMessage)
@interface LineSDKFlexMessage : LineSDKMessage

/**
 Alternative text

 Max: 400 characters
 */
@property (nonatomic, copy) NSString *altText;

/**
 Flex Message container object
 */
@property (nonatomic, strong) id<LineSDKFlexContainer> contents;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithAltText:contents:` instead");

- (instancetype)initWithAltText:(NSString *)altText
                       contents:(id<LineSDKFlexContainer>)contents;

@end

NS_ASSUME_NONNULL_END
