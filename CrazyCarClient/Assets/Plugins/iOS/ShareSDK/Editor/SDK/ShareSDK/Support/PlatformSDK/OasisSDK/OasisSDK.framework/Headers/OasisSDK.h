//
//  OasisSDK.h
//  OasisSDK
//
//  Created by jianchengpan on 2019/11/4.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

@class OasisRequest;
@class OasisResponse;
@class OasisMediaObject;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - sdk

/**
 * Oasis设置类，用于统一提供分享所需要的必要参数
 */
@interface OasisConfig : NSObject

/** 微博开发者平台注册APP的appkey */
@property (nonatomic, copy) NSString *appKey;

/**
 * 是否开启debug模式，默认不开启，开启过后会在控制台输出错误日志
 */
@property (nonatomic, assign) BOOL debug;

/**
 *
 */
+(OasisConfig *)configWith:(NSString *)appKey;

@end


/**
 * 绿洲SDK代理
 */
@protocol OasisSDKDelegate <NSObject>

@optional

/**
 * 处理绿洲的响应
 * @param resp 响应内容
 */
-(void)onResp:(nonnull OasisResponse *)resp;

@end


/**
 * 绿洲SDK
 */
@interface OasisSDK : NSObject

/** 启动sdk */
+(BOOL)registerAPP:(OasisConfig *)config;

/**
 * 是否安装绿洲app
 * @return 已安装返回YES，未安装返回NO
 */
+(BOOL)isOasisInstalled;

/**
 * 获取sdk版本号
 */
+(nonnull NSString *)getSDKVersion;

/**
 * 发送请求
 * @param req 请求
 * @return 是否发送成功
 */
+(BOOL)sendReq:(OasisRequest *)req;

/**
 * 处理打开URL请求
 * @param url 待处理的URL
 * @param delegate 接收处理结果的代理
 * @return 是否能处理该URL请求
 */
+(BOOL)handleOpenUrl:(NSURL *)url delegate:(nullable id<OasisSDKDelegate>)delegate;

@end


#pragma mark - enums

/** 绿洲响应状态码 */
typedef NS_ENUM(int, OasisState) {
    OasisStateSuccess = 0,          //已发送
    OasisStateCanceled = 1,         //用户取消发送
    OasisStateSavedDraft = 2,       //用户已保存草稿
    OasisStateInternalError = 3,    //内部错误
    
    OasisStateNotInstall = 10,      //绿洲未安装
    
    OasisStateUnauthorized = 20,    //授权失败
    
    OasisStateNotLogin = 30,        //绿洲未登录
    
    OasisStateDataNull = 50,        //找不到数据
    OasisStateDataInvalid = 51,     //无效数据
    
    OasisStateResponseInvalid = 60, //解析响应错误
};

typedef NS_ENUM(int, OasisMediaType) {
    OasisMediaTypeImage = 1,
    OasisMediaTypeVideo = 2,
};


#pragma mark - request and response

/**
 * 绿洲请求基类
 */
@interface OasisRequest : NSObject

/** 请求类型 */
@property (nonatomic, assign) int action;

@end


/**
 * 绿洲分享请求
 */
@interface OasisShareRequest : OasisRequest

/** 分享标题 */
@property (nonatomic, copy, nullable) NSString *title;

/** 分享内容 */
@property (nonatomic, copy, nullable) NSString *content;

/**
 * 媒体信息
 * 图片最多添加12张，视频最多1个，图片和视频不能混合添加
 */
@property (nonatomic, readonly, nullable) NSArray *medias;

/**
 * 添加媒体信息
 * @param media 媒体信息
 * @return 是否添加成功
 */
-(BOOL)append:(OasisMediaObject *)media;

@end


/**
 * 绿洲响应基类
 */
@interface OasisResponse : NSObject

/** 响应类型 */
@property (nonatomic, assign) int action;

/** 状态码 */
@property (nonatomic, assign) OasisState code;

/** 简要描述 */
@property (nonatomic, copy, nullable) NSString *desc;

@end


#pragma mark - media objs

/**
 * 媒体对象
 * 媒体数据转发到绿洲支持两种方式:
 * 1. 直接数据转发(通过NSData，且有数据大小限制，具体限制见具体的媒体对象定义)
 * 2. 相册资源转发(通过PHAsset)
 * 两种方式均提供则优先使用第一种方式
 */
@interface OasisMediaObject : NSObject

/** 媒体类型 */
@property (nonatomic, assign) OasisMediaType mediaType;

/** 相册资源 */
@property (nonatomic, strong) PHAsset *asset;

@end


/**
 * 图片对象
 */
@interface OasisImageObject : OasisMediaObject

/** 图片数据(不超过10MB),超过上限则不能添加的请求里面 */
@property (nonatomic, strong) NSData *imageData;

@end


/**
 * 视频对象
 * 支持提供数据和相册资源唯一标识符方式,两者均提供则优先使用视频数据
 */
@interface OasisVideoObject : OasisMediaObject

/** 视频数据(不超过20M,超过20M请使用相册提供唯一标识符),需提供正确的文件类型后缀 */
@property (nonatomic, strong) NSData *videoData;

/**
 * 视频文件类型后缀,在提供视频数据的时候提供，以便正确的解析视频数据
 */
@property (nonatomic, copy) NSString *fileExtension;

@end


NS_ASSUME_NONNULL_END
