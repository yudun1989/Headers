//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTimer, TBMPBFFOptions, UIView;
@protocol OS_dispatch_source;

@interface TBMPBFFPlayerController : NSObject
{
    _Bool _shouldShowHudView;
    _Bool _muted;
    _Bool _isPreparedToPlay;
    _Bool _shouldSetErrorInfoInPlayExperience;
    _Bool _isPlayEndStallEvent;
    _Bool _isFirstVideoFrameRendered;
    _Bool _isReportedFirstVideoFrameRenderedEvent;
    _Bool _isPlayExperienceReported;
    int _bufferLoadCountTimeInterval;
    int _bufferLoadCountLimit;
    int _bufferLoadFrequencyCounter;
    int _logReportIntervalSeconds;
    int _playerStatus;
    int _loopCount;
    id _ijkFFPlayer;
    UIView *_playerView;
    long long _contentMode;
    long long _renderViewOrientation;
    CDUnknownBlockType _playerEventFired;
    CDUnknownBlockType _playerDataPopped;
    NSObject<OS_dispatch_source> *_logTimer;
    double _startPreparetime;
    double _preparedTime;
    double _startPlayTime;
    double _startBufferTime;
    double _lastEndBufferTime;
    double _lastBufferLoadReportTime;
    long long _lastErrorCode;
    long long _lastErrorExtra;
    long long _lastErrorNetworkStatus;
    double _outStartTime;
    double _userFirstFrameTime;
    double _outPreloadStartTime;
    double _userPreloadTime;
    double _startStallTime;
    double _lastStallEndTime;
    double _lastBufferLoadTime;
    long long _bufferingCount;
    double _totalBufferingTime;
    NSTimer *_checkTimer;
    double _firstVideoFrameRenderingTime;
    double _videoDuration;
    NSString *_liveURL;
    TBMPBFFOptions *_playerOptions;
    NSString *_liveIP;
    NSString *_localIP;
    NSString *_routeNodes;
    long long _counter;
    double _lastPlayingPointReportTime;
    NSMutableArray *_playerStatusNodes;
    double _playingTime;
    double _startPlayingTimeStamp;
}

