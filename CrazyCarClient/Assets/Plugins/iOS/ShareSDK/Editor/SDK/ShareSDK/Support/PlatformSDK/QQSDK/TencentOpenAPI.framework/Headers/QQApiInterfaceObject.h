///
/// \file QQApiInterfaceObject.h
/// \brief QQApiInterface所依赖的请求及应答消息对象封装帮助类
///
/// Created by Tencent on 12-5-15.
/// Copyright (c) 2012年 Tencent. All rights reserved.
///

#ifndef QQApiInterface_QQAPIOBJECT_h
#define QQApiInterface_QQAPIOBJECT_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,QQApiSendResultCode) {
    EQQAPISENDSUCESS = 0,
    EQQAPIQQNOTINSTALLED = 1,  //QQ未安装
    EQQAPIQQNOTSUPPORTAPI = 2,  // QQ api不支持
    EQQAPIMESSAGETYPEINVALID = 3,
    EQQAPIMESSAGECONTENTNULL = 4,
    EQQAPIMESSAGECONTENTINVALID = 5,
    EQQAPIAPPNOTREGISTED = 6,
    EQQAPIAPPSHAREASYNC = 7,
    EQQAPIQQNOTSUPPORTAPI_WITH_ERRORSHOW = 8,  //QQ api不支持 && SDK显示error提示（已废弃）
    EQQAPIMESSAGEARKCONTENTNULL = 9,  //ark内容为空
    EQQAPIMESSAGE_MINI_CONTENTNULL = 10,  //小程序参数为空
    EQQAPISENDFAILD = -1,  //发送失败
    EQQAPISHAREDESTUNKNOWN = -2, //未指定分享到QQ或TIM
    EQQAPITIMSENDFAILD = -3,  //发送失败
    EQQAPITIMNOTINSTALLED = 11, //TIM未安装
    EQQAPITIMNOTSUPPORTAPI = 12, // TIM api不支持
    EQQAPI_INCOMING_PARAM_ERROR = 13, // 外部传参错误
    EQQAPI_THIRD_APP_GROUP_ERROR_APP_NOT_AUTHORIZIED = 14, // APP未获得授权
    EQQAPI_THIRD_APP_GROUP_ERROR_CGI_FAILED = 15, // CGI请求失败
    EQQAPI_THIRD_APP_GROUP_ERROR_HAS_BINDED = 16, // 该组织已经绑定群聊
    EQQAPI_THIRD_APP_GROUP_ERROR_NOT_BINDED = 17, // 该组织尚未绑定群聊
    EQQAPIQZONENOTSUPPORTTEXT = 10000,  //qzone分享不支持text类型分享
    EQQAPIQZONENOTSUPPORTIMAGE = 10001,  //qzone分享不支持image类型分享
    EQQAPIVERSIONNEEDUPDATE = 10002,  //当前QQ版本太低，需要更新至新版本才可以支持
    ETIMAPIVERSIONNEEDUPDATE = 10004,  //当前TIM版本太低，需要更新至新版本才可以支持
    EAPPURLTYPESILLEGALITY = 20000,  //(>=3.3.8)第三方APP的info.plist中UrlTypes字段存在QQ的UrlScheme
};

#pragma mark - QQApiObject(分享对象类型)

// QQApiObject control flags
typedef NS_ENUM(NSUInteger,kQQAPICtrlFlag) {
    kQQAPICtrlFlagQZoneShareOnStart = 0x01,
    kQQAPICtrlFlagQZoneShareForbid = 0x02,
    kQQAPICtrlFlagQQShare = 0x04,
    kQQAPICtrlFlagQQShareFavorites = 0x08, //收藏
    kQQAPICtrlFlagQQShareDataline = 0x10,  //数据线
    kQQAPICtrlFlagQQShareEnableArk = 0x20, //支持ARK
    kQQAPICtrlFlagQQShareEnableMiniProgram = 0x40, //支持小程序
};

// 分享到QQ或TIM
typedef NS_ENUM(NSUInteger, ShareDestType) {
    ShareDestTypeQQ = 0,
    ShareDestTypeTIM,
};

