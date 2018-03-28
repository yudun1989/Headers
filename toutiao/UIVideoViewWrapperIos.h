//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMoviePlayerController;

@interface UIVideoViewWrapperIos : NSObject
{
    int _left;
    int _top;
    int _width;
    int _height;
    _Bool _keepRatioEnabled;
    struct VideoPlayer *_videoPlayer;
    MPMoviePlayerController *_moviePlayer;
}

@property(retain, nonatomic) MPMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)play;
- (void)setKeepRatioEnabled:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)seekTo:(float)arg1;
- (void)playStateChange;
- (void)videoFinished:(id)arg1;
- (void)setURL:(int)arg1:(basic_string_7c0a1c0b *)arg2;
- (_Bool)isFullScreenEnabled;
- (void)setFullScreenEnabled:(_Bool)arg1;
- (void)setFrame:(int)arg1:(int)arg2:(int)arg3:(int)arg4;
- (void)dealloc;
- (id)init:(void *)arg1;

@end

