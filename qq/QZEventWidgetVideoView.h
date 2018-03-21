//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZEventWidgetBaseView.h>

#import <QQMainProject/QZVideoPlayerViewDelegate-Protocol.h>

@class NSString, QZFeedVideoLoadView, QZVideoPlayerView, QZVideoSectionInfo, UIButton, UIImageView, UILabel, UIView;

@interface QZEventWidgetVideoView : QZEventWidgetBaseView <QZVideoPlayerViewDelegate>
{
    long long _uin;
    UIImageView *_facadeImageView;
    UIImageView *_bgImageView;
    UIView *_videoContainerView;
    QZVideoPlayerView *_playerView;
    UIButton *_playButton;
    QZFeedVideoLoadView *_loadProgress;
    UILabel *_errorMsgLabel;
    QZVideoSectionInfo *_sectionInfo;
    double _startPlayTime;
    _Bool _isStartPlay;
    _Bool _isReplay;
    _Bool _inBackground;
}

- (void)loadVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

