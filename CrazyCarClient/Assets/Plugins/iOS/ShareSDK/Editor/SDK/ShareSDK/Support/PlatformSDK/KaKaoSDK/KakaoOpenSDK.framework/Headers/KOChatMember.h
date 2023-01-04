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
 * @header KOChatMember.h
 * @brief 카카오톡 채팅방의 대화 상대를 나타내는 클래스
 */

#import <Foundation/Foundation.h>
#import <KakaoOpenSDK/KOTalkMessageSending.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class KOChatMember
 * @brief 카카오톡 채팅방의 대화 상대를 나타내는 클래스
 */
@interface KOChatMember : NSObject <KOTalkMessageSending>

/*!
 * @property uuid
 * @abstract 가입 여부와 관계없는 앱내 고유한 ID
 * @discussion 카카오 서비스의 회원임을 앱내에서 식별 할 수 있지만, 사용자의 계정 상태에 따라 이 정보는 바뀔 수 있습니다. 앱내의 사용자 식별자로 저장 사용되는 것은 권장하지 않습니다.
 */
@property (nonatomic, readonly) NSString *uuid;
/*!
 * @property appRegistered
 * @abstract 채팅 멤버의 앱 가입 여부
 */
@property (nonatomic, readonly, getter=isAppRegistered) BOOL appRegistered;
/*!
 * @property ID
 * @abstract 채팅 멤버의 사용자 아이디
 */
@property (readonly, nullable) NSString *ID;
/*!
 * @property nickname
 * @abstract 카카오톡 닉네임
 */
@property (readonly, nullable) NSString *nickname;
/*!
 * @property thumbnailImageURL
 * @abstract 카카오톡 썸네일 이미지 URL
 */
@property (readonly, nullable) NSURL *thumbnailImageURL;
/*!
 * @property msgBlocked
 * @abstract 메시지 차단 여부
 */
@property (readonly, getter=isMsgBlocked) BOOL msgBlocked;
    
- (NSDictionary<NSString *, id> *)dictionary;
+ (instancetype)memberWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
