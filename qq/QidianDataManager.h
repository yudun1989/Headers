//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQGrayTipsParam;

@interface QidianDataManager : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *pRichFlag;
    NSMutableDictionary *pCallFlag;
    NSMutableDictionary *pTransferInfoFlag;
    NSMutableDictionary *pMasterRichFlag;
    NSMutableArray *pAddedUin;
    _Bool isNeedNotify;
    QQGrayTipsParam *_paramcache;
}

+ (id)GetInstance;
@property(retain, nonatomic) QQGrayTipsParam *paramcache; // @synthesize paramcache=_paramcache;
- (void)responseforWebIMClickEvent:(char *)arg1 DataLen:(int)arg2;
- (void)reportWebIMClickCardWithKFUin:(unsigned long long)arg1 extUin:(unsigned long long)arg2 visitID:(id)arg3;
- (void)reportCloseAIOEventWithUin:(unsigned long long)arg1 isQDMaster:(_Bool)arg2;
- (void)sendEManMsgClickReport:(id)arg1;
- (void)sendStructMessage:(id)arg1;
- (void)responseforEmanMsg:(char *)arg1 DataLen:(int)arg2;
- (id)createXMLMsg:(id)arg1 uin:(unsigned long long)arg2;
- (id)parseQDMsgData:(const void *)arg1 dataLen:(int)arg2 subMsgSeq:(unsigned int)arg3 msgModel:(id)arg4;
- (void)sendBatchBlockRequest:(id)arg1;
- (void)qdUniLogReport:(id)arg1;
- (void)sendReportJson:(id)arg1;
- (void)qdBatchSendClickReport:(id)arg1 withFromUin:(id)arg2 withClickURL:(id)arg3;
- (void)qdBatchSendReceiveReport:(id)arg1 withFromUin:(id)arg2;
- (id)loadQDWPAInfo:(id)arg1;
- (void)saveQDWPAInfo:(id)arg1 forUin:(id)arg2;
- (void)responseforGetNaviMsg:(char *)arg1 DataLen:(int)arg2;
- (void)requestNaviMsg:(id)arg1;
- (void)requestNewNaviMsg;
- (void)checkBlockStatus:(unsigned long long)arg1 mpqquin:(unsigned long long)arg2 kfuin:(unsigned long long)arg3;
- (void)checkQidianWPAInfo:(unsigned long long)arg1 kfuin:(unsigned long long)arg2 key:(id)arg3 extInfo:(id)arg4 rkey:(id)arg5;
- (void)fetchQidianCorpDetailInfo:(unsigned long long)arg1;
- (void)fetchTransferInfo:(unsigned long long)arg1;
- (void)fetchQidianSimpleInfo:(unsigned long long)arg1;
- (void)fetchQidianInfo:(unsigned long long)arg1;
- (_Bool)isCrmUin:(id)arg1;
- (_Bool)isCrmUinLocal:(id)arg1;
- (void)requestQidianMasterFlag:(unsigned long long)arg1;
- (_Bool)isQidianMasterUin:(unsigned long long)arg1;
- (_Bool)isQidianUin:(unsigned long long)arg1;
- (_Bool)canCall:(unsigned long long)arg1;
- (void)resetCanCall:(unsigned long long)arg1;
- (void)setCanCall:(unsigned long long)arg1;
- (void)setNeedNotify:(_Bool)arg1;
- (void)setQidianFlagBool:(_Bool)arg1 forUin:(unsigned long long)arg2;
- (void)setQidianMasterFlagBool:(_Bool)arg1 forUin:(unsigned long long)arg2;
- (void)setQidianMainFlag:(id)arg1 forUin:(unsigned long long)arg2;
- (void)setQidianFlag:(id)arg1 forUin:(unsigned long long)arg2;
- (void)responseforFetchCorpDetailInfo:(char *)arg1 DataLen:(int)arg2;
- (void)responseforFetchDetail:(char *)arg1 DataLen:(int)arg2;
- (void)responseforClickReply:(char *)arg1 DataLen:(int)arg2;
- (void)responseforCheckWPA:(char *)arg1 DataLen:(int)arg2;
- (void)responseforFetchTransferInfo:(char *)arg1 DataLen:(int)arg2;
- (void)responseforCheckBlock:(char *)arg1 DataLen:(int)arg2;
- (void)responseforBatchBlock:(char *)arg1 DataLen:(int)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)sendMsgClickReport:(id)arg1;
- (_Bool)isNeedToFetchTransferInfo:(unsigned long long)arg1;
- (void)saveTransferInfoFlag;
- (void)loadTransferInfoFlag;
- (void)updateTransferInfoFlag:(id)arg1;
- (void)onRecvSvrMsg:(id)arg1;
- (void)dealloc;
- (void)onAccountLogout:(id)arg1;
- (void)onRecvSimpleProfile:(id)arg1;
- (void)onRecvFriendsVerifyMsg:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

