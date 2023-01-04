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
 @header KOSessionTask+FriendAPI.h
 인증된 session 정보를 바탕으로 Friend 관련 API를 호출할 수 있습니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 */
#import "KOSessionTask.h"
#import "KOFriend.h"
#import "KOFriendContext.h"
#import "KOFriendOperation.h"

/*!
 @abstract Friend API 요청 완료시 호출되는 콜백 핸들러.
 @param friends 친구 목록.
 @param error 호출 실패시의 오류 정보.
 */
typedef void(^KOSessionFriendsTaskCompletionHandler)(NSArray<KOFriend *> *friends, NSError *error);

/*!
인증된 session 정보를 바탕으로 Friend 관련 API를 호출할 수 있습니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
*/
@interface KOSessionTask (FriendAPI)

/*!
 @abstract 현재 로그인된 사용자의 카카오 친구 목록을 얻어온다.
 @param context 친구 목록 페이징 Context.
 @param completionHandler 카카오 친구 목록 정보를 얻어 처리하는 핸들러.
 */
+ (instancetype)friendsWithContext:(KOFriendContext *)context
                 completionHandler:(KOSessionFriendsTaskCompletionHandler)completionHandler;

/*!
 @abstract 카카오 친구 목록들의 연산된 결과를 얻어온다.
 @param operation 친구 목록 페이징 Operation.
 @param completionHandler 카카오 친구 목록 정보를 얻어 처리하는 핸들러.
 */
+ (instancetype)friendsWithOperation:(KOFriendOperation *)operation
                   completionHandler:(KOSessionFriendsTaskCompletionHandler)completionHandler DEPRECATED_ATTRIBUTE;

@end
