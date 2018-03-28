//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTMoviePlayerControlSliderViewDelegate-Protocol.h"

@class NSString, TTMovieAdjustView, TTMoviePlayerControlSliderView, UIButton, UILabel;
@protocol TTLocalAssetMovieControlViewDelegate;

@interface TTLocalAssetMovieControlView : UIView <TTMoviePlayerControlSliderViewDelegate>
{
    id <TTLocalAssetMovieControlViewDelegate> _delegate;
    UIView *_toolBarView;
    UIButton *_playBtn;
    UILabel *_timeLabel;
    UILabel *_timeDurLabel;
    TTMoviePlayerControlSliderView *_slider;
    TTMovieAdjustView *_adjustView;
    double _totalTime;
}

@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) TTMovieAdjustView *adjustView; // @synthesize adjustView=_adjustView;
@property(retain, nonatomic) TTMoviePlayerControlSliderView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *timeDurLabel; // @synthesize timeDurLabel=_timeDurLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(nonatomic) __weak id <TTLocalAssetMovieControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sliderWatchedProgressChanged:(id)arg1;
- (void)sliderWatchedProgressChanging:(id)arg1;
- (void)sliderWatchedProgressWillChange:(id)arg1;
- (void)p_playBtnClicked:(id)arg1;
- (void)p_selftapped:(id)arg1;
- (void)refreshSliderFrame;
- (void)refreshPlayButton:(_Bool)arg1;
- (void)updateTimeLabel:(id)arg1 durationLabel:(id)arg2;
- (void)setCachedProgress:(double)arg1;
- (void)setWatchedProgress:(double)arg1;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

