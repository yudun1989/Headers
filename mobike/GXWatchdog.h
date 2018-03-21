//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol GXWatchdogDelegate;

@interface GXWatchdog : NSObject
{
    id <GXWatchdogDelegate> delegate_;
    NSTimer *timer_;
    double nextPatrolTime_;
    double nextAlarmTime_;
    _Bool forceUrgent_;
    _Bool isUrgent_;
    int urgentWarnningTimes_;
}

@property(nonatomic) __weak id <GXWatchdogDelegate> delegate; // @synthesize delegate=delegate_;
- (void).cxx_destruct;
- (void)reportOccurAbnormalEvent:(int)arg1;
- (void)reportSecure:(int)arg1;
- (void)resetRetryIndex;
- (_Bool)isRetryIndexDidUseMax;
- (void)onPatrol;
- (void)netStatusListen;
- (void)start;
- (void)stop;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

