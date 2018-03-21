//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CLPublishListMgr : NSObject
{
    NSMutableDictionary *_publishDic;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharInstance;
- (void).cxx_destruct;
- (void)mokeSucessPublish:(id)arg1;
- (void)setDataChangeWithStatus:(int)arg1 andClientId:(id)arg2 clubId:(id)arg3 sceneName:(id)arg4 andMap:(id)arg5 andData:(id)arg6 topicId:(id)arg7;
- (void)doLoginUserChanged:(id)arg1;
- (void)doPublishStateNotification:(id)arg1;
- (void)clearListForFailedClub:(id)arg1;
- (void)modifySpecficObjects:(CDUnknownBlockType)arg1 forClubId:(id)arg2;
- (id)publishArray:(id)arg1;
- (id)valueForSendState:(int)arg1;
- (id)publishClientIds:(id)arg1 forState:(int)arg2;
- (id)sendingClientIds:(id)arg1;
- (id)failedClientIds:(id)arg1;
- (id)sucessClientIds:(id)arg1;
- (void)cachePublishList;
- (void)resetCache;
- (void)dealloc;
- (id)init;

@end

