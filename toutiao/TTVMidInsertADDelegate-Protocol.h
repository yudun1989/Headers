//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TTVMidInsertADDelegate <NSObject>

@optional
- (void)sendHostPlayerPauseAction;
- (void)setPasterADRotateState:(_Bool)arg1;
- (void)replayOriginalVideo;
- (_Bool)isInDetail;
- (_Bool)isMovieFullScreen;
- (void)videoPasterADViewControllerToggledToFullScreen:(_Bool)arg1 animationed:(_Bool)arg2 completionBlock:(void (^)(_Bool))arg3;
@end

