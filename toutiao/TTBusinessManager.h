//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTBusinessManager : NSObject
{
}

+ (void)load;
+ (id)sharedInstance;
+ (id)stringHHMMFormWithDate:(id)arg1;
+ (id)stringChineseMMDDFormWithDate:(id)arg1;
+ (id)formateDateStringSince:(double)arg1 formaterType:(int)arg2;
+ (id)customtimeAndCustomdateStringSince1970:(double)arg1;
+ (id)customtimeStringSince1970:(double)arg1 midnightInterval:(double)arg2 formateType:(int)arg3;
+ (id)noTimeStringSince1970:(double)arg1;
+ (double)timeIntervalFromStartTime:(struct timeval)arg1 toEndTime:(struct timeval)arg2;
+ (void)refreshMidnightYYInterval;
+ (void)refreshMidnightNDAInterval;
+ (void)refreshMidnightDBYInterval;
+ (void)refreshMidnightYDInterval;
+ (void)refreshMidnightInterval;
+ (id)customtimeStringSince1970:(double)arg1 formateType:(int)arg2;
+ (id)customtimeStringSince1970:(double)arg1 midnightInterval:(double)arg2;
+ (id)customtimeStringSince1970:(double)arg1;
+ (id)noYearStringSince:(double)arg1;
+ (id)wordDateStringSince:(double)arg1;
+ (id)onlyTimeStringSince:(double)arg1;
+ (id)onlyDateStringSince:(double)arg1;
+ (id)simpleDateStringSince:(double)arg1;
+ (id)noTimeStringSince:(double)arg1;
+ (id)normalDateNoTimeStringSince:(double)arg1;
+ (id)dateStringSince:(double)arg1;
+ (id)formatPlayCount:(long long)arg1;
+ (id)formatCommentCount:(long long)arg1;
+ (id)digFormatCommentCount:(long long)arg1;
+ (void)initialize;

@end

