//
//  RedditConnector.h
//  RedditConnector
//
//  Created by wukx on 2018/8/23.
//  Copyright © 2018年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RedditConnector : NSObject

//基于授权缓存，刷新accesstoken
+ (void)refreshAccessTokenComplete:(void (^) (NSString *accessToken, NSError *error))complete;

//自己传refreshToken,刷新accesstoken
+ (void)refreshAccessTokenWithRefreshToken:(NSString *)refreshtoken complete:(void (^) (NSString *accessToken, NSError *error))complete;
@end
