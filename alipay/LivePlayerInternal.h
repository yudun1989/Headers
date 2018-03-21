//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;
@protocol IJKMediaPlayback;

@interface LivePlayerInternal : UIView
{
    id <IJKMediaPlayback> _player;
    UIView *_olderPlayerView;
    _Bool _isNotificationAdded;
    _Bool _isPlayingBeforeEnterBackground;
    _Bool _isInBackground;
    _Bool _isFirstFrameComing;
    _Bool _enableBeautyMode;
    _Bool _shouldAutoplay;
    _Bool _isLive;
    double _beautyLevel;
    double _connectionTimeout;
    unsigned long long _loadState;
    UIView *_playerView;
    NSString *_encryptKey;
    NSString *_encryptMethod;
    NSString *_urlString;
    NSMutableArray *_pendingNotifications;
    struct _opaque_pthread_mutex_t _pendingNotificationsLock;
}

+ (_Bool)isLivePlaySupported;
@property(nonatomic) struct _opaque_pthread_mutex_t pendingNotificationsLock; // @synthesize pendingNotificationsLock=_pendingNotificationsLock;
@property(retain, nonatomic) NSMutableArray *pendingNotifications; // @synthesize pendingNotifications=_pendingNotifications;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *encryptMethod; // @synthesize encryptMethod=_encryptMethod;
@property(retain, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) _Bool enableBeautyMode; // @synthesize enableBeautyMode=_enableBeautyMode;
- (void).cxx_destruct;
- (void)sendPendingNotifications;
- (void)addPendingNotification:(id)arg1;
- (void)clearPendingNotifications;
- (void)postNotification:(id)arg1 userInfo:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)dealWithPlaySeperately;
- (void)createAndReplaceLivePlayer;
- (void)start;
- (void)doInit;
- (id)createoptions;
- (id)createLivePlayer:(id)arg1 identifier:(id)arg2;
- (_Bool)loadIJKPlayerFrameworkWithPath:(id)arg1;
- (_Bool)loadIJKPlayerFramework;
- (void)didRecievePlayerNotification:(id)arg1;
- (void)removeNotifications;
- (void)addlNotifications;
@property(readonly, nonatomic) long long playbackState;
- (long long)bufferedPercent;
- (double)duration;
- (double)position;
- (void)setEncryptKey:(id)arg1 method:(id)arg2;
- (_Bool)isPlaying;
- (void)playerWillBecomeBackground;
- (void)playerDidBecomeForeground;
- (void)seekToTime:(double)arg1;
- (void)resume;
- (void)interrupt;
- (void)pause;
- (void)shutdown;
- (void)stop;
- (void)retryToPlay;
- (void)play;
- (void)setURLString:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

