//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARBinhaiActivityColorProgressView, CADisplayLink, NSArray, NSString, UIImageView;

@interface ARBinhaiActivityProgressView : UIView
{
    double _lastTimeStamp;
    double _maxTime;
    double _currentTime;
    NSArray *_nameImages;
    NSArray *_logoImages;
    double _scrollTime;
    unsigned long long _aType;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _report;
    UIImageView *_backgroundImageView;
    UIImageView *_nameBgImageView;
    UIImageView *_nameImageView;
    ARBinhaiActivityColorProgressView *_progressView;
    UIImageView *_progressAnimationImageView;
    CADisplayLink *_updateTimer;
    NSString *_resourcePath;
}

@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(retain, nonatomic) CADisplayLink *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) UIImageView *progressAnimationImageView; // @synthesize progressAnimationImageView=_progressAnimationImageView;
@property(retain, nonatomic) ARBinhaiActivityColorProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *nameImageView; // @synthesize nameImageView=_nameImageView;
@property(retain, nonatomic) UIImageView *nameBgImageView; // @synthesize nameBgImageView=_nameBgImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType report; // @synthesize report=_report;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long aType; // @synthesize aType=_aType;
@property(nonatomic) double scrollTime; // @synthesize scrollTime=_scrollTime;
@property(retain, nonatomic) NSArray *logoImages; // @synthesize logoImages=_logoImages;
@property(retain, nonatomic) NSArray *nameImages; // @synthesize nameImages=_nameImages;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
- (void).cxx_destruct;
- (_Bool)isRunning;
- (void)jumpToEndState;
- (void)stop;
- (void)start;
- (void)updateUI;
- (void)updateTimerAction:(id)arg1;
- (double)leftTime;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 resourcePath:(id)arg2;

@end

