//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSCalendar, FSCalendarCell, NSDate, NSString, UIImage;

@protocol FSCalendarDataSource <NSObject>

@optional
- (_Bool)calendar:(FSCalendar *)arg1 hasEventForDate:(NSDate *)arg2;
- (long long)calendar:(FSCalendar *)arg1 numberOfEventsForDate:(NSDate *)arg2;
- (FSCalendarCell *)calendar:(FSCalendar *)arg1 cellForDate:(NSDate *)arg2 atMonthPosition:(unsigned long long)arg3;
- (NSDate *)maximumDateForCalendar:(FSCalendar *)arg1;
- (NSDate *)minimumDateForCalendar:(FSCalendar *)arg1;
- (UIImage *)calendar:(FSCalendar *)arg1 imageForDate:(NSDate *)arg2;
- (NSString *)calendar:(FSCalendar *)arg1 subtitleForDate:(NSDate *)arg2;
- (NSString *)calendar:(FSCalendar *)arg1 titleForDate:(NSDate *)arg2;
@end

