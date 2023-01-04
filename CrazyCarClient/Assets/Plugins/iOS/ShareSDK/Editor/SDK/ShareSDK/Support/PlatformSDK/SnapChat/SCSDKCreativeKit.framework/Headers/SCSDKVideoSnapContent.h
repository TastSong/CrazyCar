//
//  SCSDKVideoSnapContent.h
//  SCSDKCreativeKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import "SCSDKSnapContent.h"

#import <Foundation/Foundation.h>

@class SCSDKSnapVideo;

NS_ASSUME_NONNULL_BEGIN

@interface SCSDKVideoSnapContent : NSObject<SCSDKSnapContent>

/**
 * @property snapVideo
 * @brief SCSDKSnapVideo instance containing video data required for creating a video Snap.
 */
@property (nonatomic, strong, readonly) SCSDKSnapVideo *snapVideo;

/**
 * Initializes an SCSDKVideoSnapContent instance.
 *
 * @param snapVideo SCSDKSnapVideo instance containing video data to be used as a Snap.
 * @return An SCSDKVideoSnapContent instance initialized with snapVideo.
 */
- (instancetype)initWithSnapVideo:(SCSDKSnapVideo *)snapVideo;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
