//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

@class NSTimer;

@interface O2OIndexTimerController : O2OTemplateController
{
    NSTimer *_timer;
    _Bool _isNeedsCountdown;
    _Bool _isActive;
    _Bool _isVisible;
    double _interval;
}

@property(nonatomic, setter=setVisible:) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic, setter=setActive:) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic, setter=setNeedsCountdown:) _Bool isNeedsCountdown; // @synthesize isNeedsCountdown=_isNeedsCountdown;
- (void).cxx_destruct;
- (void)tick;
- (void)didLoadTemplate;
- (void)updateTimer;
- (void)startTimer;
- (void)restart;
- (void)stopTimer;
- (void)dealloc;
- (void)didAppear;
- (void)willDisappear;
- (void)didBecomeActive;
- (void)willResignActive;
- (id)initWithItem:(id)arg1;

@end

