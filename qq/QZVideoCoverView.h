//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseCoverView.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/QZVideoPlayerViewDelegate-Protocol.h>

@class NSString, QZFeedVideoLoadView, QZVideoPlayerView, QZVideoSectionInfo, UIButton, UIImageView, UILabel;

@interface QZVideoCoverView : QZBaseCoverView <QZVideoPlayerViewDelegate, IQZUrlDownloaderDelegate, QQAudioSessionManagerDelegate>
{
    QZFeedVideoLoadView *_loadProgress;
    QZVideoPlayerView *_playerView;
    UIImageView *_coverImageView;
    UILabel *_errorMsgLabel;
    UIButton *_playButton;
    QZVideoSectionInfo *_sectionInfo;
    NSString *_localVideoUrl;
    double _startPlayTime;
    _Bool _inBackground;
    _Bool _isStartPlay;
    _Bool _isManualPlay;
    long long _stage;
}

@property(nonatomic) long long stage; // @synthesize stage=_stage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

