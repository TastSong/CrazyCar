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

#import "KOSessionTask.h"
#import "KOPushTokenInfo.h"
#import "KakaoPushMessageObject.h"

@class KakaoPushMessageObject;

/*!
 @header KOSessionTask+PushAPI.h
 인증된 session 정보를 바탕으로 각종 푸시 알림 API를 호출할 수 있습니다.
 */

/*!
 인증된 session 정보를 바탕으로 각종 푸시 알림 API를 호출할 수 있습니다.
 */
@interface KOSessionTask (PushAPI)

#pragma mark - Push

/*!
 @abstract 현재 로그인된 사용자의 Push 토큰을 등록합니다. /v1/user/me 에 해당하는 유저의 ID로 자동 등록하게 됩니다. 해당 API는 AdminKey가 아닌 AccessToken 기반으로 요청합니다.
 @param deviceToken APNS에 등록된 Device Token. 이 값이 Device ID로도 활용됨
 @param completionHandler 요청 완료시 실행될 핸들러. expiredAt은 등록한 푸시 토큰의 만료까지 남은 기간을 뜻합니다. 보통 30이 리턴되며 30일 남았음을 뜻합니다.
 */
+ (instancetype)pushRegisterDeviceWithToken:(NSData *)deviceToken
                          completionHandler:(void (^)(BOOL success, NSInteger expiredAt, NSError *error))completionHandler;

/*!
 @abstract 현재 로그인된 사용자의 Push 토큰을 삭제합니다. 로그아웃할 때, 해당 기기에서 Push 알림 끄기 등의 상황에서 사용 가능합니다. 해당 API는 AdminKey가 아닌 AccessToken 기반으로 요청합니다.
 @param deviceToken APNS에 등록된 Device Token. 이 값이 Device ID로도 활용됨
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)pushDeregisterDeviceWithToken:(NSData *)deviceToken
                            completionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

/*!
 @abstract 현재 로그인된 사용자의 모든 Push 토큰을 삭제합니다. 서비스 탈퇴 시 같이 사용 가능합니다. 해당 API는 AdminKey가 아닌 AccessToken을 기반으로 요청합니다.
 */
+ (instancetype)pushDeregisterAllDeviceWithCompletionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

/*!
 @abstract Push를 전송합니다(테스트용). 해당 API는 테스트 목적으로 만들어졌으며, 해당 기기로 Push를 전송합니다. 실제 다른 사용자들에게 Push를 전송하기 위해서는 AdminKey 방식의 Push 전송 REST API를 사용해야 합니다.
 @param pushMsg Push 전송에 필요한 각종 메타 데이터
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)pushSendMsg:(KakaoPushMessageObject *)pushMsg
          completionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

/*!
 @abstract 현재 로그인된 사용자의 모든 Push 토큰들에 대한 정보를 얻을 수 있습니다. 해당 API는 AdminKey가 아닌 AccessToken을 기반으로 요청합니다.
 @param completionHandler Push 토큰의 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)pushGetTokensTaskWithCompletionHandler:(void (^)(NSArray *tokens, NSError *error))completionHandler;

@end
