//
//  MobSDK+Privacy.h
//  MOBFoundation
//
//  Created by liyc on 2020/1/21.
//  Copyright © 2020 MOB. All rights reserved.
//

#import <MOBFoundation/MobSDK.h>
#import <UIKit/UIKit.h>

#ifndef MobSDK_Privacy_h
#define MobSDK_Privacy_h

@interface MobSDK (Privacy)


/**
 获取MobTech用户隐私协议
 
 @param type 协议类型 (1= url类型, 2=  富文本类型)
 @param completion 返回回调（data：字典类型 title=标题,content=内容(type=1，返回url,type = 2时返回富文本)       error:详细错误信息）
 */
+ (void)getPrivacyPolicy:(NSString * _Nullable)type
             compeletion:(void (^ _Nullable)(NSDictionary * _Nullable data,NSError * _Nullable error))result DEPRECATED_MSG_ATTRIBUTE("use -[getPrivacyPolicy:language:compeletion:] method instead.");

/**
 获取MobTech用户隐私协议
 
 @param type 协议类型 (1= url类型, 2=  富文本类型)
 @param language 隐私协议支持语言（）
 @param completion 返回回调（data：字典类型 title=标题,content=内容(type=1，返回url,type = 2时返回富文本)       error:详细错误信息）
 */
+ (void)getPrivacyPolicy:(NSString * _Nullable)type
                language:(NSString * _Nullable)language
             compeletion:(void (^ _Nullable)(NSDictionary * _Nullable data,NSError * _Nullable error))result;

/**
 上传隐私协议授权状态
 @param isAgree 是否同意（用户授权后的结果）
 */
+ (void)uploadPrivacyPermissionStatus:(BOOL)isAgree
                             onResult:(void (^_Nullable)(BOOL success))handler;

/**
 设置是否允许弹窗
 @param show 是否允许展示隐私协议二次弹窗（最好设置为YES，否则可能会导致MobTech部分功能无法使用，默认为YES）
 */
+ (void)setAllowShowPrivacyWindow:(BOOL)show  DEPRECATED_MSG_ATTRIBUTE("deprecated");

/**
 设置隐私协议弹窗色调
 @param backColorb 弹窗背景色调
 @param colors 弹窗按钮色调数组（首个元素为拒绝按钮色调，第二个元素为同意按钮色调）
 */
+ (void)setPrivacyBackgroundColor:(UIColor *_Nullable)backColor
             operationButtonColor:(NSArray <UIColor *>*_Nullable)colors  DEPRECATED_MSG_ATTRIBUTE("deprecated");



@end


#endif /* MobSDK_Privacy_h */
