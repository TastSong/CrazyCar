//
//  YXApiObject.h
//  YixinSDK
//
//  Version 2.4.5
//  Created by yixin ( yixinopen@188.com )
//  Copyright (c) 2013年 yixin.im All rights reserved.
//


#import <Foundation/Foundation.h>

enum YXRespCode {
    kYXRespSuccess       = 0,
    kYXRespErrCommon     = -1,
    kYXRespErrUserCancel = -2,
    kYXRespErrSentFail   = -3,
    kYXRespErrAuthDeny   = -4,
    kYXRespErrUnsupport  = -5,
};

/*! @brief 分享场景
 *  易信会话，易信朋友圈，易信收藏
 */
enum YXScene {
    kYXSceneSession   = 0,
    kYXSceneTimeline  = 1,
    kYXSceneFavorite  = 2,
};

// 消息类型
enum YXMessageType {
    kYXSendMessageReq   = 1,
    kYXShowMessageReq   = 2,
    kYXSendMessageResp  = 3,
    kYXShowMessageResp  = 4,
    kYXOAuthMessageReq  = 5,
    kYXOAuthMessageResp = 6,
    kYXOAuthTokenMessageResp = 7
};

// 多媒体类型
enum YXMediaObjectType {
    kYXMediaImage       = 1,
    kYXMediaMusic       = 2,
    kYXMediaAppExtend   = 3,
    kYXMediaWebpage     = 4,
    kYXMediaVideo       = 5
};

@class UIImage;

/*! @brief 请求类的基类
 *
 */
@interface YXBaseReq : NSObject
// 请求类型
@property (nonatomic,assign) NSInteger type;
@end

/*! @brief 响应类的基类
 *
 */
@interface YXBaseResp : NSObject
// 响应类型
@property (nonatomic,assign) NSInteger type;
//错误码
@property (nonatomic,assign) NSInteger code;
// 错误提示字符串
@property (nonatomic,retain) NSString *errDescription;
@end

@class YXMediaMessage;
/*! @brief 第三方程序发送消息至易信的消息结构体
 *
 * 第三方App向易信客户端发送的消息对象，
 * 可能的类型：文本，多媒体
 */
@interface SendMessageToYXReq : YXBaseReq

/** 发送的场景类型，可以选择发送到会话(YXSceneSession)或者朋友圈(YXSceneTimeline)。 默认发送到会话。
 * @see YXScene
 */
@property (nonatomic, assign) int scene;

/** 发送消息的类型，包括文本消息和多媒体消息两种*/
@property (nonatomic, assign) BOOL bText;

/** 发送消息的文本内容
 * @note 文本长度必须大于0且小于10K
 */
@property (nonatomic, retain) NSString *text;

/** 发送消息的多媒体内容
 * @see YXMediaMessage
 */
@property (nonatomic, retain) YXMediaMessage *message;

/** 发送消息的多媒体内容
 * @note 评论内容 字数限制300
 */
@property (nonatomic, retain) NSString *comment;

@end

/*! @brief 易信客户端向第三方App返回的处理结果。
 *
 */
@interface SendMessageToYXResp : YXBaseResp

@end

/*! @brief 易信客户端通知第三方App，要求第三方程序显示的消息结构体。
 *
 */
@interface ShowMessageFromYXReq : YXBaseReq

/** 易信客户端向第三方程序发送的要求第三方程序处理的多媒体内容
 * @see YXMediaMessage
 */
@property (nonatomic, retain) YXMediaMessage *message;

@end

/*! @brief 易信客户端通知第三方程序，要求第三方程序显示或处理某些消息，第三方程序处理完后向易信终端发送的处理结果。
 *
 */
@interface ShowMessageFromYXResp : YXBaseResp

@end

/*! @brief 多媒体消息结构体
 *
 */
@interface YXMediaMessage : NSObject

/** 返回一个YXMediaMessage对象
 * @note 返回的对象是自动释放的
 */
+(YXMediaMessage *) message;

/** 标题
 * @note 长度不能超过512字节
 */
@property (nonatomic, retain) NSString *title;

/** 描述内容
 * @note 长度不能超过1K
 */
@property (nonatomic, retain) NSString *msgDescription;