//小程序的类型
typedef NS_ENUM(NSUInteger, MiniProgramType) {
    MiniProgramType_Develop=0,  // 开发版
    MiniProgramType_Test=1,     // 测试版
    MiniProgramType_Online=3,   // 正式版,默认
    MiniProgramType_Preview=4,  // 预览版
};

/// 打印回调的block
typedef void(^QQApiLogBolock)(NSString *logStr);

// QQApiObject
/** \brief 所有在QQ及插件间发送的数据对象的根类。
 */
__attribute__((visibility("default"))) @interface QQApiObject : NSObject
@property(nonatomic, retain) NSString* title; ///< 标题，最长128个字符
@property(nonatomic, retain) NSString* description; ///<简要描述，最长512个字符
@property(nonatomic, retain) NSString* universalLink; ///(>=3.3.7)支持第三方传入在互联开放平台注册的universallink
@property(nonatomic, assign) uint64_t cflag;
/*
 * 分享到QQ/TIM
 * SDK根据是否安装对应客户端进行判断，判断顺序：QQ > TIM
 * 默认分享到QQ，如果QQ未安装检测TIM是否安装
 */
@property (nonatomic, assign) ShareDestType shareDestType;
@end

// ArkObject
/** \brief 支持Ark的根类。
 */
__attribute__((visibility("default"))) @interface ArkObject : NSObject
@property(nonatomic,retain) NSString* arkData; ///< 显示Ark所需的数据，json串，长度暂不限制
@property(nonatomic,assign) QQApiObject* qqApiObject; ///<原有老版本的QQApiObject

- (id)initWithData:(NSString *)arkData qqApiObject:(QQApiObject*)qqApiObject;
+ (id)objectWithData:(NSString *)arkData qqApiObject:(QQApiObject*)qqApiObject;
@end

#pragma mark QQ小程序
//分享小程序消息 - QQ 8.0.8
__attribute__((visibility("default"))) @interface QQApiMiniProgramObject : NSObject
@property(nonatomic,retain) QQApiObject* qqApiObject; //原有老版本的QQApiObject
@property(nonatomic,retain) NSString* miniAppID; //必填，小程序的AppId（注：必须在QQ互联平台中，将该小程序与分享的App绑定）
@property(nonatomic,retain) NSString* miniPath; //必填，小程序的展示路径
@property(nonatomic,retain) NSString* webpageUrl; //必填，兼容低版本的网页链接
@property(nonatomic,assign) MiniProgramType miniprogramType; //非必填，小程序的类型，默认正式版(3)，可选测试版(1)、预览版(4)
@end

//唤起小程序 - QQ 8.1.8
__attribute__((visibility("default"))) @interface QQApiLaunchMiniProgramObject : QQApiObject
@property(nonatomic,retain) NSString* miniAppID; //必填，小程序的AppId（注：必须在QQ互联平台中，将该小程序与分享的App绑定）
@property(nonatomic,retain) NSString* miniPath; //小程序的展示路径,不填展示默认小程序首页
@property(nonatomic,assign) MiniProgramType miniprogramType; //非必填，小程序的类型，默认正式版(3)，可选测试版(1)、开发版(0)
@end

//小程序唤起第三方 - SDK 3.3.9
__attribute__((visibility("default"))) @interface QQApiMiniProgramLaunchObject : QQApiObject
@property(nonatomic,copy) NSString* appParameter; //小程序带来的数据，透传
+ (instancetype)newWithAppParameter:(NSString*)parameter;
@end

// QQApiResultObject
/** \brief 用于请求回应的数据类型。
 <h3>可能错误码及描述如下:</h3>
 <TABLE>
 <TR><TD>error</TD><TD>errorDescription</TD><TD>注释</TD></TR>
 <TR><TD>0</TD><TD>nil</TD><TD>成功</TD></TR>
 <TR><TD>-1</TD><TD>param error</TD><TD>参数错误</TD></TR>
 <TR><TD>-2</TD><TD>group code is invalid</TD><TD>该群不在自己的群列表里面</TD></TR>
 <TR><TD>-3</TD><TD>upload photo failed</TD><TD>上传图片失败</TD></TR>
 <TR><TD>-4</TD><TD>user give up the current operation</TD><TD>用户放弃当前操作</TD></TR>
 <TR><TD>-5</TD><TD>client internal error</TD><TD>客户端内部处理错误</TD></TR>
 </TABLE>
 */
