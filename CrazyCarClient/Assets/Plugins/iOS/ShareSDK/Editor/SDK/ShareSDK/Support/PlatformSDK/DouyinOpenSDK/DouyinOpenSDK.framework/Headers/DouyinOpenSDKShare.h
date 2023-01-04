//
//  BDOpenPlatformShareRequest.h
//
//  Created by ByteDance on 2019/7/8.
//  Copyright (c) 2018年 ByteDance Ltd. All rights reserved.

#import "DouyinOpenSDKObjects.h"
#import "DouyinOpenSDKApplicationDelegate.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, DouyinOpenSDKShareMediaType) {
    DouyinOpenSDKShareMediaTypeImage = 0, //!< Map to PHAssetMediaTypeImage
    DouyinOpenSDKShareMediaTypeVideo, //!< Map to PHAssetMediaTypeVideo
};

typedef NS_ENUM(NSUInteger, DouyinOpenSDKLandedPageType) {
    DouyinOpenSDKLandedPageClip = 0,//!< Landed to Clip ViewController
    DouyinOpenSDKLandedPageEdit,//!< Landed to Edit ViewController
    DouyinOpenSDKLandedPagePublish,//!< Landed to Edit ViewController
};

typedef NS_ENUM(NSUInteger, DouyinOpenSDKShareAction) {
    DouyinOpenSDKShareTypePublishMedia,
    DouyinOpenSDKShareTypeShareContentToIM,
};

typedef NS_ENUM(NSInteger, DouyinOpenSDKShareRespState) {
    DouyinOpenSDKShareRespStateSuccess                         = 20000, //!< Success
    DouyinOpenSDKShareRespStateUnknownError                    = 20001, //!< Unknown or current SDK version unclassified error
    DouyinOpenSDKShareRespStateParamValidError                 = 20002, //!< Params parsing error, media resource type difference you pass
    DouyinOpenSDKShareRespStateSharePermissionDenied           = 20003, //!< Not enough permissions to operation.
    DouyinOpenSDKShareRespStateUserNotLogin                    = 20004, //!< User not login
    DouyinOpenSDKShareRespStateNotHavePhotoLibraryPermission   = 20005, //!< Has no album permissions
    DouyinOpenSDKShareRespStateNetworkError                    = 20006, //!< Network error
    DouyinOpenSDKShareRespStateVideoTimeLimitError             = 20007, //!< Video length doesn't meet requirements
    DouyinOpenSDKShareRespStatePhotoResolutionError            = 20008, //!< Photo doesn't meet requirements
    DouyinOpenSDKShareRespTimeStampError                       = 20009, //!< Timestamp check failed
    DouyinOpenSDKShareRespStateHandleMediaError                = 20010, //!< Processing photo resources faild
    DouyinOpenSDKShareRespStateVideoResolutionError            = 20011, //!< Video resolution doesn't meet requirements
    DouyinOpenSDKShareRespStateVideoFormatError                = 20012, //!< Video format is not supported
    DouyinOpenSDKShareRespStateCancel                          = 20013, //!< Sharing canceled
    DouyinOpenSDKShareRespStateHaveUploadingTask               = 20014, //!< Another video is currently uploading
    DouyinOpenSDKShareRespStateSaveAsDraft                     = 20015, //!< Users store shared content for draft or user accounts are not allowed to post videos
    DouyinOpenSDKShareRespStatePublishFailed                   = 20016, //!< Post share content failed
    DouyinOpenSDKShareRespStateMediaInIcloudError              = 21001, //!< Downloading from iCloud faild
    DouyinOpenSDKShareRespStateParamsParsingError              = 21002, //!< Internal params parsing error
    DouyinOpenSDKShareRespStateGetMediaError                   = 21003, //!< Media resources do not exist
};

DouyinOpenSDKShareRespState DouyinOpenSDKStringToShareState(NSString *string);


@class DouyinOpenSDKShareResponse;

typedef void(^BDOpenPlatformShareCompleteBlock)(DouyinOpenSDKShareResponse *Response);

@interface DouyinOpenSDKShareLink : NSObject

@property (nonatomic, copy) NSString *linkTitle;

@property (nonatomic, copy) NSString *linkDescription;

@property (nonatomic, copy) NSString *linkURLString;

@property (nonatomic, copy) NSString *linkCoverURLString;

@end

@interface DouyinOpenSDKShareRequest : DouyinOpenSDKBaseRequest

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

@property (nonatomic, assign) DouyinOpenSDKShareAction shareAction;

/**
 Which page do you want to land on?
 Defualt is Clip Viewcontroller
 */

@property (nonatomic, assign) DouyinOpenSDKLandedPageType landedPageType;
/**
 To associate your video with a hashtag, set the hashtag property on the request. The length cannot exceed 35
 */
@property (nonatomic, copy) NSString *hashtag;

/**
 The Media type of localIdentifiers in Album, All attachment localIdentifiers must be the same type
 */
@property (nonatomic, assign) DouyinOpenSDKShareMediaType mediaType;

/**
 Used to identify the uniqueness of the request, and finally returned by App when jumping back to the third-party program
 */
@property (nonatomic, copy, nullable) NSString *state;

@property (nonatomic, strong) DouyinOpenSDKShareLink *shareLink;

/**
 * @brief Send share request to Open Platform.
 *
 * @param completed  The async result call back. You can get result in share response.isSucceed;
 *
 * @return Share request is valid will return YES;
 */
- (BOOL)sendShareRequestWithCompleteBlock:(BDOpenPlatformShareCompleteBlock) completed;
@end

@interface DouyinOpenSDKShareResponse : DouyinOpenSDKBaseResponse
/**
 Used to identify the uniqueness of the request, and finally returned by App when jumping back to the third-party program
 */
@property (nonatomic, copy, nullable) NSString *state;

@property (nonatomic, assign) DouyinOpenSDKShareRespState shareState;

@end

NS_ASSUME_NONNULL_END
