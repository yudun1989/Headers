//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVCommodityButtonViewDelegate-Protocol.h"
#import "TTVCommodityViewDelegate-Protocol.h"
#import "TTVDemandPlayerDelegate-Protocol.h"
#import "TTVDetailContext-Protocol.h"

@class NSString, TTVCommodityView, TTVDemandPlayerContext, TTVDetailContentEntity, TTVDetailStateStore, TTVPlayVideo, TTVideoShareMovie, UIView, UIViewController;
@protocol TTVArticleProtocol, TTVDetailPlayControlDelegate, TTVPlayerDoubleTap666Delegate, TTVVideoDetailMovieBannerProtocol;

@interface TTVDetailPlayControl : NSObject <TTVDemandPlayerDelegate, TTVCommodityViewDelegate, TTVCommodityButtonViewDelegate, TTVDetailContext>
{
    _Bool _movieViewInitiated;
    _Bool _isInactive;
    TTVPlayVideo *_movieView;
    TTVideoShareMovie *_shareMovie;
    TTVDetailStateStore *_detailStateStore;
    id <TTVDetailPlayControlDelegate> _delegate;
    id <TTVPlayerDoubleTap666Delegate> _doubleTap666Delegate;
    UIView<TTVVideoDetailMovieBannerProtocol> *_movieBanner;
    UIViewController *_viewController;
    long long _enableTrackSDK;
    id <TTVArticleProtocol> _videoInfo;
    TTVCommodityView *_commodityView;
    TTVDemandPlayerContext *_context;
    TTVDetailContentEntity *_entity;
    struct CGRect _movieFrame;
}

@property(nonatomic) __weak TTVDetailContentEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) TTVDemandPlayerContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool isInactive; // @synthesize isInactive=_isInactive;
@property(nonatomic) _Bool movieViewInitiated; // @synthesize movieViewInitiated=_movieViewInitiated;
@property(retain, nonatomic) TTVCommodityView *commodityView; // @synthesize commodityView=_commodityView;
@property(retain, nonatomic) id <TTVArticleProtocol> videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) long long enableTrackSDK; // @synthesize enableTrackSDK=_enableTrackSDK;
@property(nonatomic) struct CGRect movieFrame; // @synthesize movieFrame=_movieFrame;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UIView<TTVVideoDetailMovieBannerProtocol> *movieBanner; // @synthesize movieBanner=_movieBanner;
@property(nonatomic) __weak id <TTVPlayerDoubleTap666Delegate> doubleTap666Delegate; // @synthesize doubleTap666Delegate=_doubleTap666Delegate;
@property(nonatomic) __weak id <TTVDetailPlayControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTVDetailStateStore *detailStateStore; // @synthesize detailStateStore=_detailStateStore;
@property(retain, nonatomic) TTVideoShareMovie *shareMovie; // @synthesize shareMovie=_shareMovie;
@property(retain, nonatomic) TTVPlayVideo *movieView; // @synthesize movieView=_movieView;
- (void).cxx_destruct;
- (void)playingDirectShareActionWithActivityType:(id)arg1;
- (void)directShareActionWithActivityType:(id)arg1;
- (void)videoOverMoreButtonClicked;
- (void)playingMoreButtonClicked;
- (void)fullScreenButtonClicked:(id)arg1;
- (void)videoOverShareButtonClicked;
- (void)playingShareButtonClicked;
- (id)detalViewControllerAtIndex:(long long)arg1;
- (void)skStoreViewDidDisappear:(id)arg1;
- (void)skStoreViewDidAppear:(id)arg1;
- (void)receiveAdClick:(id)arg1;
- (id)movieShotView;
- (_Bool)shouldLayoutSubviews;
- (void)movieViewPlayFinished:(id)arg1;
- (void)stopMovieViewPlay:(id)arg1;
- (void)ttv_ApplicationDidBecomeActiveNotification:(id)arg1;
- (void)ttv_ApplicationWillResignActiveNotification:(id)arg1;
- (void)ttv_clickCommodityButton;
- (void)attachMovieView;
- (id)addMovieShotView;
- (void)invalideMovieViewWithFinishedBlock:(CDUnknownBlockType)arg1;
- (void)invalideMovieView;
- (void)ttv_configADFinishedView:(id)arg1;
- (_Bool)ttv_shouldAllocTipAdNewCreator;
- (void)addUrlTracker;
- (void)playButtonClicked;
- (struct CGRect)frameForMovieView;
- (void)addMovieViewObserver;
- (void)showDetailButtonIfNeeded;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)commodityViewClosed;
- (id)getCommodityPosition;
- (void)addCommodity;
- (_Bool)isADTipCreator:(id)arg1;
- (_Bool)isDetailArticleEnable;
- (void)setToolBarHidden:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resumeMovie;
- (void)pauseMovieIfNeeded;
- (void)playMovieIfNeededAndRebindToMovieShotView:(_Bool)arg1;
- (void)playMovieIfNeeded;
- (void)rebindToMovieShotView:(_Bool)arg1;
- (_Bool)shouldAutoPlay;
- (_Bool)isFirstPlayMovie;
- (_Bool)isMovieFullScreen;
- (void)autoClickedPlayButton;
- (void)ttv_showPrePlayBtnWithBannerHeight:(double)arg1;
- (_Bool)p_isValidPlayPreVideo;
- (id)navigationController;
- (float)watchPercent;
- (void)updateFrame;
- (void)configMovieView;
- (struct CGRect)ttv_movieViewFrameAfterExitFullscreen;
- (void)actionChangeCallbackWithAction:(id)arg1;
- (void)playerOrientationState:(_Bool)arg1;
- (void)playerPlaybackState:(long long)arg1;
- (void)playerLoadingState:(unsigned long long)arg1;
- (void)ttv_kvo;
- (_Bool)enableRotate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

