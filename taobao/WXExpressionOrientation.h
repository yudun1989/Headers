//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXExpressionHandler.h"

@class NSMutableArray, NSString, OrientationEvaluator;

@interface WXExpressionOrientation : WXExpressionHandler
{
    _Bool _isStarted;
    double _startAlpha;
    double _startBeta;
    double _startGamma;
    double _lastAlpha;
    double _lastBeta;
    double _lastGamma;
    NSString *_sceneType;
    OrientationEvaluator *_evaluatorX;
    OrientationEvaluator *_evaluatorY;
    OrientationEvaluator *_evaluator3D;
    NSMutableArray *_alphaRecords;
}

- (void).cxx_destruct;
- (void)fireStateChangedEvent:(id)arg1 alpha:(double)arg2 beta:(double)arg3 gamma:(double)arg4;
- (id)setUpScope:(double)arg1 beta:(double)arg2 gamma:(double)arg3 x:(double)arg4 y:(double)arg5 z:(double)arg6;
- (double)formatAlpha:(double)arg1 startAlpha:(double)arg2;
- (_Bool)handleUpdates:(double)arg1 beta:(double)arg2 gamma:(double)arg3;
- (void)stopWatchOrientation;
- (void)removeExpressionBinding;
- (void)updateTargets:(id)arg1 expression:(id)arg2 options:(id)arg3 exitExpression:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)initWithExpressionType:(long long)arg1 WXInstance:(id)arg2 source:(id)arg3;

@end

