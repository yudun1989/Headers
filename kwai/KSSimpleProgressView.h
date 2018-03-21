//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface KSSimpleProgressView : UIView
{
    _Bool _paused;
    _Bool _windingMode;
    UIColor *_progressColor;
    double _progress;
    CADisplayLink *_displayLink;
    double _displayProgress;
    double _completionTime;
}

@property(nonatomic) _Bool windingMode; // @synthesize windingMode=_windingMode;
@property(nonatomic) double completionTime; // @synthesize completionTime=_completionTime;
@property(nonatomic) double displayProgress; // @synthesize displayProgress=_displayProgress;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)updateDisplayProgress:(id)arg1;
- (void)setProgress:(double)arg1 animationDuration:(double)arg2 winding:(_Bool)arg3;
- (void)setProgress:(double)arg1 animationDuration:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

