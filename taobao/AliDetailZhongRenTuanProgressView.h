//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView, UILabel;

@interface AliDetailZhongRenTuanProgressView : UIView
{
    UIImageView *_bgImageView;
    UIView *_rightMaskView;
    UIImageView *_ingIconImageView;
    UIImageView *_endIconImageView;
    UILabel *_countLabel;
    long long _progressStyle;
    NSTimer *_percentTimer;
    long long _percentCount;
    double _percent;
}

@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) long long percentCount; // @synthesize percentCount=_percentCount;
@property(retain, nonatomic) NSTimer *percentTimer; // @synthesize percentTimer=_percentTimer;
@property(nonatomic) long long progressStyle; // @synthesize progressStyle=_progressStyle;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *endIconImageView; // @synthesize endIconImageView=_endIconImageView;
@property(retain, nonatomic) UIImageView *ingIconImageView; // @synthesize ingIconImageView=_ingIconImageView;
@property(retain, nonatomic) UIView *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)updateCountLabelText:(id)arg1;
- (void)dealloc;
- (void)stopTimer;
- (void)showCountLabelAnimation;
- (void)startAnimationWithPercent:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

