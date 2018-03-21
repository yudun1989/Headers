//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class CAShapeLayer, NSString;

@interface QQTwinkleCircleView : UIView <CAAnimationDelegate>
{
    _Bool _twinkling;
    CAShapeLayer *_circleLayer;
    double _innerRadius;
    double _startOutRadius;
    double _endOutRadius;
    double _shadowRadius;
    double _duration;
}

@property(nonatomic) _Bool twinkling; // @synthesize twinkling=_twinkling;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double endOutRadius; // @synthesize endOutRadius=_endOutRadius;
@property(nonatomic) double startOutRadius; // @synthesize startOutRadius=_startOutRadius;
@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)resumeTwinkling;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopTwinkle:(_Bool)arg1;
- (void)startTwinkle:(_Bool)arg1;
- (void)twinkleAnimationReverse;
- (void)twinkleAnimation;
- (void)startAnimation;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1 circleCenter:(struct CGPoint)arg2 innerRadius:(double)arg3 startOutRadius:(double)arg4 endOutRadius:(double)arg5 shadowRadius:(double)arg6;
- (id)initWithFrame:(struct CGRect)arg1 circleCenter:(struct CGPoint)arg2 innerRadius:(double)arg3 startOutRadius:(double)arg4 endOutRadius:(double)arg5 shadowRadius:(double)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

