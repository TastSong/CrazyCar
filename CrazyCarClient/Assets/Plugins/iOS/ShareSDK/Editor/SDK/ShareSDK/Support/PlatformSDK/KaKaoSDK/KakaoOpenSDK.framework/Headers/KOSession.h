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
 @header KOSession.h
 @abstract 카카오계정을 통해 인증 및 로그아웃할 수 있는 기능을 제공합니다.
 */

#import <Foundation/Foundation.h>
#import <KakaoOpenSDK/KOSessionTask.h>
#import <KakaoOpenSDK/KOToken.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @abstract KOSessionState Kakao 인증시의 내부 상태값
 @constant KOSessionStateNotOpen 세션이 열리지 않은 상태. 인증이 되지 않은 상태.
 @constant KOSessionStateOpening 세션을 열기위한 진행중의 상태. 인증 진행중의 상태.
 @constant KOSessionStateOpen 세션이 성공적으로 열린 상태. 인증이 완료된 상태.
 */
typedef NS_ENUM(NSInteger, KOSessionState) {
    KOSessionStateNotOpen = 0,
    KOSessionStateOpening = 1,
    KOSessionStateOpen = 2
};

/*!
 @typedef KOSessionCompletionHandler
 @abstract Kakao 인증 완료시 실행될 Completion Handler
 @param error 오류 정보
 */
typedef void(^KOSessionCompletionHandler)(NSError *_Nullable error);

/*!
 @typedef KOCompletionSuccessHandler
 @abstract Kakao API의 비동기 호출 성공 여부를 받아 처리해주는 Completion Handler
 @param success 성공 여부
 @param error 오류 정보
 */
typedef void(^KOCompletionSuccessHandler)(BOOL success, NSError *_Nullable error);

/*!
 @abstract KOAuthType 카카오계정 로그인시의 인증 타입
 @constant KOAuthTypeTalk 카카오톡으로 간편 인증
 @constant KOAuthTypeStory 카카오스토리로 간편 인증
 @constant KOAuthTypeAccount 카카오계정으로 직접 ID, Password로 인증
 */
typedef NS_ENUM(NSInteger, KOAuthType) {
    KOAuthTypeTalk = 1 << 1,
    KOAuthTypeStory = 1 << 2,
    KOAuthTypeAccount = 1 << 3
};

/*!
 @abstract KOOptionalBoolean null을 가질 수 있는 boolean 타입
 @constant KOOptionalBooleanNull 참, 거짓을 알 수 없는 상태
 @constant KOOptionalBooleanFalse 거짓
 @constant KOOptionalBooleanTrue 참
 */
typedef NS_ENUM(NSInteger, KOOptionalBoolean) {
    KOOptionalBooleanNull = 0,
    KOOptionalBooleanFalse = -1,
    KOOptionalBooleanTrue = 1,
};

/*!
 @abstract KOAgeAuthLevel 연령인증 시 인증 레벨.
 @constant KOAgeAuthLevelType1 1차 인증 레벨.
 @constant KOAgeAuthLevelType2 2차 인증 레벨.
 */
typedef NS_ENUM(NSInteger, KOAgeAuthLevel) {
    KOAgeAuthLevelType1 = 10,
    KOAgeAuthLevelType2 = 20
};

/*!
 @abstract KOAgeAuthLimit 연령인증 시 인증 나이.
 @constant KOAgeAuthLimitType12 12세 인증.
 @constant KOAgeAuthLimitType15 15세 인증.
 @constant KOAgeAuthLimitType18 18세 인증.
 @constant KOAgeAuthLimitType19 19세 인증.
 */
typedef NS_ENUM(NSInteger, KOAgeAuthLimit) {
    KOAgeAuthLimitTypeNone = 0,
    KOAgeAuthLimitType12 = 12,
    KOAgeAuthLimitType15 = 15,
    KOAgeAuthLimitType18 = 18,
    KOAgeAuthLimitType19 = 19
};

