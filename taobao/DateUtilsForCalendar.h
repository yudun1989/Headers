//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DateUtilsForCalendar : NSObject
{
}

+ (id)strToDate:(id)arg1 format:(id)arg2;
+ (long long)getFirstWeekOrderOfMonth:(id)arg1 date:(id)arg2;
+ (long long)getWeekOrderOfMonth:(id)arg1 date:(id)arg2;
+ (id)getDateArgs:(id)arg1 date:(id)arg2;
+ (unsigned char)ifInSameMonth:(id)arg1 dateB:(id)arg2 calendar:(id)arg3;
+ (id)dateToStrByFormat:(id)arg1 format:(id)arg2;
+ (long long)getDayCountsOf2Dates:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
+ (long long)getWeekCountsOf2Dates:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
+ (long long)getLengthOfWeekInMonth:(id)arg1 month:(long long)arg2 year:(long long)arg3;
+ (id)getDateByMonthOffset:(id)arg1 date:(id)arg2 monthOffset:(long long)arg3;
+ (id)getDateByWeekOffset:(id)arg1 date:(id)arg2 weekOffset:(long long)arg3;
+ (id)getDateByDayOffset:(id)arg1 date:(id)arg2 dayOffset:(long long)arg3;
+ (id)getDateByYMD:(id)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4;
+ (long long)getTableListWeeksCount:(id)arg1 date:(id)arg2;
+ (id)getTableEndDate:(id)arg1 date:(id)arg2;
+ (id)getTableStartDate:(id)arg1 date:(id)arg2;

@end

