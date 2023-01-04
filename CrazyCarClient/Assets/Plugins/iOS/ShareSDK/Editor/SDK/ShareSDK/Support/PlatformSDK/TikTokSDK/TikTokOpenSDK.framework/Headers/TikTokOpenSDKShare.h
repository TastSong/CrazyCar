//
//  BDOpenPlatformShareRequest.h
//
//  Created by ByteDance on 2019/7/8.
//  Copyright (c) 2018年 ByteDance Ltd. All rights reserved.

#import "TikTokOpenSDKApplicationDelegate.h"
#import "TikTokOpenSDKObjects.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TikTokOpenSDKShareMediaType) {
    TikTokOpenSDKShareMediaTypeImage = 0, //!< Map to PHAssetMediaTypeImage
    TikTokOpenSDKShareMediaTypeVideo, //!< Map to PHAssetMediaTypeVideo
};

typedef NS_ENUM(NSUInteger, TikTokOpenSDKLandedPageType) {
    TikTokOpenSDKLandedPageClip = 0,//!< Landed to Clip ViewController
    TikTokOpenSDKLandedPageEdit,//!< Landed to Edit ViewController
    TikTokOpenSDKLandedPagePublish,//!< Landed to Edit ViewController
};

typedef NS_ENUM(NSInteger, TikTokOpenSDKShareRespState) {
    TikTokOpenSDKShareRespStateSuccess = 20000,                         //!< Success
    TikTokOpenSDKShareRespStateUnknownError = 20001,                    //!< Unknown or current SDK version unclassified error
    TikTokOpenSDKShareRespStateParamValidError = 20002,                 //!< Params parsing error, media resource type difference you pass
    TikTokOpenSDKShareRespStateSharePermissionDenied = 20003,           //!< Not enough permissions to operation.
    TikTokOpenSDKShareRespStateUserNotLogin = 20004,                    //!< User not login
    TikTokOpenSDKShareRespStateNotHavePhotoLibraryPermission = 20005,   //!< Has no album permissions
    TikTokOpenSDKShareRespStateNetworkError = 20006,                    //!< Network error
    TikTokOpenSDKShareRespStateVideoTimeLimitError = 20007,             //!< Video length doesn't meet requirements
    TikTokOpenSDKShareRespStatePhotoResolutionError = 20008,            //!< Photo doesn't meet requirements
    TikTokOpenSDKShareRespTimeStampError = 20009,                       //!< Timestamp check failed
    TikTokOpenSDKShareRespStateHandleMediaError = 20010,                //!< Processing photo resources faild
    TikTokOpenSDKShareRespStateVideoResolutionError = 20011,            //!< Video resolution doesn't meet requirements
    TikTokOpenSDKShareRespStateVideoFormatError = 20012,                //!< Video format is not supported
    TikTokOpenSDKShareRespStateCancel = 20013,                          //!< Sharing canceled
    TikTokOpenSDKShareRespStateHaveUploadingTask = 20014,               //!< Another video is currently uploading
    TikTokOpenSDKShareRespStateSaveAsDraft = 20015,                     //!< Users store shared content for draft or user accounts are not allowed to post videos
    TikTokOpenSDKShareRespStatePublishFailed = 20016,                   //!< Post share content failed
    TikTokOpenSDKShareRespStateMediaInIcloudError = 21001,              //!< Downloading from iCloud faild
    TikTokOpenSDKShareRespStateParamsParsingError = 21002,              //!< Internal params parsing error
    TikTokOpenSDKShareRespStateGetMediaError = 21003,                   //!< Media resources do not exist
};

TikTokOpenSDKShareRespState TikTokOpenSDKStringToShareState(NSString *string);


@class TikTokOpenSDKShareResponse;

typedef void (^TikTokOpenSDKShareCompleteBlock)(TikTokOpenSDKShareResponse *Response);

@interface TikTokOpenSDKShareRequest : TikTokOpenSDKBaseRequest

/**
   The local identifier of the video or image shared by the your application to Open Platform in the **Photo Album**. The content must be all images or video.

   - The aspect ratio of the images or videos should between: [1/2.2, 2.2]
   - If mediaType is Image:
    - The number of images should be more than one and up to 12.
   - If mediaType is Video:
    - Total video duration should be longer than 3 seconds.
    - No more than 12 videos can be shared
   - Video with brand logo or watermark will lead to video deleted or account banned. Make sure your applications share contents without watermark.
 */
@property (nonatomic, strong) NSArray *localIdentifiers;

/**
   Which page do you want to land on?
   Defualt is Clip Viewcontroller
 */

@property (nonatomic, assign) TikTokOpenSDKLandedPageType landedPageType;
/**
   To associate your video with a hashtag, set the hashtag property on the request. The length cannot exceed 35
 */
@property (nonatomic, copy) NSString *hashtag;

/**
   The Media type of localIdentifiers in Album, All attachment localIdentifiers must be the same type
 */
@property (nonatomic, assign) TikTokOpenSDKShareMediaType mediaType;

/**
   Used to identify the uniqueness of the request, and finally returned by App when jumping back to the third-party program
 */
@property (nonatomic, copy, nullable) NSString *state;

/**
 * @brief Send share request to Open Platform.
 *
 * @param completed  The async result call back. You can get result in share response.isSucceed;
 *
 * @return Share request is valid will return YES;
 */
- (BOOL)sendShareRequestWithCompleteBlock:(TikTokOpenSDKShareCompleteBlock)completed;

@end

@interface TikTokOpenSDKShareResponse : TikTokOpenSDKBaseResponse
/**
   Used to identify the uniqueness of the request, and finally returned by App when jumping back to the third-party program
 */
@property (nonatomic, copy, nullable) NSString *state;

@property (nonatomic, assign) TikTokOpenSDKShareRespState shareState;

@end

NS_ASSUME_NONNULL_END