__attribute__((visibility("default"))) @interface QQApiResultObject : QQApiObject
@property(nonatomic,retain) NSString* error; ///<错误
@property(nonatomic,retain) NSString* errorDescription; ///<错误描述
@property(nonatomic,retain) NSString* extendInfo; ///<扩展信息
@end

// QQApiTextObject
/** \brief 文本对象
 */
@interface QQApiTextObject : QQApiObject
@property(nonatomic,retain)NSString* text; ///<文本内容，必填，最长1536个字符

-(id)initWithText:(NSString*)text; ///<初始化方法
+(id)objectWithText:(NSString*)text;///<工厂方法，获取一个QQApiTextObject对象.
@end

// QQApiURLObject
typedef NS_ENUM(NSUInteger, QQApiURLTargetType) {
    QQApiURLTargetTypeNotSpecified = 0x00,
    QQApiURLTargetTypeAudio   = 0x01,
    QQApiURLTargetTypeVideo   = 0x02,
    QQApiURLTargetTypeNews    = 0x03
};

/** @brief URL对象类型。
 
 包括URL地址，URL地址所指向的目标类型及预览图像。
 */
__attribute__((visibility("default"))) @interface QQApiURLObject : QQApiObject
/**
 URL地址所指向的目标类型.
 @note 参见QQApi.h 中的 QQApiURLTargetType 定义.
 */
@property(nonatomic)QQApiURLTargetType targetContentType;

@property(nonatomic,retain)NSURL* url; ///<URL地址,必填，最长512个字符
@property(nonatomic,retain)NSData* previewImageData;///<预览图像数据，最大1M字节
@property(nonatomic, retain) NSURL *previewImageURL;    ///<预览图像URL **预览图像数据与预览图像URL可二选一

/**
 初始化方法
 */
-(id)initWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageData:(NSData*)data targetContentType:(QQApiURLTargetType)targetContentType;
-(id)initWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageURL:(NSURL*)previewURL targetContentType:(QQApiURLTargetType)targetContentType;
/**
 工厂方法,获取一个QQApiURLObject对象
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageData:(NSData*)data targetContentType:(QQApiURLTargetType)targetContentType;
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageURL:(NSURL*)previewURL targetContentType:(QQApiURLTargetType)targetContentType;
@end

// QQApiExtendObject
/** @brief 扩展数据类型
 */
@interface QQApiExtendObject : QQApiObject
@property(nonatomic,retain) NSData* data;///<具体数据内容，必填，最大5M字节
@property(nonatomic,retain) NSData* previewImageData;///<预览图像，最大1M字节
@property(nonatomic,retain) NSArray* imageDataArray;///图片数组(多图暂只支持分享到手机QQ收藏功能)

/**
 初始化方法
 @param data 数据内容
 @param previewImageData 用于预览的图片
 @param title 标题
 @param description 此对象，分享的描述
 */
- (id)initWithData:(NSData*)data previewImageData:(NSData*)previewImageData title:(NSString*)title description:(NSString*)description;

/**
 初始化方法
 @param data 数据内容
 @param title 标题
 @param description 此对象，分享的描述
 @param imageDataArray 发送的多张图片队列
 */
- (id)initWithData:(NSData *)data previewImageData:(NSData*)previewImageData title:(NSString *)title description:(NSString *)description imageDataArray:(NSArray *)imageDataArray;

/**
 helper方法获取一个autorelease的<code>QQApiExtendObject</code>对象
 @param data 数据内容
 @param previewImageData 用于预览的图片
 @param title 标题
 @param description 此对象，分享的描述
 @return
 一个自动释放的<code>QQApiExtendObject</code>实例
 */
+ (id)objectWithData:(NSData*)data previewImageData:(NSData*)previewImageData title:(NSString*)title description:(NSString*)description;

