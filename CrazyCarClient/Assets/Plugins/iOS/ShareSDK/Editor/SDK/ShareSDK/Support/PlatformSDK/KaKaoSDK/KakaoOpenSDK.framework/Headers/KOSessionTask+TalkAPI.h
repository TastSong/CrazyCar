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
 @header KOSessionTask+TalkAPI.h
 @abstract 인증된 session 정보를 바탕으로 각종 카카오톡 API를 호출할 수 있습니다.
 */

#import "KOSessionTask.h"
#import "KOTalkProfile.h"
#import "KOChatContext.h"

#import "KOChat.h"
#import "KOChatMember.h"
#import "KOFriend.h"
#import "KOTalkPlusFriends.h"

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
typedef NS_ENUM(NSInteger, KOTalkMessageReceiverType) {
    KOTalkMessageReceiverTypeUser = 0,
    KOTalkMessageReceiverTypeFriend = 1,
    KOTalkMessageReceiverTypeChat = 2
};

/*!
 @abstract KOTalkMessageReceiverIDType
 @constant KOTalkMessageReceiverIDTypeUUID 메시지 수신 대상의 UUID. KOUserInfo.uuid
 @constant KOTalkMessageReceiverIDTypeUser 메시지 수신 대상의 사용자 ID. KOUserInfo.ID
 @constant KOTalkMessageReceiverIDTypeChat 메시지 수신 대상 채팅방 ID. KOChat.ID
 */
typedef NS_ENUM(NSInteger, KOTalkMessageReceiverIDType) {
    KOTalkMessageReceiverIDTypeUser = 1,
    KOTalkMessageReceiverIDTypeChat = 2,
    KOTalkMessageReceiverIDTypeUUID = 3,
};

/*!
 * @typedef KOSessionTaskTalkMembersCompletionHandler
 * @abstract 채팅방 멤버 API 완료 핸들러
 * @param members 멤버 목록
 * @param type 채팅방 타입. "Direct", "Multi"
 * @param activeMembersCount 내려받은 멤버 목록의 수 (최대 500). friendsOnly가 false이면 nil
 * @param activeFriendsCount 내려받은 멤버 중 친구의 수. friendsOnly가 false이면 nil
 * @param error API 호출 도중 발생한 에러
 */
typedef void(^KOSessionTaskTalkMembersCompletionHandler)(NSArray<KOChatMember *> *_Nullable members,
                                                         NSString *_Nullable type,
                                                         NSNumber *_Nullable activeMembersCount,
                                                         NSNumber *_Nullable activeFriendsCount,
                                                         NSError *_Nullable error);

/*!
 * @typedef KOSessionTaskTalkPlusFriendsCompletionHandler
 * @abstract 카카오톡 채널 추가상태 조회 API 완료 핸들러
 * @param plusFriends 카카오톡 채널 정보 목록
 * @param error API 호출 도중 발생한 에러
 */
typedef void (^KOSessionTaskTalkPlusFriendsCompletionHandler)(KOTalkPlusFriends *_Nullable plusFriends, NSError *_Nullable error);

@class KMTTemplate;

/*!
 인증된 session 정보를 바탕으로 각종 카카오톡 API를 호출할 수 있습니다.
 */
@interface KOSessionTask (TalkAPI)

#pragma mark - Send Message v2

