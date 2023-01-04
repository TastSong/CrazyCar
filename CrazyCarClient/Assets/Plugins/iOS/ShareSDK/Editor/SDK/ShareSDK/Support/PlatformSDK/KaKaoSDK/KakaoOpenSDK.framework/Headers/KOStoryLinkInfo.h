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
 @header KOStoryLinkInfo.h
 카카오스토리의 스크랩한 링크 정보를 담고 있는 구조체.
 */

#import <Foundation/Foundation.h>

/*!
 @class KOStoryLinkInfo
 @discussion 카카오스토리의 스크랩한 링크 정보를 담고 있는 구조체.
 */

@interface KOStoryLinkInfo : NSObject

/*!
 @property url
 @abstract 스크랩 한 주소의 URL. shorten URL의 경우 resolution한 실제 URL
 */
@property(nonatomic, readonly) NSString *url;

/*!
 @property requestedUrl
 @abstract 요청시의 URL 원본. resolution을 하기 전의 URL
 */
@property(nonatomic, readonly) NSString *requestedUrl;

/*!
 @property host
 @abstract 스크랩한 host
 */
@property(nonatomic, readonly) NSString *host;

/*!
 @property title
 @abstract 해당 웹 페이지의 제목
 */
@property(nonatomic, readonly) NSString *title;

/*!
 @property image
 @abstract 해당 웹 페이지의 대표 이미지 주소의 url array. 최대 3개.
 */
@property(nonatomic, readonly) NSArray<NSString *> *image;

/*!
 @property desc
 @abstract 해당 웹 페이지의 설명
 */
@property(nonatomic, readonly) NSString *desc;

/*!
 @property section
 @abstract 해당 웹 페이지의 섹션 정보
 */
@property(nonatomic, readonly) NSString *section;

/*!
 @property type
 @abstract 해당 웹 페이지의 콘텐츠 타입. 예) video, music, book, article, profile, website 등.
 */
@property(nonatomic, readonly) NSString *type;

- (id)initWithUrl:(NSString *)url
     requestedUrl:(NSString *)requestedUrl
             host:(NSString *)host
            title:(NSString *)title
            image:(NSArray<NSString *> *)image
             desc:(NSString *)desc
          section:(NSString *)section
             type:(NSString *)type;

@end
