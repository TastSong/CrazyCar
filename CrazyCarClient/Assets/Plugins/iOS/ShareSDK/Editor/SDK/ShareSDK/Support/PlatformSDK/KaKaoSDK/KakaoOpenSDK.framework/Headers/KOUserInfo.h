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

#import <Foundation/Foundation.h>
#import "KOTalkMessageSending.h"

extern NSString const *EXTRA_KEY_SERVICE_USER_ID;
extern NSString const *EXTRA_KEY_INVITE_MESSAGE_REMAINING_COUNT;
extern NSString const *EXTRA_KEY_GROUP_CHAT_MESSAGE_REMAINING_COUNT;

@interface KOUserInfo : NSObject <KOTalkMessageSending>

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

/*
 @property ID
 @abstract 가입자에 대한 앱내 고유한 사용자 ID. 해당 사용자가 앱 연결 해제(탈퇴)를 하지 않는 한 변하지 않는 고유한 식별자입니다. 미가입자의 경우 해당 정보가 존재하지 않습니다.
 */
@property (nonatomic, readonly) NSNumber *ID;


/*
 @property uuid
 @abstract 가입 여부와 관계없는 앱내 고유한 ID. 카카오 서비스의 회원임을 앱내에서 식별 할 수 있지만, 사용자의 계정 상태에 따라 이 정보는 바뀔 수 있습니다. 앱내의 사용자 식별자로 저장 사용되는 것은 권장하지 않습니다. 앱의 특정 권한에 한 해 존재합니다.
 */
@property (nonatomic, readonly) NSString *uuid;

/*
 @property extras
 @abstract User extra 정보. 앱의 특정 카테고리나 특정 권한에 한 해 존재합니다.
 */
@property (nonatomic, readonly) NSDictionary *extras;


@end
