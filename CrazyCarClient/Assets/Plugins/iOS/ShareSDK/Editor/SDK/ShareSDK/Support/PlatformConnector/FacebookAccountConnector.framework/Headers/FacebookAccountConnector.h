//
//  FacebookAccountConnector.h
//  FacebookAccountConnector
//
//  Created by Max on 2018/10/11.
//  Copyright © 2018 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCFacebookAccountConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface FacebookAccountConnector : NSObject

+ (void)setConfiguration:(SSCFacebookAccountConfiguration *)config;

@end

NS_ASSUME_NONNULL_END
