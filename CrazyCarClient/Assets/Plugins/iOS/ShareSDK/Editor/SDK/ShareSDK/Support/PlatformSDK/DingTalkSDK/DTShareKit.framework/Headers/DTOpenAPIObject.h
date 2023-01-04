//
//  DTOpenAPIObject.h
//  DTShareSDK
//
//  Created by 青山 on 15/12/3.
//  Copyright (c) 2015年 Alibaba(China)Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

///-----------------------------------------------------------------------------
/// @name 基础类
///-----------------------------------------------------------------------------


/**
 错误码.
 
 @since v1.0.0
 */
typedef NS_ENUM(NSInteger, DTOpenAPIErrorCode)
{
    DTOpenAPISuccess               =  0,   /**< 成功. @since v1.0.0 */
    DTOpenAPIErrorCodeCommon       = -1,   /**< 通用错误. @since v1.0.0 */
    DTOpenAPIErrorCodeUserCancel   = -2,   /**< 用户取消. @since v1.0.0 */
    DTOpenAPIErrorCodeSendFail     = -3,   /**< 发送失败. @since v1.0.0 */
    DTOpenAPIErrorCodeAuthDeny     = -4,   /**< 授权失败. @since v1.0.0 */
    DTOpenAPIErrorCodeUnsupport    = -5,   /**< DingTalk不支持. @since v1.0.0 */
};



/**
 分享场景.
 
 @since v1.0.0
 */
typedef NS_ENUM(NSInteger, DTScene)
{
    DTSceneSession          =  0,   /**< 会话. @since v1.0.0 */
};



/**
 分享SDK请求类的基类.
 */
@interface DTBaseReq : NSObject
@end

/**
 分享SDK响应类的基类.
 */
@interface DTBaseResp : NSObject

/// 错误码.
@property (nonatomic, assign) DTOpenAPIErrorCode errorCode;
/// 错误提示.
@property (nonatomic, copy) NSString *errorMessage;
@end



///-----------------------------------------------------------------------------
/// @name 分享
///-----------------------------------------------------------------------------

/**
 第三方APP向钉钉发送消息的请求类.
 
 第三方APP需要向+[DTOpenAPI sendReq:]方法传入一个构建好的DTSendMessageToDingTalkReq对象向钉钉发送消息.
 */
@class DTMediaMessage;
@interface DTSendMessageToDingTalkReq : DTBaseReq

/// 向钉钉发送的消息.
@property (nonatomic, strong) DTMediaMessage *message;
/// 向钉钉发送消息的场景.
@property (nonatomic, assign) DTScene scene;
@end



/**
 第三方APP向钉钉发送消息的响应类.
 
 第三方APP调用+[DTOpenAPI sendReq:]方法向钉钉发送消息后, 钉钉通过-[DTOpenAPIDelegate onResp:]向第三方应用传递DTSendMessageToDingTalkResp对象告知处理结果.
 */
@interface DTSendMessageToDingTalkResp : DTBaseResp
@end



/**
 多媒体消息类.
 
 用于钉钉和第三方程序之间传递消息的多媒体消息内容.
 */
@interface DTMediaMessage : NSObject

/// 标题. @note 长度不超过 512Byte.
@property (nonatomic, copy) NSString *title;
/// 描述内容. @note 长度不超过 1K.
@property (nonatomic, copy) NSString *messageDescription;

/// 缩略图数据. @note 长度不超过 32K.
@property (nonatomic, strong) NSData *thumbData;

/// 缩略图URL. @note 长度不超过 10K.
@property (nonatomic, copy) NSString *thumbURL;

/// 多媒体数据对象. 可以为DTMediaTextObject, DTMediaImageObject, DTMediaWebObject等.
@property (nonatomic, strong) id mediaObject;
@end



/**
 多文本消息中的文本对象.
 */
@interface DTMediaTextObject : NSObject

/// 文本内容. @note 长度不超过 1K.
@property (nonatomic, copy) NSString *text;
@end



/**
 多文本消息中的图片对象.
 */
@interface DTMediaImageObject : NSObject

/// 图片内容. @note 大小不能超过 10M.
@property (nonatomic, strong) NSData *imageData;

/// 图片URL. @note 长度不能超过 10K.
@property (nonatomic, copy) NSString *imageURL;
@end



/**
 多文本消息中的Web页面对象.
 */
@interface DTMediaWebObject : NSObject

/// Web页面的URL. @note 长度不能超过 10K.
@property (nonatomic, copy) NSString *pageURL;
@end



/**
 支付宝红包对象(仅支付宝可用).
 */
@interface DTMediaAlipayObject : NSObject

/// 支付宝红包页面URL. @note 长度不能超过 10K.
@property (nonatomic, copy) NSString *pageURL;
@end