/** 缩略图数据
 * @note 占用内存大小不能超过64K
 * @note 如果mediaObject是YXImageObject类型，并只提供了imageUrl
 *          为了保证视觉效果，缩略图大小不得小于200px * 200px 
 *          (若YXImageObject内提供了imageData则无此限制)
 */
@property (nonatomic, retain) NSData *thumbData;

/** 多媒体数据对象
 * @see YXImageObject, YXMusicObject, YXAppExtendObject
 * @note 如果mediaObject是YXImageObject类型，并只提供了imageUrl
 *          为了保证视觉效果，缩略图大小不得小于200px * 200px
 *          (若YXImageObject内提供了imageData则无此限制)
 */
@property (nonatomic, retain) id mediaObject;


@end


/*! @brief 多媒体消息中包含的图片数据对象
 *
 * @note imageData和imageUrl成员不能同时为空
 */
@interface YXImageObject : NSObject

/** 返回一个YXImageObject对象
 * @note 返回的对象是自动释放的
 */
+(YXImageObject *) object;

/** 图片真实数据内容
 * @note 占用内存大小不能超过10M
 */
@property (nonatomic, retain) NSData    *imageData;

/** 图片url
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString  *imageUrl;

@end

/*! @brief 多媒体消息中包含的音乐数据对象
 *
 */
@interface YXMusicObject : NSObject

/** 返回一个YXMusicObject对象
 * @note 返回的对象是自动释放的
 */
+(YXMusicObject *) object;
/** 音乐网页的url地址
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString *musicUrl;
/** 音乐lowband网页的url地址
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString *musicLowBandUrl;
/** 音乐数据url地址
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString *musicDataUrl;

/**音乐lowband数据url地址
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString *musicLowBandDataUrl;

@end


/*! @brief 多媒体消息中包含的网页数据对象
 *
 */
@interface YXWebpageObject : NSObject

/** 返回一个YXWebpageObject对象
 * @note 返回的对象是自动释放的
 */
+(YXWebpageObject *) object;

/** 网页的url地址
 * @note 不能为空且长度不能超过10K
 */
@property (nonatomic, retain) NSString *webpageUrl;

@end

/*! @brief 多媒体消息中包含的视频数据对象
 *
 */
@interface YXVideoObject : NSObject

/** 返回一个YXVideoObject对象
 * @note 返回的对象是自动释放的
 */
+(YXVideoObject *) object;

/** 视频网页的url地址
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString *videoUrl;
/** 视频lowband网页的url地址
 * @note 长度不能超过10K
 */
@property (nonatomic, retain) NSString *videoLowBandUrl;

@end


/*! @brief 多媒体消息中包含的App扩展数据对象
 *
 */
@interface YXAppExtendObject : NSObject

+(YXAppExtendObject *) object;

@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *extInfo;
@property (nonatomic, retain) NSData   *fileData;

@end


/*! @brief 第三方程序发送OAuth认证至易信的消息结构体
 *
 * 第三方App向易信客户端发送的认证消息对象，
 */
@interface SendOAuthToYXReq : YXBaseReq

@property(nonatomic, retain) NSString *scope;
@property(nonatomic, retain) NSString *state;

@end


/*! @brief 易信客户端向第三方App返回的OAuth认证结果。
 *
 */
@interface SendOAuthToYXResp : YXBaseResp

@property(nonatomic, retain) NSString *authCode;
@property(nonatomic, retain) NSString *authToken;
@property(nonatomic, retain) NSString *state;
@property(nonatomic, assign) long long exprieSeonds;

@end

/*! @brief gameSDK专属。
 *
 */
@interface YXAccountInfo : NSObject

@property (nonatomic,retain)    NSString    *accountId;
@property (nonatomic,retain)    NSString    *icon;
@property (nonatomic,assign)    BOOL   ingame;
@property (nonatomic,retain)    NSString   *nick;

+ (YXAccountInfo *)YXAccountInfo: (NSDictionary *)dict;
@end


/*! @brief gameSDK专属。
 *
 */
@interface YXAccountRankInfo : NSObject

@property (nonatomic,retain)    NSString    *accountId;
@property (nonatomic,retain)    NSString    *icon;
@property (nonatomic,assign)    double   value;
@property (nonatomic,retain)    NSString   *nick;

+ (YXAccountRankInfo *)YXAccountRankInfo: (NSDictionary *)dict;
@end




