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
 @header KOSessionTask+StoryAPI.h
 @abstract 인증된 session 정보를 바탕으로 각종 카카오스토리 API를 호출할 수 있습니다.
 */

#import "KOSessionTask.h"
#import "KOStoryProfile.h"
#import "KOStoryPostInfo.h"
#import "KOStoryLinkInfo.h"
#import "KOStoryMyStoryInfo.h"
#import "KOStoryMyStoryImageInfo.h"
#import "KOStoryLikeInfo.h"
#import "KOStoryCommentInfo.h"

/*!
 @abstract KOStoryPostPermission 스토리 포스팅 공개 범위
 @constant KOStoryPostPermissionPublic 전체공개
 @constant KOStoryPostPermissionFriend 친구공개
 @constant KOStoryPostPermissionOnlyMe 나만보기
 */
typedef NS_ENUM(NSInteger, KOStoryPostPermission) {
    KOStoryPostPermissionPublic = 0,
    KOStoryPostPermissionFriend = 1,
    KOStoryPostPermissionOnlyMe = 2
};

/*!
 인증된 session 정보를 바탕으로 각종 카카오스토리 API를 호출할 수 있습니다.
 */
@interface KOSessionTask (StoryAPI)

#pragma mark - KakaoStory

/*!
 @abstract 현재 로그인된 사용자의 카카오스토리 프로필 정보를 얻을 수 있습니다.
 @param completionHandler 스토리 프로필 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)storyProfileTaskWithCompletionHandler:(KOSessionTaskCompletionHandler)completionHandler;

/*!
 @abstract 현재 로그인된 사용자의 카카오스토리 프로필 정보를 얻을 수 있습니다.
 @param secureResource 프로필, 썸네일 이미지 등의 리소스 정보들에 대해 https를 지원하는 형식으로 응답을 받을지의 여부. YES일 경우 https지원, NO일 경우 http지원.
 @param completionHandler 스토리 프로필 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)storyProfileTaskWithSecureResource:(BOOL)secureResource
                                 completionHandler:(KOSessionTaskCompletionHandler)completionHandler;

/*!
 @abstract 로컬 이미지 파일을 카카오스토리에 업로드합니다.
 @param image (UIImage *) 형식의 한장의 이미지
 */
+ (instancetype)storyImageUploadTaskWithImage:(UIImage *)image
                            completionHandler:(KOSessionTaskCompletionHandler)completionHandler DEPRECATED_MSG_ATTRIBUTE("Replaced by storyMultiImageUploadTaskWithImages in v1.0.7");

/*!
 @abstract 로컬 이미지 파일을 데이타 형식으로 카카오스토리에 업로드합니다.
 @param imageData (NSData *) 형식의 한장의 이미지
 */
+ (instancetype)storyImageUploadTaskWithImageData:(NSData *)imageData
                                completionHandler:(KOSessionTaskCompletionHandler)completionHandler DEPRECATED_MSG_ATTRIBUTE("Replaced by storyMultiImageUploadTaskWithImageData in v1.0.7");

