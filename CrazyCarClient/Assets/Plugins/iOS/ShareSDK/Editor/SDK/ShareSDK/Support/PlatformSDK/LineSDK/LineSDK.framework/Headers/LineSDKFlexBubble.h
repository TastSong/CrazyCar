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

@class LineSDKFlexBox;
@class LineSDKFlexImage;
@class LineSDKFlexBubbleStyle;

NS_ASSUME_NONNULL_BEGIN

/**
 Text directionality and the order of components in horizontal boxes in the container.

 - LineSDKFlexBubbleContentDirectionLeftToRight: Left to right (default)

 - LineSDKFlexBubbleContentDirectionRightToLeft: Right to left
 */
typedef NS_ENUM(NSUInteger, LineSDKFlexBubbleContentDirection) {
    LineSDKFlexBubbleContentDirectionLeftToRight,
    LineSDKFlexBubbleContentDirectionRightToLeft,
} NS_SWIFT_NAME(FlexBubbleContentDirection);

/**
 This is a container that contains one message bubble.

 It can contain four blocks: header, hero, body, and footer.
 For more information about using each block, see Block.
 The maximum size of the bubble container is 10 KB.
 */
NS_SWIFT_NAME(FlexBubble)
@interface LineSDKFlexBubble : NSObject<LineSDKFlexContainer>

/**
 Text directionality and the order of components in horizontal boxes in the container.
 */
@property (nonatomic, assign) LineSDKFlexBubbleContentDirection direction;

/**
 Header block. Specify a box component.
 */
@property (nonatomic, strong, nullable) LineSDKFlexBox *header;

/**
 Hero block. Specify an image component.
 */
@property (nonatomic, strong, nullable) LineSDKFlexImage *hero;

/**
 Body block. Specify a box component.
 */
@property (nonatomic, strong, nullable) LineSDKFlexBox *body;

/**
 Footer block. Specify a box component.
 */
@property (nonatomic, strong, nullable) LineSDKFlexBox *footer;

/**
 Style of each block. Specify a bubble style object. For more information, see Objects for the block style.
 */
@property (nonatomic, strong, nullable) LineSDKFlexBubbleStyle *styles;

@end

NS_ASSUME_NONNULL_END
