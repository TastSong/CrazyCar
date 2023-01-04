//
//  SCSDKSnapAPI.h
//  SCSDKCreativeKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SCSDKSnapContent;

NS_ASSUME_NONNULL_BEGIN

/**
 * Callback to trigger when Snapping is complete.
 *
 * @param error Error that is set when Snapping fails.
 */
typedef void (^SCSDKSnapAPICompletionHandler)(NSError * _Nullable error );

@interface SCSDKSnapAPI : NSObject

- (instancetype)init NS_DESIGNATED_INITIALIZER;

/**
 * Starts sending content to Snapchat if Snapchat is installed.
 * .
 * @param content Content that is send to Snapchat.
 * @param completionHandler Block that will run after Snapping is complete. Failure if error is set
 *                          success otherwise.
 */
- (void)startSendingContent:(id<SCSDKSnapContent>)content
          completionHandler:(SCSDKSnapAPICompletionHandler _Nullable)completionHandler;

/**
 * Initializes an SCSDKSnapAPI instance.
 *
 * @param content SCSDKSnapContent to be Snapped.
 * @return An SCSDKSnapAPI instance initialized with content and fromViewController.
 */
- (instancetype)initWithContent:(id<SCSDKSnapContent>)content DEPRECATED_ATTRIBUTE;

/**
 * Starts Snapping.
 *
 * @param completionHandler Block that will run after Snapping is complete. Failure if error is set
 *                          success otherwise.
 */
- (void)startSnappingWithCompletionHandler:(SCSDKSnapAPICompletionHandler _Nullable)completionHandler DEPRECATED_ATTRIBUTE;

/**
 * Cancels Snapping.
 */
- (void)cancelSnapping DEPRECATED_ATTRIBUTE;

@end

NS_ASSUME_NONNULL_END
