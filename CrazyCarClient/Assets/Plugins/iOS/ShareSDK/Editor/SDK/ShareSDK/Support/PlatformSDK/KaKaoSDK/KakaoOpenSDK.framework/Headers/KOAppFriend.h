/**
 * Copyright 2018 Kakao Corp.
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
 * @header KOAppFriend.h
 * @brief 한 명의 앱 친구를 나타내는 클래스
 */

#import <Foundation/Foundation.h>
#import "KOSession.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class KOAppFriend
 * @brief 한 명의 앱 친구를 나타내는 클래스
 */
@interface KOAppFriend : NSObject

/*!
 * @property ID
 * @abstract 친구의 사용자 아이디
 */
@property (readonly) NSString *ID;
/*!
 * @property uuid
 * @abstract 메시지를 전송하기 위한 고유 아이디
 * @discussion 사용자의 계정 상태에 따라 이 정보는 바뀔 수 있습니다. 앱내의 사용자 식별자로 저장 사용되는 것은 권장하지 않습니다.
 */
@property (readonly) NSString *uuid;
/*!
 * @property nickname
 * @abstract 친구의 닉네임
 */
@property (readonly, nullable) NSString *nickname;
/*!
 * @property thumbnailImageURL
 * @abstract 썸네일 이미지 URL
 */
@property (readonly, nullable) NSURL *thumbnailImageURL;
/*!
 * @property favorite
 * @abstract 즐겨찾기 추가 여부
 */
@property (readonly) KOOptionalBoolean favorite;

- (NSDictionary<NSString *, id> *)dictionary;
+ (instancetype)appFriendWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
