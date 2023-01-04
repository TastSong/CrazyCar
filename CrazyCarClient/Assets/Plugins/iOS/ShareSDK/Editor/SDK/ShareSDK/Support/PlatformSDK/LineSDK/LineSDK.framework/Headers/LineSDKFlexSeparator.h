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

#import <UIKit/UIKit.h>
#import "LineSDKAttributes.h"
#import "LineSDKFlexComponent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This component draws a separator between components in the parent box.
 */
NS_SWIFT_NAME(FlexSeparator)
@interface LineSDKFlexSeparator : NSObject<LineSDKFlexComponent>

/**
 Minimum space between this component and the previous component in the parent box.
 
 You can specify one of the following values: none, xs, sm, md, lg, xl, or xxl.
 None does not set a space while the other values set a space whose size increases in the order of listing.
 The default value is the value of the spacing property of the parent box.
 If this component is the first component in the parent box, the margin property will be ignored.
 */
@property (nonatomic, assign) LineSDKFlexComponentSpacing margin;

/**
 Color of the separator.
 */
@property (nonatomic, copy, nullable) UIColor *color;

@end

NS_ASSUME_NONNULL_END
