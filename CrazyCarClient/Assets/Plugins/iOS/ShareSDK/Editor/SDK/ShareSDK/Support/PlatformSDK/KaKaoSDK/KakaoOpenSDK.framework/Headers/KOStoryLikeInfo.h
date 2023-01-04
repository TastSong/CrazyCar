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
 @header KOStoryLikeInfo.h
 @abstract 카카오스토리의 내스토리 좋아요 등 느낌(감정표현)에 대한 정보를 담고 있는 구조체.
 */

#import <Foundation/Foundation.h>
#import "KOStoryActorInfo.h"

/*!
 @abstract KOStoryEmotion 느낌(감정표현)에 대한 정의.
 @constant KOStoryEmotionUnknown 알수 없는 형식
 @constant KOStoryEmotionLike 좋아요
 @constant KOStoryEmotionCool 멋져요
 @constant KOStoryEmotionHappy 기뻐요
 @constant KOStoryEmotionSad 슬퍼요
 @constant KOStoryEmotionCheerUp 힘내요
 */
typedef NS_ENUM(NSInteger, KOStoryEmotion) {
    KOStoryEmotionUnknown = 0,
    KOStoryEmotionLike = 1,
    KOStoryEmotionCool = 2,
    KOStoryEmotionHappy = 3,
    KOStoryEmotionSad = 4,
    KOStoryEmotionCheerUp = 5
};

/*!
 @class KOStoryLikeInfo
 @abstract 카카오스토리의 좋아요 등 느낌(감정표현)에 대한 정보를 담고 있는 구조체.
 */
@interface KOStoryLikeInfo : NSObject

/*!
 @property emotion
 @abstract 느낌에 대한 정보. 예) 좋아요, 멋져요, 기뻐요, 슬퍼요, 힘내요
 */
@property(nonatomic, readonly) KOStoryEmotion emotion;

/*!
 @property actor
 @abstract 느낌의 작성자
 */
@property(nonatomic, readonly) KOStoryActorInfo *actor;

- (id)initWithEmotion:(KOStoryEmotion)emotion
                actor:(KOStoryActorInfo *)actor;

- (NSString *)convertEmotionToString:(KOStoryEmotion)emotion;

@end
