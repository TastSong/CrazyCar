//
//  NSMutableDictionary+SSDKShare.h
//  ShareSDK
//
//  Created by Max on 2018/5/8.
//  Copyright © 2018年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ShareSDK/SSDKTypeDefine.h>

/// <#Description#>
@interface NSMutableDictionary (SSDKShare)

/**
 设置分享标识
 
 @param flags 标识
 */
- (void)SSDKSetShareFlags:(NSArray <NSString *>*)flags;

/**
 *  设置分享参数
 *
 *  @param text     文本
 *  @param images   图片集合,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param url      网页路径/应用路径
 *  @param title    标题
 *  @param type     分享类型
 */
- (void)SSDKSetupShareParamsByText:(NSString *)text
                            images:(id)images
                               url:(NSURL *)url
                             title:(NSString *)title
                              type:(SSDKContentType)type;



/// 设置系统分享-相册图片/视频分享参数
/// @param imageAsset 图片
/// @param videoAsset 视频
- (void)SSDKSetupShareParamsByImageAsset:(NSArray *)imageAsset
                              videoAsset:(id)videoAsset
                          completeHandle:(void(^)(BOOL complete))completeHandle;

#pragma mark - Wechat

/**
 *  设置微信分享参数
 *
 *  @param text                 文本
 *  @param title                标题
 *  @param url                  分享链接
 *  @param thumbImage           缩略图，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 *  @param image                图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 *  @param musicFileURL         音乐文件链接地址
 *  @param extInfo              扩展信息
 *  @param fileData             文件数据，可以为NSData、UIImage、NSString、NSURL（文件路径）、SSDKData、SSDKImage
 *  @param emoticonData         表情数据，可以为NSData、UIImage、NSURL（文件路径）、SSDKData、SSDKImage
 *  @param fileExtension  源文件后缀名
 *  @param sourceFileData       源文件数据，可以为NSData、NSString、NSURL（文件路径）、SSDKData
 *  @param type                 分享类型，支持SSDKContentTypeText、SSDKContentTypeImage、SSDKContentTypeWebPage、SSDKContentTypeApp、SSDKContentTypeAudio和SSDKContentTypeVideo
 *  @param platformSubType 平台子类型，只能传入其中一个
 *
 *  分享文本时：
 *  设置type为SSDKContentTypeText, 并填入text参数
 *
 *  分享图片时：
 *  设置type为SSDKContentTypeImage, 非gif图片时：填入title和image参数，如果为gif图片则需要填写title和emoticonData参数
 *
 *  分享网页时：
 *  设置type为SSDKContentTypeWebPage, 并设置text、title、url以及thumbImage参数，如果尚未设置thumbImage则会从image参数中读取图片并对图片进行缩放操作。
 *
 *  分享应用时：
 *  设置type为SSDKContentTypeApp，并设置text、title、extInfo（可选）以及fileData（可选）参数。
 *
 *  分享音乐时：
 *  设置type为SSDKContentTypeAudio，并设置text、title、url以及musicFileURL（可选）参数。
 *
 *  分享视频时：
 *  设置type为SSDKContentTypeVideo，并设置text、title、url参数
 *
 *  分享文件时：
 *  设置type为SSDKContentTypeFile（例如.mp3、.mp4、.pdf、.docx的分享），设置title、sourceFileExtension、sourceFileData，以及thumbImage参数，如果尚未设置thumbImage则会从image参数中读取图片并对图片进行缩放操作参数
 
 */
- (void)SSDKSetupWeChatParamsByText:(NSString *)text
                              title:(NSString *)title
                                url:(NSURL *)url
                         thumbImage:(id)thumbImage
                              image:(id)image
                       musicFileURL:(NSURL *)musicFileURL
                            extInfo:(NSString *)extInfo
                           fileData:(id)fileData
                       emoticonData:(id)emoticonData
                sourceFileExtension:(NSString *)fileExtension
                     sourceFileData:(id)sourceFileData
                               type:(SSDKContentType)type
                 forPlatformSubType:(SSDKPlatformType)platformSubType;

/**
 v4.1.2 为微信小程序分享增加
 
 @param title 标题
 @param description 详细说明
 @param webpageUrl 网址（6.5.6以下版本微信会自动转化为分享链接 必填）
 @param path 跳转到页面路径
 @param thumbImage 缩略图 , 旧版微信客户端（6.5.8及以下版本）小程序类型消息卡片使用小图卡片样式 要求图片数据小于32k
 @param hdThumbImage 高清缩略图，建议长宽比是 5:4 ,6.5.9及以上版本微信客户端小程序类型分享使用 要求图片数据小于128k
 @param userName 小程序的userName （必填）
 @param withShareTicket 是否使用带 shareTicket 的转发
 @param type 分享小程序的版本（0-正式，1-开发，2-体验）
 @param platformSubType 分享自平台 微信小程序暂只支持 SSDKPlatformSubTypeWechatSession（微信好友分享)
 */
- (void)SSDKSetupWeChatMiniProgramShareParamsByTitle:(NSString *)title
                                         description:(NSString *)description
                                          webpageUrl:(NSURL *)webpageUrl
                                                path:(NSString *)path
                                          thumbImage:(id)thumbImage
                                        hdThumbImage:(id)hdThumbImage
                                            userName:(NSString *)userName
                                     withShareTicket:(BOOL)withShareTicket
                                     miniProgramType:(NSUInteger)type
                                  forPlatformSubType:(SSDKPlatformType)platformSubType;

#pragma mark - QQ

/**
 *  设置QQ分享参数
 *
 *  @param text            分享内容
 *  @param title           分享标题
 *  @param url             分享链接(如果分享类型为音频/视频时,应该传入音频/视频的网络URL地址)
 [特别说明:分享视频到QZone时,视频为网络视频,请传入视频网络URL地址;视频为本地视频的,请传入来源于手机系统相册的相关的Asset URL地址]
 *  @param audioFlashURL   分享音频时缩略图播放源,仅平台子类型为SSDKPlatformSubTypeQQFriend,且分享类型为Audio时生效
 *  @param videoFlashURL   分享视频时缩略图播放源,仅平台子类型为SSDKPlatformSubTypeQQFriend,且分享类型为Video时生效
 *  @param thumbImage      缩略图，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 *  @param images          图片集合,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 QQ会采用首张图片，QZone则支持图片数组
 *  @param type            分享类型, 仅支持Text、Image、WebPage、Audio、Video类型
 *  @param platformSubType 平台子类型，只能传入SSDKPlatformSubTypeQZone或者SSDKPlatformSubTypeQQFriend其中一个
 */