/**
 helper方法获取一个autorelease的<code>QQApiExtendObject</code>对象
 @param data 数据内容
 @param previewImageData 用于预览的图片
 @param title 标题
 @param description 此对象，分享的描述
 @param imageDataArray 发送的多张图片队列
 @return
 一个自动释放的<code>QQApiExtendObject</code>实例
 */
+ (id)objectWithData:(NSData*)data previewImageData:(NSData*)previewImageData title:(NSString*)title description:(NSString*)description imageDataArray:(NSArray*)imageDataArray;

@end

// QQApiImageObject
/** @brief 图片对象
 用于分享图片内容的对象，是一个指定为图片类型的<code>QQApiExtendObject</code>
 */
@interface QQApiImageObject : QQApiExtendObject
@end

// QQApiImageForQQAvatarObject
/** @brief 图片对象
 用于设置QQ头像内容的对象，是一个指定为图片类型的<code>QQApiExtendObject</code>
 */
@interface QQApiImageForQQAvatarObject : QQApiExtendObject
@end
/**
 * @brief 视频对象
 * 用于设置动态头像
 * assetURL可传ALAsset的ALAssetPropertyAssetURL，或者PHAsset的localIdentifier
 从手Q返回的错误码：
 //第三方设置动态头像结果
 @"ret=0"//设置成功
 @"ret=-10&error_des=user cancel"//用户取消设置
 @"ret=-11&error_des=pasteboard have no video data"//剪切板没有数据
 @"ret=-12&error_des=export data failed"//从剪切板导出数据到本地失败
 @"ret=-13&error_des=url param invalid"//sdk传递过来的数据有误
 @"ret=-14&error_des=video param invalid"//视频的参数不符合要求（检测第三方视频源方案：1、分辨率跟480*480保持一致；2、视频长度0.5s～8s）
 @"ret=-15&error_des=app authorised failed"//应用鉴权失败
 @"ret=-16&error_des=upload video failed"//设置头像，上传到后台失败
 @"ret=-17&error_des=account diff"//账号不一致
 */
@interface QQApiVideoForQQAvatarObject : QQApiExtendObject
@property(nonatomic, retain) NSString *assetURL;
@end

// QQApiImageArrayForFaceCollectionObject
/** @brief 图片数组对象
   用于分享图片组到表情收藏，是一个指定为图片类型的<code>QQApiObject</code>
 */
@interface QQApiImageArrayForFaceCollectionObject : QQApiObject

@property(nonatomic,retain) NSArray* imageDataArray;///图片数组

/**
 初始化方法
 @param imageDataArray 图片数组
 */
- (id)initWithImageArrayData:(NSArray*)imageDataArray;
/**
 helper方法获取一个autorelease的<code>QQApiObject</code>对象
 @param imageDataArray 发送的多张图片队列
 @return
 一个自动释放的<code>QQApiObject</code>实例
 */
+ (id)objectWithimageDataArray:(NSArray *)imageDataArray;

@end

// QQApiImageArrayForQZoneObject
/** @brief 图片对象
 用于分享图片到空间，走写说说路径，是一个指定为图片类型的，当图片数组为空时，默认走文本写说说<code>QQApiObject</code>
 */
@interface QQApiImageArrayForQZoneObject : QQApiObject

@property(nonatomic,retain) NSArray* imageDataArray;///图片数组
@property(nonatomic,retain) NSDictionary* extMap; // 扩展字段

/**
 初始化方法
 @param imageDataArray 图片数组
 @param title 写说说的内容，可以为空
 @param extMap 扩展字段
 */
- (id)initWithImageArrayData:(NSArray*)imageDataArray title:(NSString*)title extMap:(NSDictionary *)extMap;

/**
 helper方法获取一个autorelease的<code>QQApiExtendObject</code>对象
 @param title 写说说的内容，可以为空
 @param imageDataArray 发送的多张图片队列
 @param extMap 扩展字段
 @return
 一个自动释放的<code>QQApiExtendObject</code>实例
 */
+ (id)objectWithimageDataArray:(NSArray*)imageDataArray title:(NSString*)title extMap:(NSDictionary *)extMap;

@end

