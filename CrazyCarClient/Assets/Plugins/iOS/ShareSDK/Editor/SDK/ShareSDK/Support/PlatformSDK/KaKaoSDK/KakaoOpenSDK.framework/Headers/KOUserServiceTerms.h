/**
 * Copyright 2019 Kakao Corp.
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
 * @header KOUserServiceTerms.h
 * @abstract 사용자 동의항목 정보 클래스 헤더
 */

#import <Foundation/Foundation.h>
#import "KOSession.h"

NS_ASSUME_NONNULL_BEGIN

@class KOServiceTerms;

/*!
 * @class KOUserServiceTerms
 * @abstract 사용자가 동의한 약관 조회 API 응답 클래스
 */
@interface KOUserServiceTerms : NSObject
/*!
 * @property userId
 * @abstract 사용자의 고유 아이디
 */
@property (nonatomic, readonly, nullable) NSString *userId;
/*!
 * @property allowedTerms
 * @abstract 사용자가 동의한 3rd의 약관 항목들
 * @seealso KOServiceTerms
 */
@property (nonatomic, readonly, nullable) NSArray<KOServiceTerms *> *allowedTerms;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

/*!
 * @class KOServiceTerms
 * @abstract 3rd party 서비스 약관 정보 클래스
 */
@interface KOServiceTerms : NSObject
/*!
 * @property tag
 * @abstract 동의한 약관의 tag. 3rd에서 설정한 값.
 */
@property (nonatomic, readonly, nullable) NSString *tag;
/*!
 * @property agreedAt
 * @abstract 동의한 시간. 약관이 여러번 뜨는 구조라면, 마지막으로 동의한 시간.
 * @discussion RFC3339 internet date/time format (yyyy-mm-dd'T'HH:mm:ss'Z', yyyy-mm-dd'T'HH:mm:ss'+'HH:mm, yyyy-mm-dd'T'HH:mm:ss'-'HH:mm 가능)
 */
@property (nonatomic, readonly, nullable) NSDate *agreedAt;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

NS_ASSUME_NONNULL_END
