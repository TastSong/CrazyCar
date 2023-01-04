//
//  UIImageView+MOBFWebCache.h
//  MOBFoundation
//
//  Created by wukx on 2018/6/6.
//  Copyright © 2018年 MOB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (MOBFWebCache)

- (void)mobf_setImageWithURL:(nullable NSURL *)url;

- (void)mobf_setImageWithURL:(nullable NSURL *)url
            placeholderImage:(nullable UIImage *)placeholder;

@end
