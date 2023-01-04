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
 Represents an audio message in the User Message API.
 */
NS_SWIFT_NAME(AudioMessage)
@interface LineSDKAudioMessage : LineSDKMessage

/**
 The URL to the audio file. Only https URL is allowed.
 */
@property (nonatomic, strong) NSURL *originalContentURL;

/**
 Play time in milliseconds. Optional, but highly recommended to specify. LINE
 clients show this on the audio mesage, or "00:00" if not specified.
 */
@property (nonatomic, assign) LineSDKMilliseconds duration;

- (instancetype)init LSDK_UNAVAILABLE("Use `initWithOriginalContentURL:` instead");

/**
 Convenience method to instantiate a new instance of an audio message with a
 provided original content URL.

 @param originalContentURL The URL to the audio file.
 */
- (instancetype)initWithOriginalContentURL:(NSURL *)originalContentURL;

/**
 Initializes a new instance of an audio message with the provided original
 content URL and audio duration.

 @param originalContentURL The URL to the audio file.
 @param duration The specified duration of the audio file in milliseconds.
 */
- (instancetype)initWithOriginalContentURL:(NSURL *)originalContentURL
                              withDuration:(LineSDKMilliseconds)duration
NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
