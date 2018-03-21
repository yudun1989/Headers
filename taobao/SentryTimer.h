//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SentryTimer : NSObject
{
}

+ (long long)deviceUptime;
+ (unsigned long long)wallTimeWithDate:(id)arg1;
+ (id)setupScheduleUntil:(unsigned long long)arg1 interval:(unsigned long long)arg2 leeway:(unsigned long long)arg3 schedule:(CDUnknownBlockType)arg4;
+ (_Bool)isValid:(id)arg1;
+ (void)stopScheduler:(id)arg1;
+ (id)setupScheduleRepeatingEvery:(double)arg1 withLeeway:(double)arg2 schedule:(CDUnknownBlockType)arg3;
+ (id)setupOneShotDelaySec:(double)arg1 withLeeway:(double)arg2 block:(CDUnknownBlockType)arg3;

@end

