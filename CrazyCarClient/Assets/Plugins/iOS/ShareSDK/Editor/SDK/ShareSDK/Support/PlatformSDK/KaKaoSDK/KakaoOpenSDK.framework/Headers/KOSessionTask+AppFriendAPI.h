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

#import "KOSessionTask.h"
#import "KOAppFriend.h"
#import "KOAppFriendContext.h"

/*!
 @header KOSessionTask+AppFriendAPI.h
 @abstract 인증된 session 정보를 바탕으로 Friend 및 Message API를 호출할 수 있습니다.
 */

NS_ASSUME_NONNULL_BEGIN

@class KOAppFriendContext;
@class KMTTemplate;

/*!
 @abstract App Friend API 요청 완료시 호출되는 콜백 핸들러.
 @param appFriends 앱 친구 목록.
 @param error 호출 실패시의 오류 정보.
 */
typedef void(^KOAppFriendsTaskCompletionHandler)(NSError *_Nullable error, NSArray<KOAppFriend *> *_Nullable appFriends);

/*!
 @abstract App Friend Message API 요청 완료시 호출되는 콜백 핸들러.
 @param successfulReceiverUuids 메시지 전송 성공한 대상의 uuid
 @param failureInfo (여러개의 receiver를 지정한 경우) 전송 실패한 일부 대상의 오류 정보
 @param error 호출 실패시의 오류 정보
 */
typedef void(^KOSessionTaskSendMessageCompletionHandler)(NSArray<NSString *> *_Nullable successfulReceiverUuids,
                                                         NSArray<NSError *> *_Nullable failureInfo,
                                                         NSError *_Nullable error);

/*!
 인증된 session 정보를 바탕으로 Friend 및 Message API를 호출할 수 있습니다.
 */
@interface KOSessionTask (AppFriendAPI)

/*!
 @abstract appFriendsWithContext:completionHandler: 카카오톡 친구 목록을 얻어온다.
 @discussion 내 앱에 연결되어 [카카오 서비스 내 친구목록] 제공에 동의한 친구만 조회 가능합니다.
 @param context 친구 목록 페이징 Context.
 @param completionHandler 카카오 앱 친구 목록 정보를 얻어 처리하는 핸들러.
 */
+ (instancetype)appFriendsWithContext:(KOAppFriendContext *)context
                    completionHandler:(KOAppFriendsTaskCompletionHandler)completionHandler;

/*!
 @abstract sendMessageToFriendsWithTemplate:receiverIds:completionHandler: 기본 제공되는 템플릿을 이용하여, 조회한 친구를 대상으로 카카오톡으로 메시지를 전송합니다.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param receiverUuids 메시지 전송 대상의 uuid 배열. (KOAppFriend.uuid)
 @param completionHandler 메시지 전송 완료 핸들러
 @seealso KOAppFriend
 */
+ (instancetype)sendMessageToFriendsWithTemplate:(KMTTemplate *)templateObj
                                   receiverUuids:(NSArray<NSString *> *)receiverUuids
                               completionHandler:(nullable KOSessionTaskSendMessageCompletionHandler)completionHandler;

/*!
 @abstract sendMessageToFriendsTaskWithURL:receiverIds:completionHandler: 지정된 URL을 스크랩하여, 조회한 친구를 대상으로 카카오톡으로 메시지를 전송합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param receiverUuids 메시지 전송 대상의 uuid 배열. (KOAppFriend.uuid)
 @param completionHandler 메시지 전송 완료 핸들러
 @seealso KOAppFriend
 */
+ (instancetype)sendMessageToFriendsTaskWithURL:(NSURL *)URL
                                  receiverUuids:(NSArray<NSString *> *)receiverUuids
                              completionHandler:(nullable KOSessionTaskSendMessageCompletionHandler)completionHandler;

/*!
 @abstract sendMessageToFriendsTaskWithURL:templateId:templateArgs:receiverIds:completionHandler: 지정된 URL을 스크랩하여, 조회한 친구를 대상으로 카카오톡으로 메시지를 전송합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param receiverUuids 메시지 전송 대상의 uuid 배열. (KOAppFriend.uuid)
 @param completionHandler 메시지 전송 완료 핸들러
 @seealso KOAppFriend
 */
+ (instancetype)sendMessageToFriendsTaskWithURL:(NSURL *)URL
                                     templateId:(nullable NSString *)templateId
                                   templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                                  receiverUuids:(NSArray<NSString *> *)receiverUuids
                              completionHandler:(nullable KOSessionTaskSendMessageCompletionHandler)completionHandler;

/*!
 @abstract sendMessageToFriendsTaskWithTemplateId:templateArgs:receiverIds:completionHandler: 미리 지정된 메시지 템플릿(v2)을 사용하여, 조회한 친구를 대상으로 카카오톡으로 메시지를 전송합니다.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param receiverUuids 메시지 전송 대상의 uuid 배열. (KOAppFriend.uuid)
 @param completionHandler 메시지 전송 완료 핸들러
 @seealso KOAppFriend
 */
+ (instancetype)sendMessageToFriendsTaskWithTemplateId:(NSString *)templateId
                                          templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                                         receiverUuids:(NSArray<NSString *> *)receiverUuids
                                     completionHandler:(nullable KOSessionTaskSendMessageCompletionHandler)completionHandler;

@end


/*!
 메시지 전송 failureInfo로 전달된 NSError의 userInfo에서 해당 에러로 실패한 사용자 아이디를 가져오는 키
 */
extern NSString *const KOErrorSendMessageFailureUuidsUserInfoKey;


NS_ASSUME_NONNULL_END