// QQApiVideoForQZoneObject
/** @brief 视频对象
 用于分享视频到空间，走写说说路径<code>QQApiObject</code>,assetURL和videoData两个参数必须设置至少一个参数，如果assetURL设置了忽略videoData参数
 @param assetURL可传ALAsset的ALAssetPropertyAssetURL，或者PHAsset的localIdentifier
 @param extMap 扩展字段
 @param videoData 视频数据，大小不超过50M
 */
@interface QQApiVideoForQZoneObject : QQApiObject

@property(nonatomic, retain) NSString *assetURL;
@property(nonatomic,retain) NSDictionary* extMap; // 扩展字段
@property(nonatomic,retain) NSData* videoData;

- (id)initWithAssetURL:(NSString*)assetURL title:(NSString*)title extMap:(NSDictionary *)extMap;

+ (id)objectWithAssetURL:(NSString*)assetURL title:(NSString*)title extMap:(NSDictionary *)extMap;

- (id)initWithVideoData:(NSData*)videoData title:(NSString*)title extMap:(NSDictionary *)extMap;

+ (id)objectWithVideoData:(NSData*)videoData title:(NSString*)title extMap:(NSDictionary *)extMap;

@end

// QQApiWebImageObject
/** @brief 图片对象
 用于分享网络图片内容的对象，是一个指定网络图片url的: 该类型只在2.9.0的h5分享中才支持，
 原有的手q分享是不支持该类型的。
 */
@interface QQApiWebImageObject : QQApiObject

@property(nonatomic, retain) NSURL *previewImageURL;    ///<预览图像URL

/**
 初始化方法
 @param previewImageURL 用于预览的图片
 @param title 标题
 @param description 此对象，分享的描述
 */
- (id)initWithPreviewImageURL:(NSURL*)previewImageURL title:(NSString*)title description:(NSString*)description;

/**
 helper方法获取一个autorelease的<code>QQApiWebImageObject</code>对象
 @param previewImageURL 用于预览的图片
 @param title 标题
 @param description 此对象，分享的描述
 */
+ (id)objectWithPreviewImageURL:(NSURL*)previewImageURL title:(NSString*)title description:(NSString*)description;

@end


//QQApiFileObject
/** @brief 本地文件对象(暂只支持分享到手机QQ数据线功能)
 用于分享文件内容的对象，是一个指定为文件类型的<code>QQApiExtendObject</code>
 */
@interface QQApiFileObject : QQApiExtendObject
{
    NSString* _fileName;
}
@property(nonatomic, retain)NSString* fileName;
@end

// QQApiAudioObject
/** @brief 音频URL对象
 用于分享目标内容为音频的URL的对象
 */
@interface QQApiAudioObject : QQApiURLObject

@property (nonatomic, retain) NSURL *flashURL;      ///<音频URL地址，最长512个字符

/**
 获取一个autorelease的<code>QQApiAudioObject</code>
 @param url 音频内容的目标URL
 @param title 分享内容的标题
 @param description 分享内容的描述
 @param data 分享内容的预览图像
 @note 如果url为空，调用<code>QQApi#sendMessage:</code>时将返回FALSE
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageData:(NSData*)data;

/**
 获取一个autorelease的<code>QQApiAudioObject</code>
 @param url 音频内容的目标URL
 @param title 分享内容的标题
 @param description 分享内容的描述
 @param previewURL 分享内容的预览图像URL
 @note 如果url为空，调用<code>QQApi#sendMessage:</code>时将返回FALSE
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageURL:(NSURL*)previewURL;

@end

// QQApiVideoObject
/** @brief 视频URL对象
 用于分享目标内容为视频的URL的对象
 
 QQApiVideoObject类型的分享，目前在Android和PC QQ上接收消息时，展现有待完善，待手机QQ版本以后更新支持
 目前如果要分享视频，推荐使用 QQApiNewsObject 类型
 */
@interface QQApiVideoObject : QQApiURLObject

@property (nonatomic, retain) NSURL *flashURL;      ///<视频URL地址，最长512个字符

