//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVBaseDemandPlayerDelegate-Protocol.h"

@class NSDictionary, NSString, SSThemedButton, TTAdCanvasTracker, TTImageView, TTVADPlayVideo;

@interface TTRNVideoView : UIView <TTVBaseDemandPlayerDelegate>
{
    _Bool _muted;
    _Bool _pauseByEvent;
    NSDictionary *_cover;
    NSString *_video_id;
    long long _play;
    long long _videoPosition;
    long long _autoplay;
    NSDictionary *_extra;
    TTVADPlayVideo *_videoView;
    TTImageView *_logoView;
    SSThemedButton *_playButton;
    TTAdCanvasTracker *_tracker;
}

@property(retain, nonatomic) TTAdCanvasTracker *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) _Bool pauseByEvent; // @synthesize pauseByEvent=_pauseByEvent;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) TTVADPlayVideo *videoView; // @synthesize videoView=_videoView;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) long long autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) long long videoPosition; // @synthesize videoPosition=_videoPosition;
@property(nonatomic) long long play; // @synthesize play=_play;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
@property(retain, nonatomic) NSDictionary *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)runOnMainThread:(CDUnknownBlockType)arg1;
- (void)trackMute;
- (void)trackBreak;
- (void)trackPause;
- (void)trackFinish;
- (void)trackResume;
- (void)trackStart;
- (id)ad_extra_data;
- (void)pauseOtherVideoNoti:(id)arg1;
- (void)pauseVideoNoti:(id)arg1;
- (void)resumeVideoNoti:(id)arg1;
- (void)playerPlaybackState:(long long)arg1;
- (void)actionChangeCallbackWithAction:(id)arg1;
- (void)removeVideoNotification;
- (void)registerVideoNotification;
- (void)breakVideo;
- (void)pauseVideo;
- (void)postPlayNotification;
- (void)playVideo;
- (void)updateVideoSession:(_Bool)arg1;
- (void)setMuteButton;
- (void)muteButtonClicked:(id)arg1;
- (void)playButtonClicked:(id)arg1;
- (void)startVideo;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