/*!
 @abstract KOAgeAuthProperty 연령인증 정보 요청시 추가로 더 요청할 수 있는 목록
 @constant KOAgeAuthPropertyAccountCi "account_ci" 를 의미.
 */
typedef NS_ENUM(NSInteger, KOAgeAuthProperty) {
    KOAgeAuthPropertyAccountCi = 1
};

@class KOAgeAuthQueryStringBuilder;

/*!
 * @class KOSession
 * @abstract 인증 관리 클래스.
 */
@interface KOSession : NSObject

/*!
 * @property appKey
 * @abstract 카카오에서 발급한 클라이언트 아이디. (네이티브 앱키)
 * @discussion .plist 파일 내에 있는 KAKAO_APP_KEY 값을 읽어옵니다. 해당 키 값이 없거나 빈 문자열인 경우 KOSession 인스턴스를 초기화 할 수 없으며 sharedSession 호출 시 nil을 반환합니다.
 */
@property(nonatomic, readonly) NSString *appKey;
/*!
 * @property redirectUri
 * @abstract 클라이언트 실행을 위한 커스텀 스킴 주소
 * @discussion "kakao${KAKAO_APP_KEY}://oauth" 형식의 OAuth 리다이렉트 URI입니다. .plist 파일에 URL Scheme으로 kakao${KAKAO_APP_KEY} 값을 설정해야 합니다. 설정하지 않을 경우 KOSession 인스턴스를 초기화 할 수 없으며 sharedSession 호출 시 nil을 반환합니다.
 * @seealso appKey
 */
@property(nonatomic, readonly) NSString *redirectUri;

@property(nullable, nonatomic, readonly, copy) NSString *accessToken DEPRECATED_MSG_ATTRIBUTE("KOToken 타입의 token 속성으로 통합되었습니다. accessToken을 얻고 싶은 경우 token.accessToken을 사용해주세요.");
@property(nullable, nonatomic, readonly, copy) NSString *refreshToken DEPRECATED_MSG_ATTRIBUTE("KOToken 타입의 token 속성으로 통합되었습니다. refreshToken을 얻고 싶은 경우 token.refreshToken을 사용해주세요.");
@property(nullable, nonatomic, readonly, copy) NSDate *expiresAccessTokenTime DEPRECATED_MSG_ATTRIBUTE("KOToken 타입의 token 속성으로 통합되었습니다. access token 만료시각을 얻고 싶은 경우 token.accessTokenExpiresAt을 사용해주세요. 추가적으로 refresh token의 만료시각도 제공됩니다.");
/*!
 * @property token
 * @abstract 로그인 기반 API 인증에 사용되는 OAuth 토큰
 * @discussion KOSessionTask에 있는 API 사용시 자동으로 Authroization 헤더에 현재 access token을 채워줍니다.<br>
 *             발급 받은 토큰은 NSUserDefaults에 저장되고 앱을 종료하고 다시 시작할 경우 세션이 초기화 될 때(ex. sharedSession 최초 호출) 로드됩니다.
 *             세션 초기화 시 저장된 토큰을 읽어오는데 성공하면 세션은 open 상태가 되며 일반적인 state 변경 상황과 동일하게 KOSessionDidChangeNotification 알림을 전달 받을 수 있습니다.<br><br>
 *
 *             토큰을 좀 더 안전하게 저장하고 싶을 경우 .plist 파일에 KAKAO_SECURE_MODE를 YES로 설정하여 accessToken과 refreshToken을 암호화 할 수 있습니다.
 *             암호화 방식은 SDK 버전에 따라 다르게 제공될 수 있으며 최신 버전에 사용되고 있는 암호화 방식은 1.5.1 버전에서 마지막으로 수정되었습니다.
 *             KAKAO_SECURE_MODE 설정을 바꾸어서 앱을 배포하고 사용자의 기기에서 업데이트 했을 때 다음 케이스에 대해 마이그레이션을 지원합니다.<br><br>
 *
 *             - 평문토큰 to 암호문토큰: KAKAO_SECURE_MODE를 사용하지 않다가 활성화시킨 상태로 업데이트한 경우 등<br>
 *             - 암호문토큰 to 평문토큰: KAKAO_SECURE_MODE를 YES로 사용하다가 NO로 변경한 경우 등<br>
 *             - (old)암호문토큰 to (new)암호문토큰: KAKAO_SECURE_MODE를 YES로 설정하고 변경하지 않았으나 오래된 버전의 SDK에서 최신(1.5.1이상) SDK로 업데이트한 경우<br><br>
 *
 *             위 케이스에는 앱을 업데이트하고 재시작해도 로그인이 유지되며 이외 케이스는 토큰을 읽어올 수 없으므로 세션이 닫힌 상태로 초기화됩니다.
 */
