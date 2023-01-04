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
#import "LineSDKFlexContainer.h"

@class LineSDKFlexBubble;

NS_ASSUME_NONNULL_BEGIN

/**
 This is a container that contains multiple bubble containers, or message bubbles.

 The bubbles will be shown in order by scrolling horizontally.
 The maximum size of the carousel container is 50 KB.
 The total size of the bubble containers in the carousel container must be within 50 KB.
 If any of the bubbles in a carousel container has a body block,
 the body block extends so that the bubble has the same height as the highest bubble in the carousel container.
 */
NS_SWIFT_NAME(FlexCarousel)
@interface LineSDKFlexCarousel : NSObject<LineSDKFlexContainer>

@property (nonatomic, copy) NSArray<LineSDKFlexBubble *> *contents;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithContents:` instead");

- (instancetype)initWithContents:(NSArray<LineSDKFlexBubble *> *)contents NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
