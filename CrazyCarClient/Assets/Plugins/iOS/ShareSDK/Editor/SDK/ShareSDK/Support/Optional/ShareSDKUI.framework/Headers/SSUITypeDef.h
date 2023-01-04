//
//  SSUITypeDef.h
//  ShareSDKUI
//
//  Created by Max on 2018/4/3.
//  Copyright © 2018年 Max. All rights reserved.
//

#ifndef SSUITypeDef_h
#define SSUITypeDef_h

/**
 *  分享状态变更
 *
 *  @param state         返回状态
 *  @param platformType  平台类型
 *  @param userData      用户数据
 *  @param contentEntity 分享内容实体
 *  @param error         错误信息
 *  @param end           是否已经结束本次分享标识
 */
typedef void (^SSUIShareStateChangedHandler) (SSDKResponseState state,
                                              SSDKPlatformType platformType,
                                              NSDictionary *userData,
                                              SSDKContentEntity *contentEntity,
                                              NSError *error,
                                              BOOL end);
/**
*  暗黑模式类型，只在iOS13+有效
*
*  @param SSUIUserInterfaceStyleUnspecified     默认
*  @param SSUIUserInterfaceStyleLight      浅色模式
*  @param SSUIUserInterfaceStyleDark      深色模式
*/
typedef NS_ENUM(NSUInteger, SSUIUserInterfaceStyle) {
    SSUIUserInterfaceStyleUnspecified,
    SSUIUserInterfaceStyleLight,
    SSUIUserInterfaceStyleDark,
};
#endif /* SSUITypeDef_h */
