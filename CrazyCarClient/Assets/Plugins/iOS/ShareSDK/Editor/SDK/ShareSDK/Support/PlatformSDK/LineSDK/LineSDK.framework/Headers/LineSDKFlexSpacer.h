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
#import "LineSDKFlexComponent.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LineSDKFlexSpacerSize) {
    LineSDKFlexSpacerSize_XS,
    LineSDKFlexSpacerSize_SM,
    LineSDKFlexSpacerSize_MD,
    LineSDKFlexSpacerSize_LG,
    LineSDKFlexSpacerSize_XL,
    LineSDKFlexSpacerSize_XXL,
} NS_SWIFT_NAME(FlexSpacerSize);

/**
 This is an invisible component that places a fixed-size space at the beginning or end of the box.

 The spacing property of the parent box will be ignored for spacers.
 */
NS_SWIFT_NAME(FlexSpacer)
@interface LineSDKFlexSpacer : NSObject<LineSDKFlexComponent>

/**
 Size of the space.
 
 You can specify one of the following values: xs, sm, md, lg, xl, or xxl.
 The size increases in the order of listing.
 The default value is md.
 */
@property (nonatomic, assign) LineSDKFlexSpacerSize size;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithSize:` instead");

- (instancetype)initWithSize:(LineSDKFlexSpacerSize)size NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
