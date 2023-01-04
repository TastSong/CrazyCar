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
 @header KLKTalkLinkCenter.h
 @abstract 카카오톡링크 API 관련 기능을 정의합니다.
 */
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class KMTTemplate;

/*!
 @typedef KLKTalkLinkSuccessHandler
 @abstract 카카오톡링크 호출이 성공했을 경우 호출되는 완료 핸들러.
 @param warningMsg 경고 목록.<br>key: 메시지 템플릿 요소의 key path.<br>value: 경고 내용.
 @param argumentMsg templateArgs 관련 경고 목록.<br>key: templateArgs에 전달된 key 이름.<br>value: 경고 내용.
 */
typedef void(^KLKTalkLinkSuccessHandler)(NSDictionary<NSString *, NSString *> * _Nullable warningMsg,
                                         NSDictionary<NSString *, NSString *> * _Nullable argumentMsg);

/*!
 @typedef KLKTalkLinkFailureHandler
 @abstract 카카오톡링크 호출 도중 에러가 발생했을 경우 호출되는 완료 핸들러.
 @param error 발생한 에러.
 */
typedef void(^KLKTalkLinkFailureHandler)(NSError *error);

/*!
 @class KLKTalkLinkCenter
 @abstract 카카오톡링크 API 호출을 담당하는 클래스.
 */
@interface KLKTalkLinkCenter : NSObject

/*!
 @method    sharedCenter
 @abstract  공용 KLKTalkLinkCenter 인스턴스.
 */
+ (instancetype)sharedCenter;

/*!
 @method    isAvailable
 @abstract  카카오톡링크 실행 가능 여부.
 @param error 실행 불가능한 원인.<br>
 KLKErrorCodeMisconfigured - LSApplicationQueriesSchemes가 올바르게 설정되지 않음.<br>
 KLKErrorCodeUnsupportedTalkVersion - 카카오톡이 설치되지 않았거나 지원 가능한 버전보다 낮음.
 */
- (BOOL)isAvailableWithError:(NSError **)error;
- (BOOL)isAvailable;
- (BOOL)canOpenTalkLink DEPRECATED_MSG_ATTRIBUTE("Use 'isAvailable' method instead of this.");

/*!
 @method isTalkLinkCallback:
 @abstract 카카오톡링크 메시지의 링크로부터 실행된 액션인지 여부. 카카오톡링크에서 온 액션일 경우 YES.
 @param URL 앱 실행에 사용된 URL. AppDelegate의 openURL계열 메소드 파라미터로 전달된 URL을 입력해야 함.
 */
- (BOOL)isTalkLinkCallback:(NSURL *)URL;

/*!
 @method sendDefaultWithTemplate:success:failure:
 @abstract 기본 제공되는 템플릿을 이용하여 카카오톡 링크를 실행 함.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 @seealso sendDefaultWithTemplate:serverCallbackArgs:success:failure:
 */
- (void)sendDefaultWithTemplate:(KMTTemplate *)templateObj
                        success:(nullable KLKTalkLinkSuccessHandler)success
                        failure:(nullable KLKTalkLinkFailureHandler)failure;
/*!
 @method sendDefaultWithTemplate:serverCallbackArgs:success:failure:
 @abstract 기본 제공되는 템플릿을 이용하여 카카오톡 링크를 실행 함.
 @discussion KMTTemplate 클래스는 KakaoMessageTemplate.framework에 포함되어 있습니다. 이 메소드를 사용하기 위해서는 Build Phases > Link Binary With Libraries 설정에 KakaoMessageTemplate.framework를 추가해야 합니다.
 @param templateObj 전송할 메시지 템플릿 오브젝트. KMTTemplate 클래스를 직접 생성해서 사용할 수 없고 원하는 템플릿에 맞는 적절한 하위 클래스로 오브젝트를 생성해야 함.
 @param serverCallbackArgs 링크 메시지 전송 후 콜백으로 전달 받을 파라미터
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 */
- (void)sendDefaultWithTemplate:(KMTTemplate *)templateObj
             serverCallbackArgs:(nullable NSDictionary<NSString *, NSString *> *)serverCallbackArgs
                        success:(nullable KLKTalkLinkSuccessHandler)success
                        failure:(nullable KLKTalkLinkFailureHandler)failure;

