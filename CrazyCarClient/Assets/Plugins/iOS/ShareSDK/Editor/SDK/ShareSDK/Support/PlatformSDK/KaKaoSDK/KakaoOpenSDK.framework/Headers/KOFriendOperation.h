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
 @header KOFriendOperation.h
 @abstract 연산된 친구 목록 페이징의 정보를 처리하기 위한 Context를 정의한다.
 */
#import "KOBaseContext.h"

/*!
 @abstract KOFriendOperationType 친구 목록 연산 타입.
 @constant KOFriendOperationTypeIntersection 교집합.
 @constant KOFriendOperationTypeUnion 합집합.
 @constant KOFriendOperationTypeSubtraction 차집합.
 */
typedef NS_ENUM(NSInteger, KOFriendOperationType) {
    KOFriendOperationTypeIntersection = 0,
    KOFriendOperationTypeUnion = 1,
    KOFriendOperationTypeSubtraction = 2
};

extern NSString* convertriendOperationTypeString(KOFriendOperationType type);

@class KOFriendContext;

/*!
 @class KOFriendOperation
 @abstract 연산된 친구 목록 페이징의 정보를 처리하기 위한 Context.
 */
DEPRECATED_ATTRIBUTE
@interface KOFriendOperation : KOBaseContext

/*!
 @property leftContext
 @abstract Left Operand Context.
 */
@property (nonatomic, readonly) KOFriendContext *leftContext;

/*!
 @property rightContext
 @abstract Right Operand Context.
 */
@property (nonatomic, readonly) KOFriendContext *rightContext;

/*!
 @property operationType
 @abstract 연산 타입.
 */
@property (nonatomic, readonly) KOFriendOperationType operationType;

/*!
 친구 목록 연산 페이징 Context 를 생성한다.
 @param leftContext Left Operand Context.
 @param rightContext Right Operand Context.
 @param operationType 연산 타입.
 */
+ (instancetype)operationWithLeftContext:(KOFriendContext *)leftContext
                            rightContext:(KOFriendContext *)rightContext
                           operationType:(KOFriendOperationType)operationType;

/*!
 친구 목록 연산 페이징 Context 를 생성한다.
 @param leftContext Left Operand Context.
 @param rightContext Right Operand Context.
 @param operationType 연산 타입.
 @param secureResource 프로필 이미지, 썸네일 등의 리소스 url을 https로 반환할지 여부.
 @param limit 요청 시 제한하는 친구의 수.
 @param ordering 정렬 방법.
 */
+ (instancetype)operationWithLeftContext:(KOFriendContext *)leftContext
                            rightContext:(KOFriendContext *)rightContext
                           operationType:(KOFriendOperationType)operationType
                          secureResource:(BOOL)secureResource
                                   limit:(NSInteger)limit
                                ordering:(KOOrdering)ordering;

/*!
 친구 목록 연산 페이징 Context 를 생성한다.
 @param leftContext Left Operand Context.
 @param rightContext Right Operand Context.
 @param operationType 연산 타입.
 @param secureResource 프로필 이미지, 썸네일 등의 리소스 url을 https로 반환할지 여부.
 @param limit 요청 시 제한하는 친구의 수.
 @param ordering 정렬 방법.
 */
- (instancetype)initWithLeftContext:(KOFriendContext *)leftContext
                       rightContext:(KOFriendContext *)rightContext
                      operationType:(KOFriendOperationType)operationType
                     secureResource:(BOOL)secureResource
                              limit:(NSInteger)limit
                           ordering:(KOOrdering)ordering;
@end