- (void)SSDKSetupQQParamsByText:(NSString *)text
                          title:(NSString *)title
                            url:(NSURL *)url
                  audioFlashURL:(NSURL *)audioFlashURL
                  videoFlashURL:(NSURL *)videoFlashURL
                     thumbImage:(id)thumbImage
                         images:(id)images
                           type:(SSDKContentType)type
             forPlatformSubType:(SSDKPlatformType)platformSubType;

/**
 v4.3.0 为QQ平台支持小程序分享增加，使用小程序分享 请在白名单中(LSApplicationQueriesSchemes)添加mqqopensdkminiapp
 
 @param title 标题
 @param description 详细说明
 @param webpageUrl 网址
 @param hdThumbImage 高清缩略图
 @param miniAppID 必填，小程序的AppId（注：必须在QQ互联平台中，将该小程序与分享的App绑定）
 @param miniPath 必填，小程序的展示路径
 @param miniWebpageUrl 必填，兼容低版本的网页链接
 @param miniProgramType 非必填，小程序的类型，默认正式版(3)，可选测试版(1)、预览版(4)
 @param platformSubType 分享自平台 小程序暂只支持 SSDKPlatformSubTypeQQFriend（QQ好友分享)
 */
- (void)SSDKSetupQQMiniProgramShareParamsByTitle:(NSString *)title
                                     description:(NSString *)description
                                      webpageUrl:(NSURL *)webpageUrl
                                    hdThumbImage:(id)hdThumbImage
                                       miniAppID:(NSString *)miniAppID
                                        miniPath:(NSString *)miniPath
                                  miniWebpageUrl:(NSString *)miniWebpageUrl
                                 miniProgramType:(NSUInteger)miniProgramType
                              forPlatformSubType:(SSDKPlatformType)platformSubType;


- (void)SSDKSetupQQParamsByText:(NSString *)text
                          title:(NSString *)title
                            url:(NSURL *)url
                     thumbImage:(id)thumbImage
                          image:(id)image
                           type:(SSDKContentType)type
             forPlatformSubType:(SSDKPlatformType)platformSubType __deprecated_msg("discard form v4.2.0");


#pragma mark - SinaWeibo

/*
 设置新浪微博分享参数， linkCard分享模式必要参数为 text,title,image,url,type，其中image仅支持网络连接，type为webpage
 
 @param text      文本
 @param title     标题
 @param images    图片集合,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 @param video     分享视频, 本地路径。
 @param url       分享链接
 @param latitude  纬度
 @param longitude 经度
 @param objectID  对象ID，标识系统内内容唯一性，应传入系统中分享内容的唯一标识，没有时可以传入nil
 @param isShareToStory 是否分享到故事
 @param type      分享类型，仅支持Text、Image、WebPage 类型
 设置 SSDKEnableSinaWeiboAPIShare 使用API进行分享 但text中需要附 安全域 安全域在新浪微博开放平台设置
 @param dataDictionary 数据存储字典 如果传入nil将新建
 */
- (void)SSDKSetupSinaWeiboShareParamsByText:(NSString *)text
                                      title:(NSString *)title
                                     images:(id)images
                                      video:(NSString *)video
                                        url:(NSURL *)url
                                   latitude:(double)latitude
                                  longitude:(double)longitude
                                   objectID:(NSString *)objectID
                             isShareToStory:(BOOL)shareToStory
                                       type:(SSDKContentType)type;


/**
 新浪微博设置linkcard分享方式
 
 @param text 描述
 @param cardTitle 卡片标题
 @param cardSummary 卡片摘要
 @param images 图片，只支持网络图片
 @param url 跳转链接
 */
- (void)SSDKSetupSinaWeiboLinkCardShareParamsByText:(NSString *)text
                                          cardTitle:(NSString *)cardTitle
                                        cardSummary:(NSString *)cardSummary
                                             images:(id)images
                                                url:(NSURL *)url;


#pragma mark - Facebook

/**
 *  设置Facebook分享参数
 *
 *  @param text             分享内容
 分享类型为Text类型时,作为文字主体内容
 分享类型为WebPage类型时,作为连接描述
 
 *  @param image            图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 分享类型为Image类型时,若使用客户端分享,可传入 单张/多张 的 本地/网络 图片;如果不使用客户端分享,仅支持单张的本地/网络图片
 分享类型为App（应用邀请）时 只支持网络图片链接
 *【Facebook通过客户端分享图片,可不需依赖任何权限;否则需要申请publish_actions权限】*
 分享类型为WebPage类型时,无论是否使用客户端,仅支持单张的网络图片
 
 *  @param url              链接
 分享类型为WebPage类型时,为链接地址
 [如果分享的连接是AppStore/GooglePlay/Facebook个人/公共主页,所对应的图片,标题,描述等参数可能不会生效,而实际生效的是FB通过爬虫网络根据连接搜刮而来的信息]
 分享类型为Video类型时,需传入视频地址且但必须是相册地址
 
 *  @param title            链接标题
 分享类型为WebPage类型时,为链接标题
 
 *  @param urlName          连接名称
 分享类型为WebPage类型时,为链接名称,仅在非客户端分享时生效
 
 *  @param attachementUrl   附件链接(附加的媒体文件（SWF 或 MP3）的网址。如果是 SWF，还必须指定image以提供视频的缩略图)
 分享类型为WebPage类型时,为链,仅在非客户端分享时生效
 
 *  @param type             分享类型
 当使用客户端分享时,支持Image、WebPage,Video类型
 当不适用客户端分享是,支持Text、Image、WebPage、App(应用邀请)类型
 */
- (void)SSDKSetupFacebookParamsByText:(NSString *)text
                                image:(id)image
                                  url:(NSURL *)url
                             urlTitle:(NSString *)title
                              urlName:(NSString *)urlName
                       attachementUrl:(NSURL *)attachementUrl
                                 type:(SSDKContentType)type __deprecated_msg("discard form v4.2.0");

