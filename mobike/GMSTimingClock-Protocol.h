//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMCSClock-Protocol.h"

@protocol NSObject;

@protocol GMSTimingClock <GMCSClock>
- (void)cancelTask:(id <NSObject>)arg1;
- (id <NSObject>)scheduleRepeatingTaskWithTimeInterval:(double)arg1 tolerance:(double)arg2 block:(void (^)(void))arg3;
- (id <NSObject>)scheduleTaskAfterTimeInterval:(double)arg1 block:(void (^)(void))arg2;
- (long long)appStartTimeMillis;
- (long long)uptimeMillis;
- (long long)relativeTimeMillis;
@end

