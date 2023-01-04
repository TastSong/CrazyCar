/**
 * Copyright 2018 Kakao Corp.
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
 @header KOToken.h
 카카오 API에서 제공하는 OAuth 토큰 클래스입니다.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class KOToken
 * @abstract 카카오 API에서 제공하는 OAuth 토큰 클래스입니다.
 */
@interface KOToken : NSObject <NSCopying, NSSecureCoding>

/*!
 * @property accessToken
 * @abstract 카카오 API를 이용하여 특정 사용자의 리소스에 접근하기 위한 OAuth 토큰.
 */
@property (readonly) NSString *accessToken;
/*!
 * @property refreshToken
 * @abstract accessToken을 갱신하기 위한 토큰.
 */
@property (readonly) NSString *refreshToken;
/*!
 * @property accessTokenExpiresAt
 * @abstract accessToken이 만료되는 시각. 네이티브 앱키로 요청한 accessToken 기본 만료시간: 12시간.
 */
@property (readonly) NSDate *accessTokenExpiresAt;
/*!
 * @property refreshTokenExpiresAt
 * @abstract refreshToken이 만료되는 시각. 네이티브 앱키로 요청한 refreshToken 기본 만료시간: 30일.
 * @discussion 이 속성은 1.8.0 버전부터 제공되고 있습니다.<br>
 *             만약 앱 업데이트 전에 구버전 SDK로 발급 받았던 토큰이 남아 있어서 KOSession.token을 통해 접근하는 경우 새로 로그인하거나 refreshToken이 갱신되기 전까지 값이 없을 수 있습니다.
 *             값이 없는 경우는 구버전 토큰으로 가정하여 갱신 가능한 상태로 판단합니다.(canRefresh = YES) 그러나 실제로 서버로 갱신을 요청했을 때 리프레시 토큰이 만료되었다면 갱신에 실패합니다.
 * @seealso canRefresh
 */
@property (readonly, nullable) NSDate *refreshTokenExpiresAt;
/*!
 * @property scopes
 * @abstract 현재 로그인된 사용자가 동의한 scope 목록
 */
@property (readonly) NSArray<NSString *> *scopes;

/*!
 * @method canRefresh
 * @abstract refresh token이 사용 가능한 상태인지 여부. 이 값이 YES이면 access token을 계속 갱신하여 사용 가능함.
 * @discussion 클라이언트가 가지고 있는 access token 및 refresh token의 만료 시간은 서버와 정확히 일치하지 않을 수 있으며
 *             토큰 발급을 위해 로그인한 카카오계정 상태에 변동이 있는 경우 당시의 카카오 정책에 따라 일괄적으로 만료될 수 있습니다.
 *             예를 들어 카카오계정의 비밀번호가 변경되면 현재 발급되어 있는 모든 토큰이 만료됩니다.
 *             따라서 실제 토큰 유효성 여부는 토큰 갱신 등을 서버로 요청해야만 정확한 확인이 가능하며 클라이언트의 만료시간을 보고 토큰이 유효하다고 판단하는 것은 권장하지 않습니다.
 * @return refreshToken이 있고 현재 시간이 refreshTokenExpiresAt보다 과거인 경우 YES<br>
 *         refreshToken이 있고 refreshTokenExpiresAt가 nil인 경우(구버전 SDK에서 발급받은 토큰) YES<br>
 *         아니면 NO
 * @seealso refreshTokenExpiresAt
 */
- (BOOL)canRefresh;
/*!
 * @method remainingExpireTime
 * @abstract accessTokenExpiresAt 까지 남은 시간
 * @return 음수이면 accessToken이 만료되었음을 의미함
 */
- (NSTimeInterval)remainingExpireTime;

- (nullable instancetype)initWithAccessToken:(NSString *)accessToken
                                 refeshToken:(NSString *)refreshToken
                        accessTokenExpiresAt:(NSDate *)accessTokenExpiresAt
                       refreshTokenExpiresAt:(nullable NSDate *)refreshTokenExpiresAt
                                      scopes:(nullable NSArray<NSString *> *)scopes;

@end

NS_ASSUME_NONNULL_END
