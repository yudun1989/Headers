//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, TBDWVideoCellModel;

@protocol TBDWVideoTableViewCellDelegate <NSObject>
- (void)onVideoNormalScreen;
- (void)hideNextTips;
- (void)onVideoTapToPause:(TBDWVideoCellModel *)arg1;
- (void)clickPlayButtonToPlay:(TBDWVideoCellModel *)arg1;
- (void)tapVideoToPlay:(TBDWVideoCellModel *)arg1;
- (void)videoCompleted;
- (void)willPlayNextVideo:(NSNumber *)arg1;
- (void)videoPlaying:(NSNumber *)arg1;
@end

