//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/GroupDBServiceInterface-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQLockDictionary, QQTroopAnnouncementTable, QQTroopListTable, QQTroopMemberTable, QQTroopMsgSeqTable, QQTroopRecnetTable, QQTroopRemarkTable;
@protocol IGroupDBServiceStateObserver;

@interface GroupDBService : NSObject <GroupDBServiceInterface, DBAsyncCallbackProtocol>
{
    id <IGroupDBServiceStateObserver> _groupDbServiceStateObserver;
    NSString *_uin;
    QQLockDictionary *_groupMaxSeqDic;
    NSMutableArray *_groupListInfoArr;
    NSMutableDictionary *_groupFriendDict;
    NSMutableDictionary *_groupListDict;
    NSMutableDictionary *_troopMemberTmpDic;
    NSMutableDictionary *_groupExInfoDic;
    QQTroopRemarkTable *_troopRemakDB;
    QQTroopMemberTable *_troopMemDB;
    QQTroopMsgSeqTable *_troopMsgSeqDB;
    QQTroopListTable *_troopListDB;
    QQTroopAnnouncementTable *_troopAnnounceDB;
    QQLockDictionary *_troopMsgsTables;
    QQTroopRecnetTable *_recentTable;
}

+ (id)getInstance;
@property(copy) NSMutableDictionary *groupListDict; // @synthesize groupListDict=_groupListDict;
- (void).cxx_destruct;
- (void)updateMessageAfterLargeMsgRecved:(id)arg1;
- (void)delAllGrayTipsMsg;
- (id)getGrayTipsToGroupDB;
- (id)getRichMessage:(id)arg1 msgSeq:(unsigned int)arg2;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2 fromUin:(unsigned long long)arg3;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2;
- (void)updateMessageContentAndType:(id)arg1;
- (id)getMsgExistFromDates:(id)arg1 toDates:(id)arg2 uin:(id)arg3;
- (_Bool)getMsgExistFromDate:(id)arg1 toDate:(id)arg2 uin:(id)arg3;
- (id)getFirstMsgFromDate:(id)arg1 toDate:(id)arg2 uin:(id)arg3;
- (id)getEarliestMessageDateWithUin:(id)arg1;
- (id)getRecentGroupMsgWithGroupCodes:(id)arg1;
- (id)getRecentGroupMsg:(unsigned long long)arg1;
- (id)getRecentGroupMsg;
- (void)updateMessageReadStateAndExInfo:(id)arg1;
- (void)updateMessageExInfo:(id)arg1;
- (id)groupMessageListIncludingMsg:(id)arg1 indexReturn:(int *)arg2 count:(int)arg3;
- (id)groupMessageListIncludingMsg:(id)arg1 pageReturn:(int *)arg2 pagesize:(int)arg3;
- (id)groupMessageWithUin:(id)arg1 keyword:(id)arg2 pagesize:(unsigned long long)arg3 page:(unsigned long long)arg4 includeSelf:(_Bool)arg5;
- (_Bool)updateGroupMsg:(id)arg1 Type:(int)arg2;
- (_Bool)updateGroupMsg:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)distinctMessagsFromReceived:(id)arg1 isRoam:(_Bool)arg2 extraInfo:(id)arg3 msgSource:(int)arg4;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessageRichInfo:(id)arg1;
- (id)getLastMessageInGroup:(id)arg1 uin:(id)arg2;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)_removeMessageFromCache:(id)arg1;
- (void)clearRecentTroopMsgSync;
- (void)clearAllTroopMsg;
- (_Bool)ClearAllOverdueGrayTipsMsg;
- (id)GetAnnouncementMsgWithSeq:(long long)arg1 groupCode:(long long)arg2 msgTime:(long long)arg3;
- (_Bool)deleteTroopAnnounceMsgBySeq:(long long)arg1;
- (_Bool)deleteAllTroopAnnouncementMsg;
- (void)DeleteTroopAnouncementMsgArr:(id)arg1;
- (_Bool)DeleteTroopAnouncementMsg:(long long)arg1;
- (_Bool)UpadateTroopAnouncementMsgArray:(id)arg1;
- (_Bool)insertTroopAnouncementMsgArray:(id)arg1;
- (id)GetAnouncementMsgWithSvrMsgId:(long long)arg1;
- (id)GetAnouncementMsgWithMsgId:(long long)arg1;
- (id)GetGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 Seq:(int)arg3;
- (id)GetAnouncementMsgOfReadState:(_Bool)arg1;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 AscOrder:(_Bool)arg2 HadReaded:(_Bool)arg3;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 HadReaded:(_Bool)arg4;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 AscOrder:(_Bool)arg2 StartTime:(long long)arg3 EndTime:(long long)arg4;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 TypeArray:(id)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 Type:(int)arg3 Type:(int)arg4 AscOrder:(_Bool)arg5 StartTime:(long long)arg6 EndTime:(long long)arg7;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5;
- (id)GetLastAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 limit:(int)arg3;
- (id)GetLastAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2;
- (void)SetMsgSendStateWithMsgID:(id)arg1 groupcode:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (int)asynGetMsgFromTroop:(id)arg1 WithTypes:(id)arg2 notMoreThanSeq:(long long)arg3 limitCount:(unsigned int)arg4 callback:(id)arg5 userdata:(id)arg6;
- (int)asyncUpdateGroupMessageSeq:(id)arg1 msgID:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 callback:(id)arg4 userdata:(id)arg5;
- (int)asyncDeleteGroupMsgWithMsgId:(long long)arg1 groupCode:(id)arg2 msgType:(int)arg3 callback:(id)arg4 userdata:(id)arg5;
- (int)asyncUpdateGroupRichMsgState:(id)arg1 msgId:(int)arg2 msgTime:(int)arg3 state:(int)arg4 callback:(id)arg5 userdata:(id)arg6;
- (id)getGroupExInfoDic;
- (int)asyncUpdateInitialAvatarUinList:(id)arg1 groupCode:(int)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncUpdateTroopName:(id)arg1 groupCode:(int)arg2 groupType:(int)arg3 groupMemNum:(int)arg4 groupFlag:(int)arg5 groupFace:(int)arg6 memNewSeq:(int)arg7 memCardNewSeq:(int)arg8 infoSeq:(int)arg9 callback:(id)arg10 userdata:(id)arg11;
- (int)asyncUpdateTroopName:(id)arg1 groupCode:(int)arg2 groupType:(int)arg3 groupMemNum:(int)arg4 groupFlag:(int)arg5 groupFace:(int)arg6 memNewSeq:(int)arg7 infoSeq:(int)arg8 callback:(id)arg9 userdata:(id)arg10;
- (int)asyncUpdateTroopName:(id)arg1 groupCode:(int)arg2 groupType:(int)arg3 groupFlag:(int)arg4 groupFace:(int)arg5 infoSeq:(int)arg6 callback:(id)arg7 userdata:(id)arg8;
- (int)asyncUpdateGroupMemCardOSeq:(int)arg1 MemCardOSeq:(int)arg2;
- (int)asyncUpdateGroupMemOldSeq:(int)arg1 MemOldSeq:(int)arg2;
- (int)asyncUpdateGroupRankSeq:(int)arg1 rankSeq:(int)arg2;
- (int)asyncDeleteTroopListByGroupCode:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (void)deleteTroopRecentDB:(id)arg1;
- (int)asyncDeleteTroopMsg:(id)arg1 FromSeq:(id)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncDeleteTroopMemberCache:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncUpdateTroopRemarkStatus:(id)arg1:(id)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncUpdateTroopMemStatus:(id)arg1:(id)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncInsertTroopMemBatch:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncUpdateTroopRemarkLastSeq:(id)arg1 groupCode:(id)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncInsertTroopListForUin:(unsigned int)arg1 code:(unsigned int)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncDeleteMsgsAndMaxSeqWithGroupCode:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncDeleteMsgsWithGroupCode:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (void)directInsertMessageIntoRecentDb:(id)arg1;
- (void)directInsertMessageIntoDb:(id)arg1;
- (int)asyncInsertTroopMessageArray:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (void)updateTroopName:(id)arg1 groupCode:(int)arg2 groupType:(int)arg3 groupFlag:(int)arg4 groupFace:(int)arg5 infoSeq:(int)arg6;
- (void)updateGroupMaxSeqToDB:(id)arg1;
- (void)updateGroupMaxServerSeq:(id)arg1 MaxSeq:(long long)arg2;
- (id)getTroopSeqObj:(id)arg1;
- (void)clearGroupFriendCache;
- (void)insertTroopListForUin:(unsigned int)arg1 code:(unsigned int)arg2;
- (void)deleteTroopMemberCache:(id)arg1;
- (long long)groupMsgMaxSeq:(id)arg1 uin:(id)arg2;
- (long long)GetGroupMsgMaxSeq:(id)arg1 uin:(id)arg2;
- (void)insertTroopRemarkListBatch:(id)arg1;
- (id)getTroopRemarkList:(id)arg1;
- (id)getUnFinishRemark;
- (id)GetTroopMemByGroupCode:(id)arg1 memberUin:(id)arg2;
- (id)GetTroopMemByGroupCode:(id)arg1;
- (void)InsertTroopMemBatch:(id)arg1;
- (id)GetTroopUinAndCode;
- (void)QQDataCenter_DeleteMessage:(id)arg1 before:(int)arg2;
- (int)QQDataCenter_GetGroupAllTypeMessageCount:(id)arg1;
- (int)QQDataCenter_GetGroupMessageCount:(id)arg1;
- (id)GetTroopUinAndCodeByGroupCode:(id)arg1;
- (id)getTroopRemarkLastSeq:(id)arg1;
- (void)updateTroopRemarkLastSeq:(id)arg1 groupCode:(id)arg2;
- (id)groupMessageWithUin:(id)arg1 msgID:(int)arg2;
- (id)groupMessageNoBlankWithUin:(id)arg1 endSeq:(long long)arg2 count:(int)arg3;
- (id)directGetRecentMessageInGroup:(id)arg1 limitCount:(int)arg2;
- (id)_groupMessageConsiderCriticalValueWithUin:(id)arg1 EndSeq:(long long)arg2 Limit:(long long)arg3 justFromCache:(_Bool)arg4;
- (id)groupMessageFromCacheWithUin:(id)arg1 EndSeq:(long long)arg2 Limit:(long long)arg3;
- (id)groupMessageConsiderCriticalValueWithUin:(id)arg1 EndSeq:(long long)arg2 Limit:(long long)arg3;
- (id)groupMessageWithUin:(id)arg1 startSeq:(long long)arg2 endSeq:(long long)arg3;
- (id)_groupMessageFromCacheWithUin:(id)arg1 StartSeq:(long long)arg2 EndSeq:(long long)arg3 WithPredicate:(id)arg4 Limit:(long long)arg5;
- (id)groupMessageWithUinAsc:(id)arg1 count:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (id)groupMessageWithUinAsc:(id)arg1 pagesize:(unsigned long long)arg2 page:(unsigned long long)arg3;
- (id)groupMessageWithUinDesc:(id)arg1 memUins:(id)arg2 typeArray:(id)arg3 pagesize:(unsigned long long)arg4 page:(unsigned long long)arg5;
- (id)groupMessageWithUinDesc:(id)arg1 memUin:(id)arg2 typeArray:(id)arg3 pagesize:(unsigned long long)arg4 page:(unsigned long long)arg5;
- (id)DismissDuplicateMsg:(id)arg1;
- (_Bool)isHasGroup:(id)arg1;
- (id)getGroupListAllKeys;
- (void)setNewGroupListDict:(id)arg1;
- (id)getGroupListDict;
- (void)setNickForGroupCode:(id)arg1 name:(id)arg2;
- (long long)uinForGroupCode:(id)arg1;
- (id)nickForGroupCode:(id)arg1;
- (void)setTroopMemberInCache:(id)arg1 forGroup:(id)arg2;
- (void)clearTroopMemberCache;
- (void)removeTroopMemberInCache:(id)arg1;
- (id)getTroopMemberInCache:(id)arg1;
- (id)GetRemarkObj:(id)arg1;
- (int)statusByGroup:(id)arg1:(id)arg2;
- (id)autoNickForGroup:(id)arg1:(id)arg2;
- (id)autoNickForGroup:(id)arg1:(id)arg2 defaultUin:(_Bool)arg3;
- (id)cardForGroup:(id)arg1:(id)arg2;
- (id)nickForGroupSelView:(id)arg1 groupCode:(id)arg2;
- (id)nickForGroup:(id)arg1:(id)arg2 loadSycn:(_Bool)arg3;
- (id)nickForGroup:(id)arg1:(id)arg2;
- (id)getGroupListInfoWithFlush:(_Bool)arg1;
- (int)getGroupListInfoCount;
- (void)saveChangeToDB:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)insertGroupMessage:(id)arg1;
- (id)GetMaxSeqForGroup:(id)arg1;
- (void)loadGroupListDic;
- (_Bool)saveGroupExInfoDic;
- (void)loadGroupExInfoDic;
- (id)groupExInfoDicPath;
- (void)loadGroupMaxSeqDict;
- (void)changeAccount:(id)arg1;
- (id)troopMsgDBWithGroupCode:(id)arg1;
- (void)setIsQidianGroup:(id)arg1;
- (_Bool)updateExInfoForInitialGroup:(id)arg1 groupCode:(id)arg2;
- (void)updateGroupMemNum:(int)arg1 ForGroup:(id)arg2;
- (_Bool)updateExInfoForQidianGroup:(id)arg1 groupCode:(id)arg2;
- (void)onTroopInfoUpdated:(id)arg1;
- (_Bool)isQidianGroup:(id)arg1;
- (id)groupExInfo:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)releaseAllCache:(id)arg1;
- (void)releaseAllCache;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)printCallStack;
- (void)updateNickCacheForGroupCode:(id)arg1 name:(id)arg2;
- (void)updateSeqCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

