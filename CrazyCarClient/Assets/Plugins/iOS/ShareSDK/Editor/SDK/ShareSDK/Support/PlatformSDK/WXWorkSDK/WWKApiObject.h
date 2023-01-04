//
//  WWKApiObject.h
//  wxwork
//
//  Created by WXWork on 16/5/25.
//  Copyright © 2016年 rdgz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WWKApiSerializable <NSObject>
- (BOOL)deserializeWithDictionary:(NSDictionary *)dict;
@end

@interface WWKBaseObject : NSObject
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *bundleName;
@property (nonatomic, assign) NSUInteger sequence;
@property (nonatomic, readonly, nullable) NSData *serializedData;
@property (nonatomic, readonly, nullable) NSMutableDictionary *serializedDict;
+ (instancetype)deserializeWithData:(NSData *)data;
@end

#pragma mark - WWKBaseReq
/*! @brief 该类为企业微信终端SDK所有请求类的基类
 *
 */
@interface WWKBaseReq : WWKBaseObject
@end



#pragma mark - WWKBaseResp

extern const int WWKBaseRespErrCodeOK; // 操作成功
extern const int WWKBaseRespErrCodeCancelled; // 操作被取消
extern const int WWKBaseRespErrCodeFailed; // 操作失败
extern const int WWKBaseRespErrCodeNotSupported; // 操作不支持(不能识别请求)
extern const int WWKBaseRespErrCodeLowAppVer; // 操作不支持(用户安装的App版本过低)
extern const int WWKBaseRespErrCodeNoPrivileges; // 没有此API的调用权限
extern const int WWKBaseRespErrCodeInvalidCall; // 调用出错(例如传入参数不正确)

/*! @brief 该类为企业微信终端SDK所有响应类的基类
 *
 */
@interface WWKBaseResp : WWKBaseObject
/** 错误码 */
@property (nonatomic, assign) int errCode;
/** 错误提示字符串 */
@property (nonatomic, retain, nullable) NSString *errStr;
@end

#pragma mark - WWKSendMessageReq

/*!
 * @brief 带在 @c WWKSendMessageReq 中的消息对象基类。实际必须使用其子类
 */
@interface WWKMessageAttachment : NSObject
@end

/*!
 * @brief 文本消息
 */
@interface WWKMessageTextAttachment : WWKMessageAttachment
@property (nonatomic, copy) NSString *text;
@end

/*!
 * @brief 文件消息
 */
@interface WWKMessageFileAttachment : WWKMessageAttachment
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy, nullable) NSString *path;
@property (nonatomic, retain, nullable) NSData *data;
@end

/*!
 * @brief 图片消息
 */
@interface WWKMessageImageAttachment : WWKMessageFileAttachment
@end

/*!
 * @brief 视频消息
 */
@interface WWKMessageVideoAttachment : WWKMessageFileAttachment
@end

/*!
 * @brief 链接消息
 */
@interface WWKMessageLinkAttachment : WWKMessageAttachment
@property (nonatomic, copy, nullable) NSString *title;
@property (nonatomic, copy, nullable) NSString *summary;
@property (nonatomic, copy, nullable) NSString *url;
@property (nonatomic, copy, nullable) NSString *iconurl;
@property (nonatomic, retain, nullable) NSData *icon; // 不能超过32K
@end

/*!
 * @brief 位置消息
 */
@interface WWKMessageLocationAttachment : WWKMessageAttachment
@property (nonatomic, copy, nullable) NSString *title;
@property (nonatomic, copy, nullable) NSString *address;
@property (nonatomic, assign) double lat;
@property (nonatomic, assign) double lng;
@property (nonatomic, assign) double zoom;
@end

/*!
 * @brief 单条聊天记录消息
 */
@interface WWKMessageAttachmentWrapper : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy, nullable) NSString *avatarUrl;
@property (nonatomic, copy, nullable) NSData *avatarData;
@property (nonatomic, retain) WWKMessageAttachment *attachment;
@end

/*!
 * @brief 聊天记录消息组
 */
@interface WWKMessageGroupAttachment : WWKMessageAttachment
@property (nonatomic, copy) NSArray<WWKMessageAttachmentWrapper *> *contents;
@property (nonatomic, copy) NSString *title;
@end

/*! @brief 第三方程序发送消息至企业微信终端程序的消息结构体
 *
 * 第三方程序向企业微信发送信息需要传入WWKSendMessageReq结构体，信息类型包括文本消息和多媒体消息，
 * 分别对应于text和message成员。调用该方法后，企业微信处理完信息会向第三方程序发送一个处理结果。
 * @see WWKSendMessageResp
 */
@interface WWKSendMessageReq : WWKBaseReq <WWKApiSerializable>
/** 发送消息的多媒体内容
 * @see WWKMessageAttachment
 */
@property (nonatomic, retain, nullable) WWKMessageAttachment *attachment;
@end



#pragma mark - WWKSendMessageResp
/*! @brief 企业微信终端向第三方程序返回的WWKSendMessageReq处理结果。
 *
 * 第三方程序向企业微信终端发送WWKSendMessageReq后，企业微信发送回来的处理结果，该结果用WWKSendMessageResp表示。
 */
@interface WWKSendMessageResp : WWKBaseResp <WWKApiSerializable>
@end

#pragma mark - WWKPickContactReq

@interface WWKPickContactReq : WWKBaseReq <WWKApiSerializable>
@property (nonatomic, copy) NSString *type;
@end

#pragma mark - WWKPickContactResp

@interface WWKContactInfo : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy, nullable) NSString *email;
@end

@interface WWKPickContactResp : WWKBaseResp <WWKApiSerializable>
@property (nonatomic, retain, nullable) NSArray<WWKContactInfo *> *contacts;
@end

#pragma mark - WWKOpenConversationReq

@interface WWKOpenConversationReq : WWKBaseReq <WWKApiSerializable>
@property (nonatomic, assign) uint64_t conversationType;
@property (nonatomic, assign) uint64_t conversationId;
@end

#pragma mark - WWKOpenConversationResp

@interface WWKOpenConversationResp : WWKBaseResp <WWKApiSerializable>
@end

#pragma mark - WWKSSOReq

@interface WWKSSOReq : WWKBaseReq <WWKApiSerializable>
@property (nonatomic, copy) NSString *state;
@end

@interface WWKSSOResp : WWKBaseResp <WWKApiSerializable>
@property (nonatomic, retain, nullable) NSString *state;
@property (nonatomic, retain, nullable) NSString *code;
@end

NS_ASSUME_NONNULL_END
