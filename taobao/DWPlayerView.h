//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DWPopLayerView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DWContext, DWDebugView, DWFlowPromptView, DWPlayerControlHUD, DWPlayerErrorView, DWSlider, DWSmallProgressView, DWThumbnailView, DWVideoFrontModel, MPVolumeView, NSDate, NSDateFormatter, NSMapTable, NSString, NSTimer, NSURL, TBMPBPlayerView, TBSVideoIconView, TBSVideoMenuView, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UISlider, UITapGestureRecognizer, UIView;
@protocol DWDanmakuDelelgate, DWPlayerViewDelegate, TBSVideoMenuActionProtocol;

@interface DWPlayerView : DWPopLayerView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    _Bool _disableFreeFlowButton;
    _Bool _exitFullScreenWhenFinish;
    _Bool _shouldShowCloseButton;
    _Bool _disableCache;
    _Bool _preload;
    _Bool _normalScreenAndNotMutedForGestureSeekOperation;
    _Bool _allowWiFiAutoPlay;
    _Bool _showCustomBtn;
    _Bool _hasGoods;
    _Bool _showLikeBtn;
    _Bool _showReport;
    _Bool _isMenuViewShow;
    _Bool _showDanmakuBtn;
    _Bool _showSendDanmakuBtn;
    _Bool _hideFullScreenButton;
    _Bool _playReady;
    _Bool _miniProgressViewHidden;
    _Bool _networkErrorViewHidden;
    _Bool _playErrorViewHidden;
    _Bool _toastViewHidden;
    _Bool _gestureViewHidden;
    _Bool _isDragingProgress;
    _Bool _isComplete;
    _Bool _isPlaying;
    _Bool _allowShowControls;
    _Bool _allowShowIndicator;
    _Bool _isOperating;
    _Bool _isHideNotWiFiToast;
    _Bool _seeking;
    _Bool _enterForegroundShouldPlay;
    _Bool _loadingHidden;
    _Bool _shouldHideTimeLabel;
    _Bool _videoFromLocal;
    _Bool _isShowFlowPromptView;
    _Bool _isDanmakuAllowShow;
    _Bool _startLoadVideo;
    _Bool _isRetrying;
    _Bool _useProxyServer;
    _Bool _isFirstPlayingEventFired;
    _Bool _customToastTopMargin;
    DWContext *_context;
    NSURL *_videoURL;
    long long _controlsTimeoutPeriod;
    double _playTime;
    double _playOnceTime;
    CDUnknownBlockType _bigPlayButtonHandler;
    id <DWPlayerViewDelegate> _delegate;
    id <DWDanmakuDelelgate> _danmakuDelegate;
    id <TBSVideoMenuActionProtocol> _menuActionDelegate;
    UIView *_controlsView;
    UIImageView *_headerBar;
    UIView *_headerBarContentView;
    DWThumbnailView *_thumbnailView;
    UIButton *_danmakuBtn;
    UIView *_rightInteractiveView;
    TBSVideoIconView *_customBtn;
    UIButton *_menuBtn;
    TBSVideoIconView *_likeBtn;
    TBSVideoMenuView *_menuView;
    UIButton *_menuFullscreenBgBtn;
    TBSVideoIconView *_sendDanmakuBtn;
    UIView *_indicatorOverlayView;
    UIButton *_closeButton;
    UIView *_controllersBar;
    DWSmallProgressView *_smallProgressView;
    UIButton *_muteBtn;
    UIButton *_freeFlowButton;
    NSString *_freeFlowURL;
    UIButton *_landscapeBackBtn;
    UIButton *_playButton;
    DWSlider *_progressIndicator;
    UIButton *_fullscreenButton;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UILabel *_playerTimeLabel;
    UILabel *_playerTimeLabel2;
    DWPlayerControlHUD *_controlHUD;
    DWPlayerErrorView *_activityIndicator;
    DWFlowPromptView *_promptView;
    long long _networkStatus;
    double _totalTime;
    double _playNeedSeekTime;
    double _playNeedSeekProgress;
    CDUnknownBlockType _networkHandler;
    NSString *_dimensions;
    NSString *_volume;
    NSString *_URL;
    NSString *_playDelayTime;
    NSString *_mimeType;
    NSString *_connectionSpeed;
    NSString *_droppedFrames;
    double _toastTopMargin;
    UIView *_upLikeView;
    UIView *_downLikeView;
    long long _playerErrorCode;
    TBMPBPlayerView *_videoView;
    NSDateFormatter *_dateFormatter;
    NSMapTable *_indicatorViews;
    UIView *_currentIndicatorView;
    long long _playerStatus;
    long long _viewMode;
    MPVolumeView *_volumeView;
    UIView *_customView;
    UISlider *_volumeViewSlider;
    NSTimer *_controlsTimer;
    NSDate *_startPlayDate;
    DWVideoFrontModel *_frontModel;
    DWDebugView *_debugView;
    double _playbackTimeBeforeRetry;
    long long _orientation;
}

