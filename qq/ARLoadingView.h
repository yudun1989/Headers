//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIBezierPath;

@interface ARLoadingView : UIView
{
    double _progress;
    double _fontSize;
    double _borderWidth;
    double _borderHeight;
    double _radius;
    UIBezierPath *_arcSmallPath;
    UIBezierPath *_arcMiddlePath;
    UIBezierPath *_arcBigPath;
    UIBezierPath *_circleSmallPath;
    UIBezierPath *_circleBigPath;
    double _arcSmallRadius;
    double _circleSmallRadius;
    double _arcMiddleRadius;
    double _arcBigRadius;
    double _circleBigRadius;
    double _circleBigRadiusOffset;
    double _circleBigRadiusOffsetMax;
    double _circleBigRadiusOffsetDelta;
    _Bool _increaseCircleBigRadiusOffset;
    double _circleBigStartAlpha;
    double _circleBigEndAlpha;
    double _circleBigAlphaDelta;
    double _circleBigAlpha;
    double _arcBigRadiusOffset;
    double _arcBigRadiusDelta;
    double _arcBigLineWidth;
    double _arcMiddleRadiusOffset;
    double _arcMiddleRadiusDelta;
    double _arcMiddleLineWidth;
    double _circleSmallStartAlpha;
    double _circleSmallEndAlpha;
    double _circleSmallAlphaDelta;
    double _circleSmallAlpha;
    _Bool _increaseCircleSmallAlpha;
    double _arcSmallRadiusOffset;
    double _arcSmallRadiusDelta;
    double _arcSmallLineWidth;
    NSTimer *_timer;
    _Bool _hideProgressText;
}

@property(nonatomic) _Bool hideProgressText; // @synthesize hideProgressText=_hideProgressText;
- (void).cxx_destruct;
- (void)stopAnimation;
- (double)getTotalRadius;
- (double)getCenterRadius;
- (void)updateBigCircleRadius;
- (void)updateBigArcRadius;
- (void)updateMiddleArcRadius;
- (void)updateSmallCircleAlpha;
- (void)updateSmallArcRadius;
- (void)startAnimation;
- (void)setProgress:(double)arg1;
- (id)getProgressFont;
- (id)getProgressText:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize:(struct CGRect)arg1;

@end

