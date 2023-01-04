//
//  MOBFXml.h
//  MOBFoundation
//
//  Created by fenghj on 15/9/16.
//  Copyright © 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MOBFXmlNode;

/**
 *  XML工具类
 */
@interface MOBFXml : NSObject

/**
 *  根节点
 */
@property (nonatomic, strong, readonly) MOBFXmlNode *rootNode;

/**
 *  初始化XML实例对象
 *
 *  @param path XML文件路径
 *
 *  @return XML实例对象
 */
- (instancetype)initWithPath:(NSString *)path;

/**
 *  初始化XML实例对象
 *
 *  @param string XML字符串描述
 *
 *  @return XML实例对象
 */
- (instancetype)initWithString:(NSString *)string;

/**
 *  获取XML字典描述对象
 *
 *  @return 字典对象
 */
- (NSDictionary *)dictionaryValue;

@end
