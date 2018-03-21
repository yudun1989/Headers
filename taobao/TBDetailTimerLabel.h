//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSTimer;

@interface TBDetailTimerLabel : UILabel
{
    int _timerType;
    int _timeUnitType;
    long long _maxCountTime;
    long long _startTime;
    double _timeInterval;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _intervalBlock;
    NSTimer *_countTimer;
}

@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(copy, nonatomic) CDUnknownBlockType intervalBlock; // @synthesize intervalBlock=_intervalBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)updateTimeCountUp;
- (void)updateTimeCountDown;
- (void)updateText;
- (id)initWithType:(int)arg1 unitType:(int)arg2 maxTime:(long long)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (id)formatTimeFromMicroSeconds:(long long)arg1;
- (id)formatTimeFromSeconds:(long long)arg1;
- (void)stopTimerAndCallBack;
- (long long)remainingTime;
- (void)stopTimer;
- (void)startTimer:(long long)arg1;
- (void)initTime:(long long)arg1;
- (id)initCountUp:(int)arg1 max:(long long)arg2;
- (id)initCountDown:(int)arg1;
- (void)dealloc;

@end

