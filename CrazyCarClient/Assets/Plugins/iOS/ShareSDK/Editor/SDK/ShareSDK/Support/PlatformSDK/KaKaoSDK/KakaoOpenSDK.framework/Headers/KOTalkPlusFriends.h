/**
 * Copyright 2019 Kakao Corp.
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
 * @header KOTalkPlusFriends.h
 * @abstract 카카오톡 채널 정보 클래스 헤더
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @abstract KOPlusFriendRelation Relation 상태.
 * @constant KOPlusFriendRelationAdded 추가된 상태.
 * @constant KOPlusFriendRelationNone 관계없음.
 * @constant KOPlusFriendRelationUnknown 알수없음(default).
 */

typedef NS_ENUM(NSUInteger, KOPlusFriendRelation) {
    KOPlusFriendRelationAdded,
    KOPlusFriendRelationNone,
    KOPlusFriendRelationUnknown
};

@class KOPlusFriend;

/*!
 * @class KOTalkPlusFriends
 * @abstract 카카오톡 채널 추가상태 API 응답 클래스
 */
@interface KOTalkPlusFriends : NSObject

/*!
 * @property userId
 * @abstract 사용자의 고유 아이디
 */
@property (nonatomic, readonly, nullable) NSString *userId;

/*!
 * @property plusFriends
 * @abstract 요청한 사용자와 카카오톡 채널과의 상태 정보 목록
 * @seealso KOPlusFriend
 */
@property (nonatomic, readonly, nullable) NSArray<KOPlusFriend *> *plusFriends;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

/*!
 * @class KOPlusFriend
 * @abstract 카카오톡 채널 정보 클래스
 */
@interface KOPlusFriend : NSObject

/*!
 * @property uuid
 * @abstract 카카오톡 채널 uuid
 */
@property (nonatomic, readonly, nullable) NSString *uuid;

/*!
 * @property publicId
 * @abstract 카카오톡 채널 public ID
 */
@property (nonatomic, readonly, nullable) NSString *publicId;

/*!
 * @property relation
 * @abstract 채널관의 관계. 추가된 상태/관계없음/알수없음.
 */
@property (nonatomic, readonly) KOPlusFriendRelation relation;

/*!
 * @property updatedAt
 * @abstract relation 변경 시각 (현재는 ADDED 상태의 친구 추가시각만 의미)
 * @discussion RFC3339 internet date/time format (yyyy-mm-dd'T'HH:mm:ss'Z', yyyy-mm-dd'T'HH:mm:ss'+'HH:mm, yyyy-mm-dd'T'HH:mm:ss'-'HH:mm 가능)
 */
@property (nonatomic, readonly, nullable) NSDate *updatedAt;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

NS_ASSUME_NONNULL_END