/**
 *  设置Facebook分享参数
 *
 *  @param text             分享内容
 分享类型为Text类型时,作为文字主体内容
 分享类型为WebPage类型时,作为连接描述
 
 *  @param image            图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 分享类型为Image类型时,若使用客户端分享,可传入 单张/多张 的 本地/网络 图片;如果不使用客户端分享,仅支持单张的本地/网络图片
 分享类型为App（应用邀请）时 只支持网络图片链接
 *【Facebook通过客户端分享图片,可不需依赖任何权限;否则需要申请publish_actions权限】*
 分享类型为WebPage类型时,无论是否使用客户端,仅支持单张的网络图片
 
 *  @param url              链接
 分享类型为WebPage类型时,为链接地址
 [如果分享的连接是AppStore/GooglePlay/Facebook个人/公共主页,所对应的图片,标题,描述等参数可能不会生效,而实际生效的是FB通过爬虫网络根据连接搜刮而来的信息]
 分享类型为Video类型时,需传入视频地址且但必须是相册地址
 
 *  @param title            链接标题
 分享类型为WebPage类型时,为链接标题
 
 *  @param urlName          连接名称
 分享类型为WebPage类型时,为链接名称,仅在非客户端分享时生效
 
 *  @param attachementUrl   附件链接(附加的媒体文件（SWF 或 MP3）的网址。如果是 SWF，还必须指定image以提供视频的缩略图)
 分享类型为WebPage类型时,为链,仅在非客户端分享时生效
 
 *  @param hashtag 话题标签
 开发者指定的话题标签，将添加至分享内容中。用户可决定是否在分享对话框中移除这种话题标签。话题标签应包含#符号，例如#facebook，不能是纯数字
 
 *  @param quote 话题标签
 随分享的链接一同显示的引文由用户自行高亮选择，也可由开发者预先定义(例如文章的醒目引文) 此参数只适用于链接分享类型
 
 *  @param shareType 包含facebooksdk
 
 *  @param type             分享类型
 当使用客户端分享时,支持Image、WebPage,Video类型
 当不适用客户端分享是,支持Text、Image、WebPage、App(应用邀请)类型
 */

- (void)SSDKSetupFacebookParamsByText:(NSString *)text
                                image:(id)image
                                  url:(NSURL *)url
                             urlTitle:(NSString *)title
                              urlName:(NSString *)urlName
                       attachementUrl:(NSURL *)attachementUrl
                              hashtag:(NSString *)hashtag
                                quote:(NSString *)quote
                            shareType:(SSDKFacebookShareType)shareType
                                 type:(SSDKContentType)type;

/**
*  设置Facebook分享参数
*
*  @param text             分享内容
分享类型为Text类型时,作为文字主体内容
分享类型为WebPage类型时,作为连接描述

*  @param image            图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
分享类型为Image类型时,若使用客户端分享,可传入 单张/多张 的 本地/网络 图片;如果不使用客户端分享,仅支持单张的本地/网络图片
分享类型为App（应用邀请）时 只支持网络图片链接
*【Facebook通过客户端分享图片,可不需依赖任何权限;否则需要申请publish_actions权限】*
分享类型为WebPage类型时,无论是否使用客户端,仅支持单张的网络图片

*  @param url              链接
分享类型为WebPage类型时,为链接地址
[如果分享的连接是AppStore/GooglePlay/Facebook个人/公共主页,所对应的图片,标题,描述等参数可能不会生效,而实际生效的是FB通过爬虫网络根据连接搜刮而来的信息]
分享类型为Video类型时,需传入视频地址且但必须是相册地址

*  @param title            链接标题
分享类型为WebPage类型时,为链接标题

*  @param urlName          连接名称
分享类型为WebPage类型时,为链接名称,仅在非客户端分享时生效

*  @param attachementUrl   附件链接(附加的媒体文件（SWF 或 MP3）的网址。如果是 SWF，还必须指定image以提供视频的缩略图)
分享类型为WebPage类型时,为链,仅在非客户端分享时生效

*  @param hashtag 话题标签
开发者指定的话题标签，将添加至分享内容中。用户可决定是否在分享对话框中移除这种话题标签。话题标签应包含#符号，例如#facebook，不能是纯数字

*  @param quote 话题标签
随分享的链接一同显示的引文由用户自行高亮选择，也可由开发者预先定义(例如文章的醒目引文) 此参数只适用于链接分享类型

*  @param sortShareTypes 设置分享优先级顺序，如sheet->native->web， 传@[@(SSDKFacebookShareTypeShareSheet),@(SSDKFacebookShareTypeNative),@(SSDKFacebookShareTypeBrowser)  ]或sheet->web->native,@[@(SSDKFacebookShareTypeShareSheet),@(SSDKFacebookShareTypeBrowser),@(SSDKFacebookShareTypeNative)  ],如果数组的最后一个元素为-1, 则在分享链结束仍然是分享失败的情况下，会默认执行接下来内部的优先级顺序，否则就停止执行

*  @param type             分享类型
当使用客户端分享时,支持Image、WebPage,Video类型
当不适用客户端分享是,支持Text、Image、WebPage、App(应用邀请)类型
*/
- (void)SSDKSetupFacebookParamsByText:(NSString *)text
                                image:(id)image
                                  url:(NSURL *)url
                             urlTitle:(NSString *)title
                              urlName:(NSString *)urlName
                       attachementUrl:(NSURL *)attachementUrl
                              hashtag:(NSString *)hashtag
                                quote:(NSString *)quote
                        sortShareTypes:(NSArray <NSNumber *>*)sortShareTypes
                                 type:(SSDKContentType)type;
/**
 Facebook 分享参数 SSDKSetupFacebookParamsByText:image:url:urlTitle:urlName:attachementUrl:hashtag:quote:shareType:type的扩展
 imageAsset 设置分享图片的PHAsset，为一个数组
 videoAsset  设置分享视频的PHAsset，或localIdentifier
 此方法可以将图片与视频的分享内容改为PHAsset 或localIdentifier
 */

- (void)SSDKSetupFacebookParamsByImagePHAsset:(NSArray*)imageAsset
                                 videoPHAsset:(id)videoAsset;

#pragma mark - Facebook Messenger

/**
 *  设置Facebook Messenger分享参数
 *
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param audio 分享音频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData。
 *  @param video 分享视频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData。
 *  @param type  分享类型，仅支持Image、Audio、Video
 */
