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

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KLKTalkLinkAction) {
    KLKTalkLinkActionDefault,
    KLKTalkLinkActionScrap,
    KLKTalkLinkActionCustom,
};

@class KCMConfiguration;
@class KMTTemplate;

@interface KLKTalkLinkCore : NSObject

@property (strong, nonatomic) KCMConfiguration *configuration;

@property (assign, nonatomic) NSURLRequestCachePolicy requestCachePolicy;
@property (assign, nonatomic) NSTimeInterval requestTimeoutInterval;

@property (strong, nonatomic) NSString *targetAppKey;

- (instancetype)initWithConfiguration:(KCMConfiguration *)configuration;

- (NSURLRequest *)requestDefaultWithTemplate:(KMTTemplate *)templateObj error:(NSError **)error;
- (NSURLRequest *)requestScrapWithURL:(NSURL *)URL error:(NSError **)error;
- (NSURLRequest *)requestScrapWithURL:(NSURL *)URL templateId:(NSString *)templateId templateArgs:(NSDictionary<NSString *,NSString *> *)templateArgs error:(NSError **)error;
- (NSURLRequest *)requestCustomWithTemplateId:(NSString *)templateId templateArgs:(NSDictionary<NSString *,NSString *> *)templateArgs error:(NSError **)error;

- (NSURL *)sharerURLWithTemplate:(KMTTemplate *)templateObj serverCallbackArgs:(NSDictionary<NSString *,NSString *> *)serverCallbackArgs error:(NSError **)error;
- (NSURL *)sharerURLWithURL:(NSURL *)URL error:(NSError **)error;
- (NSURL *)sharerURLWithURL:(NSURL *)URL templateId:(NSString *)templateId templateArgs:(NSDictionary<NSString *,NSString *> *)templateArgs serverCallbackArgs:(NSDictionary<NSString *,NSString *> *)serverCallbackArgs error:(NSError **)error;
- (NSURL *)sharerURLWithTemplateId:(NSString *)templateId templateArgs:(NSDictionary<NSString *,NSString *> *)templateArgs serverCallbackArgs:(NSDictionary<NSString *,NSString *> *)serverCallbackArgs error:(NSError **)error;

- (void)handleResponseWithResponse:(NSURLResponse *)response data:(NSData *)data serverCallbackArgs:(NSDictionary<NSString *,NSString *> *)serverCallbackArgs completion:(void (^)(NSURL *talkLinkURL, NSDictionary *warningMsg, NSDictionary *argumentMsg, NSError *error))completion;

@property (readonly) NSString *executionScheme;
@property (readonly) NSString *versionScheme;

@end
