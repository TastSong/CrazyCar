/**
 * Copyright 2015 Kakao Corp.
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

/*!
 @header KOUtils
 카카오 SDK Util 클래스.
 */

#import <Foundation/Foundation.h>

@interface KOUtils : NSObject

/*
 @abstract 카카오링크 콜백 URL 정보를 얻는다.
 */
+ (NSString *)kakaoLinkCallbackURL DEPRECATED_ATTRIBUTE;

/*
 @abstract SDK 기본 헤더 정보를 얻는다.
 */
+ (NSString *)kaHeader;

@end
