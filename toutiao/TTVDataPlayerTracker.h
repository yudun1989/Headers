//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVPlayerTracker.h"

@interface TTVDataPlayerTracker : TTVPlayerTracker
{
    _Bool _hasSendEndTrack;
}

- (void)sendVideoAutoOverTrack;
- (void)sendVideoAutoPlayTrack;
- (void)ttv_kvo;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)sendEndTrack;
- (void)sendPlayTrack;
- (void)sendEndTrackV3;
- (void)sendPlayTrackV3;
- (id)categroyNameV3;
- (id)enterFromString;
- (id)init;

@end

