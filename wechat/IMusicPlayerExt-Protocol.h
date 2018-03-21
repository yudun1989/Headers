//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, MMMusicPlayerErrInfo, NSString, UIImage;

@protocol IMusicPlayerExt <NSObject>

@optional
- (void)onStopMusicListPlay;
- (void)onDataBuffering:(double)arg1;
- (void)OnUpdateDuarationOnForeGround;
- (void)OnGetSongAlbumUrl:(MMMusicInfo *)arg1 AlbumUrl:(NSString *)arg2;
- (void)onAlbumImageChanged:(MMMusicInfo *)arg1 AlbumImage:(UIImage *)arg2;
- (void)onLyricsChanged:(MMMusicInfo *)arg1 Lyrics:(NSString *)arg2;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onResumeMusic:(MMMusicInfo *)arg1;
- (void)onPlayPreviousMusic;
- (void)onPlayNextMusic;
- (void)onPlayMusic:(MMMusicInfo *)arg1 fromScene:(int)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(MMMusicInfo *)arg2 errInfo:(MMMusicPlayerErrInfo *)arg3;
- (void)onMusicPlayStatusChanged;
@end

