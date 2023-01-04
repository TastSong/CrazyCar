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
#import "KOAccessTokenInfo.h"

/*!
 @header KOSessionTask+TokenAPI.h
 인증된 access token 정보를 얻어올 수 있습니다.
 */

/*!
 @abstract access token 정보를 얻을 때 사용하는 완료 콜백 핸들러
 @param accessTokenInfo 해당 access token의 정보
 @param error 호출 실패시의 오류 정보
 */
typedef void(^KOSessionAccessTokenInfoTaskCompletionHandler)(KOAccessTokenInfo *accessTokenInfo, NSError *error);

/*!
 인증된 access token 정보를 얻어올 수 있습니다.
 */
@interface KOSessionTask (TokenAPI)

/*!
 @abstract 현재 로그인된 사용자의 AccessTokenInfo 정보를 얻을 수 있습니다.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)accessTokenInfoTaskWithCompletionHandler:(KOSessionAccessTokenInfoTaskCompletionHandler)completionHandler;


@end
