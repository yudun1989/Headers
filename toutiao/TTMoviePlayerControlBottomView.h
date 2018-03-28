//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TTMoviePlayerControlSliderView, UIButton, UIImageView, UILabel;

@interface TTMoviePlayerControlBottomView : UIView
{
    _Bool _isFull;
    _Bool _enableResolution;
    _Bool _enableResolutionClicked;
    UIButton *_fullScreenButton;
    UILabel *_timeLabel;
    UILabel *_timeDurLabel;
    TTMoviePlayerControlSliderView *_slider;
    UIButton *_resolutionButton;
    UIView *_toolView;
    UIButton *_prePlayBtn;
    UIButton *_playButton;
    NSString *_resolutionString;
    UIImageView *_backImageView;
    struct UIEdgeInsets _dimAreaEdgeInsetsWhenFullScreen;
}

@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) struct UIEdgeInsets dimAreaEdgeInsetsWhenFullScreen; // @synthesize dimAreaEdgeInsetsWhenFullScreen=_dimAreaEdgeInsetsWhenFullScreen;
@property(nonatomic) _Bool enableResolutionClicked; // @synthesize enableResolutionClicked=_enableResolutionClicked;
@property(nonatomic) _Bool enableResolution; // @synthesize enableResolution=_enableResolution;
@property(copy, nonatomic) NSString *resolutionString; // @synthesize resolutionString=_resolutionString;
@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *prePlayBtn; // @synthesize prePlayBtn=_prePlayBtn;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *resolutionButton; // @synthesize resolutionButton=_resolutionButton;
@property(retain, nonatomic) TTMoviePlayerControlSliderView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *timeDurLabel; // @synthesize timeDurLabel=_timeDurLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
- (void).cxx_destruct;
- (void)updateWithCurTime:(id)arg1 totalTime:(id)arg2;
- (void)updateFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

