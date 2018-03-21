//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SyncUpCallback-Protocol.h"

@class APCustomStorage, NSString, SOOptionSyncManager;
@protocol SOOptionDAO;

@interface SOOptionManager : NSObject <SyncUpCallback>
{
    APCustomStorage *_storage;
    id <SOOptionDAO> _sooptionDAO;
    SOOptionSyncManager *_optionSyncManager;
}

+ (id)sharedOptionManager;
@property(retain) SOOptionSyncManager *optionSyncManager; // @synthesize optionSyncManager=_optionSyncManager;
@property(retain, nonatomic) id <SOOptionDAO> sooptionDAO; // @synthesize sooptionDAO=_sooptionDAO;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)daoSelectOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 typeList:(id)arg4 limit:(id)arg5 orderBy:(int)arg6;
- (id)daoSelectOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 typeList:(id)arg4 limit:(id)arg5;
- (id)daoCountOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 type:(id)arg4;
- (id)daoDeleteOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 type:(id)arg4 userId:(id)arg5;
- (id)daoSelectOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 type:(id)arg4 userId:(id)arg5;
- (id)daoCleanAllOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3;
- (id)daoSelectAllLocalOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 type:(id)arg4;
- (id)daoSelectOptionWithClientIdList:(id)arg1;
- (id)daoSelectOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 limit:(id)arg4;
- (id)daoDeleteOptionWithClientIdList:(id)arg1;
- (id)daoInsertOptionList:(id)arg1;
- (id)selectOptionWithBizNo:(id)arg1 cardBizType:(id)arg2 cardSceneCode:(id)arg3 limit:(id)arg4;
- (_Bool)insertOptionList:(id)arg1 bizNo:(id)arg2 cardBizType:(id)arg3 cardSceneCode:(id)arg4 needClean:(_Bool)arg5;
- (_Bool)addRewardOption:(id)arg1;
- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (_Bool)delCommentOption:(id)arg1 serverMonitor:(id)arg2;
- (_Bool)addCommentOption:(id)arg1 serverMonitor:(id)arg2;
- (_Bool)delMyPraiseWithBizNo:(id)arg1 bizType:(id)arg2 sceneCode:(id)arg3 cardBizType:(id)arg4 cardSceneCode:(id)arg5 serverMonitor:(id)arg6;
- (_Bool)delPraiseOption:(id)arg1 serverMonitor:(id)arg2;
- (_Bool)addPraiseOption:(id)arg1 serverMonitor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

