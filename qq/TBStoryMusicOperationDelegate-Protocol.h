//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol TBStoryMusicOperationDelegate <NSObject>

@optional
- (void)storyMusicTryToConnectNetwork:(NSString *)arg1 Type:(_Bool)arg2;
- (void)setStoryVideoBackgroundMusicMute:(_Bool)arg1;
- (void)storyDidEndDragging:(float)arg1 offset:(struct CGPoint)arg2;
- (void)storySeek:(float)arg1 offset:(struct CGPoint)arg2;
- (void)storyModelDelete;
@end

