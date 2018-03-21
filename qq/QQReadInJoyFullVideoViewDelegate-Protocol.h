//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class FullScreenVideoCellModel, NSString, UIView;

@protocol QQReadInJoyFullVideoViewDelegate <NSObject>
- (unsigned long long)getAdvertMode;
- (void)setFullScreen:(_Bool)arg1;
- (UIView *)getVideoStateView;
- (UIView *)getVideoView;
- (_Bool)isStateViewSelected;
- (void)setItemFullScreenTapAction:(void (^)(_Bool))arg1;
- (_Bool)isPauseManually;
- (void)stopVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)changeCellVideoMode;
- (unsigned int)getVideoChannelID;
- (NSString *)getVideoTitle;
- (struct CGSize)getVideoSize;
- (FullScreenVideoCellModel *)getVideoModel;
- (_Bool)isInFullScreen;
- (id)getShortPlayer;
- (UIView *)getVideoParentView;
@end