/*!
 @abstract 카카오 스토리에 포스팅합니다.
 @param content 내용
 @param imageUrl 이미지 url(storyImageUploadTaskWithImage 호출 후 반환되는 url을 설정)
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostTaskWithContent:(NSString *)content
                              permission:(KOStoryPostPermission)permission
                                imageUrl:(NSString *)imageUrl
                        androidExecParam:(NSDictionary *)androidExecParam
                            iosExecParam:(NSDictionary *)iosExecParam
                       completionHandler:(void (^)(BOOL success, NSError *error))completionHandler DEPRECATED_MSG_ATTRIBUTE("Replaced by storyPostNoteTaskWithContent or storyPostPhotoTaskWithImageUrls in v1.0.7");

/*!
 @abstract 카카오 스토리에 포스팅합니다.
 @param content 내용
 @param imageUrl 이미지 url(storyImageUploadTaskWithImage 호출 후 반환되는 url을 설정)
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostTaskWithContent:(NSString *)content
                              permission:(KOStoryPostPermission)permission
                                imageUrl:(NSString *)imageUrl
                  androidExecParamString:(NSString *)androidExecParamString
                      iosExecParamString:(NSString *)iosExecParamString
                       completionHandler:(void (^)(BOOL success, NSError *error))completionHandler DEPRECATED_MSG_ATTRIBUTE("Replaced by storyPostNoteTaskWithContent or storyPostPhotoTaskWithImageUrls in v1.0.7");

/*!
 @abstract 카카오스토리의 특정 내스토리 정보를 얻을 수 있습니다. comments, likes등의 상세정보도 포함됩니다.
 @param myStoryId 내스토리 정보(myStory)의 id(포스트 id). required.
 @param completionHandler 내스토리 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)storyGetMyStoryTaskWithMyStoryId:(NSString *)myStoryId
                               completionHandler:(void (^)(KOStoryMyStoryInfo *myStory, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리의 복수개의 내스토리 정보들을 얻을 수 있습니다. 단, comments, likes등의 상세정보는 없으며 이는 내스토리 정보 요청(storyGetMyStoryTaskWithMyStoryId)을 통해 얻을 수 있습니다.
 @param lastMyStoryId 복수개의 내스토리 정보들을 얻기 위한 가장 최근의 내스토리 정보(myStory)의 id(포스트 id). 주어진 id의 시간을 기준으로 해당 id를 제외한 약 18개정도의 하위 myStory들이 반환된다. optional.
 @param completionHandler 내스토리 정보들을 얻어 처리하는 핸들러
 */
