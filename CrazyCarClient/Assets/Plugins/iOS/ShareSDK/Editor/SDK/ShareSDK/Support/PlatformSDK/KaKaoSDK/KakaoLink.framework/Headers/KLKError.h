/**
 * Copyright 2017 Kakao Corp.
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
 @header KLKError.h
 @abstract KakaoLink API를 호출할 때 발생하는 오류들을 정의합니다.
 */
#import <KakaoCommon/KCMError.h>

/*!
 @constant KLKErrorDomain KakaoLink API에서 발생하는 NSError 객체의 도메인.
 */
extern NSString *const KLKErrorDomain;

/*!
 @abstract SDK 오류 코드 정의
 @constant KLKErrorCodeUnknown 알 수 없는 오류
 @constant KLKErrorCodeCancelled 요청이 취소 됨
 @constant KLKErrorCodeOperationInProgress 이전 요청이 아직 실행중이어서 작업을 진행할 수 없음
 @constant KLKErrorCodeBadResponse 요청에 대한 응답에 기대하는 값이 없거나 문제가 있음
 @constant KLKErrorCodeNetwork 네트워크 오류
 @constant KLKErrorCodeHTTP http 프로토콜 오류
 @constant KLKErrorCodeBadParameter 파라미터 이상
 @constant KLKErrorCodeMisconfigured 개발환경 설정 오류
 @constant KLKErrorCodeInternal SDK 내부 오류
 @constant KLKErrorCodeUnsupportedTalkVersion 카카오톡이 설치되지 않았거나 지원되지 않는 버전일 경우
 @constant KLKErrorCodeExceedSizeLimit 카카오톡 메시지 요청 URL 길이 제한 초과
 */
typedef NS_ENUM(NSInteger, KLKErrorCode) {
    KLKErrorCodeUnknown = KCMErrorCodeUnknown,
    KLKErrorCodeCancelled = KCMErrorCodeCancelled,
    KLKErrorCodeOperationInProgress = KCMErrorCodeOperationInProgress,
    KLKErrorCodeBadResponse = 7,
    KLKErrorCodeNetwork = 8,
    KLKErrorCodeHTTP = 9,
    KLKErrorCodeBadParameter = KCMErrorCodeBadParameter,
    KLKErrorCodeMisconfigured = KCMErrorCodeMisconfigured,
    KLKErrorCodeInternal = KCMErrorCodeInternal,
    
    KLKErrorCodeUnsupportedTalkVersion = 201,
    KLKErrorCodeExceedSizeLimit = 202,
};

/*!
 @abstract 서버 오류 코드 정의
 @constant KLKServerErrorCodeUnknown 일반적인 서버 오류 응답. message를 확인해야 함
 @constant KLKServerErrorCodeBadParameter 파라미터 이상
 @constant KLKServerErrorCodeUnSupportedApi 지원되지 않은 API 호출
 @constant KLKServerErrorCodeAccessDenied 해당 API에 대한 권한/퍼미션이 없는 경우
 @constant KLKServerErrorCodeInternal 내부 서버 오류
 @constant KLKServerErrorCodeApiLimitExceed API 호출 횟수가 제한을 초과
 @constant KLKServerErrorCodeInvalidAppKey 등록되지 않은 앱키의 요청 또는 존재하지 않는 앱으로의 요청
 @constant KLKServerErrorCodeExceedMaxUploadSize 이미지 업로드 사이즈 제한 초과
 @constant KLKServerErrorCodeExecutionTimeOut 이미지 업로드시 타임아웃
 @constant KLKServerErrorCodeExceedMaxUploadNumber 이미지 업로드시 허용된 업로드 파일 수가 넘을 경우
 @constant KLKServerErrorCodeUnderMaintenance 서버 점검중
 */
typedef NS_ENUM(NSInteger, KLKServerErrorCode) {
    KLKServerErrorCodeUnknown = -1,
    KLKServerErrorCodeBadParameter = -2,
    KLKServerErrorCodeUnSupportedApi = -3,
    KLKServerErrorCodeAccessDenied = -5,
    KLKServerErrorCodeInternal = -9,
    KLKServerErrorCodeApiLimitExceed = -10,
    
    KLKServerErrorCodeInvalidAppKey = -401,
    
    KLKServerErrorCodeExceedMaxUploadSize = -602,
    KLKServerErrorCodeExecutionTimeOut = -603,
    KLKServerErrorCodeExceedMaxUploadNumber = -606,
    
    KLKServerErrorCodeUnderMaintenance = -9798,
};


// NSError userInfo key names.
/*!
 @constant KLKErrorExceedSizeLimitURLUserInfoKey 길이 제한이 초과된 카카오톡링크 URL. KLKErrorCodeExceedSizeLimit 에러에 포함될 수 있음.
 */
extern NSString *const KLKErrorExceedSizeLimitURLUserInfoKey;

/*!
 @constant KLKErrorHTTPStatusCodeUserInfoKey 서버로부터 받은 HTTP status code. KLKErrorCodeBadResponse 에러에 포함될 수 있음.
 */
extern NSString *const KLKErrorHTTPStatusCodeUserInfoKey;

/*!
 @constant KLKErrorResponseJSONUserInfoKey 서버로부터 받은 JSON 객체. KLKErrorCodeBadResponse 에러에 포함될 수 있음.
 */
extern NSString *const KLKErrorResponseJSONUserInfoKey;
