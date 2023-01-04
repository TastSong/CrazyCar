///
/// \file QQApiInterface.h
/// \brief QQApi接口简化封装
///
/// Created by Tencent on 12-5-15.
/// Copyright (c) 2012年 Tencent. All rights reserved.
///

#import <Foundation/Foundation.h>
#import "QQApiInterfaceObject.h"

typedef void (^sendResultBlock)(NSDictionary *result);

/**
 \brief 处理来至QQ的请求及响应的回调协议
 */
@protocol QQApiInterfaceDelegate <NSObject>

/**
 处理来至QQ的请求
 */
- (void)onReq:(QQBaseReq *)req;

/**
 处理来至QQ的响应
 */
- (void)onResp:(QQBaseResp *)resp;

/**
 处理QQ在线状态的回调
 */
- (void)isOnlineResponse:(NSDictionary *)response;

@end

/**
 \brief 对QQApi的简单封装类
 */
@interface QQApiInterface : NSObject

/**
 处理由手Q唤起的普通跳转请求
 \param url 待处理的url跳转请求
 \param delegate 第三方应用用于处理来至QQ请求及响应的委托对象
 \return 跳转请求处理结果，YES表示成功处理，NO表示不支持的请求协议或处理失败
 */
+ (BOOL)handleOpenURL:(NSURL *)url delegate:(id<QQApiInterfaceDelegate>)delegate;

/**
 处理由手Q唤起的universallink跳转请求
 \param universallink 待处理的universallink跳转请求
 \param delegate 第三方应用用于处理来至QQ请求及响应的委托对象
 \return 跳转请求处理结果，YES表示成功处理，NO表示不支持的请求协议或处理失败
 */
+ (BOOL)handleOpenUniversallink:(NSURL*)universallink delegate:(id<QQApiInterfaceDelegate>)delegate;

/**
 向手Q发起分享请求
 \param req 分享内容的请求
 \return 请求发送结果码
 */
+ (QQApiSendResultCode)sendReq:(QQBaseReq *)req;


/**
 向手Q QZone结合版发起分享请求
 \note H5分享只支持单张网络图片的传递
 \param req 分享内容的请求
 \return 请求发送结果码
 */
+ (QQApiSendResultCode)SendReqToQZone:(QQBaseReq *)req;

/**
 向手Q发起设置QQ头像
 \param req 分享内容的请求
 \return 请求发送结果码
 */
+ (QQApiSendResultCode)sendMessageToQQAvatarWithReq:(QQBaseReq*)req;

/**
 向手Q发起组图分享到表情收藏
 \param req 分享内容的请求
 \return 请求发送结果码
 */
+ (QQApiSendResultCode)sendMessageToFaceCollectionWithReq:(QQBaseReq*)req;

/**
 检测是否已安装QQ
 \return 如果QQ已安装则返回YES，否则返回NO

 \note SDK目前已经支持QQ、TIM授权登录及分享功能， 会按照QQ>TIM的顺序进行调用。
 只要用户安装了QQ、TIM中任意一个应用，都可为第三方应用进行授权登录、分享功能。
 第三方应用在接入SDK时不需要判断是否安装QQ、TIM。若有判断安装QQ、TIM的逻辑建议移除。
 */
+ (BOOL)isQQInstalled;

/**
 检测是否已安装TIM
 \return 如果TIM已安装则返回YES，否则返回NO
 
 \note SDK目前已经支持QQ、TIM授权登录及分享功能， 会按照QQ>TIM的顺序进行调用。
 只要用户安装了QQ、TIM中任意一个应用，都可为第三方应用进行授权登录、分享功能。
 第三方应用在接入SDK时不需要判断是否安装QQ、TIM。若有判断安装QQ、TIM的逻辑建议移除。
 */
+ (BOOL)isTIMInstalled;

/**
 检测QQ是否支持API调用
 \return 如果当前安装QQ版本支持API调用则返回YES，否则返回NO
 */  
+ (BOOL)isQQSupportApi;

/**
 检测TIM是否支持API调用
 \return 如果当前安装TIM版本支持API调用则返回YES，否则返回NO
 */
+ (BOOL)isTIMSupportApi __attribute__((deprecated("已过期, 建议删除调用，调用地方用YES替代。")));

/**
 检测是否支持分享
 \return 如果当前已安装QQ且QQ版本支持API调用 或者 当前已安装TIM且TIM版本支持API调用则返回YES，否则返回NO
 */
+ (BOOL)isSupportShareToQQ;

/**
 检测是否支持分享到QQ结合版QZone
 \return 如果当前已安装QQ且QQ版本支持API调用则返回YES，否则返回NO
 */
+ (BOOL)isSupportPushToQZone;

/**
 启动QQ
 \return 成功返回YES，否则返回NO
 */
+ (BOOL)openQQ;

/**
 启动TIM
 \return 成功返回YES，否则返回NO
 */
+ (BOOL)openTIM;

/**
 获取QQ下载地址
 
 如果App通过<code>QQApiInterface#isQQInstalled</code>和<code>QQApiInterface#isQQSupportApi</code>检测发现QQ没安装或当前版本QQ不支持API调用，可引导用户通过打开此链接下载最新版QQ。
 \return iPhoneQQ下载地址
 */
+ (NSString *)getQQInstallUrl;

/**
 获取TIM下载地址
 
 如果App通过<code>QQApiInterface#isTIMInstalled</code>检测发现TIM没安装或当前版本TIM不支持API调用，可引导用户通过打开此链接下载最新版TIM。
 \return iPhoneTIM下载地址
 */
+ (NSString *)getTIMInstallUrl;

#pragma mark - Log
/*! @brief 调用此函数可以导出QQSDK的Log到第三方中，用于定位问题
 
    注意1:SDK会强引用这个block,注意不要导致内存泄漏,注意不要导致内存泄漏
    注意2:调用过一次startLog by block之后，如果再调用一次任意方式的startLoad,会释放上一次logBlock，不再回调上一个logBlock
 *
 *  @param logBlock 打印log的回调block
 */
+ (void)startLogWithBlock:(QQApiLogBolock)logBlock;
///停止回调打印
+ (void)stopLog;
///设置打印日志到文件开关on/off，如果不设置，默认不打印到文件
+ (void)setSwitchPrintLogToFile:(BOOL)on;
///日志文件目录
+ (NSString*)getLogFilePath;
@end
