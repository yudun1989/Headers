//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReadInJoyVideoStateView.h>

#import <QQMainProject/KDVideoPlayerToolbarDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class CAGradientLayer, NSString, UIButton, UILabel, UIView;
@protocol FullVideoStateViewDelegate;

@interface FullScreenVideoStateView : QQReadInJoyVideoStateView <UIGestureRecognizerDelegate, KDVideoPlayerToolbarDelegate>
{
    _Bool _selected;
    _Bool _itemFullScreen;
    UILabel *_titleLabel;
    UILabel *_playCountLabel;
    UIButton *_centerButton;
    CAGradientLayer *_titleGradientLayer;
    UIView *_videoMask;
    CDUnknownBlockType _playButtonAction;
    CDUnknownBlockType _doubleTapAction;
    CDUnknownBlockType _tapAction;
    id <FullVideoStateViewDelegate> _fullStateViewdelegate;
}

@property(nonatomic, getter=isItemFullScreen) _Bool itemFullScreen; // @synthesize itemFullScreen=_itemFullScreen;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <FullVideoStateViewDelegate> fullStateViewdelegate; // @synthesize fullStateViewdelegate=_fullStateViewdelegate;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) CDUnknownBlockType doubleTapAction; // @synthesize doubleTapAction=_doubleTapAction;
@property(copy, nonatomic) CDUnknownBlockType playButtonAction; // @synthesize playButtonAction=_playButtonAction;
@property(retain, nonatomic) UIView *videoMask; // @synthesize videoMask=_videoMask;
@property(retain, nonatomic) CAGradientLayer *titleGradientLayer; // @synthesize titleGradientLayer=_titleGradientLayer;
@property(retain, nonatomic) UIButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)getVideoTitle;
- (long long)getSlierBarTime;
- (void)layoutSubviews;
- (void)sliderEndSeek;
- (void)layoutSlider;
- (void)setupSliderUI;
- (void)resetUI;
- (void)setupUI;
- (void)autoDismissTitle;
- (void)setTitleLabelHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canHideStateView;
- (void)autoDisappear;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didSelectVolumn:(_Bool)arg1;
- (void)didSelectZoom:(_Bool)arg1;
- (void)centerButtonDidClick:(id)arg1;
- (void)onSingleTapOnVideo;
- (void)setPlayCountWithAttributedString:(id)arg1;
- (void)setPlayCount:(id)arg1;
- (void)setVideoTitle:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onDoubleTap;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