- (void)SSDKSetupFacebookMessengerParamsByImage:(id)image
                                            gif:(id)gif
                                          audio:(id)audio
                                          video:(id)video
                                           type:(SSDKContentType)type;



/**
 设置Facebook Messenger分享参数 WebPage类型时 image参数 仅支持单张网络图片
 
 @since ver 3.6.0
 @param title WebPage类型 标题
 @param url   WebPage类型 网址
 @param text  WebPage类型 链接的引用说明
 @param images 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。NSArray 图片数组
 WebPage类型仅支持单张 网络图片
 @param gif   分享GIF图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 @param audio 分享音频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData。
 @param video 分享视频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData。
 @param type  分享类型，支持Image、Audio、Video WebPage
 */
- (void)SSDKSetupFacebookMessengerParamsByTitle:(NSString *)title
                                            url:(NSURL *)url
                                      quoteText:(NSString *)text
                                         images:(id)images
                                            gif:(id)gif
                                          audio:(id)audio
                                          video:(id)video
                                           type:(SSDKContentType)type;

#pragma mark - Twitter


/**
 设置Twitter分享参数
 
 @param text 分享内容
 @param images 分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 @param video 本地文件地址
 @param latitude 地理位置，纬度
 @param longitude 地理位置，经度
 @param type 分享类型，仅支持Text、Image、Video类型
 */
- (void)SSDKSetupTwitterParamsByText:(NSString *)text
                              images:(id)images
                               video:(NSURL*)video
                            latitude:(double)latitude
                           longitude:(double)longitude
                                type:(SSDKContentType)type;

- (void)SSDKSetupTwitterParamsByText:(NSString *)text
                              images:(id)images
                            latitude:(double)latitude
                           longitude:(double)longitude
                                type:(SSDKContentType)type __deprecated_msg("Discard form v4.2.0, using \"SSDKSetupTwitterParamsByText:images:video:latitude:longitude:type:\" instead.");

- (void)SSDKSetupTwitterParamsByText:(NSString *)text
                               video:(NSURL*)video
                            latitude:(double)latitude
                           longitude:(double)longitude
                                 tag:(NSString *)str __deprecated_msg("Discard form v4.2.0, using \"SSDKSetupTwitterParamsByText:images:video:latitude:longitude:type:\" instead.");


#pragma mark - Instagram

/**
 *  设置Instagram分享参数
 *
 *  @param image     分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage，仅在type为Image时有效。
 *  @param point     分享菜单的显示位置，仅用于iPad版
 */
- (void)SSDKSetupInstagramByImage:(id)image
                 menuDisplayPoint:(CGPoint)point;

/**
 设置Instagram 视频分享参数 video 视频地址 可以为相册地址 或 本地文件地址
 
 @param video 视频地址 可以为相册地址 或 本地文件地址
 使用相册地址时 注：为了效果需要确保其为相册的最新文件
 */
- (void)SSDKSetupInstagramByVideo:(NSURL *)video;



#pragma mark - DingTalk

/**
 *  设置Ding Talk分享参数
 *
 *  @param text  文本内容
 *  @param image 图片
 *  @param title 标题
 *  @param url   链接
 *  @param type  分享类型，仅支持Text、Image、Webpage、Audio
 */
- (void)SSDKSetupDingTalkParamsByText:(NSString *)text
                                image:(id)image
                                title:(NSString *)title
                                  url:(NSURL *)url
                                 type:(SSDKContentType)type;


#pragma mark - 支付宝

/**
 *  设置支付宝分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param title 标题
 *  @param url   分享链接
 *  @param type  分享类型，仅支持Text、Image、WebPage
 *  @param platformType 分享平台类型，仅支持输入SSDKPlatformTypeAliSocial和SSDKPlatformTypeAliSocialTimeline
 *  分享类型，平台支持情况如下：
 *  SSDKPlatformTypeAliSocial(支付宝好友):支持Text、Image、WebPage
 *  SSDKPlatformTypeAliSocialTimeline(支付宝朋友圈):支持Image、WebPage
 *
 */
- (void)SSDKSetupAliSocialParamsByText:(NSString *)text
                                 image:(id)image
                                 title:(NSString *)title
                                   url:(NSURL *)url
                                  type:(SSDKContentType)type
                          platformType:(SSDKPlatformType)platformType;


#pragma mark - Pinterest

/**
 *  设置Pinterest分享参数
 *
 *  @param image      分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param desc       图片描述
 *  @param url        链接地址
 *  @param boardName  Board名称
 */
- (void)SSDKSetupPinterestParamsByImage:(id)image
                                   desc:(NSString *)desc
                                    url:(NSURL *)url
                              boardName:(NSString *)boardName;



#pragma mark - Dropbox
/**
 *  设置Dropbox分享参数
 *
 *  @param attachment 分享附件。附可以为NSData、UIImage、NSString、NSURL（文件路径）、SSDKData、SSDKImage，注：只允许指定本地资源
 */
- (void)SSDKSetupDropboxParamsByAttachment:(id)attachment;



#pragma mark - 易信
/**
 *  设置易信分享参数
 *
 *  @param text         文本
 *  @param title        标题
 *  @param url          分享链接
 *  @param thumbImage   缩略图，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 *  @param image        图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 *  @param musicFileURL 音乐文件链接地址
 *  @param extInfo      扩展信息
 *  @param fileData     文件数据，可以为NSData、UIImage、NSString、NSURL（文件路径）、SSDKData、SSDKImage
 *  @param comment      评论信息,在应用内分享朋友圈时该字段有效
 *  @param userId       发送給指定用户的唯一标识，在应用内分享好友时需要指定。注：如果双方为非好友关系发送消息即使提示成功，对方也无法接受。
 *  @param type         分享类型，支持SSDKContentTypeText、SSDKContentTypeImage、SSDKContentTypeWebPage、SSDKContentTypeApp、SSDKContentTypeAudio和SSDKContentTypeVideo
 *  @param platformSubType 平台子类型，只能传入SSDKPlatformTypeYiXinSession、SSDKPlatformTypeYiXinTimeline和SSDKPlatformTypeYiXinFav其中一个
 *
 *  分享文本时：
 *  设置type为SSDKContentTypeText, 并填入text参数
 *
 *  分享图片时：
 *  设置type为SSDKContentTypeImage, 非gif图片时：填入title和image参数
 *
 *  分享网页时：
 *  设置type为SSDKContentTypeWebPage, 并设置text、title、url以及thumbImage参数，如果尚未设置thumbImage则会从image参数中读取图片并对图片进行缩放操作。
 *
 *  分享应用时：
 *  设置type为SSDKContentTypeApp，并设置text、title、extInfo（可选）以及fileData（可选）参数。
 *
 *  分享音乐时：
 *  设置type为SSDKContentTypeAudio，并设置text、title、url以及musicFileURL（可选）参数。
 *
 *  分享视频时：
 *  设置type为SSDKContentTypeVideo，并设置text、title、url参数
 */
