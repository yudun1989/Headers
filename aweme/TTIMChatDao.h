//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTIMChatDao : NSObject
{
    NSString *_insertSql;
    NSString *_groupInsertSql;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *groupInsertSql; // @synthesize groupInsertSql=_groupInsertSql;
@property(copy, nonatomic) NSString *insertSql; // @synthesize insertSql=_insertSql;
- (void).cxx_destruct;
- (_Bool)shrink:(id)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)queryGroupMsg:(id)arg1 before:(id)arg2 valid:(_Bool)arg3 limit:(long long)arg4 withDB:(id)arg5;
- (id)queryGroupMsg:(id)arg1 before:(id)arg2 limit:(long long)arg3 withDB:(id)arg4;
- (id)queryMsg:(id)arg1 offsetMid:(long long)arg2 offsetCid:(long long)arg3 limit:(long long)arg4 withDB:(id)arg5;
- (id)queryMsg:(id)arg1 before:(id)arg2 limit:(long long)arg3 withDB:(id)arg4;
- (id)queryGroupMsg:(id)arg1 valid:(_Bool)arg2 limit:(long long)arg3 withDB:(id)arg4;
- (id)queryGroupMsg:(id)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)queryPersonalMsg:(id)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)queryMsg:(id)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)queryGroupSvrMsg:(id)arg1 svrMsgId:(long long)arg2 withDB:(id)arg3;
- (id)queryPersonalSvrMsg:(id)arg1 svrMsgId:(long long)arg2 withDB:(id)arg3;
- (id)querySvrMsg:(id)arg1 svrMsgId:(long long)arg2 withDB:(id)arg3;
- (id)queryGroupLastSvrMsg:(id)arg1 withDB:(id)arg2;
- (id)queryPersonalLastSvrMsg:(id)arg1 withDB:(id)arg2;
- (id)queryLastSvrMsg:(id)arg1 withDB:(id)arg2;
- (id)queryGroupLstMsg:(id)arg1 isContainNotDelete:(_Bool)arg2 withDB:(id)arg3;
- (id)queryPersonalLstMsg:(id)arg1 isContainNotDelete:(_Bool)arg2 withDB:(id)arg3;
- (id)queryLstMsg:(id)arg1 isContainNotDelete:(_Bool)arg2 withDB:(id)arg3;
- (id)queryLstMsg:(id)arg1 withDB:(id)arg2;
- (int)queryGroupUnreadCount:(id)arg1 withDB:(id)arg2;
- (int)queryPersonalUnreadCount:(id)arg1 withDB:(id)arg2;
- (int)queryUnreadCount:(id)arg1 withDB:(id)arg2;
- (_Bool)markMsgReaded:(id)arg1 withDB:(id)arg2;
- (void)markAllSendingStatusMsgsFailedWithDB:(id)arg1;
- (void)markSendingMsgFail:(id)arg1 withDB:(id)arg2;
- (_Bool)markMsgReaded:(id)arg1 lastCID:(long long)arg2 withDB:(id)arg3;
- (_Bool)markAllReaded:(id)arg1 withDB:(id)arg2;
- (void)update:(id)arg1 msg:(id)arg2 withDB:(id)arg3;
- (_Bool)deleteGroupMsg:(id)arg1 from:(id)arg2 withDB:(id)arg3;
- (_Bool)deletePersonalMsg:(id)arg1 from:(id)arg2 withDB:(id)arg3;
- (_Bool)deleteMsg:(id)arg1 withDB:(id)arg2;
- (_Bool)deleteMsgTable:(id)arg1 withDB:(id)arg2;
- (_Bool)markAllMsgDeleted:(id)arg1 withDB:(id)arg2;
- (_Bool)updateState:(id)arg1 index:(long long)arg2 state:(int)arg3 mid:(long long)arg4 status:(int)arg5 cid:(long long)arg6 withDB:(id)arg7;
- (_Bool)updateState:(id)arg1 cid:(long long)arg2 mid:(long long)arg3 status:(int)arg4 ocid:(long long)arg5 withDB:(id)arg6;
- (id)generateGroupInsertSql:(id)arg1;
- (id)generateInsertSql:(id)arg1;
- (long long)insertOrUpdatePerson:(id)arg1 msgs:(id)arg2 withDB:(id)arg3;
- (void)insertOrUpdateMsgs:(id)arg1 sessionId:(id)arg2 db:(id)arg3 completedBlock:(CDUnknownBlockType)arg4;
- (long long)insertOrUpdateGroup:(id)arg1 msgs:(id)arg2 withDB:(id)arg3;
- (long long)insertOrUpdate:(id)arg1 msgs:(id)arg2 withDB:(id)arg3;

@end
