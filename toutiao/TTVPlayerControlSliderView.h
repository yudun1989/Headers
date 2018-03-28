//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVPlayerContext-Protocol.h"

@class NSString, TTVPlayerSliderMarkPointView, TTVPlayerStateStore, UIPanGestureRecognizer;
@protocol TTVPlayerControlSliderViewDelegate;

@interface TTVPlayerControlSliderView : UIView <TTVPlayerContext>
{
    _Bool _enableDrag;
    _Bool _duringDrag;
    _Bool _isFull;
    TTVPlayerStateStore *_playerStateStore;
    UIView *_watchedProgressView;
    UIView *_cacheProgressView;
    UIView *_backView;
    UIView *_thumbView;
    TTVPlayerSliderMarkPointView *_pointView;
    double _cacheProgress;
    double _watchedProgress;
    id <TTVPlayerControlSliderViewDelegate> _delegate;
    UIPanGestureRecognizer *_panGes;
    struct CGPoint _lastPanLocation;
}

@property(nonatomic) struct CGPoint lastPanLocation; // @synthesize lastPanLocation=_lastPanLocation;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(nonatomic) __weak id <TTVPlayerControlSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) _Bool duringDrag; // @synthesize duringDrag=_duringDrag;
@property(nonatomic) _Bool enableDrag; // @synthesize enableDrag=_enableDrag;
@property(nonatomic) double watchedProgress; // @synthesize watchedProgress=_watchedProgress;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(retain, nonatomic) TTVPlayerSliderMarkPointView *pointView; // @synthesize pointView=_pointView;
@property(readonly, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(readonly, nonatomic) UIView *cacheProgressView; // @synthesize cacheProgressView=_cacheProgressView;
@property(readonly, nonatomic) UIView *watchedProgressView; // @synthesize watchedProgressView=_watchedProgressView;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
- (void).cxx_destruct;
- (void)handlePanGes:(id)arg1;
- (void)updateThumbFrame;
- (void)updateFrame;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

