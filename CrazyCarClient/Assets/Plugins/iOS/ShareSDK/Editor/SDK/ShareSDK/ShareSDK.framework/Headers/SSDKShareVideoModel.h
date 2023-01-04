//
//  SSDKShareVideoModel.h
//  ShareSDK
//
//  Created by yoozoo on 2020/9/7.
//  Copyright © 2020 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSDKShareVideoModel : NSObject
//app图标
@property (nonatomic, copy) NSString * appIcon;
//app名称
@property (nonatomic, copy) NSString * appName;
//app描述
@property (nonatomic, copy) NSString * appDesc;
//app下载二维码
@property (nonatomic, copy) NSString * appQRcode;

//分享者名称
@property (nonatomic, copy) NSString * shareAccount;
//视频下载地址
@property (nonatomic, copy) NSString * shareVideoUrl;
//视频标题
@property (nonatomic, copy) NSString * shareTitle;
@end

NS_ASSUME_NONNULL_END
