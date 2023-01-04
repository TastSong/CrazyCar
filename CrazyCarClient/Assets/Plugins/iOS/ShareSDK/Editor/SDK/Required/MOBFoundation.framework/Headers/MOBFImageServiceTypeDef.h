//
//  MOBFImageServiceTypeDef.h
//  MOBFoundation
//
//  Created by fenghj on 15/6/8.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#ifndef MOBFoundation_MOBFImageServiceTypeDef_h
#define MOBFoundation_MOBFImageServiceTypeDef_h

#import <UIKit/UIKit.h>


/**
 图片缓存处理
 
 @param imageData 图片的数据
 */
typedef NSData* (^MOBFImageGetterCacheHandler)(NSData *imageData);

/**
 *  图片加载返回
 *
 *  @param image 图片对象
 *  @param error 错误信息
 */
typedef void (^MOBFImageGetterResultHandler)(UIImage *image, NSError *error);

/**
 *  图片加载返回
 *
 *  @param imageData 图片数据
 *  @param error 错误信息
 */
typedef void (^MOBFImageDataGetterResultHandler)(NSData *imageData, NSError *error);

#endif
