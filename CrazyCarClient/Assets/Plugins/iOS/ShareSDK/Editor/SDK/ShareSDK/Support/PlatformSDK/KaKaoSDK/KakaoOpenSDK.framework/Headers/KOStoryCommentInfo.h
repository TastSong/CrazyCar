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
 @header KOStoryCommentInfo.h
 카카오스토리의 댓글 정보를 담고 있는 구조체.
 */

#import <Foundation/Foundation.h>
#import "KOStoryActorInfo.h"

/*!
 @class KOStoryCommentInfo
 @discussion 카카오스토리의 댓글 정보를 담고 있는 구조체.
 */
@interface KOStoryCommentInfo : NSObject

/*!
 @property text
 @abstract 댓글의 텍스트 내용
 */
@property(nonatomic, readonly) NSString *text;

/*!
 @property writer
 @abstract 댓글의 작성자
 */
@property(nonatomic, readonly) KOStoryActorInfo *writer;

- (id)initWithText:(NSString *)text
            writer:(KOStoryActorInfo *)writer;

@end
