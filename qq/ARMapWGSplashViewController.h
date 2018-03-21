//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QARMapBaseViewController.h>

#import <QQMainProject/ARMapWGLoadingManagerDelegate-Protocol.h>
#import <QQMainProject/ARMapYunAnimViewDelegate-Protocol.h>

@class ARMapViewController, ARMapWGAnimView, ARMapWGLoadingManager, ARMapWGRegionView, ARMapWGYunBGView, ARMapYunAnimView, NSDictionary, NSString, NSTimer, QQAsynUrlImageView, QQAvatarView, QQProgressBar, REActivityBackgroundView, REStrokeLabel, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface ARMapWGSplashViewController : QARMapBaseViewController <ARMapWGLoadingManagerDelegate, ARMapYunAnimViewDelegate>
{
    ARMapViewController *_mapViewController;
    ARMapWGLoadingManager *_loadingManager;
    REActivityBackgroundView *_redPacketView;
    ARMapWGYunBGView *_yunBgView;
    ARMapWGAnimView *_wealthGodView;
    QQAsynUrlImageView *_logoView;
    UILabel *_logoName;
    ARMapWGRegionView *_regionView;
    UILabel *_tipsLabel;
    REStrokeLabel *_tipsStrokeLabel;
    UIButton *_enterButton;
    QQProgressBar *_progressBar;
    UILabel *_promptLabel;
    UITapGestureRecognizer *_tapGesture;
    ARMapYunAnimView *_yunAnimView;
    _Bool _hasLoadMap;
    _Bool _hasReceiveResp;
    _Bool _hasLoadLogo;
    _Bool _hasMapLoadFinish;
    _Bool _isLeftBtnClicked;
    NSTimer *_countDownTimer;
    _Bool _hasUpdateUI;
    _Bool _hasAdcodeInfo;
    NSTimer *_fakeProgressTimer;
    double _fakeProgress;
    int _resourceLoadFailCount;
    _Bool _hasRdmReportEntire;
    _Bool _hasRdmReportRequest;
    QQAvatarView *_avatarView;
    REStrokeLabel *_lbsTipsLabel;
    REStrokeLabel *_lbsTipsStrokeLabel;
    UIImageView *_lbsPackAddressIcon;
    UILabel *_lbsPackAddressLabel;
    _Bool _isPushViewController;
    _Bool _isLbsPackFromStructMsg;
    _Bool _isLbsCanDirectEnter;
    NSDictionary *_lbsPackDictionary;
}

@property(copy, nonatomic) NSDictionary *lbsPackDictionary; // @synthesize lbsPackDictionary=_lbsPackDictionary;
@property(nonatomic) _Bool isLbsCanDirectEnter; // @synthesize isLbsCanDirectEnter=_isLbsCanDirectEnter;
@property(nonatomic) _Bool isLbsPackFromStructMsg; // @synthesize isLbsPackFromStructMsg=_isLbsPackFromStructMsg;
@property(nonatomic) _Bool isPushViewController; // @synthesize isPushViewController=_isPushViewController;
- (void).cxx_destruct;
- (void)hideLbsPackUI;
- (void)showLbsPackUI;
- (_Bool)needShowLbsPackUI:(int)arg1;
- (void)rdmReportRequest:(_Bool)arg1 params:(id)arg2;
- (void)rdmReportEntire;
- (void)reportWhenEnterBtnClick;
- (void)reportWhenUpdateUI;
- (void)reportWhenClose;
- (void)reportWhenLoadFail:(unsigned long long)arg1;
- (void)reportWhenLoadSuccess;
- (void)reportWhenViewDidLoad;
- (id)countDownTimeString:(int)arg1;
- (id)beginTimeString;
- (void)didEnterforeground:(id)arg1;
- (void)showLbsUnAuthTips;
- (void)updateFakeProgress;
- (void)startFakeProgressTimer;
- (void)stopFakeProgressTimer;
- (void)updateCountDownTime;
- (void)startCountDownTimer;
- (void)stopCountDownTimer;
- (void)updateRedPacketViewBG:(_Bool)arg1;
- (void)setRedPacketViewBG;
- (void)updateRedPacketView:(int)arg1;
- (void)updateProgressBar:(int)arg1;
- (void)updateProgressBar;
- (void)updateEnterButton:(int)arg1;
- (void)updateEnterButton;
- (void)updateYunBgView:(int)arg1;
- (void)updateWealthGodView:(int)arg1;
- (void)setTipsLabelText:(id)arg1;
- (void)updateTipsLabel:(int)arg1;
- (void)updateTipsLabel;
- (void)updateRegionView:(int)arg1;
- (void)updateDefaultLogoWhenFailedIfNeed;
- (void)updateLogoLbsPack;
- (void)updateLogoIfNeed;
- (void)updateUI:(int)arg1;
- (void)updateUI;
- (void)logoutBeforeNotification;
- (void)onCurfewFinished:(id)arg1;
- (void)onCurfewStarted:(id)arg1;
- (void)onWealthGodScheduleGetFailedNotification:(id)arg1;
- (void)onWealthGodReceiveRespNotification:(id)arg1;
- (void)onWealthGodScheduleDidChangeNotification:(id)arg1;
- (void)loadMapIfNeed;
- (void)delayMapLoadFinish;
- (void)onMapLoadFinish:(id)arg1;
- (void)onMapLoadBegin;
- (void)onLoadingCheckFail:(unsigned long long)arg1;
- (void)onLoadingProgress:(float)arg1;
- (void)onYunAnimStopWhenAppEnterBackground;
- (void)onYunAnimDidAppear;
- (void)startYunAnimation;
- (void)finishProgress;
- (void)startProgress;
- (void)onReloadClicked:(id)arg1;
- (void)goToMapViewController;
- (void)onEnterClicked:(id)arg1;
- (int)getDefaultUIStatus;
- (id)getAdcodeInfoOrLastInfo;
- (void)requestWealthGodScheduleIfNeed;
- (void)viewDidLoad;
- (void)quitViewController:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

