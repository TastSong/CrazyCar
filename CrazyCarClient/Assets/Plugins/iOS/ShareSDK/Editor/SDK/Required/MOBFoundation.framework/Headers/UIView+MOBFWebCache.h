//
//  UIView+MOBFWebCache.h
//  MOBFoundation
//
//  Created by wukx on 2018/6/6.
//  Copyright © 2018年 MOB. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^MOBFSetImageBlock)(UIImage * _Nullable image, NSError * _Nullable error);

@interface UIView (MOBFWebCache)

- (void)mobf_internalSetImageWithURL:(nullable NSURL *)url
                       setImageBlock:(nullable MOBFSetImageBlock)setImageBlock;

@end
