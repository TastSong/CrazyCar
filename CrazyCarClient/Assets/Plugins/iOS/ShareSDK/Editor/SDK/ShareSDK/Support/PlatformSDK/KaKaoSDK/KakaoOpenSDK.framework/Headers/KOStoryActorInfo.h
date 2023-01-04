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
 @header KOStoryActorInfo.h
 카카오스토리의 작성자 정보를 담고 있는 구조체.
 */

#import <Foundation/Foundation.h>

/*!
 @class KOStoryActorInfo
 @discussion 카카오스토리의 작성자 정보를 담고 있는 구조체.
 */
@interface KOStoryActorInfo : NSObject <NSCopying>

/*!
 @property profileThumbnailUrl
 @abstract 작성자의 썸네일에 대한 URL
 */
@property(nonatomic, readonly) NSString *profileThumbnailUrl;

/*!
 @property displayName
 @abstract 작성자의 표시되는 이름
 */
@property(nonatomic, readonly) NSString *displayName;

- (id)initWithProfileThumbnailUrl:(NSString *)profileThumbnailUrl
                      displayName:(NSString *)displayName;

- (id)copyWithZone:(NSZone *)zone;

@end
