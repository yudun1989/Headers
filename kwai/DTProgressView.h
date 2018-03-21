//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTShapeView.h"

@class CAValueFunction;

@interface DTProgressView : DTShapeView
{
    double _animationDuration;
    CAValueFunction *_animationFunction;
}

+ (void)load;
@property(retain, nonatomic) CAValueFunction *animationFunction; // @synthesize animationFunction=_animationFunction;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (void)animateToProgress:(float)arg1;
- (void)animateStrokeEnd:(float)arg1;
- (void)animateStrokeStart:(float)arg1;
- (void)setStrokeEnd:(float)arg1 animated:(_Bool)arg2;
- (void)setStrokeStart:(float)arg1 animated:(_Bool)arg2;
- (float)normalizedProgressValueFromValue:(float)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) float progress;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonSetup;

@end

