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
 @header KOTalkProfile.h
 카카오톡 사용자 정보를 담고 있는 구조체.
 */
#import <Foundation/Foundation.h>

/*!
 @class KOTalkProfile
 @discussion 카카오톡 사용자 정보를 담고 있는 구조체.
 */
@interface KOTalkProfile : NSObject

/*!
 @property nickName
 @abstract 카카오톡 닉네임
 */
@property(nonatomic, readonly) NSString *nickName;

/*!
 @property profileImageURL
 @abstract 카카오톡 프로필 이미지 URL
 */
@property(nonatomic, readonly) NSString *profileImageURL;

/*!
 @property thumbnailURL
 @abstract 카카오톡 프로필 이미지 썸네일 URL
 */
@property(nonatomic, readonly) NSString *thumbnailURL;

/*!
 @property countryISO
 @abstract 카카오톡 국가 코드
 */
@property(nonatomic, readonly) NSString *countryISO;


- (id)initWithNickname:(NSString *)nickName
       profileImageURL:(NSString *)profileImageURL
          thumbnailURL:(NSString *)thumbnailURL
            countryISO:(NSString *)countryISO;

@end
