//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSMutableDictionary;

@protocol IQQMsgRegisterStatistics <NSObject>
- (void)uploadClearTaskTimeWhileLogout:(double)arg1;
- (void)uploadMsgThreadTaskCountWhileLogout:(int)arg1;
- (void)checkShouldReportReceiveDataCountWhileLogout;
- (void)receiveDataWhileLogout;
- (unsigned long long)getRegisterMsgNum;
- (void)recordRegisterFirstGroupAndDiscussMsgRead:(long long)arg1 type:(int)arg2 isSetTop:(_Bool)arg3;
- (void)recordRegisterGroupAndDiscussMsg:(long long)arg1 type:(int)arg2;
- (_Bool)isRecordedFirstClick;
- (void)recordRegisterGroupAndDiscussNum:(unsigned long long)arg1;
- (void)recordRegisterMsgNum:(unsigned long long)arg1;
- (void)recordRegisterDownPacketSize:(unsigned long long)arg1;
- (void)recordRegisterUpPacketSize:(unsigned long long)arg1;
- (void)onRegisterAbort;
- (void)onRegisterEnd;
- (void)onRegisterMsgLost:(unsigned long long)arg1;
- (void)onRegisterTimeout:(_Bool)arg1 lmrTimeOut:(_Bool)arg2;
- (void)onRegisterRestEnd;
- (void)onRegisterC2CEnd;
- (void)onRegisterNoticeEnd;
- (void)onRegisterAck;
- (void)onRegisterBegin:(_Bool)arg1;
- (void)onEndUILoading:(NSMutableDictionary *)arg1;
- (void)onPostUIEnd;
- (void)handleGroupMsgPacketSpendTime:(unsigned long long)arg1;
- (void)handleDisMsgPacketSpendTime:(unsigned long long)arg1;
- (void)handleC2CMsgPacketSpendTime:(unsigned long long)arg1;
- (void)handleDisSeqSpendTime:(unsigned long long)arg1 count:(int)arg2;
- (void)handleGroupSeqSpendTime:(unsigned long long)arg1 count:(int)arg2;
- (void)loadReqDataSpendTime:(unsigned long long)arg1 groupCount:(int)arg2 disCount:(int)arg3;
- (void)handleC2CPacketOnEnd:(int)arg1;
- (void)handleLMRPacketOnEndLoading:(int)arg1;
- (void)onC2CPacketRecieve:(int)arg1;
- (void)onLMRPacketRecieve:(int)arg1;
- (void)onConnectSuc;
@end

