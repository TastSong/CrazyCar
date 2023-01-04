/**
 * Copyright 2017 Kakao Corp.
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
 @header KLKImageStorage.h
 @abstract 이미지를 카카오 이미지 서버로 업로드 할 수 있는 기능을 제공합니다.
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class KLKImageInfo;

/*!
 @typedef KLKUploadImageSuccessHandler
 @abstract 이미지 업로드에 성공했을 경우 호출되는 완료 핸들러.
 @param original 업로드된 이미지의 원본 이미지 정보
 */
typedef void(^KLKUploadImageSuccessHandler)(KLKImageInfo *original);

/*!
 @typedef KLKUploadImageFailureHandler
 @abstract 이미지 업로드 도중 에러가 발생했을 경우 호출되는 완료 핸들러.
 @param error 발생한 에러.
 */
typedef void(^KLKUploadImageFailureHandler)(NSError *error);

/*!
 @class KLKImageStorage
 @abstract 이미지를 카카오 이미지 서버로 업로드 할 수 있는 기능을 제공합니다.
 @discussion 최대 20일간 보관됩니다.
 */
@interface KLKImageStorage : NSObject

/*!
 @method    sharedStorage
 @abstract  공용 ImageStorage 인스턴스.
 */
+ (instancetype)sharedStorage;

/*!
 @method uploadWithImage:success:failure:
 @abstract 로컬 이미지를 카카오 이미지 서버로 업로드 합니다.
 @param image 전송할 이미지 객체.
 @param success 업로드 성공 핸들러.
 @param failure 업로드 실패 핸들러.
 */
- (void)uploadWithImage:(UIImage *)image
                success:(nullable KLKUploadImageSuccessHandler)success
                failure:(nullable KLKUploadImageFailureHandler)failure;

/*!
 @method uploadWithImage:secureResource:success:failure:
 @abstract 로컬 이미지를 카카오 이미지 서버로 업로드 합니다.
 @param image 전송할 이미지 객체.
 @param secureResource https 지원 여부. YES일 경우 업로드된 이미지 URL이 https로 반환 됨. 기본 값 YES.
 @param success 업로드 성공 핸들러.
 @param failure 업로드 실패 핸들러.
 */
- (void)uploadWithImage:(UIImage *)image
         secureResource:(BOOL)secureResource
                success:(nullable KLKUploadImageSuccessHandler)success
                failure:(nullable KLKUploadImageFailureHandler)failure;

/*!
 @method uploadWithImageData:secureResource:success:failure:
 @abstract 로컬 이미지를 카카오 이미지 서버로 업로드 합니다.
 @param imageData 전송할 이미지 바이너리.
 @param secureResource https 지원 여부. YES일 경우 업로드된 이미지 URL이 https로 반환 됨. 기본 값 YES.
 @param success 업로드 성공 핸들러.
 @param failure 업로드 실패 핸들러.
 */
- (void)uploadWithImageData:(NSData *)imageData
             secureResource:(BOOL)secureResource
                    success:(nullable KLKUploadImageSuccessHandler)success
                    failure:(nullable KLKUploadImageFailureHandler)failure;

/*!
 @method scrapWithImageURL:success:failure:
 @abstract 원격지의 이미지를 스크랩하여 카카오 이미지 서버로 업로드 합니다.
 @param imageURL 스크랩할 원격지 이미지의 URL.
 @param success 업로드 성공 핸들러.
 @param failure 업로드 실패 핸들러.
 */
- (void)scrapWithImageURL:(NSURL *)imageURL
                  success:(nullable KLKUploadImageSuccessHandler)success
                  failure:(nullable KLKUploadImageFailureHandler)failure;

/*!
 @method scrapWithImageURL:secureResource:success:failure:
 @abstract 원격지의 이미지를 스크랩하여 카카오 이미지 서버로 업로드 합니다.
 @param imageURL 스크랩할 원격지 이미지의 URL.
 @param secureResource https 지원 여부. YES일 경우 업로드된 이미지 URL이 https로 반환 됨. 기본 값 YES.
 @param success 업로드 성공 핸들러.
 @param failure 업로드 실패 핸들러.
 */
- (void)scrapWithImageURL:(NSURL *)imageURL
           secureResource:(BOOL)secureResource
                  success:(nullable KLKUploadImageSuccessHandler)success
                  failure:(nullable KLKUploadImageFailureHandler)failure;

@end



/*!
 @class KLKImageInfo
 @abstract 업로드된 이미지 정보를 담는 클래스.
 */
@interface KLKImageInfo : NSObject

/*!
 * @property URL
 * @abstract 업로드 된 이미지의 URL
 */
@property (readonly) NSURL *URL;

/*!
 * @property contentType
 * @abstract 업로드 된 이미지의 Content-Type
 */
@property (readonly) NSString *contentType;

/*!
 * @property length
 * @abstract 업로드 된 이미지의 용량 (단위: 바이트)
 */
@property (readonly) NSUInteger length;

/*!
 * @property width
 * @abstract 업로드 된 이미지의 너비 (단위: 픽셀)
 */
@property (readonly) NSUInteger width;

/*!
 * @property height
 * @abstract 업로드 된 이미지의 높이 (단위: 픽셀)
 */
@property (readonly) NSUInteger height;

@end

NS_ASSUME_NONNULL_END
