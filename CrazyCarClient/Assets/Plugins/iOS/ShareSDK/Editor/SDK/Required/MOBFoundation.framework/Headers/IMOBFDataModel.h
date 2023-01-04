//
//  IJIMDataModel.h
//  Jimu
//
//  Created by 冯鸿杰 on 17/2/10.
//  Copyright © 2017年 Mob. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 数据模型协议
 */
@protocol IMOBFDataModel <NSObject>

@required

/**
 初始化数据模型
 
 @param dict 初始化数据
 @return 数据模型
 */
- (instancetype)initWithDict:(NSDictionary *)dict;

/**
 设置数据
 
 @param data 数据
 @param key 名称
 */
- (void)set:(id)data key:(NSString *)key;

/**
 获取数据
 
 @param key 名称
 */
- (id)get:(NSString *)key;

/**
 返回一个字典结构
 
 @return 字段数据对象
 */
- (NSDictionary *)dictionaryValue;

/**
 返回字段映射字典
 
 说明:类如果实现此方法,并返回映射字典,在使用initWithDict初始化时,则会按照映射查找属性;key 为真正想要设定的、存在的属性 ,value为需要映射的字段
 
 @return 字段映射字典
 */
+ (NSDictionary <NSString *, NSString *> *)propertyMappingDictionary;

/**
 当类中有属性为数组,且数组元素同为MOBFDataModel时,应该置制定该属性属性及其元素类型
 例如有 @property NSArray <OtherDataModel *> *array;
 应主动实现本方法,并返回 @{@"array" : @"OtherDataModel"}
 
 @return 映射配置
 */
+ (NSDictionary <NSString *, NSString *> *)elementTypeOfCollectionPropertyDictionary;

/**
 当属性定义类型不支持从原始数据直接转换时触发此方法，该方法默认返回nil，表示不进行转换
 
 @param rawData 原始数据
 @param targetType 目标类型
 @param propertyName 属性名称
 @return 目标类型对象
 */
+ (id)unsupportTypeWithRawData:(id)rawData
                    targetType:(Class)targetType
                  propertyName:(NSString *)propertyName;

/**
 当设置属性对象不支持转化为原始数据时触发此方法，默认返回nil，表示不进行转换
 
 @param object 对象
 @param propertyName 属性名称
 @return 原始数据，仅包含NSDictionary、NSArray、NSString、NSNumber类型的返回。
 */
+ (id)rawDataWithUnsupportTypeObject:(id)object
                        propertyName:(NSString *)propertyName;

@end
