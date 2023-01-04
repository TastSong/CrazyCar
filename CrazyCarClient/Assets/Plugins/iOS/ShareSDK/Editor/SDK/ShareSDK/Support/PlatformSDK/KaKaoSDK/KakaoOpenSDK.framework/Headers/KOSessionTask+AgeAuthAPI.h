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

#ifndef kakao_open_sdk_ios_KOSessionTask_AgeAuthAPI_h
#define kakao_open_sdk_ios_KOSessionTask_AgeAuthAPI_h

/*!
 @header KOSessionTask+AgeAuthAPI.h
 인증된 세션정보로 연령인증 관련 API를 정의합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 */

#import "KOSession.h"
#import "KOSessionTask.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 인증된 세션정보로 연령인증 관련 API를 정의한다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 */
@interface KOSessionTask (AgeAuthAPI)

+ (instancetype)ageAuthTaskWithCompletionHandler:(nullable KOSessionTaskCompletionHandler)completionHandler DEPRECATED_ATTRIBUTE;

/*!
 @abstract 해당 유저의 연령인증 정보를 얻는다.
 @param ageLimit response의 bypass_age_limit(true/false)를 판단하는 기준 제한 연령. default 는 앱에 설정된 제한 연령기준.
                 앱에 설정이 없고 param 으로 주어지지 않으면 bypass_age_limit 은 response 에 포함되지 않음.
 @param propertyKeys 추가 동의가 필요로 하는 인증정보를 response 에 포함하고 싶은 경우 해당 KOAgeAuthProperty 셋.
 @param completionHandler 연령인증 정보를 가져와서 처리하는 핸들러.
 */
+ (instancetype)ageAuthTaskWithCompletionHandler: (KOAgeAuthLimit)ageLimit
                                    propertyKeys: (nullable NSSet<NSNumber *> *)propertyKeys
                               completionHandler: (nullable KOSessionTaskCompletionHandler)completionHandler;


@end

// AgeAuth Results Keys
/*!
 연령인증 정보 확인 시 인증레벨 코드에 대한 키 이름
 */
extern NSString *const KOAgeAuthLevelCodeKey;

/*!
 연령인증 정보 확인 시 인증레벨 타이틀에 대한 키 이름
 */
extern NSString *const KOAgeAuthLevelKey;

/*!
 연령인증 정보 확인 시 연령제한 통과 여부에 대한 키 이름
 */
extern NSString *const KOAgeAuthBypassLimitKey;

/*!
 연령인증 정보 확인 시 CI값에 대한 키 이름
 */
extern NSString *const KOAgeAuthCIKey;

/*!
 연령인증 정보 확인 시 사용자 동의 후 CI값 획득 가능 여부에 대한 키 이름
 */
extern NSString *const KOAgeAuthCINeedsAgreementKey;

/*!
 연령인증 정보 확인 시 인증날짜에 대한 키 이름
 */
extern NSString *const KOAgeAuthDateKey;


#endif

NS_ASSUME_NONNULL_END
