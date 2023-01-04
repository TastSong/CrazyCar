//
//  KSApiObject.h
//  KwaiSDK
//
//  Created by MingBo Gao on 2019/11/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

///@brief 错误码
typedef NS_ENUM(NSInteger, KSErrorCode) {
    KSErrorCodeSuccess                      = 1,         /**< 成功 */
    KSErrorCodeCancelled                    = -1,        /**< 用户取消授权 */
    KSErrorCodeKwaiAppNotInstalled          = -1005,     /**< 快手 App 未安装 */
    KSErrorCodeFeatureNotSupportedByKwaiApp = -1006,     /**< 快手 App 当前版本不支持该功能 */
    KSErrorCodeBadParameter                 = -1010,     /**< 参数不合法 */
    KSErrorCodeUnauthorizedCMD              = 20088,     /**< 未授权的cmd */
    KSErrorCodeInvalidOpenID                = 20089,     /**< 无效的 openid */
    KSErrorCodeInvalidCMD                   = 20090,     /**< 无效的cmd */
    KSErrorCodeUnmatchedUser                = 20091,     /**< 第三方 App 授受登录的快手账号与快手 App 登录的快手账号不一致 */
    KSErrorCodeActionBlockedForUserRelation = 20092,     /**< 当前用户关系不支持该操作，比如：非双关用户之间不能发私信 */
    KSErrorCodeInvalidTargetOpenID          = 20094,     /**< 非法的 target open id */
    KSErrorCodeInvalidParam                 = 100200100, /**< 缺少必要的请求参数, server 返回 */
    KSErrorCodeUnauthorizedApp              = 100200101, /**< app非法，例如开发者不存在，app不存在或状态不正确等 */
    KSErrorCodeDenied                       = 100200102, /**< 请求被拒绝 */
    KSErrorCodeUnsupportedResponseType      = 100200103, /**< responseType错误 */
    KSErrorCodeUnsupportedGrantType         = 100200104, /**< 换取accessToken使用的grantType错误 */
    KSErrorCodeInvalidGrant                 = 100200105, /**< 换取accessToken使用的code错误 */
    KSErrorCodeInvalidScope                 = 100200106, /**< 无效的 Scope */
    KSErrorCodeInvalidOpenId                = 100200107, /**< 用户的openId无效 */
    KSErrorCodeTokenExpried                 = 100200108, /**< access_token 或者 refresh_token 过期 */
    KSErrorCodeAuthorizationCanceled        = 100200109, /**< 用户取消授权 */
    KSErrorCodeAuthorizationExpried         = 100200110, /**< 用户授权过期 */
    KSErrorCodeUnauthorizedScope            = 100200111, /**< 用户未授权过所需 scope */
    KSErrorCodeServerError                  = 100200500, /**< 服务器内部错误，开发者无法处理 */
};

///@brief 错误码
typedef NS_ENUM(NSInteger, KwaiSDKLogLevel) {
    KwaiSDKLogLevelNormal = 0,      // 打印日常的日志
    KwaiSDKLogLevelDetail = 1,      // 打印详细的日志
};

typedef NS_ENUM(NSInteger,KSShareScene) {
    KSShareScopeSession = 1,
};

typedef NS_ENUM(NSInteger, KSShareMediaFeature) {
    KSShareMediaFeature_Undefine     = -1,      /**< 未设置功能 */
    KSShareMediaFeature_Preprocess   = 0,       /**< 裁剪功能 */
    KSShareMediaFeature_VideoEdit    = 1,       /**< 视频编辑功能 */
    KSShareMediaFeature_PictureEdit  = 2,       /**< 图片编辑功能 */
    KSShareMediaFeature_VideoPublish = 3,       /**< 视频发布功能 */
    KSShareMediaFeature_AICut        = 4,       /**< 智能裁剪功能 */
};

typedef NS_ENUM(NSInteger, KSApiApplication) {
    KSApiApplication_Kwai = 0,
    KSApiApplication_KwaiLite,
};

#pragma mark -KSBase

/// 该类为快手终端SDK所有请求类的基类
@interface KSBaseRequest : NSObject

/// 状态值，成功授权后会原样带回
@property (nonatomic, copy, nullable) NSString *state;

/// 第三方经过快手授权登录授权后得到的openID, 如果当前发起的业务不需要登录授权, 可不传
@property (nonatomic, copy, nullable) NSString *openID;

