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
 @header KakaoPushMessagePropertyForApns.h
 Push 전송 시 보낼 메시지 객체 (iOS 파트)
 */

NS_ASSUME_NONNULL_BEGIN

/*!
 @class KakaoPushMessagePropertyForApns
 @discussion Push 전송 시 보낼 메시지 객체 (iOS 파트)
 */
@interface KakaoPushMessagePropertyForApns : NSObject

/*!
 * @property message
 * @abstract 알림 센터에 표시할 메시지. aps의 alert에 해당 됨. NSString 혹은 NSDictionary가 들어감. 참조: https://developer.apple.com/library/ios/documentation/NetworkingInternet/Conceptual/RemoteNotificationsPG/Chapters/ApplePushService.html
 */
@property(nonatomic, readonly) NSObject *message;

/*!
 * @property topic
 * @abstract VoIP(Voice over Internet Protocol)를 사용할 경우에 "voip"로 설정
 */
@property(nonatomic, copy, nullable) NSString *topic;

/*!
 * @property mutableContent
 * @abstract 기기에 보여지기 전, payload를 변경하고자 할 때 사용
 */
@property(nonatomic, assign) BOOL mutableContent;

/*!
 * @property expiration
 * @abstract 푸시 수신이 불가능한 경우, 해당 기간(단위: 초)동안 재시도 함
 */
@property(nonatomic, assign) NSUInteger expiration;

/*!
 * @property collapse
 * @abstract 푸시 메시지 구분자. 같은 collapse 을 가지는 푸시가 여러개 쌓여있다면 하나의 푸시로 단말에게 전송됨
 */
@property(nonatomic, copy, nullable) NSString *collapse;

/*!
 * @property badgeCount
 * @abstract 앱 배치에 표시할 숫자. 음수일 경우 무시됨, 기본 값 -1
 */
@property(nonatomic, assign) NSInteger badgeCount;

/*!
 * @property sound
 * @abstract 푸시 수신 시 재생할 알림음. "default"를 입력하거나 앱에 해당 알림음 파일이 없으면 기본 알림음 재생됨
 */
@property(nonatomic, copy, nullable) NSString *sound;

/*!
 * @property pushAlert
 * @abstract false(NO)일 경우 음소거, 알림센터에 뜨지 않는 상태로 Push 전송. 푸시 음소거 및 알림센터에 띄우지는 않되, badge 수는 바꾸고 싶을 때 사용. 기본 값 true(YES)
 */
@property(nonatomic, assign) BOOL pushAlert;

/*!
 * @property contentAvailable
 * @abstract 백그라운드 업데이트 알림(Silent Notification)을 사용하고 싶을 때 설정
 */
@property(nonatomic, assign) BOOL contentAvailable;

/*!
 * @property category
 * @abstract 알림의 유형을 나타내는 문자열. aps의 category-identifier
 */
@property(nonatomic, copy, nullable) NSString *category;

/*!
 * @property customField
 * @abstract 푸시 알림을 통해 앱 실행 시 같이 넘길 파라미터들
 */
@property(nonatomic, copy, nullable) NSDictionary<NSString *, id> *customField;

/*!
 * @property returnUrl
 * @abstract 푸시 알림의 전송 실패("BadDeviceToken", "Unregistered", "DeviceTokenNotForTopic")에 대한 피드백 처리가 필요할 때 사용
 */
@property(nonatomic, copy, nullable) NSString *returnUrl;

- (id)initWithBadgeCount:(NSInteger)badgeCount
                   sound:(nullable NSString *)sound
               pushAlert:(BOOL)pushAlert
           messageString:(NSString *)message
             customField:(nullable NSDictionary *)customField;

- (id)initWithBadgeCount:(NSInteger)badgeCount
                   sound:(nullable NSString *)sound
               pushAlert:(BOOL)pushAlert
       messageDictionary:(NSDictionary *)message
             customField:(nullable NSDictionary *)customField;

- (NSDictionary *)asDictionary;


@end

NS_ASSUME_NONNULL_END
