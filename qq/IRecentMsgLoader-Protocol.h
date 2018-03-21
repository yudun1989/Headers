//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray;
@protocol IRecentMsgLoaderDelegate;

@protocol IRecentMsgLoader <NSObject>
- (NSArray *)loadDBRecentMsgs;
- (NSArray *)loadDBFriendMsgs;
- (void)setDelegate:(id <IRecentMsgLoaderDelegate>)arg1;
- (void)clearRecentDBSync;
- (void)loadLowLevelMessage;
- (void)saveRecentMsg:(NSArray *)arg1;
- (void)deleRecentFile;
- (NSArray *)loadRecentMsg;
- (void)addObserver:(id <IRecentMsgLoaderDelegate>)arg1;
- (void)resignObserver:(id <IRecentMsgLoaderDelegate>)arg1;
@end

