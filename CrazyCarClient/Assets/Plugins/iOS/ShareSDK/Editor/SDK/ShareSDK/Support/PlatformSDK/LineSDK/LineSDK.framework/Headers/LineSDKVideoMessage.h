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
#import "LineSDKMessage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a video message in the User Message API.
 */
NS_SWIFT_NAME(VideoMessage)
@interface LineSDKVideoMessage : LineSDKMessage

/**
 The video file URL. Only https URL is allowed.
 */
@property (nonatomic, strong) NSURL *originalContentURL;

/**
 The video preview image URL. Only https URL is allowed.
 */
@property (nonatomic, strong) NSURL *previewImageURL;

/**
 Use `initWithOriginalContentURL:previewImageURL:` instead.
 */
- (instancetype)init LSDK_UNAVAILABLE("Use `initWithOriginalContentURL:previewImageURL:` instead");

/**
 Initializes a new instance of a video message with the provided
 content URL and preview image URL.

 @param originalContentURL The video file URL.
 @param previewImageURL The video preview image URL.
 */
- (instancetype)initWithOriginalContentURL:(NSURL *)originalContentURL
                           previewImageURL:(NSURL *)previewImageURL;

@end

NS_ASSUME_NONNULL_END
