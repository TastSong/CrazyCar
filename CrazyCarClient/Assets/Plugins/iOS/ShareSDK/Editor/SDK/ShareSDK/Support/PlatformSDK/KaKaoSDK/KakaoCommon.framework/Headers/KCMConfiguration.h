/**
 * Copyright 2017 Kakao Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, KCMPhase) {
    KCMPhaseRelease = 0,
    KCMPhaseBeta,
    KCMPhaseSandbox,
    KCMPhaseAlpha,
};

@interface KCMConfiguration : NSObject <NSCopying>

@property (assign, nonatomic) KCMPhase phase;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appScheme;

+ (instancetype)defaultConfiguration;
+ (instancetype)openableConfiguration;

- (BOOL)isOpenable;
- (BOOL)isOpenableWithError:(NSError **)error;

@end

@interface KCMConfiguration (Utility)

+ (BOOL)existsURLScheme:(NSString *)scheme;
+ (BOOL)existsQueryScheme:(NSString *)scheme;

@end

extern NSString *const KCMConfigurationExceptionName;