@property(nullable, readonly) KOToken *token;
/*!
 * @property state
 * @abstract 인증 상태
 */
@property(nonatomic, readonly) KOSessionState state;

@property(nullable, nonatomic, copy) NSString *clientSecret DEPRECATED_MSG_ATTRIBUTE("이 속성은 무시됩니다. 네이티브 앱에서의 사용이 중단되었습니다.");

/*!
 * @property automaticPeriodicRefresh
 * @abstract access token의 자동 주기적 갱신 여부 설정. 해당 값이 YES일 경우 handleDidBecomeActive 및 특정 시간 주기로 필요시 토큰을 자동 갱신함.
 * @discussion 값을 설정하면 현재 토큰 상태에 따라 타이머를 설정하거나 갱신이 필요할 경우 바로 갱신합니다. 이 속성 값은 기기에 저장되지 않고 메모리에서만 유지되므로 AppDelegate의 application:didFinishLaunchingWithOptions: 메소드 내에서 설정하는 것을 권장합니다. iOS 특성상 앱이 백그라운드로 내려가거나 suspend 상태가 되면 갱신이 불가능합니다.
 * @seealso token
 */
@property (nonatomic, getter=isAutomaticPeriodicRefresh) BOOL automaticPeriodicRefresh;

/*!
 * @property presentingViewController
 * @abstract login view 가 present 될 뷰컨트롤러를 설정. 지정하지 않을 경우 SDK 자체적으로 최상단 뷰컨트롤러를 탐색합니다.
 */
@property (nullable, nonatomic, weak) UIViewController *presentingViewController;

/*!
 * @property modalPresentionStyle
 * @abstract 로그인 웹뷰의 뷰컨트롤러가 노출되는 modalPresentationStyle을 지정합니다.
 */
@property (nonatomic, assign) UIModalPresentationStyle modalPresentionStyle;

@property (nonatomic, assign) UIStatusBarStyle presentedViewStatusBarStyle;
@property (nullable, nonatomic, strong) UIColor *presentedViewBarTitleColor;
@property (nullable, nonatomic, strong) UIColor *presentedViewBarTintColor;
@property (nullable, nonatomic, strong) UIColor *presentedViewBarButtonTintColor;
@property (nullable, nonatomic, strong) UIImage *presentedViewBarBackgroundImage;


/*!
 @abstract 현재 session 정보
 */
+ (nullable KOSession *)sharedSession;

/*!
 카카오계정 로그인 callback인지 여부
 @param url 카카오 계정 인증 요청 code 또는 오류정보를 담은 url
 */
+ (BOOL)isKakaoAccountLoginCallback:(nullable NSURL *)url;

/*!
 카카오계정 연령인증 callback인지 여부
 @param url 카카오 연령인증 요청결과를 담은 url
 */
+ (BOOL)isKakaoAgeAuthCallback:(nullable NSURL *)url;

/*!
 KakaoLink 메시지의 Action인지 여부
 @param url KakaoLink 메시지의 execparam 을 담은 url
 */
