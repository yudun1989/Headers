//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class AVAsset, CADisplayLink, NSString, UIColor, UIScrollView;
@protocol TBStoryVideoClipRangeSliderViewDelegate;

@interface TBStoryVideoClipRangeSliderView : UIView <UIScrollViewDelegate>
{
    UIView *_topView;
    UIView *_leftView;
    UIView *_bottomView;
    UIView *_rightView;
    UIView *_leftMaskingView;
    UIView *_rightMaskingView;
    UIScrollView *_scrollView;
    double _UIHeight;
    double _UIWidth;
    double _leftPosition;
    double _rightPosition;
    double _scrollOffsetX;
    double _scrollContentW;
    double _validTimeWidth;
    double _startTime;
    double _endTime;
    double _frameWidth;
    CDStruct_1b6d18a9 _videoDuration;
    double _durationSeconds;
    double _remainTime;
    AVAsset *_asset;
    UIColor *_color;
    id <TBStoryVideoClipRangeSliderViewDelegate> _delegate;
    double _minTime;
    UIView *_movePointView;
    CADisplayLink *_timer;
    double _duration;
    double _timeOffset;
    double _lastStep;
}

@property(nonatomic) double lastStep; // @synthesize lastStep=_lastStep;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) CADisplayLink *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *movePointView; // @synthesize movePointView=_movePointView;
@property(nonatomic) double minTime; // @synthesize minTime=_minTime;
@property(nonatomic) __weak id <TBStoryVideoClipRangeSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)videoCliped;
- (void)videoCliping;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configScrollViewWithStartPos:(double)arg1;
- (void)step:(id)arg1;
- (void)movePointViewAnimate;
- (void)movePointViewInvalidate;
- (void)handleRightPan:(id)arg1;
- (void)handleLeftPan:(id)arg1;
- (void)transformPositiontoSeconds;
- (void)calculateImageFrames;
- (id)newViewWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)createUIWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 avasset:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