- (void)SSDKSetupYiXinParamsByText:(NSString *)text
                             title:(NSString *)title
                               url:(NSURL *)url
                        thumbImage:(id)thumbImage
                             image:(id)image
                      musicFileURL:(NSURL *)musicFileURL
                   musicLowBandUrl:(id)musicLowBandUrl
                      musicDataUrl:(id)musicDataUrl
               musicLowBandDataUrl:(id)musicLowBandDataUrl
                           extInfo:(NSString *)extInfo
                          fileData:(id)fileData
                   videoLowBandUrl:(id)videoLowBandUrl
                           comment:(NSString *)comment
                          toUserId:(NSString *)userId
                              type:(SSDKContentType)type
                forPlatformSubType:(SSDKPlatformType)platformSubType;


#pragma mark - Flickr
/**
 *  设置Flickr分享参数
 *
 *  @param text        图片描述
 *  @param image       分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param title       图片标题
 *  @param tags        图片标签列表
 *  @param isPublic    指定是否公开图片，NO 私有 YES 公开。
 *  @param isFriend    指定好友是否可以查看图片，NO 不允许，YES 允许
 *  @param isFamily    指定家人是否可以查看图片，NO 不允许，YES 允许
 *  @param safetyLevel 安全级别。1 安全 2 辅导级 3 限制级。
 *  @param contentType 1 照片、2 屏幕截图、3 其他。
 *  @param hidden      1 照片、2 屏幕截图、3 其他。
 */
- (void)SSDKSetupFlickrParamsByText:(NSString *)text
                              image:(id)image
                              title:(NSString *)title
                               tags:(NSArray *)tags
                           isPublic:(BOOL)isPublic
                           isFriend:(BOOL)isFriend
                           isFamily:(BOOL)isFamily
                        safetyLevel:(NSInteger)safetyLevel
                        contentType:(NSInteger)contentType
                             hidden:(NSInteger)hidden;

#pragma mark - Instapaper

/**
 *  设置Instapaper分享参数
 *
 *  @param url                 分享链接，如果isPrivateFromSource为YES并且content不为空时将忽略此参数
 *  @param title               分享标题
 *  @param desc                分享的链接描述
 *  @param content             内容
 *  @param isPrivateFromSource 是否为私有源
 *  @param folderId            文件夹ID
 *  @param resolveFinalUrl     解决最终URL问题标识，默认开启，用于解决跳转页面问题，设置为NO则表示不进行跳转
 */
- (void)SSDKSetupInstapaperParamsByUrl:(NSURL *)url
                                 title:(NSString *)title
                                  desc:(NSString *)desc
                               content:(NSString *)content
                   isPrivateFromSource:(BOOL)isPrivateFromSource
                              folderId:(NSInteger)folderId
                       resolveFinalUrl:(BOOL)resolveFinalUrl;

#pragma mark - Line

/**
 *  设置Line分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param type  分享类型，仅支持Text、Image
 */
- (void)SSDKSetupLineParamsByText:(NSString *)text
                            image:(id)image
                             type:(SSDKContentType)type;


#pragma mark - Evernote

/** v4.0.0
 *  设置印象笔记分享参数，注：中国版和国际版都是调用此接口进行分享参数设置。
 *
 *  @param text     分享文本
 *  @param images   分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage，如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param video    分享的视频的本地地址 仅支持本地视频 仅支持 mp4格式视频
 *  @param title    标题
 *  @param notebook 笔记本GUID
 *  @param tags     标签GUID列表
 *  @param platformType 分享平台类型，仅支持输入SSDKPlatformTypeYinXiang和SSDKPlatformTypeEvernote
 */
- (void)SSDKSetupEvernoteParamsByText:(NSString *)text
                               images:(id)images
                                video:(NSURL *)video
                                title:(NSString *)title
                             notebook:(NSString *)notebook
                                 tags:(NSArray *)tags
                         platformType:(SSDKPlatformType)platformType;

- (void)SSDKSetupEvernoteParamsByText:(NSString *)text
                               images:(id)images
                                title:(NSString *)title
                             notebook:(NSString *)notebook
                                 tags:(NSArray *)tags
                         platformType:(SSDKPlatformType)platformType __deprecated_msg("discard form v4.2.0");

#pragma mark - Google+
/**
 *  设置GooglePlus分享参数
 *
 *  @param text     文本
 *  @param url      分享链接，仅在type为WebPage时有效
 *  @param type     分享类型，仅支持Text、WebPage类型
 */
- (void)SSDKSetupGooglePlusParamsByText:(NSString *)text
                                    url:(NSURL *)url
                                   type:(SSDKContentType)type;

#pragma mark - Kakao

/**
 *  设置KaKao分享参数
 */
- (void)SSDKSetupKaKaoParamsByText:(NSString *)text
                            images:(id)images
                             title:(NSString *)title
                               url:(NSURL *)url
                        permission:(NSString *)permission
                       enableShare:(BOOL)enableShare
                         imageSize:(CGSize)imageSize
                    appButtonTitle:(NSString *)appButtonTitle
                  androidExecParam:(NSDictionary *)androidExecParam
                  androidMarkParam:(NSString *)androidMarkParam
                  iphoneExecParams:(NSDictionary *)iphoneExecParams
                   iphoneMarkParam:(NSString *)iphoneMarkParam
                    ipadExecParams:(NSDictionary *)ipadExecParams
                     ipadMarkParam:(NSString *)ipadMarkParam
                              type:(SSDKContentType)type
                forPlatformSubType:(SSDKPlatformType)platformSubType __deprecated_msg("Discard form v4.2.0. Using 'SSDKSetupKaKaoParamsByTitle:desc:imageURL:url:templateId:templateArgs:' instead.");

