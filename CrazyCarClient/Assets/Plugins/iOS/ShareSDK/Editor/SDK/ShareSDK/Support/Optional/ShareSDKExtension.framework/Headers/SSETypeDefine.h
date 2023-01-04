//
//  SSETypeDefine.h
//  ShareSDKExtension
//
//  Created by 刘靖煌 on 16/10/17.
//  Copyright © 2016年 mob. All rights reserved.
//

#ifndef SSETypeDefine_h
#define SSETypeDefine_h

#import <ShareSDK/ShareSDK.h>
@class SSEFriendsPaging;


/**
 *  添加/关注好友状态变更回调处理器
 *
 *  @param state 状态
 *  @param user  好友信息，当且仅当state为SSDKResponseStateSuccess时返回
 *  @param error 错误信息，当且仅当state为SSDKResponseStateFail时返回
 */
typedef void(^SSDKAddFriendStateChangedHandler) (SSDKResponseState state, SSDKUser *user, NSError *error);

/**
 *  获取好友列表状态变更回调处理器
 *
 *  @param state  状态
 *  @param paging 好友列表分页信息，当且仅当state为SSDKResponseStateSuccess时返回
 *  @param error  错误信息，当且仅当state为SSDKResponseStateFail时返回
 */
typedef void(^SSDKGetFriendsStateChangedHandler) (SSDKResponseState state, SSEFriendsPaging *paging,  NSError *error);

/**
 *  调用API状态变更回调处理器
 *
 *  @param state            状态
 *  @param data             返回数据
 *  @param error            错误信息
 */
typedef void(^SSDKCallApiStateChangedHandler)(SSDKResponseState state, id data, NSError *error);

#endif /* SSETypeDefine_h */