/*!
 @method sendScrapWithURL:success:failure:
 @abstract 지정된 URL을 스크랩하여 카카오톡 링크를 실행 함.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 @seealso sendScrapWithURL:templateId:templateArgs:serverCallbackArgs:success:failure:
 */
- (void)sendScrapWithURL:(NSURL *)URL
                 success:(nullable KLKTalkLinkSuccessHandler)success
                 failure:(nullable KLKTalkLinkFailureHandler)failure;

/*!
 @method sendScrapWithURL:templateId:templateArgs:success:failure:
 @abstract 지정된 URL을 스크랩하여 카카오톡 링크를 실행 함.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿에 필요한 추가 정보.
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 @seealso sendScrapWithURL:templateId:templateArgs:serverCallbackArgs:success:failure:
 */
- (void)sendScrapWithURL:(NSURL *)URL
              templateId:(nullable NSString *)templateId
            templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                 success:(nullable KLKTalkLinkSuccessHandler)success
                 failure:(nullable KLKTalkLinkFailureHandler)failure;

/*!
 @method sendScrapWithURL:templateId:templateArgs:serverCallbackArgs:success:failure:
 @abstract 지정된 URL을 스크랩하여 카카오톡 링크를 실행 함.
 @param URL 스크랩할 URL. 개발자사이트 앱 설정에 등록된 도메인만 허용됨.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿에 필요한 추가 정보.
 @param serverCallbackArgs 링크 메시지 전송 후 콜백으로 전달 받을 파라미터
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 */
- (void)sendScrapWithURL:(NSURL *)URL
              templateId:(nullable NSString *)templateId
            templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
      serverCallbackArgs:(nullable NSDictionary<NSString *, NSString *> *)serverCallbackArgs
                 success:(nullable KLKTalkLinkSuccessHandler)success
                 failure:(nullable KLKTalkLinkFailureHandler)failure;

/*!
 @method sendCustomWithTemplateId:templateArgs:success:failure:
 @abstract 지정된 메시지 템플릿을 이용하여 카카오톡 링크를 실행 함.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 @seealso sendCustomWithTemplateId:templateArgs:serverCallbackArgs:success:failure:
 */
- (void)sendCustomWithTemplateId:(NSString *)templateId
                    templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
                         success:(nullable KLKTalkLinkSuccessHandler)success
                         failure:(nullable KLKTalkLinkFailureHandler)failure;

/*!
 @method sendCustomWithTemplateId:templateArgs:serverCallbackArgs:success:failure:
 @abstract 지정된 메시지 템플릿을 이용하여 카카오톡 링크를 실행 함.
 @param templateId 전송할 메시지 템플릿 ID.
 @param templateArgs 메시지 템플릿을 완성하기 위해 필요한 추가 파라미터 정보.
 @param serverCallbackArgs 링크 메시지 전송 후 콜백으로 전달 받을 파라미터 정보.
 @param success 카카오톡링크 실행에 성공했을 때 호출되는 완료 핸들러.
 @param failure 카카오톡링크 실행 중 에러가 발생했을 때 호출되는 완료 핸들러.
 */
- (void)sendCustomWithTemplateId:(NSString *)templateId
                    templateArgs:(nullable NSDictionary<NSString *, NSString *> *)templateArgs
              serverCallbackArgs:(nullable NSDictionary<NSString *, NSString *> *)serverCallbackArgs
                         success:(nullable KLKTalkLinkSuccessHandler)success
                         failure:(nullable KLKTalkLinkFailureHandler)failure;

@end

NS_ASSUME_NONNULL_END
