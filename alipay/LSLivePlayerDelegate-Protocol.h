//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSBizShowTitleBarHostUserInfo;

@protocol LSLivePlayerDelegate <NSObject>

@optional
- (LSBizShowTitleBarHostUserInfo *)hostUserInfo;
- (void)playDurationReturn:(double)arg1;
- (void)playStateChanged:(_Bool)arg1;
- (void)dragTimeUpdate:(double)arg1;
- (void)playTimeUpdate:(double)arg1;
- (void)hostTap;
- (void)fullScreen:(_Bool)arg1;
- (void)replayToEnd;
- (void)shareLive;
- (void)closeLivePlayer;
@end

