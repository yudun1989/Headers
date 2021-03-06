//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UIFont, UILabel, UIView;

@interface WBAutoProgressButton : UIButton
{
    _Bool _isProgressing;
    UIFont *_progressTitleFont;
    double _progress;
    long long _borderWidth;
    UIColor *_noColor;
    UIColor *_prsColor;
    CDUnknownBlockType _progressCompletion;
    UIView *_oneView;
    UILabel *_oneLabel;
    UIView *_twoView;
    UILabel *_twoLabel;
}

@property(nonatomic) _Bool isProgressing; // @synthesize isProgressing=_isProgressing;
@property(retain, nonatomic) UILabel *twoLabel; // @synthesize twoLabel=_twoLabel;
@property(retain, nonatomic) UIView *twoView; // @synthesize twoView=_twoView;
@property(retain, nonatomic) UILabel *oneLabel; // @synthesize oneLabel=_oneLabel;
@property(retain, nonatomic) UIView *oneView; // @synthesize oneView=_oneView;
@property(copy, nonatomic) CDUnknownBlockType progressCompletion; // @synthesize progressCompletion=_progressCompletion;
@property(retain, nonatomic) UIColor *prsColor; // @synthesize prsColor=_prsColor;
@property(retain, nonatomic) UIColor *noColor; // @synthesize noColor=_noColor;
@property(nonatomic) long long borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIFont *progressTitleFont; // @synthesize progressTitleFont=_progressTitleFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)preferTitleSize;
- (void)clearAnimations;
- (void)autoProgress:(double)arg1 withDuration:(double)arg2;
@property(retain, nonatomic) NSString *progressTitle;
- (void)setupViews;
- (void)resetFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

