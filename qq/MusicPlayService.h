//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IMusicPlayService-Protocol.h>
#import <QQMainProject/MusicPlayDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, NSURL, QQMessageModel;
@protocol QQMusicEngineStatsDelegate;

@interface MusicPlayService : NSObject <IMusicPlayService, MusicPlayDelegate>
{
    NSURL *_url;
    NSURL *_playingURL;
    int _state;
    NSMutableArray *_localCompleteQueue;
    QQMessageModel *_messageModel;
    QQMessageModel *_playingModel;
    NSString *_musicTitle;
    NSString *_playingMusicTile;
    NSString *_musicSinger;
    NSString *_playingMusicSinger;
    NSString *_coverURL;
    NSString *_playingCoverURL;
    NSDictionary *_musicDic;
    NSDictionary *_playingDic;
    NSString *_messageKey;
    NSString *_playingKey;
    id <QQMusicEngineStatsDelegate> _clearDelegate;
    int _errorCode;
    _Bool _audioSessionActived;
}

+ (void)destroyInstance;
+ (id)getInstance;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)FileOperationStop;
- (void)StopForClear:(id)arg1;
- (void)PlayError;
- (void)PlayFinished;
- (id)GetCurrentSong;
- (int)GetCurrentPlayState;
- (_Bool)GetState;
- (_Bool)GetState:(id)arg1;
- (void)DoActionWithFrequencyControl;
- (_Bool)JudgeModelIsSame:(id)arg1 MessageModel:(id)arg2;
- (void)playMusicWithInfo:(id)arg1;
- (void)DoAction:(id)arg1;
- (void)ResetLocalVar;
- (void)StopMusicGene;
- (void)RemotePlayPause;
- (void)RemotePause;
- (void)RemotePlay;
- (void)playPrevious;
- (void)playNext;
- (_Bool)isBufferingSong;
- (_Bool)isPlayingSong;
- (double)currentSongDuration;
- (double)currentPlayTime;
- (void)seekTime:(double)arg1;
- (void)resumePlayOrPlayNext;
- (void)resumePlay;
- (void)Stop;
- (void)PlayStateNotification:(id)arg1;
- (void)Stop:(id)arg1;
- (void)Pause;
- (void)Play:(id)arg1;
- (void)NotificatePlayError:(id)arg1 Message:(id)arg2;
- (void)ProcessForStop;
- (void)ResetAudioSession;
- (_Bool)SetAudioSession;
- (_Bool)isConnectionAvaliable;
- (id)GetKeyOfMessageModel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
