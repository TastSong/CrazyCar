//
//  SSDKDataModel.h
//  ShareSDK
//
//  Created by maxl on 2020/6/10.
//  Copyright © 2020 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSDKDataModel : NSObject<NSCoding>
/**
 初始化数据模型
 
 @param dict 初始化数据
 @return 数据模型
 */
- (instancetype)initWithDict:(NSDictionary *)dict;

/**
 返回一个字典结构
 
 @return 字段数据对象
 */
- (NSDictionary *)dictionaryValue;

@end

NS_ASSUME_NONNULL_END
