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
#import "LineSDKMessage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a location message in the User Message API.
 */
NS_SWIFT_NAME(LocationMessage)
@interface LineSDKLocationMessage : LineSDKMessage

/**
 A title for the location.
 */
@property (nonatomic, copy, readonly) NSString *title;

/**
 A human-readable location address.
 */
@property (nonatomic, copy, readonly) NSString *address;

/**
 The latitude of the location.
 */
@property (nonatomic, assign, readonly) CGFloat latitude;

/**
 The longitude of the location.
 */
@property (nonatomic, assign, readonly) CGFloat longitude;

/**
 Use `initWithTitle:address:latitude:longitude` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithTitle:address:latitude:longitude` instead");

/**
 Initializes a new instance of a location message with the provided
 location properties.

 @param title A title for the location.
 @param address A human-readable location address.
 @param latitude The latitude of the location.
 @param longitude The longitude of the location.
 */
- (instancetype)initWithTitle:(NSString *)title
                      address:(NSString *)address
                     latitude:(CGFloat)latitude
                    longitude:(CGFloat)longitude;

@end

NS_ASSUME_NONNULL_END
