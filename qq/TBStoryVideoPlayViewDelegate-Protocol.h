//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class TBStoryVideoPlayView;

@protocol TBStoryVideoPlayViewDelegate <NSObject>

@optional
- (void)TBStoryViewPlayEnd:(TBStoryVideoPlayView *)arg1;
- (void)TBStoryViewPlayProcess:(TBStoryVideoPlayView *)arg1 timeChange:(double)arg2 totalTime:(double)arg3;
- (void)TBStoryViewPlayDidStart:(TBStoryVideoPlayView *)arg1 totalTime:(double)arg2;
- (void)TBStoryViewPlayWillStart:(TBStoryVideoPlayView *)arg1;
- (void)TBStoryViewPlay:(TBStoryVideoPlayView *)arg1 playStatusChange:(int)arg2;
@end

