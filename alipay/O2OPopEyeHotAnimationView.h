//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "O2ODynamicProtocol-Protocol.h"

@class NSString, NSTimer, UIImageView, UILabel;

@interface O2OPopEyeHotAnimationView : UIView <O2ODynamicProtocol>
{
    _Bool _animatable;
    UILabel *_scoreLabel;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UIImageView *_titleBackgroundView;
    UIView *_lineView;
    NSTimer *_timer;
    long long _hotScore;
    unsigned long long _type;
    double _currentScore;
    long long _factor;
}

@property(nonatomic) long long factor; // @synthesize factor=_factor;
@property(nonatomic) double currentScore; // @synthesize currentScore=_currentScore;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long hotScore; // @synthesize hotScore=_hotScore;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *titleBackgroundView; // @synthesize titleBackgroundView=_titleBackgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool animatable; // @synthesize animatable=_animatable;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
- (void).cxx_destruct;
- (void)setConfig:(id)arg1 children:(id)arg2 item:(id)arg3;
- (void)stop;
- (void)start;
- (void)scorePlay;
- (void)stopScoreAnimation;
- (void)startScoreAnimation;
- (id)initScore:(long long)arg1 type:(unsigned long long)arg2 animatable:(_Bool)arg3 isBigCard:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

