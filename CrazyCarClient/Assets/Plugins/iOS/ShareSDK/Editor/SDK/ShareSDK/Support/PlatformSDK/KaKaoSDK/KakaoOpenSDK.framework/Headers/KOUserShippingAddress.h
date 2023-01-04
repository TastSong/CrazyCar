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
 * @header KOUserShippingAddress.h
 * @abstract 배송지목록 정보 클래스 헤더
 */

#import <Foundation/Foundation.h>
#import "KOSession.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 * @abstract KOShippingAddressType 배송지 타입
 * @constant KOShippingAddressTypeOld 지번 주소
 * @constant KOShippingAddressTypeNew 도로명 주소
 * @constant KOShippingAddressTypeUnknown 알 수 없음
 */
typedef NS_ENUM(NSUInteger, KOShippingAddressType) {
    KOShippingAddressTypeOld,
    KOShippingAddressTypeNew,
    KOShippingAddressTypeUnknown
};

@class KOShippingAddress;

/*!
 * @class KOUserShippingAddress
 * @abstract 앱에 가입한 사용자의 배송지 정보 API 응답 클래스
 * @discussion 배송지의 정렬 순서는 기본배송지가 무조건 젤 먼저, 그후에는 배송지 수정된 시각을 기준으로 최신순으로 정렬되어 나가고, 페이지 사이즈를 주어서 여러 페이지를 나누어 조회하거나, 특정 배송지 id만을 지정하여 해당 배송지 정보만을 조회할 수 있다.<br>
 *             (배송지 요약 목록과 배송지 단일 상세 정보 API를 분리할까도 생각했으나, 현재 요약정보와 상세정보가 동일하여 일단은 하나로.)
 */
@interface KOUserShippingAddress : NSObject

/*!
 * @property userId
 * @abstract 배송지 정보를 요청한 사용자 아이디(ID)
 */
@property (nonatomic, readonly, nullable) NSString *userId;

/*!
 * @property shippingAddresses
 * @abstract 사용자의 배송지 정보 리스트.
 * @discussion 최신 수정순 (단, 기본 배송지는 수정시각과 상관없이 첫번째에 위치)<br>
 *             shippingAddresses는 사용자의 동의를 받지 않은 경우 nil이 반환됩니다.<br>
 *             shippingAddresses가 nil이면 shippingAddressNeedsAgreement 속성 값을 확인하여 사용자에게 정보 제공에 대한 동의를 요청하고 정보 획득을 시도해 볼 수 있습니다.<br>
 *             동의를 받은 후 user/me를 다시 호출하면 shippingAddresses 값이 반환됩니다.<br>
 * @seealso shippingAddressNeedsAgreement
 */
@property (nonatomic, readonly, nullable) NSArray<KOShippingAddress *> *shippingAddresses;

/*!
 * @property shippingAddressNeedsAgreement
 * @abstract shippingAddresses 제공에 대한 사용자 동의 필요 여부
 * @discussion shippingAddressNeedsAgreement 값이 true인 경우 새로운 동의 요청이 가능한 상태이며 KOSession의 updateScopes 메소드를 이용하여 동의를 받을 수 있습니다.<br>
 *             updateScopes의 파라미터로 전달할 shippingAddresses 동의항목에 대한 scope ID는 "shipping_addresses"입니다.<br>
 *             shippingAddressNeedsAgreement 값이 false인 경우 사용자의 계정에 shippingAddresses 정보가 없어서 값을 얻을 수 없음을 의미합니다.<br>
 * @seealso shippingAddresses
 */
@property (nonatomic, readonly) BOOL shippingAddressNeedsAgreement;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

/*!
 * @class KOShippingAddress
 * @abstract 배송지 정보 클래스
 */
@interface KOShippingAddress : NSObject

/*!
 * @property shippingAddressId
 * @abstract 배송지 ID
 */
@property (nonatomic, readonly, nullable) NSString *shippingAddressId;

/*!
 * @property name
 * @abstract 배송지명
 */
@property (nonatomic, readonly, nullable) NSString *name;

/*!
 * @property isDefault
 * @abstract 기본 배송지 여부
 */
@property (nonatomic, readonly) KOOptionalBoolean isDefault;

/*!
 * @property updatedAt
 * @abstract 수정시각의 timestamp
 */
@property (nonatomic, readonly, nullable) NSDate *updatedAt;

/*!
 * @property type
 * @abstract 배송지 타입.구주소(지번,번지 주소) 또는 신주소(도로명 주소)
 */
@property (nonatomic, readonly) KOShippingAddressType type;

/*!
 * @property baseAddress
 * @abstract 우편번호 검색시 채워지는 기본 주소
 */
@property (nonatomic, readonly, nullable) NSString *baseAddress;

/*!
 * @property detailAddress
 * @abstract 기본 주소에 추가하는 상세 주소
 */
@property (nonatomic, readonly, nullable) NSString *detailAddress;

/*!
 * @property receiverName
 * @abstract 수령인 이름
 */
@property (nonatomic, readonly, nullable) NSString *receiverName;

/*!
 * @property receiverPhoneNumber1
 * @abstract (Optional) 수령인 연락처
 */
@property (nonatomic, readonly, nullable) NSString *receiverPhoneNumber1;

/*!
 * @property receiverPhoneNumber2
 * @abstract (Optional) 수령인 추가 연락처
 */
@property (nonatomic, readonly, nullable) NSString *receiverPhoneNumber2;

/*!
 * @property zoneNumber
 * @abstract 신주소 우편번호.
 * @discussion 신주소인 경우에 반드시 존재함.
 */
@property (nonatomic, readonly, nullable) NSString *zoneNumber;

/*!
 * @property zipCode
 * @abstract 구주소 우편번호.
 * @discussion 우편번호를 소유하지 않는 구주소도 존재하여, 구주소인 경우도 해당값이 없을 수 있음.
 */
@property (nonatomic, readonly, nullable) NSString *zipCode;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

NS_ASSUME_NONNULL_END
