//
//  MOBFDateUtils.h
//  MOBFoundation
//
//  Created by vimfung on 15-1-19.
//  Copyright (c) 2015年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  时间工具类
 */
@interface MOBFDate : NSObject

/**
 *  获取时间的年份
 *
 *  @param date 时间
 *
 *  @return 年份
 */
+ (NSInteger)fullYearByDate:(NSDate *)date;

/**
 *  获取时间的月份
 *
 *  @param date 时间
 *
 *  @return 月份
 */
+ (NSInteger)monthByDate:(NSDate *)date;

/**
 *  获取时间的日期
 *
 *  @param date 时间
 *
 *  @return 日期部分
 */
+ (NSInteger)dayByDate:(NSDate *)date;

/**
 *  获取时间的小时部分
 *
 *  @param date 时间
 *
 *  @return 小时部分
 */
+ (NSInteger)hourByDate:(NSDate *)date;

/**
 *  获取时间的分钟部分
 *
 *  @param date 时间
 *
 *  @return 分钟部分
 */
+ (NSInteger)minuteByDate:(NSDate *)date;

/**
 *  获取时间的秒部分
 *
 *  @param date 时间
 *
 *  @return 秒部分
 */
+ (NSInteger)secondByDate:(NSDate *)date;

/**
 *  将时间转换为指定格式字符串
 *
 *  @param date   时间
 *  @param format 格式字符串
 *
 *  @return 转换后字符串
 */
+ (NSString *)stringByDate:(NSDate *)date
                withFormat:(NSString *)format;

/**
 *  将字符串转换为时间对象
 *
 *  @param format     格式字符串
 *  @param dateString 日期时间字符串
 *
 *  @return 时间对象
 */
+ (NSDate *)dateWithFormat:(NSString *)format
                dateString:(NSString *)dateString;

/**
 *  将字符串转换为时间对象
 *
 *  @param format     格式字符串
 *  @param dateString 日期时间字符串
 *  @param locale     本地化参数
 *
 *  @return 时间对象
 */
+ (NSDate *)dateWithFormat:(NSString *)format
                dateString:(NSString *)dateString
                    locale:(NSLocale *)locale;

/**
 *  创建日期时间对象
 *
 *  @param year   年份
 *  @param month  月份
 *  @param date   日期
 *  @param hour   小时
 *  @param minute 分钟
 *  @param second 秒
 *
 *  @return 日期时间对象
 */
+ (NSDate *)dateWithYear:(NSInteger)year
                   month:(NSInteger)month
                    date:(NSInteger)date
                    hour:(NSInteger)hour
                  minute:(NSInteger)minute
                  second:(NSInteger)second;


/**
 *  0点毫秒数

 *
 *  @return 0点毫秒数
 */
+ (NSTimeInterval)zeroTimeInterval;

@end