/**
 获取一个autorelease的<code>QQApiVideoObject</code>
 @param url 视频内容的目标URL
 @param title 分享内容的标题
 @param description 分享内容的描述
 @param data 分享内容的预览图像
 @note 如果url为空，调用<code>QQApi#sendMessage:</code>时将返回FALSE
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageData:(NSData*)data;

/**
 获取一个autorelease的<code>QQApiVideoObject</code>
 @param url 视频内容的目标URL
 @param title 分享内容的标题
 @param description 分享内容的描述
 @param previewURL 分享内容的预览图像URL
 @note 如果url为空，调用<code>QQApi#sendMessage:</code>时将返回FALSE
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageURL:(NSURL*)previewURL;

@end

// QQApiNewsObject
/** @brief 新闻URL对象
 用于分享目标内容为新闻的URL的对象
 */
@interface QQApiNewsObject : QQApiURLObject
/**
 获取一个autorelease的<code>QQApiNewsObject</code>
 @param url 视频内容的目标URL
 @param title 分享内容的标题
 @param description 分享内容的描述
 @param data 分享内容的预览图像
 @note 如果url为空，调用<code>QQApi#sendMessage:</code>时将返回FALSE
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageData:(NSData*)data;

/**
 获取一个autorelease的<code>QQApiNewsObject</code>
 @param url 视频内容的目标URL
 @param title 分享内容的标题
 @param description 分享内容的描述
 @param previewURL 分享内容的预览图像URL
 @note 如果url为空，调用<code>QQApi#sendMessage:</code>时将返回FALSE
 */
+(id)objectWithURL:(NSURL*)url title:(NSString*)title description:(NSString*)description previewImageURL:(NSURL*)previewURL;

@end

// QQApiCommonContentObject;
/** @brief 通用模板类型对象
 用于分享一个固定显示模板的图文混排对象
 @note 图片列表和文本列表不能同时为空
 */
@interface QQApiCommonContentObject : QQApiObject
/**
 预定义的界面布局类型
 */
@property(nonatomic,assign) unsigned int layoutType;
@property(nonatomic,assign) NSData* previewImageData;///<预览图
@property(nonatomic,retain) NSArray* textArray;///<文本列表
@property(nonatomic,retain) NSArray* pictureDataArray;///<图片列表
+(id)objectWithLayoutType:(int)layoutType textArray:(NSArray*)textArray pictureArray:(NSArray*)pictureArray previewImageData:(NSData*)data;
/**
 将一个NSDictionary对象转化为QQApiCommomContentObject，如果无法转换，则返回空
 */
+(id)objectWithDictionary:(NSDictionary*)dic;
-(NSDictionary*)toDictionary;
@end

// QQApiExtraServiceObject;
/**
 @brief OpenSDK扩展支持的服务，通用接口，后续会扩充能力
 @param serviceID [必选] 扩展支持的服务类型ID，参考官方文档说明
 @param openID    [必选] 授权登录后对该用户的唯一标识
 @param toUin     [可选] 对方的QQ号码
 @param extraInfo [可选] 扩展字段
 @note 该接口的使用须先登录
 */
@interface QQApiExtraServiceObject : QQApiObject
@property (nonatomic,retain) NSString* serviceID;
@property (nonatomic,retain) NSString* openID;
@property (nonatomic,retain) NSString* toUin;
@property (nonatomic,retain) NSDictionary* extraInfo;

- (id)initWithOpenID:(NSString *)openID serviceID:(NSString *)serviceID;
+ (id)objecWithOpenID:(NSString *)openID serviceID:(NSString *)serviceID;
@end


////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Ad item object definition
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/** @brief 广告数据对象
 */
@interface QQApiAdItem : NSObject
@property(nonatomic,retain) NSString* title; ///<名称
@property(nonatomic,retain) NSString* description;///<描述
@property(nonatomic,retain) NSData* imageData;///<广告图片
@property(nonatomic,retain) NSURL* target;///<广告目标链接
@end


#pragma mark - QQApi请求消息类型

/**
 QQApi请求消息类型
 */
