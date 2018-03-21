//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WCVMPatchBootsInfo;

@interface WCVMPatchBootsMgr : MMService <MMKernelExt, PBMessageObserverDelegate, ICdnComMgrExt, INewSyncExt, IMsgExt, MMService>
{
    NSMutableDictionary *_dicDownloadingItem;
    NSString *_baseID;
    WCVMPatchBootsInfo *_curPatchInfo;
}

- (void).cxx_destruct;
- (void)cleanPatch;
- (void)handleXmlMsg:(id)arg1;
- (_Bool)verifyPatchData:(id)arg1 withPatchInfo:(id)arg2;
- (_Bool)startDownloadPatch:(id)arg1;
- (void)checkBootsPatchUpdateWithCondition:(id)arg1 forceWithoutLogin:(_Bool)arg2;
- (id)getDefaultConditions;
- (id)getPatchID;
- (id)getBaseID;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onNewSyncIPXX:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onServiceInit;
- (void)dealloc;
- (void)checkBootsPatchUpdateWithXmlKey:(id)arg1;
- (void)checkBootsPatchUpdate;
- (void)forceUpdate:(_Bool)arg1;
- (id)getBootsPatchData:(unsigned long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

