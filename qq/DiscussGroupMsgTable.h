//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString;

@interface DiscussGroupMsgTable : NSObject <IQQDBOperationBase>
{
    NSString *m_tableName;
    struct CDBMaxMsgIdManager *m_pMsgIDManager;
    unsigned long long m_disUin;
    int _lastInsertTimeStamp;
    unsigned int _insertSqlId;
    unsigned int _getMsgWithBeginEndSeqId;
    unsigned int _replaceSqlId;
    _Bool _inited;
}

+ (id)getTableWithDiscussGrp:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)updateMessageAfterLargeMsgRecved:(id)arg1;
- (void)updateMessageAfterLargeMsgRecved:(id)arg1 inDb:(id)arg2;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2 fromUin:(unsigned long long)arg3;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2 fromUin:(unsigned long long)arg3 inDb:(id)arg4;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2 inDb:(id)arg3;
- (void)updateMessageContentAndType:(id)arg1;
- (void)updateMessageContentAndType:(id)arg1 inDb:(id)arg2;
- (void)updateMessageContent:(id)arg1;
- (void)updateMessageContent:(id)arg1 inDb:(id)arg2;
- (void)directInsertToDb:(id)arg1;
- (void)cleanMsgCountInDb:(id)arg1;
- (void)updateMessageReadStateAndExInfo:(id)arg1;
- (_Bool)updateMessageExInfo:(id)arg1;
- (id)getDiscussGroupMsgListIncludingMsg:(id)arg1 pageReturn:(int *)arg2 pagesize:(int)arg3 inDb:(id)arg4;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 keyword:(id)arg2 pageSize:(int)arg3 page:(int)arg4 includeSelf:(_Bool)arg5 inDb:(id)arg6;
- (id)getDiscussGroupMsgListIncludingMsg:(id)arg1 pageReturn:(int *)arg2 pagesize:(int)arg3;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 keyword:(id)arg2 pageSize:(int)arg3 page:(int)arg4 includeSelf:(_Bool)arg5;
- (void)updateMessageReadStateAndExInfo:(id)arg1 inDb:(id)arg2;
- (void)updateMessageExInfo:(id)arg1 inDb:(id)arg2;
- (id)getExInfoDataFromMessageModel:(id)arg1 inDb:(id)arg2;
- (_Bool)updateMessageRichInfo:(id)arg1;
- (_Bool)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1 inDb:(id)arg2;
- (void)updateMessageRichInfo:(id)arg1 inDb:(id)arg2;
- (id)getLatestMessageInGroup:(unsigned long long)arg1 uin:(id)arg2;
- (id)getLatestMessageInGroup:(unsigned long long)arg1 uin:(id)arg2 inDb:(id)arg3;
- (_Bool)removeMesasge:(id)arg1;
- (_Bool)removeMesasge:(id)arg1 inDb:(id)arg2;
- (_Bool)updateDiscussRichMsgState:(int)arg1 msgTime:(int)arg2 state:(int)arg3 inDb:(id)arg4;
- (_Bool)updateDiscussRichMsgState:(int)arg1 discussGroupUin:(long long)arg2 msgTime:(int)arg3 state:(int)arg4;
- (void)asyncGetMsgWithDiscussUin:(id)arg1 WithTypes:(id)arg2 notMoreThanSeq:(long long)arg3 limitCount:(unsigned int)arg4 callback:(id)arg5 userdata:(id)arg6;
- (id)getMsgWithDiscussUin:(id)arg1 withTypes:(id)arg2 notMoreThanSeq:(long long)arg3 limitCount:(unsigned int)arg4 inDb:(id)arg5;
- (void)deleteMsgWithMsgId:(int)arg1;
- (void)deleteMsgWithMsgId:(int)arg1 inDb:(id)arg2;
- (_Bool)SetFileMsgSendStateWithMsgID:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 read:(int)arg4;
- (void)SetFileMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 read:(int)arg3 inDb:(id)arg4;
- (_Bool)SetMsgSendStateWithMsgID:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (void)SetMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 errorCode:(int)arg3 inDb:(id)arg4;
- (void)deleteMsgsSync;
- (void)deleteMsgs;
- (void)deleteMsgs:(id)arg1;
- (unsigned int)getMsgNum;
- (unsigned int)getMsgNuminDb:(id)arg1;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 pageSize:(int)arg2 page:(int)arg3;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 pageSize:(int)arg2 page:(int)arg3 inDb:(id)arg4;
- (id)commonQueryResult:(id)arg1;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 fromSeq:(long long)arg2 endSeq:(long long)arg3;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 fromSeq:(long long)arg2 endSeq:(long long)arg3 inDb:(id)arg4;
- (id)QQMessageWithMsgID:(int)arg1;
- (id)QQMessageWithMsgId:(int)arg1 inDb:(id)arg2;
- (id)_removeDuplicateMessage:(id)arg1;
- (id)getDiscussGroupMsgNoBlank:(unsigned long long)arg1 count:(int)arg2 beforeSeq:(long long)arg3;
- (id)getDiscussGroupMsgNoBlank:(unsigned long long)arg1 count:(int)arg2 beforeSeq:(long long)arg3 inDb:(id)arg4;
- (id)getRecentDiscussGroupMsg:(unsigned long long)arg1 count:(int)arg2;
- (id)getRecentDiscussGroupMsg:(unsigned long long)arg1 count:(int)arg2 inDb:(id)arg3;
- (_Bool)needContinueQuery:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned int)getMaxMsgSeq;
- (unsigned int)getMaxMsgSeq:(id)arg1;
- (_Bool)updateSendMsgServerTime:(long long)arg1 msgModel:(id)arg2 oldMsgTime:(int)arg3;
- (void)updateSendMsgServerTime:(long long)arg1 msgModel:(id)arg2 oldMsgTime:(int)arg3 inDb:(id)arg4;
- (_Bool)saveChangeToDB:(id)arg1;
- (void)updateMessage:(id)arg1 inDb:(id)arg2;
- (_Bool)updateMsgSeq:(int)arg1 byDiscussUin:(long long)arg2 msgID:(int)arg3 time:(int)arg4;
- (void)updateMsgSeq:(int)arg1 byDiscussUin:(long long)arg2 msgID:(int)arg3 time:(int)arg4 inDb:(id)arg5;
- (_Bool)insertMessags:(id)arg1 msgSourceType:(int)arg2;
- (void)setMsgId:(id)arg1;
- (_Bool)insertMsgArray:(id)arg1 msgSourceType:(int)arg2 inDb:(id)arg3;
- (_Bool)insertMsgArray:(id)arg1 inDb:(id)arg2 replace:(_Bool)arg3;
- (void)updateDiscussGroupMsgDbTableinDb:(id)arg1;
- (id)getCreateTableSql;
- (void)createIndex:(id)arg1;
- (unsigned long long)getTableSign;
- (void)dealloc;
- (id)initWithDiscussGroup:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