/**
 设置KaKaoTalk分享参数，支持链接分享和本地文件分享
 
 @param url 链接地址，为本地地址时默认分享文件形式，网络链接默认分享链接形式
 @param templateId 模板id,需要Kakao后台配置
 @param templateArgs 模板参数
 */
- (void)SSDKSetupKaKaoTalkParamsByUrl:(NSURL *)url
                           templateId:(NSString *)templateId
                         templateArgs:(NSDictionary *)templateArgs;


/**
 设置KaKaoStory分享参数,客户端分享时只支持文本链接分享，不支持图片单独分享，需要配置白名单：storylink
 
 @param content 分享内容
 @param title 标题,仅客户端分享链接时有效
 @param images 图片数据，元素类型支持:UIImage,NSData(gif或图片),SSDKImage,NSString,NSArray
 @param url 链接
 @param permission 0:全部可见 1:好友可见 2:自己可见
 @param sharable 是否允许共享
 @param androidExecParam 安卓扩展参数
 @param iosExecParam iOS扩展参数
 @param type 分享类型

 */
- (void)SSDKSetupKakaoStoryParamsByContent:(NSString *)content
                                     title:(NSString *)title
                                    images:(id)images
                                       url:(NSURL *)url
                                permission:(int)permission
                                  sharable:(BOOL)sharable
                          androidExecParam:(NSDictionary *)androidExecParam
                              iosExecParam:(NSDictionary *)iosExecParam
                                      type:(SSDKContentType)type;


#pragma mark - LinkedIn
/**
 *  设置LinkedIn分享参数
 *
 *  @param text       分享文本
 *  @param image      分享图片，只能够是网络图片，传入类型可以为NSString（图片路径）， NSURL（图片路径）。
 *  @param url        分享链接
 *  @param title      标题
 *  @param urlDesc    链接的相关描述
 *  @param visibility 可见性，可以传入PUBLIC、CONNECTIONS，默认Text分享使用PUBLIC，默认WebPage分享使用CONNECTIONS
 *  @param type       分享类型,仅支持Text和WebPage
 */
- (void)SSDKSetupLinkedInParamsByText:(NSString *)text
                                image:(id)image
                                  url:(NSURL *)url
                                title:(NSString *)title
                              urlDesc:(NSString *)urlDesc
                           visibility:(NSString *)visibility
                                 type:(SSDKContentType)type;

#pragma mark - Tumblr

/**
 *  设置Tumblr分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，分享图片 可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage，仅在type为Image时有效。
 *  @param url   分享链接
 *  @param title 标题
 *  @param blogName 博客名称，如果为nil，则默认分享到默认博客中。
 *  @param type  分享类型，仅支持Text和Image
 */
- (void)SSDKSetupTumblrParamsByText:(NSString *)text
                              image:(id)image
                                url:(NSURL *)url
                              title:(NSString *)title
                           blogName:(NSString *)blogName
                               type:(SSDKContentType)type;


#pragma mark - Pocket

/**
 *  设置Pocket分享参数
 *
 *  @param url     分享链接
 *  @param title   标题
 *  @param tags    标签，可以为NSString或者NSArray。为NSString时，标签名称要以逗号分隔；为NSArray时，元素为NSString。
 *  @param tweetId 关联的推文ID
 */
- (void)SSDKSetupPocketParamsByUrl:(NSURL *)url
                             title:(NSString *)title
                              tags:(id)tags
                           tweetId:(NSString *)tweetId;

#pragma mark - SMS

/**
 *  设置短信分享参数
 *
 *  @param text        文本
 *  @param title       标题
 *  @param images      分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param attachments 附件列表, 可以为单个附件也可以为一个数组，元素可以为NSData、UIImage、NSString、NSURL（文件路径）、SSDKData、SSDKImage，注：只允许指定本地资源
 *  @param recipients  接收人信息，如：@[@"400-685-2216"]
 *  @param type        分享类型，仅支持Text、Image video类型 video在 attachments 附件列表中设置
 */
- (void)SSDKSetupSMSParamsByText:(NSString *)text
                           title:(NSString *)title
                          images:(id)images
                     attachments:(id)attachments
                      recipients:(NSArray *)recipients
                            type:(SSDKContentType)type;


#pragma mark - Copy

/**
 *  设置拷贝参数
 *
 *  @param text   文本，仅在type为Text时有效
 *  @param images 分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param url    链接，仅在type为WebPage时有效
 *  @param type   分享类型，仅支持Text、Image、WebPage类型
 */
- (void)SSDKSetupCopyParamsByText:(NSString *)text
                           images:(id)images
                              url:(NSURL *)url
                             type:(SSDKContentType)type;


#pragma mark - 开心网

/**
 *  设置开心网分享参数
 *
 *  @param text  文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage，仅在type为Image时有效。
 *  @param type  分享类型，仅支持Text、Image类型
 */
- (void)SSDKSetupKaiXinParamsByText:(NSString *)text
                              image:(id)image
                               type:(SSDKContentType)type;


#pragma mark - 明道

/**
 *  设置明道分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。分享WebPage时需要指定为网络图片
 *  @param url   分享链接，仅在WebPage时有效。
 *  @param title   标题，仅在WebPage时有效
 *  @param type  分享类型，仅支持Text、Image、WebPage
 */
- (void)SSDKSetupMingDaoParamsByText:(NSString *)text
                               image:(id)image
                                 url:(NSURL *)url
                               title:(NSString *)title
                                type:(SSDKContentType)type;



#pragma mark - VKontakte
/**
 *  设置VKontakte分享参数
 *
 *  @param text        分享文本
 *  @param images      分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param url         分享的链接
 *  @param groupId     圈子标识，默认为nil，分享到share圈子
 *  @param friendsOnly 是否为好友可见，默认为NO，表示所有人可以看到。
 *  @param latitude    纬度
 *  @param longitude   经度
 *  @param type        分享类型，仅支持Text、Image、WebPage
 */
