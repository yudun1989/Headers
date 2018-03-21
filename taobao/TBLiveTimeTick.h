//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer;

@interface TBLiveTimeTick : NSObject
{
    _Bool _running;
    NSMutableArray *_timeTicks;
    NSTimer *_timer;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *timeTicks; // @synthesize timeTicks=_timeTicks;
- (void).cxx_destruct;
- (void)updateRemainTime;
- (void)startTimer;
- (void)stopCountDown;
- (void)startCountDown;
- (void)removeAllTimeTicks;
- (void)removeTimeTick:(id)arg1;
- (long long)remainTimestampWithDate:(long long)arg1;
- (void)addTimeTick:(id)arg1;
- (id)init;

@end

