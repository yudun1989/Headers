//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BEESmileAnimationViewDelegate-Protocol.h"

@class BEESmileAnimationView, BEESmileStaticView, NSString, UILabel, UIScrollView;
@protocol BEESmilePullRefreshViewDelegate;

@interface BEESmilePullRefreshView : UIView <BEESmileAnimationViewDelegate>
{
    UILabel *_loveTipsLabel;
    BEESmileStaticView *_smileStaticView;
    BEESmileAnimationView *_smileAnimationView;
    _Bool _isAutoPullFlag;
    struct UIEdgeInsets _scrollViewContentInsets;
    _Bool _isVisible;
    UIScrollView *_tempScrollView;
    struct UIEdgeInsets _tempContentInsets;
    CDUnknownBlockType _loadingAnimationCompletion;
    _Bool _isAnimating;
    int _state;
    id <BEESmilePullRefreshViewDelegate> _delegate;
}

@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <BEESmilePullRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)enableSoundEffect;
- (id)resetAudioData;
- (id)triggerAudioData;
- (id)audioPlayer;
- (void)playResetAudio;
- (void)playTriggerAudio;
- (void)setState:(int)arg1;
- (void)setScrollView:(id)arg1 contentOffset:(struct CGPoint)arg2;
- (void)setScrollView:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2;
- (void)didStopSmileAnimation:(id)arg1;
- (void)resetSmileRefreshView;
- (void)finishSmileRefreshLoadingWithScrollView:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2 animationCompletion:(CDUnknownBlockType)arg3;
- (void)smileRefreshScrollViewDataSourceDidFinishedLoadingWithoutUpdate:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)smileRefreshScrollViewDataSourceDidFinishedLoadingWithoutUpdate:(id)arg1;
- (void)smileRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)smileRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)smileRefreshTriggerRefresh;
- (void)smileRefreshScrollViewDidEndDragging:(id)arg1;
- (void)smileRefreshScrollViewDidScroll:(id)arg1;
- (id)smileTitle;
- (void)smileRefreshScrollViewWillBeginDragging:(id)arg1;
- (void)autoPullRefreshScrollView:(id)arg1;
- (void)updateViewWithProgress:(double)arg1;
- (void)resumeSmileRefreshAnimation;
- (void)pauseSmileRefreshAnimation;
- (void)setSubViewsFrame;
- (void)commonInitWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

