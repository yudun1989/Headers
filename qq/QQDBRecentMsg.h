//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString, QQRecentMsgTableOperation;

@interface QQDBRecentMsg : NSObject <DBAccountChangedProtocol, IQQDBOperationBase>
{
    QQRecentMsgTableOperation *_recentC2CMsg;
    struct CDBMaxMsgIdManager *_msgIdManager;
    NSString *uin;
}

@property(copy, nonatomic) NSString *uin; // @synthesize uin;
- (void).cxx_destruct;
- (id)loadRecentC2CMessageWithUins:(id)arg1;
- (id)loadRecentC2CMessage:(int)arg1;
- (void)updateMessageExInfo:(id)arg1;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessageRichInfo:(id)arg1;
- (void)SetC2CMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 uin:(id)arg3;
- (unsigned long long)getTableSign;
- (void)updateReadStateWithMessageModel:(id)arg1;
- (double)maxMessageTimeOfUin:(id)arg1;
- (void)clearTableSync;
- (void)clearTable;
- (int)asyncUpdateRecentMsgWithSendResultModels:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (void)deleteMsgsWithUin:(id)arg1;
- (void)directInsertMessage:(id)arg1;
- (void)InsertRecentC2CMsg:(id)arg1;
- (void)setMsgId:(id)arg1;
- (id)loadRecentMessage;
- (id)loadRecentMessageWithUins:(id)arg1 inDB:(id)arg2;
- (id)loadRecentMessageWitdhLimitCount:(int)arg1 inDB:(id)arg2;
- (id)getRecentMsg:(id)arg1;
- (id)initWithUin:(id)arg1;
- (void)onDBChanged:(id)arg1;
- (void)dealloc;
- (void)initRecentC2CMsgTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