/*!
 @abstract 기본 제공되는 템플릿을 이용하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param receiverType 메시지 수신 대상 ID의 타입.
 @param receiverId 메시지를 수신할 대상(채팅방 또는 사용자)의 ID.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMessageSendTaskWithTemplate:(KMTTemplate *)templateObj
                                            receiverType:(KOTalkMessageReceiverIDType)receiverType
                                              receiverId:(id)receiverId
                                       completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param receiverType 메시지 수신 대상 ID의 타입.
 @param receiverId 메시지를 수신할 대상(채팅방 또는 사용자)의 ID.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMessageSendTaskWithURL:(NSURL *)URL
                                       receiverType:(KOTalkMessageReceiverIDType)receiverType
                                         receiverId:(id)receiverId
                                  completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param receiverType 메시지 수신 대상 ID의 타입.
 @param receiverId 메시지를 수신할 대상(채팅방 또는 사용자)의 ID.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMessageSendTaskWithURL:(NSURL *)URL
                                         templateId:(nullable NSString *)templateId
                                       templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                                       receiverType:(KOTalkMessageReceiverIDType)receiverType
                                         receiverId:(id)receiverId
                                  completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;

/*!
 @abstract 미리 지정된 메시지 템플릿(v2)을 사용하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param receiverType 메시지 수신 대상 ID의 타입.
 @param receiverId 메시지를 수신할 대상(채팅방 또는 사용자)의 ID.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMessageSendTaskWithTemplateId:(NSString *)templateId
                                              templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                                              receiverType:(KOTalkMessageReceiverIDType)receiverType
                                                receiverId:(id)receiverId
                                         completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;



#pragma mark - Send Memo v2

/*!
 @abstract 기본 제공되는 템플릿을 이용하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMemoSendTaskWithTemplate:(KMTTemplate *)templateObj
                                    completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMemoSendTaskWithURL:(NSURL *)URL
                               completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMemoSendTaskWithURL:(NSURL *)URL
                                      templateId:(nullable NSString *)templateId
                                    templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                               completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;

/*!
 @abstract 미리 지정된 메시지 템플릿(v2)을 사용하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
+ (nullable instancetype)talkMemoSendTaskWithTemplateId:(NSString *)templateId
                                           templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                                      completionHandler:(nullable void (^)(NSError *_Nullable error))completionHandler;



#pragma mark - Profile

/*!
 @abstract 현재 로그인된 사용자의 카카오톡 프로필 정보를 얻을 수 있습니다.
 @param completionHandler 카카오톡 프로필 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)talkProfileTaskWithCompletionHandler:(nullable KOSessionTaskCompletionHandler)completionHandler;

/*!
 @abstract 현재 로그인된 사용자의 카카오톡 프로필 정보를 얻을 수 있습니다.
 @param secureResource 프로필, 썸네일 이미지 등의 리소스 정보들에 대해 https를 지원하는 형식으로 응답을 받을지의 여부. YES일 경우 https지원, NO일 경우 http지원.
 @param completionHandler 카카오톡 프로필 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)talkProfileTaskWithSecureResource:(BOOL)secureResource
                                completionHandler:(nullable KOSessionTaskCompletionHandler)completionHandler;


#pragma mark - Chat List

/*!
 @abstract 카카오톡 채팅방 목록을 가져옵니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param context 채팅방 목록을 불러올 때, 페이징 정보를 처리하기 위한 context.
 @param completionHandler 카카오톡 채팅방 목록을 가져와서 처리하는 핸들러.
 */
+ (nullable instancetype)talkChatListTaskWithContext:(KOChatContext *)context
                                   completionHandler:(nullable void (^)(NSArray<KOChat *> *_Nullable chats, NSError *_Nullable error))completionHandler;

#pragma mark - Members

/*!
 @abstract 사용자의 채팅방에 속한 멤버 리스트 정보를 반환합니다.
 @param chatID talkChatListTaskWithContext:completionHandler: 메소드로 받아온 채팅방의 아이디
 @param friendsOnly 채팅 멤버 중 친구인 멤버만 가져오고 싶을 경우 YES로 설정
 @param completionHandler 채팅 멤버 목록 완료 핸들러. 친구만 가져올 경우 activeMember와 activeFriends
 */
+ (instancetype)talkMembersTaskWithChatID:(id)chatID
                              friendsOnly:(BOOL)friendsOnly
                        completionHandler:(nullable KOSessionTaskTalkMembersCompletionHandler)completionHandler;

/*!
 @abstract 사용자가 특정 카카오톡 채널을 추가했는지 확인합니다.
 @param completionHandler 해당 사용자의 채널 추가상태 조회 완료 핸들러. KOTalkPlusFriends 객체를 리턴한다.
 @seealso KOTalkPlusFriends
 */
+ (instancetype)talkPlusFriendsTaskWithCompletionHandler:(nullable KOSessionTaskTalkPlusFriendsCompletionHandler)completionHandler;

/*!
 @abstract 사용자가 특정 카카오톡 채널을 추가했는지 확인합니다.
 @param publicIds 조회하려는 채널의 public Id 목록
 @param completionHandler 해당 사용자의 채널 추가상태 조회 완료 핸들러. KOTalkPlusFriends 객체를 리턴한다.
 @seealso KOTalkPlusFriends
 */
+ (instancetype)talkPlusFriendsTaskWithPublicIds:(nullable NSArray<NSString *> *)publicIds completionHandler:(nullable KOSessionTaskTalkPlusFriendsCompletionHandler)completionHandler;
@end

NS_ASSUME_NONNULL_END
