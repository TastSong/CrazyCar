//
//  MOBFRSAKey.h
//  MOBFoundation
//
//  Created by fenghj on 15/7/29.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MOBFBigInteger;

@interface MOBFRSAKey : NSObject

/**
 *  bits in key
 */
@property (nonatomic) int bits;

/**
 *  modulus
 */
@property (nonatomic, strong) MOBFBigInteger *n;

/**
 *  public exponent
 */
@property (nonatomic, strong) MOBFBigInteger *e;

/**
 *  private exponent
 */
@property (nonatomic, strong) MOBFBigInteger *d;

@end
