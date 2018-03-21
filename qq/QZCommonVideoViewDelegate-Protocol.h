//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol QZCommonVideoViewDelegate <NSObject>

@optional
- (double)getVideoPlayCurrentTime;
- (double)getVideoDuration;
- (_Bool)isMuted;
- (void)setMuted:(_Bool)arg1;
- (void)resumeBySeek;
- (_Bool)isPlaying;
- (void)pauseByUser:(_Bool)arg1;
- (void)pauseBySeek;
- (void)stop;
- (void)pause:(_Bool)arg1;
- (_Bool)playWithManul:(_Bool)arg1;
- (void)seek:(double)arg1;
@end

