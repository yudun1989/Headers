//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class AWEIMContactDownloadController, NSMutableArray, NSString, TTHttpTask;
@protocol OS_dispatch_queue;

@interface AWEIMContactDataManager : NSObject <AWEUserMessage>
{
    NSObject<OS_dispatch_queue> *_processQueue;
    _Bool _hasFetchSucceed;
    AWEIMContactDownloadController *_downloadController;
    TTHttpTask *_currentTask;
    NSMutableArray *_contactList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *contactList; // @synthesize contactList=_contactList;
@property(retain, nonatomic) TTHttpTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) AWEIMContactDownloadController *downloadController; // @synthesize downloadController=_downloadController;
@property(nonatomic) _Bool hasFetchSucceed; // @synthesize hasFetchSucceed=_hasFetchSucceed;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (_Bool)_hasBeyondFetchInterval;
- (void)_updateLastFetchTimeStamp;
- (double)_getLastFetchTimeStamp;
- (id)_getUser:(id)arg1 inContactList:(id)arg2;
- (id)_recentContactListFromContactList:(id)arg1;
- (void)_fetchContacts:(CDUnknownBlockType)arg1;
- (void)_fetchRemoteWholeContactAndRecentContactListWithLocalContactList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchLocalContactList:(CDUnknownBlockType)arg1;
- (void)_fetchWholeContactAndRecentContactList:(CDUnknownBlockType)arg1;
- (void)updateLatestChatTimestamp:(long long)arg1 forUser:(id)arg2;
- (id)saveAweUser:(id)arg1;
- (void)deleteUser:(id)arg1;
- (void)queryUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTranspondContactList:(CDUnknownBlockType)arg1;
- (void)fetchWholeContactAndRecentContactList:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

