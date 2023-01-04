//
//  SCSDKSnapSticker.h
//  SCSDKCreativeKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SCSDKSnapSticker : NSObject

/**
 * @property stickerImage
 * @brief UIImage to be used as sticker
 */
@property (nonatomic, strong, readonly) UIImage * _Nullable stickerImage;

/**
 * @property stickerUrl
 * @brief File URL to the file to be used as sticker. Only .gif or .webp file formats are supported
 *        for animated images.
 */
@property (nonatomic, copy, readonly) NSURL * _Nullable stickerUrl;

/**
 * @property isAnimated
 * @breif Whether or not sticker is animated. If YES and using stickerImage projerty,
 *        stickerImage must be an animated UIImage.
 */
@property (nonatomic, assign, readonly) BOOL isAnimated;

/**
 * @property rotation
 * @brief Desired sticker rotation
 */
@property (nonatomic, assign) CGFloat rotation;

/**
 * @property posX
 * @brief Horizontal position of sticker's center
 */
@property (nonatomic, assign) CGFloat posX;

/**
 * @property posY
 * @brief Horizontal position of sticker's center
 */
@property (nonatomic, assign) CGFloat posY;

/**
 * @property width
 * @brief Fixed width of sticker. If fixed size is not provided, sticker will scale with a default max
 *        size of 200.
 */
@property (nonatomic, assign) CGFloat width DEPRECATED_ATTRIBUTE;

/**
 * @property height
 * @brief Fixed height of sticker. If fixed size is not provided, sticker will scale with a default max
 *        size of 200.
 */
@property (nonatomic, assign) CGFloat height DEPRECATED_ATTRIBUTE;

/**
 * Initializes an SCSDKSnapSticker instance.
 *
 * @param stickerImage UIImage to be used as a sticker.
 * @return An SCSDKSnapSticker instance initialized stickerImage.
 */
- (instancetype)initWithStickerImage:(UIImage *)stickerImage;

/**
 * Initializes an SCSDKSnapSticker instance.
 *
 * @param stickerUrl NSURL of an image file on disk to be used as a sticker.
 * @param isAnimated BOOL value indicating whether or not sticker is animated.
 * @return An SCSDKSnapSticker instance initialized with stickerUrl.
 */
- (instancetype)initWithStickerUrl:(NSURL *)stickerUrl isAnimated:(BOOL)isAnimated;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
