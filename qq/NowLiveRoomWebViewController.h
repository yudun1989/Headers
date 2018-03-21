//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

#import <QQMainProject/DataReportDelegate-Protocol.h>
#import <QQMainProject/HPGrowingTextViewDelegate-Protocol.h>
#import <QQMainProject/NWAVLogDelegate-Protocol.h>
#import <QQMainProject/NWAVNotifyDelegate-Protocol.h>
#import <QQMainProject/NWAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/PLTopPopNetworkTipsViewDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>

@class BeforeRoomPerf, HPGrowingTextView, NLRoomDRHelper, NSDate, NSDictionary, NSString, NWVideoRender, NoRetainTimer, NowLiveRoomBackGroundView, NowLiveRoomLoadingView, NowLiveRoomPreviewView, NowLiveRoomShareHelper, NowStoryNextRoomReqModel, NowStoryNextRoomRespModel, PGCStoryModel, PLCommonLoadingView, UIButton, UILabel, UINavigationController, UIView;
@protocol NowLiveRoomDelegate;

@interface NowLiveRoomWebViewController : QQWebViewController <NWAVNotifyDelegate, NWAVLogDelegate, HPGrowingTextViewDelegate, PLTopPopNetworkTipsViewDelegate, NWAudioSessionManagerDelegate, QQAudioSessionManagerDelegate, DataReportDelegate>
{
    NowLiveRoomShareHelper *_shareHelper;
    NLRoomDRHelper *_drHelper;
    _Bool _bFirstFrame;
    NoRetainTimer *_timeoutTimer;
    NoRetainTimer *_delayTimer;
    int _operType;
    _Bool _bLoading;
    _Bool _isOrigNavHidden;
    _Bool _isOrigStatusBarHidden;
    _Bool _navigationBarShow;
    double startTime1;
    double startTime2;
    double startTime3;
    double startTime4;
    _Bool _isDeatived;
    int sdkType;
    NoRetainTimer *_liuchangTimer;
    int _hdindex;
    _Bool _handelGestureRecognizer;
    _Bool _isInPageVC;
    _Bool _isShareViewShow;
    _Bool _isChargeViewShow;
    _Bool _isCleanScreen;
    _Bool _isAppear;
    _Bool _isH5LoadSucc;
    _Bool _isH5LoadFail;
    _Bool _isReuseRender;
    _Bool _isPanoramic;
    int _openLiveRoomType;
    int _firstType;
    int _type;
    int _state;
    int _viewWillAppearCount;
    int _viewDidAppearCount;
    NSString *_roomId;
    id <NowLiveRoomDelegate> _delegate;
    UINavigationController *_parentNav;
    NSString *_previewImageURL;
    BeforeRoomPerf *_perf;
    NowStoryNextRoomReqModel *_topicModel;
    PGCStoryModel *_storyModel;
    NSDictionary *_h5ParamsDic;
    NowLiveRoomPreviewView *_previewImageview;
    UIView *_videoView;
    HPGrowingTextView *_growingTextView;
    UIButton *_closeBtn;
    UIButton *_restoreBtn;
    NowLiveRoomLoadingView *_bufferView;
    PLCommonLoadingView *_commonLoadingView;
    UILabel *_waitHostView;
    UIButton *_keyboardDismissBtn;
    UIButton *_screenHorBtn;
    UIButton *_screenVertBtn;
    UIButton *_screenCloseBtn;
    NSString *_videoUrl;
    unsigned long long _roomStartTime;
    NSDictionary *_resultDict;
    NWVideoRender *_videoRender;
    NowStoryNextRoomRespModel *_roomModel;
    NSDate *_timeDate;
    NSString *_fromid;
    NowLiveRoomBackGroundView *_backView;
    NSString *_nearbyVideoTimeStampCallback;
}

