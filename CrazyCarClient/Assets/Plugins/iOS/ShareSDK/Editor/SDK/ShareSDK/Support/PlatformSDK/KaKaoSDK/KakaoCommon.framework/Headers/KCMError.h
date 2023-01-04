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
 @header KCMError.h
 @abstract Kakao SDK 공통으로 사용되는 일반 오류들을 정의합니다.
 */
#import <Foundation/Foundation.h>

/*!
 @constant KCMErrorDomain KakaoCommon API에서 발생하는 NSError 객체의 도메인.
 */
extern NSString *const KCMErrorDomain;

/*!
 @abstract 오류 코드 정의
 @constant KCMErrorCodeUnknown 알 수 없는 오류
 @constant KCMErrorCodeCancelled 작업이 취소 됨
 @constant KCMErrorCodeOperationInProgress 동시 작업이 지원되지 않는 API에서 다른 요청이 이미 실행중임
 @constant KCMErrorCodeNotSupported 지원되지 않는 기능
 @constant KCMErrorCodeBadParameter 파라미터 이상
 @constant KCMErrorCodeMisconfigured 개발환경 설정 오류
 @constant KCMErrorCodeInternal SDK 내부 오류
 @constant KCMErrorCodeIllegalState 작업을 실행하기에 적절하지 않은 상태
 */
typedef NS_ENUM(NSInteger, KCMErrorCode) {
    KCMErrorCodeUnknown = 1,
    KCMErrorCodeCancelled = 2,
    KCMErrorCodeOperationInProgress = 3,
    KCMErrorCodeBadResponse = 7,
    KCMErrorCodeNetwork = 8,
    KCMErrorCodeNotSupported = 10,
    KCMErrorCodeBadParameter = 11,
    KCMErrorCodeMisconfigured = 12,
    KCMErrorCodeInternal = 13,
    KCMErrorCodeIllegalState = 14,
};

extern NSString *const KCMErrorUnexpectedExceptionUserInfoKey;
extern NSString *const KCMErrorMalformedURLStringUserInfoKey;