typedef NS_ENUM(NSUInteger, QQApiInterfaceReqType) {
    EGETMESSAGEFROMQQREQTYPE = 0,   ///< 手Q -> 第三方应用，请求第三方应用向手Q发送消息
    ESENDMESSAGETOQQREQTYPE = 1,    ///< 第三方应用 -> 手Q，第三方应用向手Q分享消息
    ESHOWMESSAGEFROMQQREQTYPE = 2,   ///< 手Q -> 第三方应用，请求第三方应用展现消息中的数据
    ESENDMESSAGEARKTOQQREQTYPE = 3,    ///< 第三方应用 -> 手Q，第三方应用向手Q分享Ark消息
    ESENDMESSAGE_MINI_TOQQREQTYPE = 4  ///< 第三方应用 -> 手Q，第三方应用向手Q分享小程序消息
};

/**
 QQApi应答消息类型
 */
typedef NS_ENUM(NSUInteger, QQApiInterfaceRespType) {
    ESHOWMESSAGEFROMQQRESPTYPE = 0, ///< 第三方应用 -> 手Q，第三方应用应答消息展现结果
    EGETMESSAGEFROMQQRESPTYPE = 1,  ///< 第三方应用 -> 手Q，第三方应用回应发往手Q的消息
    ESENDMESSAGETOQQRESPTYPE = 2    ///< 手Q -> 第三方应用，手Q应答处理分享消息的结果
};

/**
 QQApi请求消息基类
 */
@interface QQBaseReq : NSObject

/** 请求消息类型，参见\ref QQApiInterfaceReqType */
@property (nonatomic, assign) int type;

@end

/**
 QQApi应答消息基类
 */
@interface QQBaseResp : NSObject

/** 请求处理结果 */
@property (nonatomic, copy) NSString* result;

/** 具体错误描述信息 */
@property (nonatomic, copy) NSString* errorDescription;

/** 应答消息类型，参见\ref QQApiInterfaceRespType */
@property (nonatomic, assign) int type;

/** 扩展信息 */
@property (nonatomic, assign) NSString* extendInfo;

@end

/**
 GetMessageFromQQReq请求帮助类
 */
@interface GetMessageFromQQReq : QQBaseReq

/**
 创建一个GetMessageFromQQReq请求实例
 */
+ (GetMessageFromQQReq *)req;

@end

@interface SendMessageToQQReq : QQBaseReq

/**
 创建一个SendMessageToQQReq请求实例
 \param message 具体分享消息实例
 \return 新创建的SendMessageToQQReq请求实例
 */
+ (SendMessageToQQReq *)reqWithContent:(QQApiObject *)message;

/**
 创建一个支持Ark的SendMessageToQQReq请求实例
 \param message 具体分享消息实例
 \return 新创建的SendMessageToQQReq请求实例
 */
+ (SendMessageToQQReq *)reqWithArkContent:(ArkObject *)message;
/**
 * 创建一个支持小程序的消息请求实例
 * @param miniMessage 小程序实例对象
 * @return 消息请求实例
 */
+(SendMessageToQQReq*) reqWithMiniContent:(QQApiMiniProgramObject *)miniMessage;
/** 具体分享消息 */
@property (nonatomic, retain) QQApiObject *message;

/** 支持Ark的具体分享消息 */
@property (nonatomic, retain) ArkObject *arkMessage;
/** 支持小程序的具体分享消息 */
@property (nonatomic, retain) QQApiMiniProgramObject *miniMessage;
@end

/**
 SendMessageToQQResp应答帮助类
 */
@interface SendMessageToQQResp : QQBaseResp

/**
 创建一个SendMessageToQQResp应答实例
 \param result 请求处理结果
 \param errDesp 具体错误描述信息
 \param extendInfo 扩展信息
 \return 新创建的SendMessageToQQResp应答实例
 */
+ (SendMessageToQQResp *)respWithResult:(NSString *)result errorDescription:(NSString *)errDesp extendInfo:(NSString*)extendInfo;

@end

/**
 ShowMessageFromQQReq请求帮助类
 */
@interface ShowMessageFromQQReq : QQBaseReq

/**
 创建一个ShowMessageFromQQReq请求实例
 \param message 具体待展现消息实例
 \return 新创建的ShowMessageFromQQReq请求实例
 */
+ (ShowMessageFromQQReq *)reqWithContent:(QQApiObject *)message;

/** 具体待展现消息 */
@property (nonatomic, retain) QQApiObject *message;

@end


#endif