@property(retain, nonatomic) NSString *nearbyVideoTimeStampCallback; // @synthesize nearbyVideoTimeStampCallback=_nearbyVideoTimeStampCallback;
@property(retain, nonatomic) NowLiveRoomBackGroundView *backView; // @synthesize backView=_backView;
@property(nonatomic) _Bool isPanoramic; // @synthesize isPanoramic=_isPanoramic;
@property(copy, nonatomic) NSString *fromid; // @synthesize fromid=_fromid;
@property(retain, nonatomic) NSDate *timeDate; // @synthesize timeDate=_timeDate;
@property(retain, nonatomic) NowStoryNextRoomRespModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) _Bool isReuseRender; // @synthesize isReuseRender=_isReuseRender;
@property(retain, nonatomic) NWVideoRender *videoRender; // @synthesize videoRender=_videoRender;
@property(nonatomic) _Bool isH5LoadFail; // @synthesize isH5LoadFail=_isH5LoadFail;
@property(nonatomic) _Bool isH5LoadSucc; // @synthesize isH5LoadSucc=_isH5LoadSucc;
@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
@property(nonatomic) int viewDidAppearCount; // @synthesize viewDidAppearCount=_viewDidAppearCount;
@property(nonatomic) int viewWillAppearCount; // @synthesize viewWillAppearCount=_viewWillAppearCount;
@property(nonatomic) unsigned long long roomStartTime; // @synthesize roomStartTime=_roomStartTime;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) _Bool isCleanScreen; // @synthesize isCleanScreen=_isCleanScreen;
@property(nonatomic) _Bool isChargeViewShow; // @synthesize isChargeViewShow=_isChargeViewShow;
@property(nonatomic) _Bool isShareViewShow; // @synthesize isShareViewShow=_isShareViewShow;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *screenCloseBtn; // @synthesize screenCloseBtn=_screenCloseBtn;
@property(retain, nonatomic) UIButton *screenVertBtn; // @synthesize screenVertBtn=_screenVertBtn;
@property(retain, nonatomic) UIButton *screenHorBtn; // @synthesize screenHorBtn=_screenHorBtn;
@property(retain, nonatomic) NLRoomDRHelper *drHelper; // @synthesize drHelper=_drHelper;
@property(retain, nonatomic) UIButton *keyboardDismissBtn; // @synthesize keyboardDismissBtn=_keyboardDismissBtn;
@property(retain, nonatomic) UILabel *waitHostView; // @synthesize waitHostView=_waitHostView;
@property(retain, nonatomic) PLCommonLoadingView *commonLoadingView; // @synthesize commonLoadingView=_commonLoadingView;
@property(retain, nonatomic) NowLiveRoomLoadingView *bufferView; // @synthesize bufferView=_bufferView;
@property(retain, nonatomic) UIButton *restoreBtn; // @synthesize restoreBtn=_restoreBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) HPGrowingTextView *growingTextView; // @synthesize growingTextView=_growingTextView;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) NowLiveRoomPreviewView *previewImageview; // @synthesize previewImageview=_previewImageview;
@property(nonatomic) _Bool isInPageVC; // @synthesize isInPageVC=_isInPageVC;
@property(retain, nonatomic) NSDictionary *h5ParamsDic; // @synthesize h5ParamsDic=_h5ParamsDic;
@property(retain, nonatomic) PGCStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(retain, nonatomic) NowStoryNextRoomReqModel *topicModel; // @synthesize topicModel=_topicModel;
@property(retain, nonatomic) BeforeRoomPerf *perf; // @synthesize perf=_perf;
@property(nonatomic) int firstType; // @synthesize firstType=_firstType;
@property(nonatomic) int openLiveRoomType; // @synthesize openLiveRoomType=_openLiveRoomType;
@property(nonatomic) _Bool handelGestureRecognizer; // @synthesize handelGestureRecognizer=_handelGestureRecognizer;
@property(retain, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(nonatomic) __weak UINavigationController *parentNav; // @synthesize parentNav=_parentNav;
@property(nonatomic) __weak id <NowLiveRoomDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)changeSuperViewToBackView;
- (_Bool)isShowNowBtnLoading;
- (void)onIntterruptEnd;
- (void)onDeactiveWithSystem;
- (void)onAudioSessionDeactive;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (_Bool)activeCategoryModel:(id)arg1 error:(id *)arg2;
- (void)reportAVData:(id)arg1 tid:(id)arg2 fieldStr:(id)arg3 dataStr:(id)arg4;
- (void)dataReportWithAction:(id)arg1 obj1:(id)arg2 obj2:(id)arg3 source:(id)arg4 timelong:(id)arg5;
- (void)reportEnterRoomCGIError;
- (unsigned long long)supportedInterfaceOrientations;
- (id)calcRoomUrlStr:(id)arg1;
- (void)reportClientStateToWeb;
- (void)activeApp;
- (void)loadNewGuideView;
- (void)startLoading;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)resetlayout;
- (void)reStartPlay;
- (id)navigationController;
- (id)mqq_app_setVideoTimeStampCallback:(id)arg1;
- (id)mqq_app_changeVideoRate:(id)arg1;
- (id)mqq_app_contentLoaded:(id)arg1;
- (id)mqq_app_setWaitHostViewState:(id)arg1;
- (id)mqq_app_showNavigationBar:(id)arg1;
- (id)mqq_app_closeClient:(id)arg1;
- (id)mqq_app_getClientState:(id)arg1;
- (id)mqq_app_loadFailed:(id)arg1;
- (id)mqq_app_loadSucc:(id)arg1;
- (id)mqq_app_openUrl:(id)arg1;
- (id)mqq_app_shareToQQ:(id)arg1;
- (id)mqq_app_beginShare:(id)arg1;
- (id)mqq_app_endDraw:(id)arg1;
- (id)mqq_app_beginDraw:(id)arg1;
- (id)mqq_app_explore:(id)arg1;
- (id)mqq_app_close:(id)arg1;
- (id)mqq_app_showKeyboard:(id)arg1;
- (id)mqq_app_statusChange:(id)arg1;
- (id)mqq_app_setStatusBarStyle:(id)arg1;
- (id)mqq_app_closeAndForward:(id)arg1;
- (id)mqq_app_cleanScreen:(id)arg1;
- (void)removeLiveloadingView;
- (void)showLiveloadingView;
- (void)showNonWifiToast;
- (void)handleHostNetUnstable;
- (void)handleVideoPause;
- (void)showWaitHostView;
- (void)removeWaitHostView;
- (void)showEnterRoomErrorView;
- (void)showLoadView;
- (void)removeLoadingView;
- (void)showRetryTopTip;
- (void)onDelayTimer:(id)arg1;
- (void)stopDelayTimer;
- (void)startDelayTimer;
- (void)onTimeoutTimer:(id)arg1;
- (void)stopTimeoutTimer;
- (void)startTimeoutTimer:(double)arg1;
- (void)OnMessage2:(unsigned int)arg1 withidentify:(id)arg2;
- (void)onMessage:(unsigned int)arg1;
- (void)onVideoSize:(int)arg1 andHeight:(int)arg2;
- (void)onLogFinal:(id)arg1 LogStr:(id)arg2;
- (void)onLogDev:(id)arg1 LogStr:(id)arg2;
- (void)hscreenBtnClick;
- (void)vscreenBtnClick;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideScreenControlView;
- (void)showScreenControlView;
- (void)setRoomMode:(unsigned long long)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)restoreScreen;
- (void)close;
- (void)closeWithoutDeactive;
- (void)closeRoom;
- (void)exploreMore;
- (void)dismissKeyboard;
- (void)changeFrameWithKeyboardHeight:(int)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleNetworkChange:(id)arg1;
- (void)onQuit;
- (void)onReConnect;
- (void)setEnterType:(unsigned long long)arg1;
- (void)showPreviewImage:(_Bool)arg1;
- (void)viewDidLoad;
- (void)checkH5LoadSucc;
- (void)loadHybridView;
- (void)loadH5View;
- (void)appEnterForegound;
- (void)appEnterBackground;
- (id)visibilityChangedScript:(_Bool)arg1;
- (void)loadSDKView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadWebViewContent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)startEnterRoom:(id)arg1;
- (void)qiehuanliuchang;
- (void)getRoomInfo;
- (void)reGetPlayUrl;
- (void)leftButtonClick:(id)arg1;
- (void)reportModuleTime;
- (void)dealloc;
- (void)_initParams;
- (id)initWithRoomId:(id)arg1 openLiveRoomType:(int)arg2 firstType:(int)arg3 isInPageVc:(_Bool)arg4 fromid:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

