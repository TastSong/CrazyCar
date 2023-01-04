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
 @header KOError.h
 KakaoOpenSDK 를 통해 카카오계정을 인증하거나 API를 호출할 때 발생하는 오류들을 정의합니다.
 */
#import <Foundation/Foundation.h>

extern NSString *const KOErrorDomain;

/*!
 @abstract 오류 코드 정의
 @constant  KOErrorUnknown 알 수 없는 오류
 @constant  KOErrorCancelled 오퍼레이션 취소를 나타냄
 @constant  KOErrorOperationInProgress 오퍼레이션이 진행 중간에 있음을 나타냄
 @constant  KOErrorTokenNotFound 로그인 상태를 기대하는 상황에서 인증 토큰이 없는 오류
 @constant  KOErrorDeactivatedSession 세션이 만료된(access_token, refresh_token이 모두 만료된 경우) 상태
 @constant  KOErrorAlreadyLoginedUser 로그인 된 상태(access_token, refresh_token이 존재 하는 경우)에서 다시 로그인 하려고 할때 발생하는 오류
 @constant  KOErrorBadResponse 요청에 대한 응답에 기대하는 값이 없거나 문제가 있음
 @constant  KOErrorNetworkError 네트워크 오류
 @constant  KOErrorHTTP http 프로토콜 오류
 @constant  KOErrorNotSupported 지원하지 않는 기능
 @constant  KOErrorBadParameter 파라미터 이상
 @constant  KOErrorIllegalState 작업을 실행하기에 적절하지 않은 상태
 @constant  KOServerErrorInternal 일반적인 서버 오류 응답. message를 확인해야 함
 @constant  KOServerErrorBadParameter 파라미터 이상
 @constant  KOServerErrorUnSupportedApi 지원되지 않은 API 호출
 @constant  KOServerErrorBlocked 계정 제재 또는 특정 서비스에서 해당 사용자의 제재로 인해 API 호출이 금지된 경우
 @constant  KOServerErrorPermission 해당 API에 대한 권한/퍼미션이 없는 경우
 @constant  KOServerErrorMisConfigured 개발환경 설정 오류 (bundle id 등)
 @constant  KOServerErrorDeprecatedApi 삭제 예정 API인 경우. 대상 API의 기존 사용처 중 일부 화이트리스트 조건을 만족하는 앱키에 대해서는 정해진 유예기간 동안 보호를 받아 이 에러가 발생하지 않습니다. 자세한 내용은 API 삭제가 진행될 경우 해당 공지사항을 참고해주세요.
 @constant  KOServerErrorApiLimitExceed API 호출 횟수가 제한을 초과
 @constant  KOServerErrorNotSignedUpUser 미가입(가가입) 사용자
 @constant  KOServerErrorAlreadySignedUpUser 이미 가입된 사용자. 가입된 사용자에 대해 다시 가입 요청(앱 연결 요청)을 한 경우
 @constant  KOServerErrorNotKakaoAccountUser 카카오계정 유저가 아닐때
 @constant  KOServerErrorInvalidUserPropertyKey 등록되지 않은 user property key
 @constant  KOServerErrorNoSuchApp 존재하지 않는 앱
 @constant  KOServerErrorInvalidAccessToken access_token이 비정상적이거나 만료된 경우
 @constant  KOServerErrorInsufficientScope 해당 API에 대한 사용자의 동의 퍼미션이 없는 경우
 @constant  KOServerErrorNotAgeAuthorized 연령인증이 필요한 경우
 @constant  KOServerErrorLowerAgeLimit 현재 앱의 연령제한보다 사용자의 연령이 낮은 경우
 @constant  KOServerErrorAlreadyAgeAuthorized 이미 연령인증이 완료된 경우
 @constant  KOServerErrorAgeCheckLimitExceed 연령인증 최대 횟수를 초과한 경우
 @constant  KOServerErrorAgeResultMismatched 이전에 인증했던 정보와 불일치 한 경우
 @constant  KOServerErrorCIResultMismatched CI 정보가 불일치 할 경우
 @constant  KOServerErrorNotTalkUser 카카오톡 유저가 아닐때
 @constant  KOServerErrorUserDeviceUnsupported 유저 디바이스가 해당 기능을 지원하지 않는 경우
 @constant  KOServerErrorTalkMessageDisabled 받는이가 메시지 수신 거부를 설정한 경우
 @constant  KOServerErrorTalkSendMessageMonthlyLimitExceed 한명이 특정앱에 대해 특정인에게 보낼 수 있는 한달 쿼터 초과시 발생
 @constant  KOServerErrorTalkSendMessageDailyLimitExceed 한명이 특정앱에 대해 보낼 수 있는 하루 쿼터(받는 사람 관계없이) 초과시 발생
 @constant  KOServerErrorNotStoryUser 카카오스토리 유저가 아닐때
 @constant  KOServerErrorStoryImageUploadSizeExceed 카카오스토리 이미지 업로드 사이즈 제한 초과
 @constant  KOServerErrorStoryUploadTimeout 카카오스토리 이미지 업로드시 타임아웃
 @constant  KOServerErrorStoryInvalidScrapUrl 카카오스토리 스크랩시 잘못된 스크랩 URL로 호출할 경우
 @constant  KOServerErrorStoryInvalidPostId 카카오스토리의 내정보 요청시 잘못된 내스토리 아이디(포스트 아이디)로 호출할 경우
 @constant  KOServerErrorStoryMaxUploadNumberExceed 카카오스토리 이미지 업로드시 허용된 업로드 파일 수가 넘을 경우
 @constant  KOServerErrorPushNotExistPushToken 존재하지 않는 푸시 토큰으로 푸시 전송을 하였을 경우
 @constant  KOServerErrorUnderMaintenance 서버 점검중
 */