@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) double startPlayingTimeStamp; // @synthesize startPlayingTimeStamp=_startPlayingTimeStamp;
@property(nonatomic) double playingTime; // @synthesize playingTime=_playingTime;
@property(retain, nonatomic) NSMutableArray *playerStatusNodes; // @synthesize playerStatusNodes=_playerStatusNodes;
@property(nonatomic) int playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic) double lastPlayingPointReportTime; // @synthesize lastPlayingPointReportTime=_lastPlayingPointReportTime;
@property(nonatomic) _Bool isPlayExperienceReported; // @synthesize isPlayExperienceReported=_isPlayExperienceReported;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(copy, nonatomic) NSString *routeNodes; // @synthesize routeNodes=_routeNodes;
@property(copy, nonatomic) NSString *localIP; // @synthesize localIP=_localIP;
@property(copy, nonatomic) NSString *liveIP; // @synthesize liveIP=_liveIP;
@property(retain, nonatomic) TBMPBFFOptions *playerOptions; // @synthesize playerOptions=_playerOptions;
@property(copy, nonatomic) NSString *liveURL; // @synthesize liveURL=_liveURL;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double firstVideoFrameRenderingTime; // @synthesize firstVideoFrameRenderingTime=_firstVideoFrameRenderingTime;
@property(nonatomic) _Bool isReportedFirstVideoFrameRenderedEvent; // @synthesize isReportedFirstVideoFrameRenderedEvent=_isReportedFirstVideoFrameRenderedEvent;
@property(nonatomic) _Bool isFirstVideoFrameRendered; // @synthesize isFirstVideoFrameRendered=_isFirstVideoFrameRendered;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(nonatomic) int logReportIntervalSeconds; // @synthesize logReportIntervalSeconds=_logReportIntervalSeconds;
@property(nonatomic) _Bool isPlayEndStallEvent; // @synthesize isPlayEndStallEvent=_isPlayEndStallEvent;
@property(nonatomic) double totalBufferingTime; // @synthesize totalBufferingTime=_totalBufferingTime;
@property(nonatomic) long long bufferingCount; // @synthesize bufferingCount=_bufferingCount;
@property(nonatomic) int bufferLoadFrequencyCounter; // @synthesize bufferLoadFrequencyCounter=_bufferLoadFrequencyCounter;
@property(nonatomic) double lastBufferLoadTime; // @synthesize lastBufferLoadTime=_lastBufferLoadTime;
@property(nonatomic) int bufferLoadCountLimit; // @synthesize bufferLoadCountLimit=_bufferLoadCountLimit;
@property(nonatomic) int bufferLoadCountTimeInterval; // @synthesize bufferLoadCountTimeInterval=_bufferLoadCountTimeInterval;
@property(nonatomic) double lastStallEndTime; // @synthesize lastStallEndTime=_lastStallEndTime;
@property(nonatomic) double startStallTime; // @synthesize startStallTime=_startStallTime;
@property(nonatomic) double userPreloadTime; // @synthesize userPreloadTime=_userPreloadTime;
@property(nonatomic) double outPreloadStartTime; // @synthesize outPreloadStartTime=_outPreloadStartTime;
@property(nonatomic) double userFirstFrameTime; // @synthesize userFirstFrameTime=_userFirstFrameTime;
@property(nonatomic) double outStartTime; // @synthesize outStartTime=_outStartTime;
@property(nonatomic) _Bool shouldSetErrorInfoInPlayExperience; // @synthesize shouldSetErrorInfoInPlayExperience=_shouldSetErrorInfoInPlayExperience;
@property(nonatomic) long long lastErrorNetworkStatus; // @synthesize lastErrorNetworkStatus=_lastErrorNetworkStatus;
@property(nonatomic) long long lastErrorExtra; // @synthesize lastErrorExtra=_lastErrorExtra;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) double lastBufferLoadReportTime; // @synthesize lastBufferLoadReportTime=_lastBufferLoadReportTime;
@property(nonatomic) double lastEndBufferTime; // @synthesize lastEndBufferTime=_lastEndBufferTime;
@property(nonatomic) double startBufferTime; // @synthesize startBufferTime=_startBufferTime;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) double preparedTime; // @synthesize preparedTime=_preparedTime;
@property(nonatomic) double startPreparetime; // @synthesize startPreparetime=_startPreparetime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *logTimer; // @synthesize logTimer=_logTimer;
@property(nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
@property(copy, nonatomic) CDUnknownBlockType playerDataPopped; // @synthesize playerDataPopped=_playerDataPopped;
@property(copy, nonatomic) CDUnknownBlockType playerEventFired; // @synthesize playerEventFired=_playerEventFired;
@property(nonatomic) long long renderViewOrientation; // @synthesize renderViewOrientation=_renderViewOrientation;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool shouldShowHudView; // @synthesize shouldShowHudView=_shouldShowHudView;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)addObservers;
- (void)userDefinedSEIPopped:(id)arg1;
- (void)networkTrafficPopped:(id)arg1;
- (void)videoToolboxDecodeFail:(id)arg1;
- (void)frameQueueNull:(id)arg1;
- (void)decodeError:(id)arg1;
- (void)avformatTime:(id)arg1;
- (void)networkShake:(id)arg1;
- (void)streamAbnormal:(id)arg1;
- (void)receivePTS:(id)arg1;
- (void)firstAudioFrameRendered:(id)arg1;
- (void)firstVideoFrameRendered:(id)arg1;
- (void)playBackIsPreparedToPlayDidChange:(id)arg1;
- (void)playBackDidFinish:(id)arg1;
- (void)playBackStateDidChange:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
- (void)checkIfFirstVideoFrameRendered;
- (void)logPlayerStatus;
- (id)setupDispatchTimerWithInterval:(unsigned long long)arg1 leeway:(unsigned long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)stopLogTimer;
- (void)startLogTimer;
- (id)playerStatusNodesDescription;
- (void)reportPlaying;
- (void)reportPlayExperience;
- (id)playerStatusData;
- (id)thumbnailImageAtCurrentTime;
- (_Bool)isVideoToolboxOpen;
- (double)playableDuration;
- (id)getPlayerStatusKeyData:(id)arg1;
- (long long)playbackState;
- (unsigned long long)loadState;
- (struct __CVBuffer *)copyCurrentVideoPixelBuffer;
- (_Bool)hasNewVideoPixelBufferToDraw;
- (_Bool)isSeeking;
- (_Bool)isPlaying;
- (void)prepareToRecycle;
- (void)shutdown;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)setInfo:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 options:(id)arg2;
- (id)initWithUrl:(id)arg1;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double currentPlaybackTime;
@property(retain) id ijkFFPlayer; // @synthesize ijkFFPlayer=_ijkFFPlayer;

@end

