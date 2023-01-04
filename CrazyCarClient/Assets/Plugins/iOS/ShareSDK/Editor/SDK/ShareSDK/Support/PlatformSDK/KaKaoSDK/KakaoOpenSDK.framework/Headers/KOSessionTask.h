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

#import <UIKit/UIKit.h>
#import "KOHTTPMethod.h"

/*!
 * @typedef KOSessionTaskCompletionHandler
 * @abstract 각종 API 요청 완료시 호출되는 콜백 핸들러
 * @param result 해당 API 요청의 결과
 * @param error 호출 실패시의 오류 정보
 */
typedef void(^KOSessionTaskCompletionHandler)(id result, NSError *error);

/*!
 * @class KOSessionTask
 * @abstract 카카오로그인 기반의 API를 호출하는 네트워크 요청 작업
 * @discussion KOSession을 이용하여 카카오로그인을 수행한 후 발급 받은 access token을 인증 헤더에 담아 API를 호출합니다.<br>
 *             세션의 상태에 따라 모든 API 요청은 아래와 같이 동작합니다.<br><br>
 *             - KOSessionStateNotOpen: KOErrorTokenNotFound 에러를 반환합니다.<br>
 *             - KOSessionStateOpening: 토큰이 발급 중이므로 완료될 때까지 기다린 후에 요청합니다.<br>
 *             - KOSessionStateOpen: 인스턴스 생성 즉시 요청을 실행합니다.<br>
 */
@interface KOSessionTask : NSObject

- (id)initWithPath:(NSString *)path
        parameters:(NSDictionary *)parameters
        httpMethod:(KORequestHTTPMethod)httpMethod
 multipartFormData:(BOOL)multipartFormData
 completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

- (id)initWithPath:(NSString *)path
           headers:(NSDictionary *)headers
        parameters:(NSDictionary *)parameters
        httpMethod:(KORequestHTTPMethod)httpMethod
 multipartFormData:(BOOL)multipartFormData
 completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

- (id)initWithPath:(NSString *)path
           version:(NSUInteger)version
           headers:(NSDictionary *)headers
        parameters:(NSDictionary *)parameters
        httpMethod:(KORequestHTTPMethod)httpMethod
 multipartFormData:(BOOL)multipartFormData
 completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

- (id)initWithURL:(NSURL *)URL
       parameters:(NSDictionary *)parameters
       httpMethod:(KORequestHTTPMethod)httpMethod
multipartFormData:(BOOL)multipartFormData
completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

- (id)initWithURL:(NSURL *)URL
          headers:(NSDictionary *)headers
       parameters:(NSDictionary *)parameters
       httpMethod:(KORequestHTTPMethod)httpMethod
multipartFormData:(BOOL)multipartFormData
completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

+ (instancetype)taskWithPath:(NSString *)path
                  parameters:(NSDictionary *)parameters
                  httpMethod:(KORequestHTTPMethod)httpMethod
           multipartFormData:(BOOL)multipartFormData
           completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

+ (instancetype)taskWithPath:(NSString *)path
                     headers:(NSDictionary *)headers
                  parameters:(NSDictionary *)parameters
                  httpMethod:(KORequestHTTPMethod)httpMethod
           multipartFormData:(BOOL)multipartFormData
           completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

+ (instancetype)taskWithPath:(NSString *)path
                     version:(NSUInteger)version
                     headers:(NSDictionary *)headers
                  parameters:(NSDictionary *)parameters
                  httpMethod:(KORequestHTTPMethod)httpMethod
           multipartFormData:(BOOL)multipartFormData
           completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

+ (instancetype)taskWithURL:(NSURL *)URL
                 parameters:(NSDictionary *)parameters
                 httpMethod:(KORequestHTTPMethod)httpMethod
          multipartFormData:(BOOL)multipartFormData
          completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

+ (instancetype)taskWithURL:(NSURL *)URL
                    headers:(NSDictionary *)headers
                 parameters:(NSDictionary *)parameters
                 httpMethod:(KORequestHTTPMethod)httpMethod
          multipartFormData:(BOOL)multipartFormData
          completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

/*
 @abstract 해당 API 요청을 취소
 */
- (void)cancel;

/*
 @abstract 해당 API 요청을 취소
 @param error 취소할 때 발생시키고자 하는(원인) NSError.
 */
- (void)cancelWithError:(NSError *)error;

/*
 @abstract API 요청시의 타임아웃을 설정
 @param timeoutInterval second단위의 타임아웃 값(NSTimeInterval). 기본 30초.
 */
+ (void)setRequestTimeoutInterval:(NSTimeInterval)timeoutInterval;
+ (NSTimeInterval)requestTimeoutInterval;

@end
