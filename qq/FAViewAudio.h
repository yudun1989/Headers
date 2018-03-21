//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAViewBase.h>

#import <QQMainProject/AVAudioPlayerDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>

@class AVAudioPlayer, FASlider, NSString, NSTimerNonRetain, QQProgressBar, UIButton, UIImageView, UILabel;

@interface FAViewAudio : FAViewBase <QQAudioSessionManagerDelegate, AVAudioPlayerDelegate>
{
    UIImageView *_audioBgd;
    UILabel *_audioName;
    UILabel *_sizeTimeLabel;
    UIButton *_playBtn;
    UILabel *_startTimeLabel;
    UILabel *_endTimeLabel;
    FASlider *_audioProgressSlider;
    NSTimerNonRetain *_audioTimer;
    AVAudioPlayer *_audioPlayer;
    UIButton *_cancelButton;
    UIButton *_operateButton;
    UILabel *_progressLabel;
    QQProgressBar *_progressView;
    _Bool _hasAudioSession;
    _Bool _playing;
    NSString *_audioPath;
}

@property(retain, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)canViewRotate;
- (void)handleVideoChatStart;
- (void)dragFinish:(id)arg1;
- (void)dragBegin:(id)arg1;
- (void)drag:(double)arg1;
- (void)pause:(id)arg1;
- (void)updateAudioSlider;
- (void)stopTimer;
- (void)startTimer;
- (void)play:(id)arg1;
- (void)updateAudioPlayerWithInfo:(id)arg1;
- (void)updateFileNameWithInfo:(id)arg1;
- (void)updateSizeTimeLabel:(id)arg1;
- (void)updateStopIconWithInfo:(id)arg1;
- (void)updateProgressDescWithInfo:(id)arg1;
- (void)updateProgressWithInfo:(id)arg1;
- (void)updateTransferControlWithInfo:(id)arg1;
- (void)updateOperateBtnWithInfo:(id)arg1;
- (void)onOperateBtnClick:(id)arg1;
- (void)onCancelClick:(id)arg1;
- (void)parseViewData:(id)arg1;
- (id)createCommonTimeLabel;
- (void)initView;
- (void)dealloc;
- (void)requestAudioSession;
- (void)clean;
- (void)updateViewWithData:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

