//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface QZCanvasVideoControl : NSObject
{
    _Bool _muted;
    _Bool _isPlayed;
    _Bool _isPausedByUser;
    double _lastPlayTime;
    UIImage *_videoPlayerCurrentImage;
}

@property(nonatomic) _Bool isPausedByUser; // @synthesize isPausedByUser=_isPausedByUser;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(retain, nonatomic) UIImage *videoPlayerCurrentImage; // @synthesize videoPlayerCurrentImage=_videoPlayerCurrentImage;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;

@end

