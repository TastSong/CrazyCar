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
#import "KOUserMe.h"
#import "KOUserServiceTerms.h"
#import "KOUserShippingAddress.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @header KOSessionTask+UserManagementAPI.h
 @abstract 인증된 session 정보를 바탕으로 각종 사용자 관리 API를 호출할 수 있습니다.
 */

typedef void (^KOSessionTaskUserMeCompletionHandler)(NSError *_Nullable error, KOUserMe *_Nullable me);
typedef void (^KOSessionTaskServiceTermsCompletionHandler)(KOUserServiceTerms *_Nullable userServiceTerms, NSError *_Nullable error);
typedef void (^KOSessionTaskUserShippingAddressCompletionHandler)(KOUserShippingAddress *_Nullable userShippingAddress, NSError *_Nullable error);

/*!
 인증된 session 정보를 바탕으로 각종 사용자 관리 API를 호출할 수 있습니다.
 */
@interface KOSessionTask (UserManagementAPI)
#pragma mark - UserManagement

/*!
 * @method userMeTaskWithCompletion:
 * @abstract 현재 로그인된 사용자에 대한 정보를 얻을 수 있습니다.
 * @param completion 사용자 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)userMeTaskWithCompletion:(nullable KOSessionTaskUserMeCompletionHandler)completion;

/*!
 * @method userMeTaskWithPropertyKeys:completion:
 * @abstract 현재 로그인된 사용자에 대한 정보를 얻을 수 있습니다.
 * @param propertyKeys 특정 프로퍼티를 지정하여 받고 싶을 경우 요청할 프로퍼티 키 이름 목록.
 * @param completion 사용자 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)userMeTaskWithPropertyKeys:(nullable NSArray<NSString *> *)propertyKeys completion:(nullable KOSessionTaskUserMeCompletionHandler)completion;

/*!
 @abstract 현재 로그인된 사용자의 속성(Property)를 설정할 수 있습니다.
 @param properties 갱신할 사용자 정보
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)profileUpdateTaskWithProperties:(nullable NSDictionary<NSString *, NSString *> *)properties
                              completionHandler:(nullable KOCompletionSuccessHandler)completionHandler;

/*!
 @abstract 카카오 플랫폼 서비스와 앱을 연결합니다(가입).
 @param properties 가입시 함께 설정할 사용자 정보
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)signupTaskWithProperties:(nullable NSDictionary<NSString *, NSString *> *)properties
                       completionHandler:(nullable KOCompletionSuccessHandler)completionHandler;

/*!
 @abstract 카카오 플랫폼 서비스와 앱 연결을 해제합니다(탈퇴).
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)unlinkTaskWithCompletionHandler:(nullable KOCompletionSuccessHandler)completionHandler;

/*!
 @abstract user가 3rd의 동의항목에 동의한 내역을 반환합니다.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)serviceTermsTaskWithCompletionHandler:(KOSessionTaskServiceTermsCompletionHandler)completionHandler;

/*!
 @abstract 앱에 가입한 사용자의 배송지 정보를 얻어간다.
 @param completionHandler 요청 완료시 실행될 핸들러.
 */
+ (instancetype)shippingAddressTaskWithCompletionHandler:(nullable KOSessionTaskUserShippingAddressCompletionHandler)completionHandler;

/*!
 @abstract 앱에 가입한 사용자의 배송지 정보를 얻어간다.
 @param shippingAddressId 배송지 정보가 많은 경우, 특정 배송지 정보만 얻고 싶을 때 배송지 ID 지정.
 @param completionHandler 요청 완료시 실행될 핸들러.
 */
+ (instancetype)shippingAddressTaskWithAddressId:(nullable NSString *)shippingAddressId
                               completionHandler:(nullable KOSessionTaskUserShippingAddressCompletionHandler)completionHandler;

/*!
 @abstract 앱에 가입한 사용자의 배송지 정보를 얻어간다.
 @param fromUpdatedAt 배송지 정보가 많은 경우, 여러 페이지에 걸쳐서 응답을 가지고 가게 될 때, 기준이 되는 배송지 updated_at 시각.<br>
                      해당 시각(미포함) 이전에 수정된 배송지부터 조회함. 이전 페이지의 마지막 배송지의 updated_at을 다음 페이지 input으로 준다.
 @param pageSize 2이상. 한 페이지에 포함할 배송지 개수.
 @param completionHandler 요청 완료시 실행될 핸들러.
 */
+ (instancetype)shippingAddressTaskWithFromUpdatedAt:(nullable NSDate *)fromUpdatedAt
                                            pageSize:(NSInteger)pageSize
                                   completionHandler:(nullable KOSessionTaskUserShippingAddressCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