+ (instancetype)storyGetMyStoriesTaskWithLastMyStoryId:(NSString *)lastMyStoryId
                                     completionHandler:(void (^)(NSArray *myStories, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 스크랩을 하기 위한 링크 정보를 얻을 수 있습니다.
 @param url 스크랩을 하여 링크 정보를 얻기 위한 url. required.
 @param completionHandler 스토리 링크 정보를 얻어 처리하는 핸들러
 */
+ (instancetype)storyGetLinkInfoTaskWithUrl:(NSString *)url
                          completionHandler:(void (^)(KOStoryLinkInfo *link, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 글(노트)을 포스팅합니다.
 @param content 내용. required.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostNoteTaskWithContent:(NSString *)content
                                  permission:(KOStoryPostPermission)permission
                                    sharable:(BOOL)sharable
                            androidExecParam:(NSDictionary *)androidExecParam
                                iosExecParam:(NSDictionary *)iosExecParam
                           completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 글(노트)을 포스팅합니다.
 @param content 내용. required.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostNoteTaskWithContent:(NSString *)content
                                  permission:(KOStoryPostPermission)permission
                                    sharable:(BOOL)sharable
                      androidExecParamString:(NSString *)androidExecParamString
                          iosExecParamString:(NSString *)iosExecParamString
                           completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 글(노트)을 포스팅합니다.
 @param content 내용. required.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidMarketParam 안드로이드 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param iosMarketParam iOS 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostNoteTaskWithContent:(NSString *)content
                                  permission:(KOStoryPostPermission)permission
                                    sharable:(BOOL)sharable
                          androidMarketParam:(NSDictionary *)androidMarketParam
                              iosMarketParam:(NSDictionary *)iosMarketParam
                            androidExecParam:(NSDictionary *)androidExecParam
                                iosExecParam:(NSDictionary *)iosExecParam
                           completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 글(노트)을 포스팅합니다.
 @param content 내용. required.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidMarketParamString 안드로이드 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param iosMarketParamString iOS 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostNoteTaskWithContent:(NSString *)content
                                  permission:(KOStoryPostPermission)permission
                                    sharable:(BOOL)sharable
                    androidMarketParamString:(NSString *)androidMarketParamString
                        iosMarketParamString:(NSString *)iosMarketParamString
                      androidExecParamString:(NSString *)androidExecParamString
                          iosExecParamString:(NSString *)iosExecParamString
                           completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 사진(들)을 포스팅합니다.
 @param imageUrls 이미지 url들을 포함한 array(storyMultiImageUploadTaskWithImages 호출 후 반환되는 url들을 설정). required.
 @param content 사진과 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostPhotoTaskWithImageUrls:(NSArray<NSString *> *)imageUrls
                                        content:(NSString *)content
                                     permission:(KOStoryPostPermission)permission
                                       sharable:(BOOL)sharable
                               androidExecParam:(NSDictionary *)androidExecParam
                                   iosExecParam:(NSDictionary *)iosExecParam
                              completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 사진(들)을 포스팅합니다.
 @param imageUrls 이미지 url들을 포함한 array(storyMultiImageUploadTaskWithImages 호출 후 반환되는 url들을 설정). required.
 @param content 사진과 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostPhotoTaskWithImageUrls:(NSArray<NSString *> *)imageUrls
                                        content:(NSString *)content
                                     permission:(KOStoryPostPermission)permission
                                       sharable:(BOOL)sharable
                         androidExecParamString:(NSString *)androidExecParamString
                             iosExecParamString:(NSString *)iosExecParamString
                              completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 사진(들)을 포스팅합니다.
 @param imageUrls 이미지 url들을 포함한 array(storyMultiImageUploadTaskWithImages 호출 후 반환되는 url들을 설정). required.
 @param content 사진과 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidMarketParam 안드로이드 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param iosMarketParam iOS 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostPhotoTaskWithImageUrls:(NSArray<NSString *> *)imageUrls
                                        content:(NSString *)content
                                     permission:(KOStoryPostPermission)permission
                                       sharable:(BOOL)sharable
                             androidMarketParam:(NSDictionary *)androidMarketParam
                                 iosMarketParam:(NSDictionary *)iosMarketParam
                               androidExecParam:(NSDictionary *)androidExecParam
                                   iosExecParam:(NSDictionary *)iosExecParam
                              completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 사진(들)을 포스팅합니다.
 @param imageUrls 이미지 url들을 포함한 array(storyMultiImageUploadTaskWithImages 호출 후 반환되는 url들을 설정). required.
 @param content 사진과 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidMarketParamString 안드로이드 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param iosMarketParamString iOS 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정. optional.
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정. optional.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostPhotoTaskWithImageUrls:(NSArray<NSString *> *)imageUrls
                                        content:(NSString *)content
                                     permission:(KOStoryPostPermission)permission
                                       sharable:(BOOL)sharable
                       androidMarketParamString:(NSString *)androidMarketParamString
                           iosMarketParamString:(NSString *)iosMarketParamString
                         androidExecParamString:(NSString *)androidExecParamString
                             iosExecParamString:(NSString *)iosExecParamString
                              completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 링크(스크랩 정보)를 포스팅합니다.
 @param linkInfo 스크랩(storyGetLinkInfoTaskWithUrl)을 통해 얻은 링크 객체. requried.
 @param content 스크랩을 통해 얻은 링크를 포스팅할 때 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostLinkTaskWithLinkInfo:(KOStoryLinkInfo *)linkInfo
                                      content:(NSString *)content
                                   permission:(KOStoryPostPermission)permission
                                     sharable:(BOOL)sharable
                             androidExecParam:(NSDictionary *)androidExecParam
                                 iosExecParam:(NSDictionary *)iosExecParam
                            completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 링크(스크랩 정보)를 포스팅합니다.
 @param linkInfo 스크랩(storyGetLinkInfoTaskWithUrl)을 통해 얻은 링크 객체. requried.
 @param content 스크랩을 통해 얻은 링크를 포스팅할 때 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostLinkTaskWithLinkInfo:(KOStoryLinkInfo *)linkInfo
                                      content:(NSString *)content
                                   permission:(KOStoryPostPermission)permission
                                     sharable:(BOOL)sharable
                       androidExecParamString:(NSString *)androidExecParamString
                           iosExecParamString:(NSString *)iosExecParamString
                            completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 링크(스크랩 정보)를 포스팅합니다.
 @param linkInfo 스크랩(storyGetLinkInfoTaskWithUrl)을 통해 얻은 링크 객체. requried.
 @param content 스크랩을 통해 얻은 링크를 포스팅할 때 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidMarketParam 안드로이드 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param iosMarketParam iOS 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param androidExecParam 안드로이드 앱연결 링크에 추가할 파라미터 설정
 @param iosExecParam iOS 앱연결 링크에 추가할 파라미터 설정
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostLinkTaskWithLinkInfo:(KOStoryLinkInfo *)linkInfo
                                      content:(NSString *)content
                                   permission:(KOStoryPostPermission)permission
                                     sharable:(BOOL)sharable
                           androidMarketParam:(NSDictionary *)androidMarketParam
                               iosMarketParam:(NSDictionary *)iosMarketParam
                             androidExecParam:(NSDictionary *)androidExecParam
                                 iosExecParam:(NSDictionary *)iosExecParam
                            completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리에 링크(스크랩 정보)를 포스팅합니다.
 @param linkInfo 스크랩(storyGetLinkInfoTaskWithUrl)을 통해 얻은 링크 객체. requried.
 @param content 스크랩을 통해 얻은 링크를 포스팅할 때 함께 할 내용. optional.
 @param permission permission으로 친구공개(KOStoryPostPermissionFriend) 또는 전체공개(KOStoryPostPermissionPublic) 또는 나만보기(KOStoryPostPermissionOnlyMe). default KOStoryPostPermissionPublic. optional.
 @param sharable permission이 친구공개(KOStoryPostPermissionFriend)에 한해서 공유를 허용할지 안할지의 여부. default NO. optional.
 @param androidMarketParamString 안드로이드 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param iosMarketParamString iOS 앱연결 시 마켓으로 이동할 링크에 추가할 파라미터 설정. optional.
 @param androidExecParamString 안드로이드 앱연결 링크에 추가할 파라미터 설정
 @param iosExecParamString iOS 앱연결 링크에 추가할 파라미터 설정
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyPostLinkTaskWithLinkInfo:(KOStoryLinkInfo *)linkInfo
                                      content:(NSString *)content
                                   permission:(KOStoryPostPermission)permission
                                     sharable:(BOOL)sharable
                     androidMarketParamString:(NSString *)androidMarketParamString
                         iosMarketParamString:(NSString *)iosMarketParamString
                       androidExecParamString:(NSString *)androidExecParamString
                           iosExecParamString:(NSString *)iosExecParamString
                            completionHandler:(void (^)(KOStoryPostInfo *post, NSError *error))completionHandler;

/*!
 @abstract 로컬 이미지 파일 여러장을 카카오스토리에 업로드합니다.
 @param images jpeg을 위한 (UIImage *) 또는 gif를 위한 (NSData *) 형식의 여러장의 이미지 array. 최대 5개까지 허용.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyMultiImagesUploadTaskWithImages:(NSArray<id> *)images
                                   completionHandler:(void (^)(NSArray<NSString *> *imageUrls, NSError *error))completionHandler;

/*!
 @abstract 해당 사용자가 카카오스토리 사용자인지 아닌지를 판별합니다.
 @param completionHandler 요청 완료시 실행될 핸들러
 */
+ (instancetype)storyIsStoryUserTaskWithCompletionHandler:(void (^)(BOOL isStoryUser, NSError *error))completionHandler;

/*!
 @abstract 카카오스토리의 특정 내스토리 정보를 지울 수 있습니다.
 @param myStoryId 내스토리 정보(myStory)의 id(포스트 id). required.
 @param completionHandler 내스토리 정보에 대한 삭제의 결과를 얻어 처리하는 핸들러
 */
+ (instancetype)storyDeleteMyStoryTaskWithMyStoryId:(NSString *)myStoryId
                                  completionHandler:(void (^)(NSError *error))completionHandler;

@end