+ (BOOL)isKakaoLinkCallback:(nullable NSURL *)url DEPRECATED_ATTRIBUTE;

/*!
 KakaoStory Post의 Action인지 여부
 @param url KakaoStory Post 메시지의 execparam 을 담은 url
 */
+ (BOOL)isStoryPostCallback:(nullable NSURL *)url;

/*!
 url에 포함된 code 정보로 oauth 인증 토큰을 요청한다. 인증 토큰 요청이 완료되면 completionHandler를 실행한다.
 @param url 인증 요청 code 또는 오류 정보(error, error_description)를 담은 url
 */
+ (BOOL)handleOpenURL:(nullable NSURL *)url;

/*!
 openWithCompletionHandler로 인증 도중에 빠져나와 앱으로 돌아올때의 인증처리를 취소한다. 보통 applicationDidBecomeActive에서 해당 부분을 호출한다.
 */
+ (void)handleDidBecomeActive;

/*!
 application이 background 상태로 변경시 알려준다. 보통 applicationDidEnterBackground에서 해당 부분을 호출한다.
 */
+ (void)handleDidEnterBackground;

/*!
 기기의 로그인 수행 가능한 카카오 앱에 로그인 요청을 전달한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 */
- (void)openWithCompletionHandler:(KOSessionCompletionHandler)completionHandler;

/*!
 기기의 로그인 수행 가능한 카카오 앱에 로그인 요청을 전달한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 @param parameters 인증코드 요청에 추가로 전달할 파라미터
 */
- (void)openWithCompletionHandler:(KOSessionCompletionHandler)completionHandler parameters:(nullable NSDictionary<NSString *, NSString *> *)parameters;

/*!
 기기의 로그인 수행 가능한 카카오 앱에 로그인 요청을 전달한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 @param authType 로그인 요청시의 인증 타입(KOAuthType)의 array(var arguments로서 nil-terminated list). 주의) list의 마지막은 꼭 nil로 끝나야함. 예) KOAuthTypeTalk, KOAuthTypeStory, KOAuthTypeAccount, nil
 */
- (void)openWithCompletionHandler:(KOSessionCompletionHandler)completionHandler authType:(KOAuthType)authType, ...;

/*!
 기기의 로그인 수행 가능한 카카오 앱에 로그인 요청을 전달한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 @param parameters 인증코드 요청에 추가로 전달할 파라미터
 @param authType 로그인 요청시의 인증 타입(KOAuthType)의 array(var arguments로서 nil-terminated list). 주의) list의 마지막은 꼭 nil로 끝나야함. 예) KOAuthTypeTalk, KOAuthTypeStory, KOAuthTypeAccount, nil
 */
- (void)openWithCompletionHandler:(KOSessionCompletionHandler)completionHandler parameters:(nullable NSDictionary<NSString *, NSString *> *)parameters authType:(KOAuthType)authType, ...;

/*!
 기기의 로그인 수행 가능한 카카오 앱에 로그인 요청을 전달한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 @param authTypes 로그인 요청시의 인증 타입(KOAuthType)의 array.
 */
- (void)openWithCompletionHandler:(KOSessionCompletionHandler)completionHandler authTypes:(nullable NSArray<NSNumber *> *)authTypes;

/*!
 기기의 로그인 수행 가능한 카카오 앱에 로그인 요청을 전달한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 @param parameters 인증코드 요청에 추가로 전달할 파라미터
 @param authTypes 로그인 요청시의 인증 타입(KOAuthType)의 array.
 */
- (void)openWithCompletionHandler:(KOSessionCompletionHandler)completionHandler parameters:(nullable NSDictionary<NSString *, NSString *> *)parameters authTypes:(nullable NSArray<NSNumber *> *)authTypes;

/*!
 이전에 발급 받았던 토큰을 재사용하여 로그인을 시도한다.
 @param token 로그인 시도할 토큰. 갱신 가능한 토큰이면 로그인에 성공한다.
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 로그인 완료 작업을 수행한다.
 */