+ (void)registerImageLoaderWithClass:(id)arg1;
+ (void)registerConfigWithClass:(id)arg1;
+ (id)md5:(id)arg1;
@property(nonatomic) _Bool customToastTopMargin; // @synthesize customToastTopMargin=_customToastTopMargin;
@property(nonatomic) _Bool isFirstPlayingEventFired; // @synthesize isFirstPlayingEventFired=_isFirstPlayingEventFired;
@property(nonatomic) _Bool useProxyServer; // @synthesize useProxyServer=_useProxyServer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double playbackTimeBeforeRetry; // @synthesize playbackTimeBeforeRetry=_playbackTimeBeforeRetry;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying=_isRetrying;
@property(nonatomic) _Bool startLoadVideo; // @synthesize startLoadVideo=_startLoadVideo;
@property(retain, nonatomic) DWDebugView *debugView; // @synthesize debugView=_debugView;
@property(retain, nonatomic) DWVideoFrontModel *frontModel; // @synthesize frontModel=_frontModel;
@property(retain, nonatomic) NSDate *startPlayDate; // @synthesize startPlayDate=_startPlayDate;
@property(nonatomic) _Bool isDanmakuAllowShow; // @synthesize isDanmakuAllowShow=_isDanmakuAllowShow;
@property(nonatomic) _Bool isShowFlowPromptView; // @synthesize isShowFlowPromptView=_isShowFlowPromptView;
@property(nonatomic, getter=isVideoFromLocal) _Bool videoFromLocal; // @synthesize videoFromLocal=_videoFromLocal;
@property(nonatomic) _Bool shouldHideTimeLabel; // @synthesize shouldHideTimeLabel=_shouldHideTimeLabel;
@property(nonatomic) _Bool loadingHidden; // @synthesize loadingHidden=_loadingHidden;
@property(retain, nonatomic) NSTimer *controlsTimer; // @synthesize controlsTimer=_controlsTimer;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
@property(nonatomic) __weak UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) _Bool enterForegroundShouldPlay; // @synthesize enterForegroundShouldPlay=_enterForegroundShouldPlay;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) long long playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) UIView *currentIndicatorView; // @synthesize currentIndicatorView=_currentIndicatorView;
@property(retain, nonatomic) NSMapTable *indicatorViews; // @synthesize indicatorViews=_indicatorViews;
@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak TBMPBPlayerView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) long long playerErrorCode; // @synthesize playerErrorCode=_playerErrorCode;
@property(retain, nonatomic) UIView *downLikeView; // @synthesize downLikeView=_downLikeView;
@property(retain, nonatomic) UIView *upLikeView; // @synthesize upLikeView=_upLikeView;
@property(nonatomic) double toastTopMargin; // @synthesize toastTopMargin=_toastTopMargin;
@property(nonatomic) _Bool isHideNotWiFiToast; // @synthesize isHideNotWiFiToast=_isHideNotWiFiToast;
@property(nonatomic) _Bool isOperating; // @synthesize isOperating=_isOperating;
@property(copy, nonatomic) NSString *droppedFrames; // @synthesize droppedFrames=_droppedFrames;
@property(copy, nonatomic) NSString *connectionSpeed; // @synthesize connectionSpeed=_connectionSpeed;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *playDelayTime; // @synthesize playDelayTime=_playDelayTime;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSString *dimensions; // @synthesize dimensions=_dimensions;
@property(copy, nonatomic) CDUnknownBlockType networkHandler; // @synthesize networkHandler=_networkHandler;
@property(nonatomic) _Bool allowShowIndicator; // @synthesize allowShowIndicator=_allowShowIndicator;
@property(nonatomic) _Bool allowShowControls; // @synthesize allowShowControls=_allowShowControls;
@property(nonatomic) double playNeedSeekProgress; // @synthesize playNeedSeekProgress=_playNeedSeekProgress;
@property(nonatomic) double playNeedSeekTime; // @synthesize playNeedSeekTime=_playNeedSeekTime;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) _Bool isDragingProgress; // @synthesize isDragingProgress=_isDragingProgress;
@property(retain, nonatomic) DWFlowPromptView *promptView; // @synthesize promptView=_promptView;
@property(retain, nonatomic) DWPlayerErrorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) DWPlayerControlHUD *controlHUD; // @synthesize controlHUD=_controlHUD;
@property(retain, nonatomic) UILabel *playerTimeLabel2; // @synthesize playerTimeLabel2=_playerTimeLabel2;
@property(retain, nonatomic) UILabel *playerTimeLabel; // @synthesize playerTimeLabel=_playerTimeLabel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIButton *fullscreenButton; // @synthesize fullscreenButton=_fullscreenButton;
@property(retain, nonatomic) DWSlider *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *landscapeBackBtn; // @synthesize landscapeBackBtn=_landscapeBackBtn;
@property(nonatomic) _Bool gestureViewHidden; // @synthesize gestureViewHidden=_gestureViewHidden;
@property(nonatomic) _Bool toastViewHidden; // @synthesize toastViewHidden=_toastViewHidden;
@property(nonatomic) _Bool playErrorViewHidden; // @synthesize playErrorViewHidden=_playErrorViewHidden;
@property(nonatomic) _Bool networkErrorViewHidden; // @synthesize networkErrorViewHidden=_networkErrorViewHidden;
@property(nonatomic) _Bool miniProgressViewHidden; // @synthesize miniProgressViewHidden=_miniProgressViewHidden;
@property(copy, nonatomic) NSString *freeFlowURL; // @synthesize freeFlowURL=_freeFlowURL;
@property(retain, nonatomic) UIButton *freeFlowButton; // @synthesize freeFlowButton=_freeFlowButton;
@property(retain, nonatomic) UIButton *muteBtn; // @synthesize muteBtn=_muteBtn;
@property(retain, nonatomic) DWSmallProgressView *smallProgressView; // @synthesize smallProgressView=_smallProgressView;
@property(retain, nonatomic) UIView *controllersBar; // @synthesize controllersBar=_controllersBar;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *indicatorOverlayView; // @synthesize indicatorOverlayView=_indicatorOverlayView;
@property(retain, nonatomic) TBSVideoIconView *sendDanmakuBtn; // @synthesize sendDanmakuBtn=_sendDanmakuBtn;
@property(retain, nonatomic) UIButton *menuFullscreenBgBtn; // @synthesize menuFullscreenBgBtn=_menuFullscreenBgBtn;
@property(retain, nonatomic) TBSVideoMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) TBSVideoIconView *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UIButton *menuBtn; // @synthesize menuBtn=_menuBtn;
@property(retain, nonatomic) TBSVideoIconView *customBtn; // @synthesize customBtn=_customBtn;
@property(retain, nonatomic) UIView *rightInteractiveView; // @synthesize rightInteractiveView=_rightInteractiveView;
@property(retain, nonatomic) UIButton *danmakuBtn; // @synthesize danmakuBtn=_danmakuBtn;
@property(retain, nonatomic) DWThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *headerBarContentView; // @synthesize headerBarContentView=_headerBarContentView;
@property(retain, nonatomic) UIImageView *headerBar; // @synthesize headerBar=_headerBar;
@property(retain, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) _Bool playReady; // @synthesize playReady=_playReady;
@property(nonatomic) __weak id <TBSVideoMenuActionProtocol> menuActionDelegate; // @synthesize menuActionDelegate=_menuActionDelegate;
@property(nonatomic) __weak id <DWDanmakuDelelgate> danmakuDelegate; // @synthesize danmakuDelegate=_danmakuDelegate;
@property(nonatomic) __weak id <DWPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType bigPlayButtonHandler; // @synthesize bigPlayButtonHandler=_bigPlayButtonHandler;
@property(nonatomic) _Bool hideFullScreenButton; // @synthesize hideFullScreenButton=_hideFullScreenButton;
@property(nonatomic) _Bool showSendDanmakuBtn; // @synthesize showSendDanmakuBtn=_showSendDanmakuBtn;
@property(nonatomic) _Bool showDanmakuBtn; // @synthesize showDanmakuBtn=_showDanmakuBtn;
@property(nonatomic) _Bool isMenuViewShow; // @synthesize isMenuViewShow=_isMenuViewShow;
@property(nonatomic) _Bool showReport; // @synthesize showReport=_showReport;
@property(nonatomic) _Bool showLikeBtn; // @synthesize showLikeBtn=_showLikeBtn;
@property(nonatomic) _Bool hasGoods; // @synthesize hasGoods=_hasGoods;
@property(nonatomic) _Bool showCustomBtn; // @synthesize showCustomBtn=_showCustomBtn;
@property(nonatomic) _Bool allowWiFiAutoPlay; // @synthesize allowWiFiAutoPlay=_allowWiFiAutoPlay;
@property(nonatomic) double playOnceTime; // @synthesize playOnceTime=_playOnceTime;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(nonatomic) _Bool normalScreenAndNotMutedForGestureSeekOperation; // @synthesize normalScreenAndNotMutedForGestureSeekOperation=_normalScreenAndNotMutedForGestureSeekOperation;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(nonatomic) _Bool disableCache; // @synthesize disableCache=_disableCache;
@property(nonatomic) _Bool shouldShowCloseButton; // @synthesize shouldShowCloseButton=_shouldShowCloseButton;
@property(nonatomic) _Bool exitFullScreenWhenFinish; // @synthesize exitFullScreenWhenFinish=_exitFullScreenWhenFinish;
@property(nonatomic) long long controlsTimeoutPeriod; // @synthesize controlsTimeoutPeriod=_controlsTimeoutPeriod;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) DWContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)updateNormalScreenAndNotMutedForGestureSeekOperation;
- (void)addViewToRightInteractiveView:(id)arg1 upOfLikeBtn:(_Bool)arg2 needLayout:(_Bool)arg3;
- (void)debugHUD:(id)arg1;
- (void)endLoading;
- (void)startLoading;
- (void)hideSmallProgressView;
- (void)showSmallProgressView;
- (void)hideThumbnailImageView;
- (void)showThumbnailImageView;
- (void)updateVideoFrontViewWithData:(id)arg1;
- (void)danmakuBtnClick;
- (void)changeDanmaBtn:(_Bool)arg1;
- (void)refreshPlayer;
- (void)playerDidFinishPlaying;
- (void)setupAnchorNaviView:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)hideIndicatorView:(id)arg1;
- (void)showIndicatorView:(id)arg1 withPriority:(long long)arg2;
- (void)showErrorPromptView:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
- (void)showNetworkPromptView;
- (_Bool)promptViewHidden;
- (void)hidePromptView;
- (void)showPromptView:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
- (void)seekToProgress:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)pause;
- (_Bool)netWorkIsWifi;
- (void)freeFlowToast;
- (void)flowToast2;
- (void)flowToast;
- (void)setPlayerInfo;
- (void)showFreeFlowButton;
- (void)checkFreeFlow;
- (void)play;
- (_Bool)checkNotNetwork;
- (void)readyPlay;
- (void)updateLoadedProgress;
- (void)playerTimeChanged:(double)arg1;
- (void)loadVideo;
- (void)updatePlayTime;
- (void)leaveFullScreenCompletionHandler;
- (void)leaveFullScreenTransform;
- (int)configuredPlayerType;
- (void)showBaseControllers;
- (void)hideBaseControllers;
- (void)setBufferTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)videoFrontClick;
- (void)setupNetworkStatusHandler;
- (void)showToast:(id)arg1 inView:(id)arg2 dismissAfterSeconds:(double)arg3 delayTime:(double)arg4;
- (void)updateCustomLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)onMuted:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool disableFreeFlowButton; // @synthesize disableFreeFlowButton=_disableFreeFlowButton;
@property(nonatomic) _Bool miniProgressAnchorHidden;
- (void)layoutCloseButtonFrame;
- (void)refreshUI;
- (void)pan:(id)arg1;
- (void)setupUI;
- (void)onFreeFlowButtonClicked:(id)arg1;
- (void)hideMenu;
- (void)showMenu:(_Bool)arg1;
- (void)showMenuBtnClicked:(id)arg1;
- (void)sendDanmaku;
- (void)updateIndicatorView;
- (void)hideControllersWithDelay:(double)arg1;
- (void)doHideControllersWithDelay:(double)arg1;
- (_Bool)videoCompleteOrError;
- (void)showControllersWithDelay:(double)arg1;
- (void)showControllersWithAutoDelay;
- (void)updateHeaderBar;
- (void)hidePlayerControlHUD;
- (void)showPlayerControlHUD;
- (void)panPlayerViewAction:(id)arg1;
- (void)tapPlayerViewAction;
- (void)toggleControlsWithAutoDelay;
- (void)refreshTimeLabelWithCurrent:(double)arg1;
- (void)refreshProgressIndicator;
- (void)resumeRefreshing:(id)arg1;
- (void)seek:(id)arg1;
- (void)pauseRefreshing:(id)arg1;
- (void)muteBtnClicked;
- (void)toggleFullscreen:(id)arg1;
- (void)bigPlayButtonClick:(id)arg1;
- (void)togglePlay:(id)arg1;
- (void)playerStalled;
- (void)playerFailedToPlayToEnd;
- (void)reachChanged:(id)arg1;
- (void)handleReachability:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)didBecomActive:(id)arg1;
- (void)willResignActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

