//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;
@protocol APVideoPlayerToolBarDelegate;

@interface APVideoPlayerToolBar : UIView
{
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    long long _totalTime;
    unsigned long long _playerState;
    _Bool _isHideAsset;
    UIView *_controlView;
    UIImageView *_backgroundImageView;
    id <APVideoPlayerToolBarDelegate> _delegate;
    CDUnknownBlockType _sliderChanged;
    CDUnknownBlockType _bindingSliderChanged;
    CDUnknownBlockType _endSlider;
    unsigned long long _playerStyle;
    UIColor *_progressTintColor;
    CDUnknownBlockType _assetBlock;
    CDUnknownBlockType _playBlock;
    CDUnknownBlockType _pauseBlock;
}

+ (id)videoPlayerToolWithStyle:(unsigned long long)arg1;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(copy, nonatomic) CDUnknownBlockType pauseBlock; // @synthesize pauseBlock=_pauseBlock;
@property(copy, nonatomic) CDUnknownBlockType playBlock; // @synthesize playBlock=_playBlock;
@property(copy, nonatomic) CDUnknownBlockType assetBlock; // @synthesize assetBlock=_assetBlock;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) unsigned long long playerStyle; // @synthesize playerStyle=_playerStyle;
@property(copy, nonatomic) CDUnknownBlockType endSlider; // @synthesize endSlider=_endSlider;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(copy, nonatomic) CDUnknownBlockType bindingSliderChanged; // @synthesize bindingSliderChanged=_bindingSliderChanged;
@property(copy, nonatomic) CDUnknownBlockType sliderChanged; // @synthesize sliderChanged=_sliderChanged;
@property(nonatomic) __weak id <APVideoPlayerToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isHideAsset; // @synthesize isHideAsset=_isHideAsset;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)start;
- (void)reset;
- (void)setProgressValue:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)progressView;
- (void)dealloc;

@end

