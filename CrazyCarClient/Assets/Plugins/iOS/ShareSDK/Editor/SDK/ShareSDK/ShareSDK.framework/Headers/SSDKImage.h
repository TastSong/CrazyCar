//
//  SSDKImage.h
//  ShareSDK
//
//  Created by 冯 鸿杰 on 15/2/25.
//  Copyright (c) 2015年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  JPG图片格式
 */
extern NSString *const SSDKImageFormatJpeg;

/**
 *  PNG图片格式
 */
extern NSString *const SSDKImageFormatPng;

/**
 *  图片质量键，当图片为JPG时有效
 */
extern NSString *const SSDKImageSettingQualityKey;

/**
 *  图片
 */
@interface SSDKImage : NSObject

/**
 图片路径
 */
@property (strong, nonatomic) NSURL *URL;

/**
 初始化图片

 @param object （NSString、UIImage、NSData）
 @return 图片模型
 */
+ (instancetype)imageWithObject:(id)object;

/**
 *  初始化图片
 *
 *  @param URL 图片路径
 *
 *  @return 图片对象
 */
- (id)initWithURL:(NSURL *)URL;

/**
 *  初始化图片
 *
 *  @param image 原始的图片对象
 *  @param format   图片格式，由SSDKImageFormatJpeg和SSDKImageFormatPng来指定分享出去的是JPG还是PNG图片，如果传入其他值则默认为JPG
 *
 *  @return 图片对象
 */
- (id)initWithImage:(UIImage *)image format:(NSString *)format settings:(NSDictionary *)settings;

/**
 *  获取原生图片对象
 *
 *  @param handler 处理器
 */
- (void)getNativeImage:(void(^)(UIImage *image))handler;

/**
 *  获取原生图片数据
 *
 *  @param handler 处理器
 */
- (void)getNativeImageData:(void(^)(NSData *imageData))handler;

/**
 *  获取图片数据
 *
 *  @param imagePath      图片路径
 *  @param thumbImagePath 缩略图路径
 *  @param handler        返回回调
 */
+ (void)getImage:(NSString *)imagePath
  thumbImagePath:(NSString *)thumbImagePath
          result:(void(^)(NSData *thumbImage, NSData *image))handler;

/**
 *  检测缩略图，由于微信限制缩略图不能大于32k，此方法就是用于检测图片大小使用的方法。
 *
 *  @param thumbImageData 缩略图数据
 *
 *  @return 调整后缩略图数据
 */
+ (NSData *)checkThumbImageSize:(NSData *)thumbImageData;


@end
