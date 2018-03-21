//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AVAsset, AVPlayerItemErrorLog, NSDictionary, NSError, NSString, TVKMediaPlayerController;

@protocol TVKPlaybackDelegate <NSObject>
- (_Bool)cancelAssetLoading;
- (void)mediaPlayerCheckMediaUrlError:(TVKMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerRequestStateChange:(TVKMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerDidExitFullscreen:(TVKMediaPlayerController *)arg1;
- (void)mediaPlayerDidEnterFullscreen:(TVKMediaPlayerController *)arg1;
- (void)mediaPlayerPlaybackDidFinish:(TVKMediaPlayerController *)arg1;
- (void)mediaPlayerPlaybackStateDidChange:(TVKMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerLoadStateDidChange:(TVKMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerNaturalSizeAvailable:(TVKMediaPlayerController *)arg1;

@optional
- (void)mediaPlayerProgress:(double)arg1 duration:(double)arg2;
- (void)mediaPlayerPresentationSize:(struct CGSize)arg1 withFileCacheOrder:(long long)arg2;
- (void)mediaPlayerError:(NSError *)arg1 log:(AVPlayerItemErrorLog *)arg2;
- (void)mediaPlayerKeyPath:(NSString *)arg1 change:(NSDictionary *)arg2;
- (void)mediaPlayerItemTimeInfo:(NSString *)arg1;
- (void)mediaPlayerSendInfo:(NSString *)arg1;
- (void)mediaPlayerPlayedItem:(long long)arg1;
- (void)mediaPlayerPrepareToPlay:(long long)arg1;
- (AVAsset *)mediaPlayerGetAVAsset:(NSString *)arg1 userInfo:(NSDictionary *)arg2 segNo:(long long)arg3 segDuration:(double)arg4;
- (void)sendMediaPlayerLog:(int)arg1 withLogInfo:(NSString *)arg2;
- (void)mediaPlayerCacheStateDidChange:(TVKMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withCacheState:(long long)arg4 withIsCurrentPlayFile:(_Bool)arg5;
- (void)mediaPlayerCacheStateDidChange:(TVKMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withCacheState:(long long)arg4;
@end

