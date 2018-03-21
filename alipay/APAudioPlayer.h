//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APAudioSessionManagerDelegate-Protocol.h"
#import "APVideoPlayerDelegate-Protocol.h"
#import "AVAudioPlayerDelegate-Protocol.h"

@class APVideoPlayer, AVAudioPlayer, NSString;
@protocol APAudioPlayerDelegate, OS_dispatch_queue;

@interface APAudioPlayer : NSObject <AVAudioPlayerDelegate, APAudioSessionManagerDelegate, APVideoPlayerDelegate>
{
    _Bool _shouldCacheAfterDownload;
    _Bool _mixAudioWithOthers;
    _Bool _replayAfterPlayedToEnd;
    NSString *_identifier;
    id <APAudioPlayerDelegate> _delegate;
    AVAudioPlayer *_internalPlayer;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_playQueue;
    APVideoPlayer *_videoPlayer;
}

@property(retain, nonatomic) APVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playQueue; // @synthesize playQueue=_playQueue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAudioPlayer *internalPlayer; // @synthesize internalPlayer=_internalPlayer;
@property(nonatomic) _Bool replayAfterPlayedToEnd; // @synthesize replayAfterPlayedToEnd=_replayAfterPlayedToEnd;
@property(nonatomic) _Bool mixAudioWithOthers; // @synthesize mixAudioWithOthers=_mixAudioWithOthers;
@property(nonatomic) _Bool shouldCacheAfterDownload; // @synthesize shouldCacheAfterDownload=_shouldCacheAfterDownload;
@property(nonatomic) __weak id <APAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)clearPlayer;
- (void)stopPlay;
- (void)playAudioData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)sessionMode;
- (void)setSessionMode:(unsigned long long)arg1;
- (unsigned long long)stateFromVideoPlayerState:(unsigned long long)arg1;
- (void)videoPlayerDidReadyToPlay:(id)arg1;
- (void)videoPlayerDidFinishToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 playedCurrentTime:(double)arg2;
- (void)videoPlayer:(id)arg1 loadedTime:(double)arg2;
- (void)videoPlayerStateChangedTo:(unsigned long long)arg1 oldStatus:(unsigned long long)arg2;
- (void)videoPlayer:(id)arg1 failedWithError:(id)arg2;
- (void)setIdentifier:(id)arg1 business:(id)arg2;
- (void)clear;
@property(readonly, nonatomic, getter=getDurationLoaded) double durationLoaded;
@property(readonly, nonatomic, getter=getTotalDuration) double totalDuration;
@property(readonly, nonatomic, getter=getDurationWatched) double durationWatch;
- (void)seekEnd;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