typedef enum {
    KOErrorUnknown = 1,
    KOErrorCancelled = 2,
    KOErrorOperationInProgress = 3,
    KOErrorTokenNotFound = 4,
    KOErrorDeactivatedSession = 5,
    KOErrorAlreadyLoginedUser = 6,
    KOErrorBadResponse = 7,
    KOErrorNetworkError = 8,
    KOErrorHTTP = 9,
    KOErrorNotSupported = 10,
    KOErrorBadParameter = 11,
    KOErrorIllegalState = 14,

    KOServerErrorInternal = -1,
    KOServerErrorBadParameter = -2,
    KOServerErrorUnSupportedApi = -3,
    KOServerErrorBlocked = -4,
    KOServerErrorPermission = -5,
    KOServerErrorMisConfigured = -6,
    KOServerErrorDeprecatedApi = -9,
    KOServerErrorApiLimitExceed = -10,

    KOServerErrorNotSignedUpUser = -101,
    KOServerErrorAlreadySignedUpUser = -102,
    KOServerErrorNotKakaoAccountUser = -103,

    KOServerErrorInvalidUserPropertyKey = -201,

    KOServerErrorNoSuchApp = -301,

    KOServerErrorInvalidAccessToken = -401,
    KOServerErrorInsufficientScope = -402,
    KOServerErrorNotAgeAuthorized = -450,
    KOServerErrorLowerAgeLimit = -451,
    KOServerErrorAlreadyAgeAuthorized = -452,
    KOServerErrorAgeCheckLimitExceed = -453,
    KOServerErrorAgeResultMismatched = -480,
    KOServerErrorCIResultMismatched = -481,

    KOServerErrorNotTalkUser = -501,
    KOServerErrorUserDeviceUnsupported = -504,
    KOServerErrorTalkMessageDisabled = -530,
    KOServerErrorTalkSendMessageMonthlyLimitExceed = -531,
    KOServerErrorTalkSendMessageDailyLimitExceed = -532,
    
    KOServerErrorNotStoryUser = -601,
    KOServerErrorStoryImageUploadSizeExceed = -602,
    KOServerErrorStoryUploadTimeout = -603,
    KOServerErrorStoryInvalidScrapUrl = -604,
    KOServerErrorStoryInvalidPostId = -605,
    KOServerErrorStoryMaxUploadNumberExceed = -606,

    KOServerErrorPushNotExistPushToken = -901,

    KOServerErrorUnderMaintenance = -9798,

} KOErrorCode;
