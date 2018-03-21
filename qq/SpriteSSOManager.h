//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface SpriteSSOManager : NSObject <IEngineDispatchDelegate>
{
    NSMutableArray *_taskArr;
    int _currentGameId;
    NSString *_st;
    NSString *_stkey;
    NSString *_openId;
    NSString *_sessionOpenId;
    NSString *_openKey;
    NSString *_ssoCmdRule;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *ssoCmdRule; // @synthesize ssoCmdRule=_ssoCmdRule;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *sessionOpenId; // @synthesize sessionOpenId=_sessionOpenId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *stkey; // @synthesize stkey=_stkey;
@property(retain, nonatomic) NSString *st; // @synthesize st=_st;
@property(nonatomic) int currentGameId; // @synthesize currentGameId=_currentGameId;
- (id)parseSTCheckGameRspWith:(struct CPBMessageDecoder *)arg1;
- (id)parseSTGameStateMsgListWith:(struct CPBMessageDecoder *)arg1;
- (void)sendCmdBatchWithReqArray:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)reportDataBySSO:(id)arg1;
- (void)reportEventWithDataStr:(id)arg1;
- (void)reportFlowWithDataStr:(id)arg1;
- (void)sendRedDotInfoWithBusType:(unsigned int)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)sendGetSlaveListWithUin:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)reportJoinInfoIfUnAIO:(unsigned int)arg1 roomId:(unsigned long long)arg2;
- (void)getOpenIdArrByUinArr:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getUinArrByOpenIdArr:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getOpenIdByUin:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getUinByOpenId:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setSwitchWithFlagInfo:(id)arg1 CallBack:(CDUnknownBlockType)arg2;
- (void)removeGameFromUserPanelWith:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)addGameToUserPanelWith:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)sendSSOWithSaveGameList:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getUserGameListWithTSV2:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)pullGameStateInfo:(id)arg1 aioType:(int)arg2 CallBack:(CDUnknownBlockType)arg3;
- (void)pullSecretKeyWithGameModel:(id)arg1 aioType:(int)arg2 sessionId:(id)arg3 CallBack:(CDUnknownBlockType)arg4;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getSpriteReqWith:(int)arg1;
- (void)sendSSOByteWithReq:(id)arg1 dataStr:(const char *)arg2;
- (void)sendSSOWithReq:(id)arg1 dataStr:(const char *)arg2 pBdata:(id)arg3;
- (void)sendSSOWithReq:(id)arg1 dataStr:(const char *)arg2;
- (void)sendSSOWithCmd:(id)arg1 params:(id)arg2 souceType:(int)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)sendSSOWithCmd:(id)arg1 params:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)sendAIOSSOWithCmd:(id)arg1 dataStr:(const char *)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)sendSSOWithCmd:(id)arg1 dataStr:(const char *)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