/// 设置当前request期望使用的快手体系终端，支持的终端见KSApiApplication
/// 数组内可以设置一个或多个KSApiApplication，SDK内部会按照顺序优先使用可用的终端，若数组为空或不设置则默认使用快手App
/// 目前仅授权登陆KSAuthRequest可以生效
@property (nonatomic, copy, nullable) NSArray<NSNumber *> *applicationList;

@end

/// 该类为快手终端SDK所有响应类的基类
@interface KSBaseResponse : NSObject

/// 错误码，详见 KSErrorCode
@property (nonatomic, assign) NSInteger errorCode;

/// 错误信息
@property (nonatomic, copy) NSString *errorMessage;

/// 状态值，从KSBaseRequest传入，由KSBaseResponse原样带回
@property (nonatomic, copy) NSString *state;

@end

#pragma mark -KSAuth

/// 第三方程序向快手终端请求认证的消息结构
@interface KSAuthRequest : KSBaseRequest

/// 需要获得的权限，多个用“,”链接。比如user_info,relation等
@property (nonatomic, copy) NSString *scope;

/// 当用户设备没有安装快手终端，可以采用sdk内置的h5页面进行授权
/// 若为空，则不会采用h5授权
@property (nonatomic, strong, nullable) UIViewController *h5AuthViewController;

@end

/// 快手处理完第三方程序的认证和权限申请后向第三方程序回送的处理结果。
@interface KSAuthResponse : KSBaseResponse

/// 授权码，客户端通过授权码置换accessToken
@property (nonatomic, copy, nullable) NSString *code;

@end

#pragma mark -KSShareMessage

@interface KSShareWebPageObject : NSObject

/// H5消息标题
@property (nonatomic, copy) NSString *title;

/// H5消息描述
@property (nonatomic, copy) NSString *desc;

/// H5消息缩略图， JPEG 序列化后的数据
/// @attention 缩略图数据不能超过1M
@property (nonatomic, strong) NSData *thumbImage;

/// H5消息链接地址
@property (nonatomic, copy) NSString *linkURL;

@end

@interface KSShareMessageRequest : KSBaseRequest

/// 分享场景
@property (nonatomic, assign) KSShareScene shareScene;

/// 接收方 openid , 可选，当不填时，快手 APP 会调启选择好友界面来确定接收方
@property (nonatomic, copy, nullable) NSString *receiverOpenID;

/// 分享数据，目前支持KSShareWebPageObject
@property (nonatomic, strong) id shareObject;

@end

@interface KSShareMessageResponse  : KSBaseResponse

@end

#pragma mark -KSShowProfile

@interface KSShowProfileRequest : KSBaseRequest

/// 要查看的用户的 openID
@property (nonatomic, copy, nullable) NSString *targetOpenID;

@end

@interface KSShowProfileResponse : KSBaseResponse

@end

#pragma mark -KSShareMedia

/// 资源描述
@interface KSShareMediaAsset: NSObject

/// 实例化一个KSShareMediaAsset对象
/// @param assetId PHObject.localIdentifier
/// @param isImage 是否为图片资源
+ (instancetype)assetForPhotoLibrary:(NSString *)assetId
                             isImage:(BOOL)isImage;


+ (instancetype)assetForAppGroup:(NSString *)pathRelativeToAppGroupRootDir
                         isImage:(BOOL)isImage;

@end

/// 分享媒体对象
@interface KSShareMediaObject: NSObject

/// 在由于各种原因无法完全按照传入参数进行分享的时候，是否允许快手终端进行降级
/// 例如：没有发布页权限的时候回落到裁剪页
@property (nonatomic, assign) BOOL disableFallback;

/// 视频标签，可以为多个
@property (nonatomic, copy, nullable) NSArray<NSString *> *tags;

/// 视频封面资源，支持分享到发布页, 注意这里的封面尺寸应该和media资源尺寸保持一致否则失效
@property (nonatomic, strong) KSShareMediaAsset *coverAsset;

/// 分段媒体资源
@property (nonatomic, copy) NSArray<KSShareMediaAsset *> *multipartAssets;

/// 第三方扩展信息
@property (nonatomic, copy, nullable) NSString *extraInfo;

@end

@interface KSShareMediaRequest : KSBaseRequest

/// 分享功能
@property (nonatomic, assign) KSShareMediaFeature mediaFeature;

/// 分享数据
@property (nonatomic, strong) KSShareMediaObject *mediaObject;

@end

@interface KSShareMediaResponse  : KSBaseResponse

@end


NS_ASSUME_NONNULL_END