- (void)openWithToken:(nullable KOToken *)token completionHandler:(KOSessionCompletionHandler)completionHandler;

/*!
 카카오계정의 특정 서비스를 활용하여 인증처리 후 로그인을 수행합니다. (카카오 내부 서비스 전용)
 */
- (void)openWithAccountPath:(NSString *)accountPath
              accountParams:(nullable NSDictionary<NSString *, NSString *> *)accountParams
                extraParams:(nullable NSDictionary<NSString *, NSString *> *)extraParams
          completionHandler:(KOSessionCompletionHandler)completionHandler;



/*!
 @method updateScopes:completionHandler:
 @abstract 현재 로그인된 사용자에게 새로운 scope이 필요할 경우 지정된 동의항목에 대한 동의창을 노출하고 사용자 동의를 유도합니다. 사용자가 동의 버튼을 누르면 해당 scope이 적용된 새로운 토큰으로 세션을 갱신합니다.
 @param scopes 요청할 scope 목록
 @param completionHandler 요청 완료시 실행될 block. 오류 처리와 갱신 완료 작업을 수행한다.
 */
- (void)updateScopes:(nullable NSArray<NSString *> *)scopes completionHandler:(KOSessionCompletionHandler)completionHandler;
- (void)updateScopes:(nullable NSArray<NSString *> *)scopes parameters:(nullable NSDictionary<NSString *, NSString *> *)parameters completionHandler:(KOSessionCompletionHandler)completionHandler;

/*!
 현재 기기에서만 로그아웃한다. 발급 받았던 토큰은 만료된다.
 @param completionHandler 요청 완료시 실행될 block.
 */
- (void)logoutAndCloseWithCompletionHandler:(KOCompletionSuccessHandler)completionHandler;

/*!
 인증 토큰을 세션 객체에서 제거한다.
 */
- (void)close;

/*!
 인증되어 있는지 여부. [token canRefresh]와 동일한 결과를 리턴합니다.
 */
- (BOOL)isOpen;

/*!
 세션을 유효한 access token으로 유지하기 위해 서버로 토큰을 요청하고 현재 세션을 갱신한다.
 @param completionHandler 갱신 완료시 실행될 block.
 */
- (void)refreshAccessTokenWithCompletionHandler:(KOSessionCompletionHandler)completionHandler;

/*!
 새로운 연령 인증이 필요할 경우 사용자에게 연령 인증관련 창을 띄워서 연령 인증을 유도합니다. 제휴를 통해 권한이 부여된 특정 앱에서만 호출 가능합니다.
 */
- (void)showAgeAuthWithAuthLevel:(nullable KOAgeAuthQueryStringBuilder *) ageAuthQueryStringBuilder
               completionHandler:(KOCompletionSuccessHandler)completionHandler;

@end

// notifications
/*!
 로그인 인증 정보 변경 노티피케이션 이름
 */
extern NSString *const KOSessionDidChangeNotification;

// Session open extra parameters (for Kakao Sync)
/*!
 로그인 요청 동적 카카오톡 채널 파라미터 키
 */
extern NSString *const KOSessionChannelPublicIdParameterKey;
extern NSString *const KOSessionExtraPlusFriendPublicIdParameterKey DEPRECATED_MSG_ATTRIBUTE("키 이름이 변경되었습니다. 'KOSessionChannelPublicIdParameterKey'를 사용해주세요.");
/*!
 로그인 요청 동적 서비스약관 파라미터 키
 */
extern NSString *const KOSessionServiceTermsParameterKey;
extern NSString *const KOSessionExtraServiceTermsParameterKey DEPRECATED_MSG_ATTRIBUTE("키 이름이 변경되었습니다. 'KOSessionServiceTermsParameterKey'를 사용해주세요.");
/*!
 로그인 요청 자동로그인 파라미터 키
 */
extern NSString *const KOSessionAutoLoginParameterKey;

NS_ASSUME_NONNULL_END

