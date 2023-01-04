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
 @header KakaoPushMessagePropertyForGcm.h
 Push 전송 시 보낼 메시지 객체 (Android 파트)
 */

NS_ASSUME_NONNULL_BEGIN

/*!
 @class KakaoPushMessagePropertyForGcm
 @abstract Push 전송 시 보낼 메시지 객체 (Android 파트)
 */
@interface KakaoPushMessagePropertyForGcm : NSObject

/*!
 @property collapse
 @abstract 푸시 메시지 구분자. 같은 값을 가지는 푸시 알림이 여러 개일 때 마지막 하나만 사용자 기기로 전송
 */
@property(nonatomic, readonly) NSString *collapse;

/*!
 @property timeToLive
 @abstract GCM에 저장될 미전송메시지 보관주기 (단위:초), 0 또는 음수를 입력할 경우 무시됨, 기본값 4주
 */
@property(nonatomic, assign) NSInteger timeToLive;

/*!
 @property dryRun
 @abstract 테스트를 위해 사용. 실제 단말에 전송되지 않는다
 */
@property(nonatomic, assign) BOOL dryRun;

/*!
 @property priority
 @abstract 단말이 도즈모드 상태에서도 푸시를 받을 수 있도록 한다. "high" 또는 "normal", 서버 기본값 "normal"
 */
@property(nonatomic, copy) NSString *priority;

/*!
 @property customField
 @abstract 메시지 외 앱에 부가적인 정보를 전달하고자 할 때 사용. APNS와 다르게 푸시 알림 한 건당 custom_field 전체 길이가 4KB까지 가능
 */
@property(nonatomic, copy, nullable) NSDictionary<NSString *, id> *customField;

/*!
 @property notification
 @abstract 사용자에게 표시되는 사전 정의된 알림 페이로드의 키-값 쌍을 지정. 사전 정의된 키는 https://firebase.google.com/docs/cloud-messaging/http-server-ref '표 2a/2b/2c' 참고
 */
@property(nonatomic, copy) NSDictionary<NSString *, id> *notification;

/*!
 @property returnUrl
 @abstract 푸시 알림의 전송 실패에 대한 피드백 처리가 필요할 때 사용
 */
@property(nonatomic, copy, nullable) NSString *returnUrl;

- (id)initWithCollapse:(nullable NSString *)collapse
        delayWhileIdle:(BOOL)delayWhileIdle
             returnUrl:(nullable NSString *)returnUrl
           customField:(nullable NSDictionary *)customField;

- (NSDictionary *)asDictionary;



@property(nonatomic, assign) BOOL delayWhileIdle DEPRECATED_MSG_ATTRIBUTE("The value of this property will be ignored.");

@end

NS_ASSUME_NONNULL_END
