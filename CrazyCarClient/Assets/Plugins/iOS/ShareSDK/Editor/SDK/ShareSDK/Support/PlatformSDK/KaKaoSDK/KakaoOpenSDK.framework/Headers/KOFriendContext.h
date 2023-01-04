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
 @header KOFriendContext.h
 @abstract 친구 목록 페이징의 정보를 처리하기 위한 Context를 정의한다.
 */
#import "KOBaseContext.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @abstract KOFriendServiceType 서비스 친구 타입.
 @constant KOFriendServiceTypeDefault 서버 기본값 사용.
 @constant KOFriendServiceTypeTalk 카카오톡 친구.
 @constant KOFriendServiceTypeStory 카카오스토리 친구.
 @constant KOFriendServiceTypeTalkAndStory 카카오톡 + 카카오스토리 친구.
 */
typedef NS_ENUM(NSInteger, KOFriendServiceType) {
    KOFriendServiceTypeDefault = -1,
    KOFriendServiceTypeTalk = 0,
    KOFriendServiceTypeStory = 1,
    KOFriendServiceTypeTalkAndStory = 2
};

/*!
 @abstract KOFriendFilterType 친구 필터링 타입.
 @constant KOFriendFilterTypeDefault 서버 기본값 사용.
 @constant KOFriendFilterTypeAll 전체 친구.
 @constant KOFriendFilterTypeRegistered 앱 가입 친구.
 @constant KOFriendFilterTypeInvitableNotRegistered 앱 미가입 친구.
 */
typedef NS_ENUM(NSInteger, KOFriendFilterType) {
    KOFriendFilterTypeDefault = -1,
    KOFriendFilterTypeAll = 0,
    KOFriendFilterTypeRegistered = 1,
    KOFriendFilterTypeInvitableNotRegistered = 2
};

/*!
 @abstract KOFriendOrderType 친구 정렬 타입.
 @constant KOFriendOrderTypeDefault 서버 기본값 사용.
 @constant KOFriendOrderTypeNickName 닉네임 정렬.
 @constant KOFriendOrderTypeAge 나이 정렬.
 @constant KOFriendOrderTypeFavorite 즐겨찾기 정렬.
 */
typedef NS_ENUM(NSInteger, KOFriendOrderType) {
    KOFriendOrderTypeDefault = -1,
    KOFriendOrderTypeNickName = 0,
    KOFriendOrderTypeRecentChatting DEPRECATED_MSG_ATTRIBUTE("서버에서 더 이상 사용되지 않는 값이므로 요청 파라미터에 추가되지 않습니다.") = 1,
    KOFriendOrderTypeTalkUserCreatedAt DEPRECATED_MSG_ATTRIBUTE("서버에서 더 이상 사용되지 않는 값이므로 요청 파라미터에 추가되지 않습니다.") = 2,
    KOFriendOrderTypeAge = 3,
    KOFriendOrderTypeAffinity DEPRECATED_MSG_ATTRIBUTE("서버에서 더 이상 사용되지 않는 값이므로 요청 파라미터에 추가되지 않습니다.") = 4,
    KOFriendOrderTypeFavorite = 5,
};

extern NSString* convertFriendServiceTypeString(KOFriendServiceType type);
extern NSString* convertFriendFilterTypeString(KOFriendFilterType type);
extern NSString* convertFriendOrderTypeString(KOFriendOrderType type);

/*!
 @class KOFriendContext
 @abstract 친구 목록 페이징의 정보를 처리하기 위한 Context
 */
@interface KOFriendContext : KOBaseContext

/*!
 @property serviceType
 @abstract 서비스 친구 타입.
 */
@property (nonatomic, readonly) KOFriendServiceType serviceType;

/*!
 @property filterType
 @abstract 친구 필터링 타입.
 */
@property (nonatomic, readonly) KOFriendFilterType filterType;

/*!
 @property orderType
 @abstract 친구 정렬 타입.
 */
@property (nonatomic, readonly) KOFriendOrderType orderType;

/*!
 @property favoriteCount;
 @abstract 내려온 친구 목록 중 즐겨찾기에 등록되어 있는 친구 수
 @discussion 이 컨텍스트로 KOSessionTask 친구 목록 조회를 요청한 이후에 이 값을 얻을 수 있습니다.
 */
@property (nonatomic, readonly) NSNumber *favoriteCount;

/*!
 친구 페이징 Context 를 생성한다.
 @param serviceType 서비스 친구 타입.
 @param filterType 친구 필터링 타입.
 */
+ (instancetype)contextWithServiceType:(KOFriendServiceType)serviceType
                            filterType:(KOFriendFilterType)filterType;

/*!
 친구 페이징 Context 를 생성한다.
 @param serviceType 서비스 친구 타입.
 @param filterType 친구 필터링 타입.
 @param limit 요청 시 제한하는 친구의 수.
 */
+ (instancetype)contextWithServiceType:(KOFriendServiceType)serviceType
                            filterType:(KOFriendFilterType)filterType
                                 limit:(NSInteger)limit;

/*!
 친구 페이징 Context 를 생성한다.
 @param serviceType 서비스 친구 타입.
 @param filterType 친구 필터링 타입.
 @param secureResource 프로필 이미지, 썸네일 등의 리소스 url을 https로 반환할지 여부.
 @param limit 요청 시 제한하는 친구의 수.
 @param orderType 친구 정렬 타입.
 @param ordering 정렬 방법.
 */
+ (instancetype)contextWithServiceType:(KOFriendServiceType)serviceType
                            filterType:(KOFriendFilterType)filterType
                        secureResource:(BOOL)secureResource
                                 limit:(NSInteger)limit
                             orderType:(KOFriendOrderType)orderType
                              ordering:(KOOrdering)ordering;

/*!
 친구 페이징 Context 를 생성한다.
 @param serviceType 서비스 친구 타입.
 @param filterType 친구 필터링 타입.
 @param secureResource 프로필 이미지, 썸네일 등의 리소스 url을 https로 반환할지 여부.
 @param limit 요청 시 제한하는 친구의 수.
 @param orderType 친구 정렬 타입.
 @param ordering 정렬 방법.
 */
- (instancetype)initWithServiceType:(KOFriendServiceType)serviceType
                         filterType:(KOFriendFilterType)filterType
                     secureResource:(BOOL)secureResource
                              limit:(NSInteger)limit
                          orderType:(KOFriendOrderType)orderType
                           ordering:(KOOrdering)ordering;
@end

NS_ASSUME_NONNULL_END
