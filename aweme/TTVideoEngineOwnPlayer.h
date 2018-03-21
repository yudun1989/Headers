//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoEnginePlayer-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, NSTimer, NSURL, TTAVPlayer, TTAVPlayerItem, TTPlayerView, TTVideoEngineAVPlayerItemAccessLog, TTVideoEngineAVPlayerItemAccessLogEvent, UIView;
@protocol AVAssetResourceLoaderDelegate, TTVideoPlayerStateProtocol;

@interface TTVideoEngineOwnPlayer : NSObject <TTVideoEnginePlayer>
{
    NSString *_hostname;
    NSURL *_playURL;
    TTAVPlayerItem *_playerItem;
    TTAVPlayer *_player;
    TTPlayerView *_view;
    unsigned long long _enhancementType;
    unsigned long long _imageScaleType;
    unsigned long long _imageLayoutType;
    unsigned long long _renderType;
    _Bool _looping;
    long long _smoothDelayedSeconds;
    _Bool _isPrerolling;
    double _seekingTime;
    _Bool _isSeeking;
    _Bool _isError;
    _Bool _isCompleted;
    _Bool _isShutdown;
    _Bool _isMuted;
    _Bool _playedToEnd;
    _Bool _ignoreAudioInterruption;
    double _playbackSpeed;
    NSMutableArray *_registeredNotifications;
    TTVideoEngineAVPlayerItemAccessLogEvent *_firstLogEvent;
    TTVideoEngineAVPlayerItemAccessLogEvent *_currentLogEvent;
    NSTimer *_timer;
    _Bool _hasMoreLogEvent;
    double _startWatchTime;
    double _endWatchTime;
    _Bool _isPauseWhenNotReady;
    _Bool _muted;
    _Bool _hardwareDecode;
    _Bool _ksyHevcDecode;
    _Bool _isPreparedToPlay;
    int _cacheFileMode;
    id <TTVideoPlayerStateProtocol> _delegate;
    double _currentPlaybackTime;
    double _duration;
    double _playableDuration;
    long long _bufferingProgress;
    long long _playbackState;
    unsigned long long _loadState;
    long long _scalingMode;
    double _volume;
    id <AVAssetResourceLoaderDelegate> _resourceLoaderDelegate;
    TTVideoEngineAVPlayerItemAccessLog *_accesslog;
    unsigned long long _renderEngine;
    NSString *_filePath;
    NSString *_fileKey;
    NSString *_decryptionKey;
    double _startTime;
}

@property(nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
@property(copy, nonatomic) NSString *decryptionKey; // @synthesize decryptionKey=_decryptionKey;
@property(copy, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) int cacheFileMode; // @synthesize cacheFileMode=_cacheFileMode;
@property(readonly, nonatomic) TTVideoEngineAVPlayerItemAccessLog *accessLog; // @synthesize accessLog=_accesslog;
@property(nonatomic) __weak id <AVAssetResourceLoaderDelegate> resourceLoaderDelegate; // @synthesize resourceLoaderDelegate=_resourceLoaderDelegate;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool isPauseWhenNotReady; // @synthesize isPauseWhenNotReady=_isPauseWhenNotReady;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(nonatomic) long long bufferingProgress; // @synthesize bufferingProgress=_bufferingProgress;
@property(nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <TTVideoPlayerStateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)resonFromPlayerCore:(unsigned long long)arg1;
- (id)createErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
- (void)beginToPlayWithPlayerItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)item:(id)arg1 statusChanged:(long long)arg2;
- (void)playerItemDidReachEnd;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)onError:(id)arg1;
- (void)didPlayableDurationUpdate;
- (void)didLoadStateChange;
- (void)didPlaybackStateChange;
- (void)didPrepareToPlayUrl:(id)arg1;
- (_Bool)isCustomPlayer;
- (_Bool)isMuted;
- (void)setIgnoreAudioInterruption:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (double)currentPlayerTime;
- (void)resetWatchTime;
- (void)updateLogEvent;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removePlayerItemObservers:(id)arg1;
- (void)addPlayerItemObservers:(id)arg1;
- (void)removePlayerObservers;
- (void)addPlayerObservers;
@property(readonly, copy, nonatomic) NSDictionary *mp4HeaderMetaComment;
- (void)setPlayerSmoothDelayedSeconds:(long long)arg1;
@property(nonatomic) long long smoothDelayedSeconds;
- (void)setPlayerLooping:(_Bool)arg1;
@property(nonatomic) _Bool looping;
- (void)setPlayerKsyHevcDecode:(_Bool)arg1;
@property(nonatomic) _Bool ksyHevcDecode; // @synthesize ksyHevcDecode=_ksyHevcDecode;
@property(nonatomic) _Bool hardwareDecode; // @synthesize hardwareDecode=_hardwareDecode;
- (void)setPlayerStartTime:(double)arg1;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)setPlayerPlaybackSpeed:(double)arg1;
@property(nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
- (void)setPlayerViewRenderEngine:(unsigned long long)arg1;
@property(nonatomic) unsigned long long renderEngine; // @synthesize renderEngine=_renderEngine;
- (void)setPlayerRenderType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long renderType; // @synthesize renderType=_renderType;
- (void)setPlayerLayoutType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long imageLayoutType; // @synthesize imageLayoutType=_imageLayoutType;
- (void)setPlayerEnhancementType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long enhancementType; // @synthesize enhancementType=_enhancementType;
- (void)setPlayerImageScaleType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long imageScaleType; // @synthesize imageScaleType=_imageScaleType;
- (void)playNextWithURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long mediaSize;
- (long long)downloadSpeed;
- (long long)numberOfBytesTransferred;
- (long long)numberOfBytesPlayed;
- (id)currentCDNHost;
- (float)currentRate;
- (void)resetPlayer;
- (void)shutdown;
- (_Bool)isPlaying;
- (_Bool)isPrerolling;
- (void)close;
- (void)stop;
- (void)pause;
- (void)play;
- (void)playerPlay;
- (long long)getInt64ValueForKey:(int)arg1;
- (void)setPlayerValue:(int)arg1 key:(int)arg2;
- (void)setCacheFile:(id)arg1 mode:(int)arg2;
- (void)setValueString:(id)arg1 forKey:(int)arg2;
- (void)prepareToPlay;
@property(copy, nonatomic) NSURL *contentURL;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