- (void)SSDKSetupVKontakteParamsByText:(NSString *)text
                                images:(id)images
                                   url:(NSURL *)url
                               groupId:(NSString *)groupId
                           friendsOnly:(BOOL)friendsOnly
                              latitude:(double)latitude
                             longitude:(double)longitude
                                  type:(SSDKContentType)type;


#pragma mark - YouTube

/**
 设置 YouTube 分享参数
 
 @param video 分享视频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData
 @param title 标题
 @param description 描述
 @param tags 标签，可以为NSString或者NSArray。为NSString时，标签名称要以逗号分隔   为NSArray时，元素为NSString。
 @param privacyStatus 视频的隐私权限
 只支持 Video类型
 */
- (void)SSDKSetupYouTubeParamsByVideo:(id)video
                                title:(NSString *)title
                          description:(NSString *)description
                                 tags:(id)tags
                        privacyStatus:(SSDKPrivacyStatus)privacyStatus;

/**
 设置 YouTube 分享参数
 可完全自定义 发布参数
 @param video video 分享视频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData
 @param parts 多个使用逗号隔开 例如 snippet,status  参考 https://developers.google.com/youtube/v3/docs/videos/insert#part
 @param jsonString Video resource 的 json数据  参考 https://developers.google.com/youtube/v3/docs/videos
 */
- (void)SSDKSetupYouTubeParamsByVideo:(id)video
                                parts:(NSString *)parts
                           jsonString:(NSString *)jsonString;


#pragma mark - WhatsApp

/**
 *  设置WhatsApp分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param audio 分享音频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData、注：只允许指定本地资源
 *  @param video 分享视频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData、注：只允许指定本地资源
 *  @param point 分享菜单的显示位置，仅用于iPad版
 *  @param type  分享类型，仅支持Text、Image、Audio、Video
 */
- (void)SSDKSetupWhatsAppParamsByText:(NSString *)text
                                image:(id)image
                                audio:(id)audio
                                video:(id)video
                     menuDisplayPoint:(CGPoint)point
                                 type:(SSDKContentType)type;

/**
 *  设置WhatsApp分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param audio 分享音频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData、注：只允许指定本地资源
 *  @param video 分享视频, 可以为NSData、NSString、NSURL（文件路径）、SSDKData、注：只允许指定本地资源
 *  @param point 分享菜单的显示位置，仅用于iPad版
 *  @param useSystem 是否使用系统提供的分享模块只针对分享文本，其他类型目前只有系统提供分享
 *  @param type  分享类型，仅支持Text、Image、Audio、Video
 */
- (void)SSDKSetupWhatsAppParamsByText:(NSString *)text
                                image:(id)image
                                audio:(id)audio
                                video:(id)video
                     menuDisplayPoint:(CGPoint)point
                            useSystem:(BOOL)useSystem
                                 type:(SSDKContentType)type;



#pragma mark - 邮件 Mail
/**
 *  设置邮件分享参数
 *
 *  @param text          文本
 *  @param title         标题
 *  @param images        分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。如: @"http://www.mob.com/images/logo_black.png" 或 @[@"http://www.mob.com/images/logo_black.png"]
 *  @param attachments   附件列表, 可以为单个附件也可以为一个数组，元素可以为NSData、UIImage、NSString、NSURL（文件路径）、SSDKData、SSDKImage，注：只允许指定本地资源
 *  @param recipients    接收人信息，如：@["tester@163.com"]
 *  @param ccRecipients  抄送人信息，如：@["tester2@163.com"]
 *  @param bccRecipients 密送人信息，如：@["tester3@163.com"]
 *  @param type          分享类型，仅支持Text、Image video类型 video在 attachments 附件列表中设置
 */
- (void)SSDKSetupMailParamsByText:(NSString *)text
                            title:(NSString *)title
                           images:(id)images
                      attachments:(id)attachments
                       recipients:(NSArray *)recipients
                     ccRecipients:(NSArray *)ccRecipients
                    bccRecipients:(NSArray *)bccRecipients
                             type:(SSDKContentType)type;


#pragma mark - 有道云笔记
/**
 *  设置有道云笔记分享参数
 *
 *  @param text   分享文本
 *  @param images 分享图片列表,传入参数可以为单张图片信息，也可以为一个NSArray，数组元素可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage，
 *
 *  @param title  标题
 *  @param source 来源
 *  @param author 作者
 *  @param notebook 笔记本
 */
- (void)SSDKSetupYouDaoNoteParamsByText:(NSString *)text
                                 images:(id)images
                                  title:(NSString *)title
                                 source:(NSString *)source
                                 author:(NSString *)author
                               notebook:(NSString *)notebook;

#pragma mark - Telegram
/**
 *  设置Telegram分享参数
 *
 *  @param text  分享文本
 *  @param image 分享图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage。
 *  @param audio 分享音频, NSURL（文件路径）注：只允许指定本地资源
 *  @param video 分享视频, NSURL（文件路径）注：只允许指定本地资源
 *  @param file  分享视频, NSURL（文件路径）注：只允许指定本地资源
 *  @param point 分享菜单的显示位置，仅用于iPad版
 *  @param type  分享类型，仅支持Text、Image、Audio、Video、File
 */
- (void)SSDKSetupTelegramParamsByText:(NSString *)text
                                image:(id)image
                                audio:(NSURL *)audio
                                video:(NSURL *)video
                                 file:(NSURL *)file
                     menuDisplayPoint:(CGPoint)point
                                 type:(SSDKContentType)type;


#pragma mark - 抖音
/**
 *  设置抖音分享参数
 *
 *  @param assetLocalIds 分享图片/视频集合, 注：只允许为相册资源且集合传对应的资源localIdentifier，非相册路径
 *       如相册路径为“assets-library://asset/asset.mp4?id=E7BEC1A7-D60C-4B41-85AB-B8A1606AB338&ext=mp4”，assetLocalIds为@[@"E7BEC1A7-D60C-4B41-85AB-B8A1606AB338"]
 *  @param type  分享类型，仅支持Image、Video
 *  @param hashtag 唯一标识
 *  @param extraInfo 额外的数据
 */
- (void)SSDKSetupDouyinParamesByAssetLocalIds:(NSArray<NSString *> *)assetLocalIds
                                      hashtag:(NSString *)hashtag
                                    extraInfo:(NSDictionary *)extraInfo
                                         type:(SSDKContentType)type;

