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
 @header KOTalkMessageSending.h
 @abstract 카카오톡 메시지를 전송하기 위해 구현해야 하는 프로토콜입니다.
 */

#ifndef kakao_open_sdk_ios_KOTalkMessageSending_h
#define kakao_open_sdk_ios_KOTalkMessageSending_h

#import "KOSessionTask.h"

@class KMTTemplate;

/*!
 @protocol KOTalkMessageSending
 @abstract 카카오톡 메시지를 전송하기 위해 구현해야 하는 프로토콜
 */
@protocol KOTalkMessageSending <NSObject>

@required

/*!
 @abstract 기본 제공되는 템플릿을 이용하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMessageWithTemplate:(KMTTemplate *)templateObj
                         completionHandler:(void (^)(NSError *error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMessageWithURL:(NSURL *)URL
                    completionHandler:(void (^)(NSError *error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMessageWithURL:(NSURL *)URL
                           templateId:(NSString *)templateId
                         templateArgs:(NSDictionary<NSString *, id> *)templateArgs
                    completionHandler:(void (^)(NSError *error))completionHandler;

/*!
 @abstract 미리 지정된 메시지 템플릿(V2)을 사용하여, 카카오톡으로 메시지를 전송합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMessageWithTemplateId:(NSString *)templateId
                                templateArgs:(NSDictionary<NSString *, id> *)templateArgs
                           completionHandler:(void (^)(NSError *error))completionHandler;


@optional

/*!
 @abstract 기본 제공되는 템플릿을 이용하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMemoWithTemplate:(KMTTemplate *)templateObj
                      completionHandler:(void (^)(NSError *error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMemoWithURL:(NSURL *)URL
                 completionHandler:(void (^)(NSError *error))completionHandler;

/*!
 @abstract 지정된 URL을 스크랩하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMemoWithURL:(NSURL *)URL
                        templateId:(NSString *)templateId
                      templateArgs:(NSDictionary<NSString *, id> *)templateArgs
                 completionHandler:(void (^)(NSError *error))completionHandler;

/*!
 @abstract 미리 지정된 메시지 템플릿(V2)을 사용하여, 카카오톡의 "나와의 채팅방"으로 메시지를 전송합니다. 모든 앱에서 호출 가능합니다.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 전송 완료 시 수행된다.
 */
- (KOSessionTask *)sendMemoWithTemplateId:(NSString *)templateId
                             templateArgs:(NSDictionary<NSString *, id> *)templateArgs
                        completionHandler:(void (^)(NSError *error))completionHandler;

@end

#endif
