//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTVPlayerStateAction;

@protocol TTVBaseDemandPlayerDelegate <NSObject>

@optional
- (struct CGRect)ttv_movieViewFrameAfterExitFullscreen;
- (void)actionChangeCallbackWithAction:(TTVPlayerStateAction *)arg1;
- (void)playerOrientationState:(_Bool)arg1;
- (void)playerLoadingState:(unsigned long long)arg1;
- (void)playerPlaybackState:(long long)arg1;
@end