/**
 *  设置TikTok分享参数
 *
 *  @param assetLocalIds 分享图片/视频集合, 注：只允许为相册资源且集合传对应的资源localIdentifier，非相册路径
 *       如相册路径为“assets-library://asset/asset.mp4?id=E7BEC1A7-D60C-4B41-85AB-B8A1606AB338&ext=mp4”，assetLocalIds为@[@"E7BEC1A7-D60C-4B41-85AB-B8A1606AB338"]
 *  @param type  分享类型，仅支持Image、Video
 *  @param hashtag 唯一标识
 *  @param extraInfo 额外的数据
 */
- (void)SSDKSetupTikTokParamesByAssetLocalIds:(NSArray<NSString *> *)assetLocalIds
                                      hashtag:(NSString *)hashtag
                                    extraInfo:(NSDictionary *)extraInfo
                                         type:(SSDKContentType)type;

/**
 *  设置企业微信分享参数
 *
 *  @param text                 文本
 *  @param title                标题
 *  @param url                  分享链接
 *  @param thumbImage           缩略图，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage
 *  @param image                图片，可以为UIImage、NSString（图片路径）、NSURL（图片路径）、SSDKImage，如为图片路径只支持本地沙盒路径
 *  @param fileData             文件数据，可以为NSData、UIImage、NSString、NSURL（文件路径）、SSDKData、SSDKImage，文件路径只支持本地沙盒路径
 *  @param type                 分享类型，支持SSDKContentTypeText、SSDKContentTypeImage、SSDKContentTypeWebPage、SSDKContentTypeFile和SSDKContentTypeVideo
 *
 *  分享文本时：
 *  设置type为SSDKContentTypeText, 并填入text参数
 *
 *  分享图片时：
 *  设置type为SSDKContentTypeImage, 填入title(自定义图片名称及后缀)和image参数
 *
 *  分享网页时：
 *  设置type为SSDKContentTypeWebPage, 并设置text、title、url以及thumbImage参数，如果尚未设置thumbImage则会从image参数中读取图片并对图片进行缩放操作。
 *
 *  分享视频时：
 *  设置type为SSDKContentTypeVideo，并设置title(自定义视频名称及后缀)、video参数
 *
 *  分享文件时：
 *  设置type为SSDKContentTypeFile， 并设置title(自定义文件名称及后缀)、fileData参数
 
 */
- (void)SSDKSetupWeWorkParamsByText:(NSString *)text
                              title:(NSString *)title
                                url:(NSURL *)url
                         thumbImage:(id)thumbImage
                              image:(id)image
                              video:(id)video
                           fileData:(id)fileData
                               type:(SSDKContentType)type;


/** 设置绿洲分享参数
 
 
 * @param title 标题
 
 * @param text 内容
 
 * @param assetLocalIds 相册资源，注：只允许为相册资源且集合传对应的资源localIdentifier，非相册路径
 如相册路径为“assets-library://asset/asset.mp4?id=E7BEC1A7-D60C-4B41-85AB-B8A1606AB338&ext=mp4”，assetLocalIds为@[@"E7BEC1A7-D60C-4B41-85AB-B8A1606AB338"]
 assetLocalIds优先级低于image和video
 
 * @param image  图片，可以为NSString、NSURL、UIImage、NSData、或着以上类型的数组，注：  图片大小限制为10M,  图片最多传12张
 
 * @param video 视频资源，可以使NSData（大小不能超过20M，需提供后缀类型)， 视频最多1个，图片与视频不能混合添加
 
 * @param fileExtension data类型的标识符
 
 * @param type 分享的类型
 */
- (void)SSDKSetupOasisParamsByTitle:(NSString *)title
                               text:(NSString *)text
                      assetLocalIds:(NSArray <NSString *>*)assetLocalIds
                              image:(id)image
                              video:(NSData *)video
                      fileExtension:(NSString *)fileExtension
                               type:(SSDKContentType)type;
/** 设置SnapChat分享参数


 * @param caption 标题

 * @param attachmentUrl 网页链接

 * @param image 可以为UIImage、NSString、NSURL、SSDKImage

 * @param video  视频，不可与图片混合，可以为NSString、NSURL、NSData

 * @param sticker 贴纸，可以为UIImage、NSString、NSURL、SSDKImage

 * @param stickerAnimated 贴纸是否是动画
 
 * @param stickerRotation 贴纸旋转的角度
 
 * @param cameraViewState 只有在没有视频或图片时有效 0. unknow 1.Front 2.Back
 
 * @param type 分享的类型
*/
- (void)SSDKSetupSnapChatParamsByCaption:(NSString *)caption
                           attachmentUrl:(NSString *)attachmentUrl
                                   image:(id)image
                                   video:(id)video
                                sticker:(id)sticker
                        stickerAnimated:(BOOL)stickerAnimated
                        stickerRotation:(CGFloat)stickerRotation
                         cameraViewState:(NSInteger)cameraViewState
                                    type:(SSDKContentType)type;

#pragma mark - 快手

/** 设置快手分享参数


 * @param title 标题

 * @param desc 描述

 * @param linkURL 私信-点击的链接地址

 * @param thumbImage  私信-缩略图（不能超过1M）

 * @param openID 要查看的用户的openID，可选

 * @param receiverOpenID 接收方 openid , 可选，当不填时，快手 APP 会调启选择好友界面来确定接收方
 
 * @param localIdentifier 分享的相册图片/视频的相册标识（此参数和path互斥，如同时存在以localIdentifier为准）
  
 * @param tags 视频分享-标签数组
 
 * @param type 分享的类型
*/
- (void)SSDKSetupKuaiShouShareParamsByTitle:(NSString *)title
                                       desc:(NSString *)desc
                                    linkURL:(NSString *)linkURL
                                 thumbImage:(id)thumbImage
                                     openID:(NSString *)openID
                             receiverOpenID:(NSString *)receiverOpenID
                            localIdentifier:(NSString *)localIdentifier
                                       tags:(NSArray<NSString *> *)tags
                                  extraInfo:(NSString *)extraInfo
                                       type:(SSDKContentType)type;

#pragma mark - Deprecated

- (void)SSDKEnableUseClientShare __deprecated_msg("Discard form v4.2.0");
- (void)SSDKEnableExtensionShare __deprecated_msg("Discard form v4.2.0");

@end
