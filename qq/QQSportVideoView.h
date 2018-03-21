//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/TVKLitePlaybackDelegate-Protocol.h>

@class NSString, QZVideoPlayerToolbar, SSProgressView, TVKLitePlayer, UIButton, UILabel, UITapGestureRecognizer;

@interface QQSportVideoView : UIView <TVKLitePlaybackDelegate>
{
    _Bool _needMute;
    _Bool _needCountDown;
    _Bool _isFullScreenMode;
    int _playerState;
    int _currentNetworkStatus;
    TVKLitePlayer *_player;
    QZVideoPlayerToolbar *_toolBar;
    NSString *_videoID;
    CDUnknownBlockType _enterFullScreenAction;
    CDUnknownBlockType _exitFullScreenAction;
    UIButton *_muteButton;
    UIButton *_centerButton;
    UILabel *_countDownLabel;
    SSProgressView *_progressView;
    UITapGestureRecognizer *_tapRecognizer;
    struct CGRect _primalFrame;
}

@property(nonatomic) _Bool isFullScreenMode; // @synthesize isFullScreenMode=_isFullScreenMode;
@property(nonatomic) int currentNetworkStatus; // @synthesize currentNetworkStatus=_currentNetworkStatus;
@property(nonatomic) int playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) SSProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UIButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(copy, nonatomic) CDUnknownBlockType exitFullScreenAction; // @synthesize exitFullScreenAction=_exitFullScreenAction;
@property(copy, nonatomic) CDUnknownBlockType enterFullScreenAction; // @synthesize enterFullScreenAction=_enterFullScreenAction;
@property(nonatomic) struct CGRect primalFrame; // @synthesize primalFrame=_primalFrame;
@property(nonatomic) _Bool needCountDown; // @synthesize needCountDown=_needCountDown;
@property(nonatomic) _Bool needMute; // @synthesize needMute=_needMute;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(retain, nonatomic) QZVideoPlayerToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) TVKLitePlayer *player; // @synthesize player=_player;
- (void)mediaPlayer:(id)arg1 stateChanged:(int)arg2 withError:(id)arg3;
- (void)mediaPlayer:(id)arg1 progressUpdated:(double)arg2 duration:(double)arg3;
- (_Bool)isNetworkAvailableNow;
- (void)singleTapAction:(id)arg1;
- (void)zoomButtonAction:(id)arg1;
- (void)sliderDragAction:(id)arg1;
- (void)centerButtonAction:(id)arg1;
- (void)muteButtonAction:(id)arg1;
- (void)exitFullScreenMode;
- (void)enterFullScreenMode;
- (void)hideProgressView;
- (void)showProgressView;
- (void)autoHideCenterButton;
- (void)hideCenterButton;
- (void)showCenterButton;
- (void)autoHideToolBar;
- (void)hideToolBar;
- (void)showToolBar;
- (void)updateToolBar;
- (void)updateCountDownTimeWithDuration:(double)arg1;
- (void)updateSliderTimeWithCurrentTime:(double)arg1 Duration:(double)arg2;
- (void)updatePlayerFormatType;
- (void)reportData;
- (void)vocal;
- (void)mute;
- (void)seekForTime:(double)arg1;
- (void)stop;
- (void)pause;
- (void)replay;
- (void)play;
- (void)loadVideo;
- (void)updateUserInterface;
- (void)resetPlayer;
- (void)resetUserInterface;
- (void)resetInfo;
- (void)setupPlayer;
- (void)setupUserInterface;
- (void)setupInfoWithInfo:(id)arg1;
- (_Bool)hide;
- (_Bool)showWithInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

