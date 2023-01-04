// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

#import <AccountKit/AKFUIManager.h>

NS_ASSUME_NONNULL_BEGIN

/**
 AKFSkinType

 The type of the UI skin chosen
 */
typedef NS_ENUM(NSUInteger, AKFSkinType)
{
  AKFSkinTypeClassic = 0,
  AKFSkinTypeContemporary,
  AKFSkinTypeTranslucent,
};

/**
 AKFBackgroundTint

 The tint color of the background image
 */
typedef NS_ENUM(NSUInteger, AKFBackgroundTint)
{
  AKFBackgroundTintWhite = 0,
  AKFBackgroundTintBlack,
};

@interface AKFSkinManager : NSObject <AKFUIManager>

- (instancetype)initWithSkinType:(AKFSkinType)skinType
                    primaryColor:(nullable UIColor *)primaryColor
                 backgroundImage:(nullable UIImage *)backgroundImage
                  backgroundTint:(AKFBackgroundTint)backgroundTint
                   tintIntensity:(CGFloat)tintIntensity
NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithSkinType:(AKFSkinType)skinType
                    primaryColor:(nullable UIColor *)primaryColor;
- (instancetype)initWithSkinType:(AKFSkinType)skinType;

@property (nonatomic, assign, readonly) AKFSkinType skinType;
@property (null_resettable, nonatomic, copy, readonly) UIColor *primaryColor;
@property (nullable, nonatomic, copy, readonly) UIImage *backgroundImage;
@property (nonatomic, assign, readonly) AKFBackgroundTint backgroundTint;
@property (nonatomic, assign, readonly) CGFloat tintIntensity;

@end

NS_ASSUME_NONNULL_END
