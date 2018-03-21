//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface BEEProgressView : UIView
{
    int _state;
    double _progress;
    UIColor *_fillColor;
    double _segWidth;
    CADisplayLink *_displayLink;
    double _rotateSpeed;
    double _startAngle;
    double _endAngle;
}

@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double rotateSpeed; // @synthesize rotateSpeed=_rotateSpeed;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double segWidth; // @synthesize segWidth=_segWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)endWaitingAnimation;
- (void)beginWaitingAnimation;
- (void)onDisplayLink;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

