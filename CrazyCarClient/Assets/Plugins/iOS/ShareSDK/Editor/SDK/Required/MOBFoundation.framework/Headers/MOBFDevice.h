//
//  MOBFDeviceUtils.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-19.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>

extern NSString *kMOBFReachabilityChangedNotification;

/**
 *  网络类型
 */
typedef NS_ENUM(NSUInteger, MOBFNetworkType)
{
    /**
     *  无网咯
     */
    MOBFNetworkTypeNone         = 0,
    /**
     *  蜂窝网络
     */
    MOBFNetworkTypeCellular     = 2,
    /**
     *  WIFI
     */
    MOBFNetworkTypeWifi         = 1,
    /**
     *  2G网络
     */
    MOBFNetworkTypeCellular2G   = 3,
    /**
     *  3G网络
     */
    MOBFNetworkTypeCellular3G   = 4,
    /**
     *  4G网络
     */
    MOBFNetworkTypeCellular4G   = 5,
};


/**
 IP版本

 - MOBFIPVersion4: IPv4
 - MOBFIPVersion6: IPv6
 */
typedef NS_ENUM(NSUInteger, MOBFIPVersion)
{
    MOBFIPVersion4 = 0,
    MOBFIPVersion6 = 1,
};

/**
 *  设备工具类
 */
@interface MOBFDevice : NSObject


/**
 *  获取单例的 CTTelephonyNetworkInfo
 *
 *  @return CTTelephonyNetworkInfo
 */
+ (CTTelephonyNetworkInfo *)networkInfo;

/**
 *  获取网卡物理地址
 *
 *  @return 网卡物理地址
 */
+ (NSString *)macAddress;

/**
 *  获取设备型号
 *
 *  @return 设备型号
 */
+ (NSString *)deviceModel;

/**
 *  获取当前网络类型
 *
 *  @return 网络类型
 */
+ (MOBFNetworkType)currentNetworkType;

/**
 *  获取当前网络类型字符串
 *
 *  @return 网络类型
 */
+ (NSString *)currentNetworkTypeStr;

/**
 *  获取手机运营商代码
 *
 *  @return 手机运营商代码
 */
+ (NSString *)carrier;

/**
 *  获取手机运营商名称
 *
 *  @return 运营商名称
 */
+ (NSString *)carrierName;

/**
 *  获取手机运营商国家码
 *
 *  @return 运营商国家码
 */
+ (NSString *)mobileCountryCode;

/**
 *  获取手机运营商网络编号
 *
 *  @return 运营商网络编号
 */
+ (NSString *)mobileNetworkCode;

/**
 *  与当前系统版本比较
 *
 *  @param other 需要对比的版本
 *
 *  @return < 0 低于指定版本； = 0 跟指定版本相同；> 0 高于指定版本
 */
+ (NSInteger)versionCompare:(NSString *)other;

/**
 *  判断是否已经越狱
 *
 *  @return YES 已经越狱，NO 尚未越狱
 */
+ (BOOL)hasJailBroken;

/**
 *  获取运行进程信息
 *
 *  @return 进程信息列表
 */
+ (NSArray *)runningProcesses;

/**
 *  判断当前设备是否为iPad
 *
 *  @return YES 是，NO 否
 */
+ (BOOL)isPad;

/**
 *  获取设备唯一标识
 *
 *  @return 标识码
 */
+ (NSString *)duid;

/**
 *  获取屏幕真实尺寸
 *
 *  @return 屏幕尺寸
 */
+ (CGSize)nativeScreenSize;

/**
 *  获取无线局域网的服务集标识（WIFI名称）
 *
 *  @return 服务集标识
 */
+ (NSString *)ssid;

/**
 *  获取基础服务集标识（站点的MAC地址）
 *
 *  @return 基础服务集标识
 */
+ (NSString *)bssid;

/**
 *  获取当前语言
 *
 *  @return 语言描述
 */
+ (NSString *)currentLanguage;

/**
 *  获取设备IP地址
 *
 *  @return IP地址
 */
+ (NSString *)ipAddress:(MOBFIPVersion)ver;

/**
 *  获取开发商ID
 *
 *  @return 开发商ID
 */
+ (NSString *)idfv;

/**
 *  获取物理内存

 @return 物理内存
 */
+ (double)physicalMemory;

/**
 *  获取存储大小

 @return 存储大小
 */
+ (long long)diskSpace;

/**
 *  cpu 类型
 *
 *  @return cpu 类型
 */
+ (NSString *)cpuType;

/**
 *  获取无线局域网的强度
 *
 *  @return 强度 3: 强 ，2：中， 1：弱 ，无
 */
+ (int)wifiLevel;

/**
 *  获取原始当前网络类型
 *
 *  @return 网络类型
 */
+ (NSString *)currentDataNetworkType;

@end
