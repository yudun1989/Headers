//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMediaSmallAnimationProtocol-Protocol.h"
#import "AWEVideoEffectMixTimeBarDelegate-Protocol.h"
#import "AWEVideoEffectViewDelegate-Protocol.h"

@class AWETabView, AWEVideoEffectMixTimeBar, AWEVideoEffectView, AWEVideoImageGenerator, AWEVideoPublishViewModel, HTSPlayer, HTSVideoData, NSArray, NSString, UIButton, UIImageView, UIView;

@interface AWEVideoEffectChooseViewController : UIViewController <AWEVideoEffectViewDelegate, AWEVideoEffectMixTimeBarDelegate, AWEMediaSmallAnimationProtocol>
{
    _Bool _isPlaying;
    _Bool _hasOperation;
    CDUnknownBlockType _didDismissBlock;
    CDUnknownBlockType _willDismissBlock;
    NSArray *_preLoadFramesArray;
    AWEVideoPublishViewModel *_publishViewModel;
    HTSPlayer *_player;
    UIButton *_cancelBtn;
    UIButton *_saveBtn;
    UIView *_playerContainer;
    UIButton *_stopAndPlayBtn;
    UIImageView *_stopAndPlayImageView;
    AWEVideoEffectMixTimeBar *_timeBar;
    AWETabView *_bottomTabView;
    AWEVideoEffectView *_filterEffectView;
    AWEVideoEffectView *_timeEffectView;
    HTSVideoData *_originVideoData;
    double _lastPlayProgress;
    unsigned long long _currentEffectViewType;
    AWEVideoImageGenerator *_imageGenerator;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) AWEVideoImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) _Bool hasOperation; // @synthesize hasOperation=_hasOperation;
@property(nonatomic) unsigned long long currentEffectViewType; // @synthesize currentEffectViewType=_currentEffectViewType;
@property(nonatomic) double lastPlayProgress; // @synthesize lastPlayProgress=_lastPlayProgress;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) HTSVideoData *originVideoData; // @synthesize originVideoData=_originVideoData;
@property(retain, nonatomic) AWEVideoEffectView *timeEffectView; // @synthesize timeEffectView=_timeEffectView;
@property(retain, nonatomic) AWEVideoEffectView *filterEffectView; // @synthesize filterEffectView=_filterEffectView;
@property(retain, nonatomic) AWETabView *bottomTabView; // @synthesize bottomTabView=_bottomTabView;
@property(retain, nonatomic) AWEVideoEffectMixTimeBar *timeBar; // @synthesize timeBar=_timeBar;
@property(retain, nonatomic) UIImageView *stopAndPlayImageView; // @synthesize stopAndPlayImageView=_stopAndPlayImageView;
@property(retain, nonatomic) UIButton *stopAndPlayBtn; // @synthesize stopAndPlayBtn=_stopAndPlayBtn;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) HTSPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
@property(retain, nonatomic) NSArray *preLoadFramesArray; // @synthesize preLoadFramesArray=_preLoadFramesArray;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
- (void).cxx_destruct;
- (double)mediaSmallBottomViewHeight;
- (struct CGRect)mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (id)mediaSmallMediaContainer;
- (_Bool)prefersStatusBarHidden;
- (void)userDidFinishMoveTimeBarControl:(id)arg1 progress:(double)arg2;
- (void)userDidMoveTimeBarControl:(id)arg1 progress:(double)arg2;
- (void)userWillMoveTimeBarControl:(id)arg1 progress:(double)arg2;
- (void)videoEffectView:(id)arg1 clickedCellWithTimeEffect:(id)arg2;
- (void)videoEffectView:(id)arg1 didClickedRevokeBtn:(id)arg2;
- (void)videoEffectView:(id)arg1 didCancelLongPressWithType:(id)arg2;
- (void)videoEffectView:(id)arg1 didFinishLongPressWithType:(id)arg2;
- (void)videoEffectView:(id)arg1 beingLongPressWithType:(id)arg2;
- (void)videoEffectView:(id)arg1 beginLongPressWithType:(id)arg2;
- (void)didClickStopAndPlay:(id)arg1;
- (void)didClickSaveBtn:(id)arg1;
- (void)didClickCancelBtn:(id)arg1;
- (void)configureBottomView;
- (void)switchToTimeEffectsViewWithAnimation:(_Bool)arg1;
- (void)swithToTimeMachineType:(long long)arg1 withBeginTime:(double)arg2 animation:(_Bool)arg3;
- (void)switchToFilterEffectsViewWithAnimation:(_Bool)arg1;
- (void)loadFirstPreviewFrame;
- (void)configureTimeBar;
- (void)refreshSelectEffectTimeWithBeginTime:(double)arg1;
- (void)refreshPlayProgress;
- (void)refreshEffectFragments;
- (void)reloadPreviewFrames;
- (void)buildViews;
- (void)configurePlayer;
- (void)setExclusiveTouchForView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 player:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

