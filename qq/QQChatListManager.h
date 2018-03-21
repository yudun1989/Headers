//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IMessageListService-Protocol.h>
#import <QQMainProject/IQQMessageProcessor-Protocol.h>
#import <QQMainProject/IQSContactsEngineObserver-Protocol.h>
#import <QQMainProject/IRecentMsgLoaderDelegate-Protocol.h>
#import <QQMainProject/QQAppIconImageDelegate-Protocol.h>

@class MsgAlterItem, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQLockDictionary, QQRecentMessageModel;
@protocol IRecentMsgLoader, OS_dispatch_queue;

@interface QQChatListManager : NSObject <QQAppIconImageDelegate, IMessageListService, IQSContactsEngineObserver, IRecentMsgLoaderDelegate, IQQMessageProcessor>
{
    NSString *_uin;
    QQLockDictionary *_MsgDict;
    NSMutableDictionary *_msgIndexingDic;
    QQLockDictionary *_removedGroups;
    NSMutableArray *_sortedMessageList;
    _Bool _needReload;
    _Bool _inintializedFromFile;
    struct __CFRunLoopObserver *_runloop;
    NSMutableArray *_queueOp;
    id <IRecentMsgLoader> _recentMsgLoader;
    QQLockDictionary *_unreadInfoDicForLowlevel;
    NSObject<OS_dispatch_queue> *_paFollowListQueue;
    MsgAlterItem *_msgAlterItem;
    _Bool _uptMsgBarDisabled;
    QQRecentMessageModel *_interestGuideModel;
    QQRecentMessageModel *_subscribeFolderSetting;
    NSString *_preMyUin;
    QQLockDictionary *_interestAccountDict;
    NSDictionary *_interestAccountSaveCache;
    long long _followListTaskCount;
}

+ (void)destroyInstance;
+ (id)GetInstance;
@property long long followListTaskCount; // @synthesize followListTaskCount=_followListTaskCount;
@property(retain) NSDictionary *interestAccountSaveCache; // @synthesize interestAccountSaveCache=_interestAccountSaveCache;
@property(retain) QQLockDictionary *interestAccountDict; // @synthesize interestAccountDict=_interestAccountDict;
@property(retain) NSString *preMyUin; // @synthesize preMyUin=_preMyUin;
@property(retain) QQRecentMessageModel *subscribeFolderSetting; // @synthesize subscribeFolderSetting=_subscribeFolderSetting;
@property(retain) QQRecentMessageModel *interestGuideModel; // @synthesize interestGuideModel=_interestGuideModel;
@property _Bool uptMsgBarDisabled; // @synthesize uptMsgBarDisabled=_uptMsgBarDisabled;
@property(retain) NSMutableArray *sortedMessageList; // @synthesize sortedMessageList=_sortedMessageList;
@property(retain) NSString *uin; // @synthesize uin=_uin;
@property(retain) QQLockDictionary *MsgDict; // @synthesize MsgDict=_MsgDict;
- (id)processMsgEncapsulation:(id)arg1;
- (void)showOrgGroupFocusFlag:(id)arg1;
- (void)reloadDataAndUI;
- (void)showStarBless;
- (void)closeMassBlessing;
- (void)openMassBlessing;
- (void)updateMassBlessingEntrance:(id)arg1 curTime:(double)arg2;
- (void)onMassBlessingConfigUpdate:(id)arg1;
- (_Bool)isGroupRemoved:(id)arg1;
- (int)getMarkUnreadCount;
- (void)enterAIOClearMarkUnread:(id)arg1;
- (void)claerMarkUnreadForGroup:(id)arg1;
- (void)refreshMarkUnread;
- (void)handleRecentExInfoLoaded:(_Bool)arg1;
- (void)recoverMarkUnreadCount;
- (void)saveMessageListNew;
- (void)loadMessageListFromDBNew;
- (id)convertFlatListToTreeListNew:(id)arg1;
- (void)onIRecentMsgLoaderLoadMsgSuc:(id)arg1 localHandledCountDict:(id)arg2;
- (void)loadLowLevelMsgs;
- (void)onShoppingFolderSCNotify:(id)arg1;
- (void)tryCreateSubscribeFolderSetting;
- (void)tryCreateSubscribeNoGuideMessage;
- (void)loadInterestAccountUnreadCount;
- (void)asycSaveInterestAccountUnreadCount;
- (void)saveInterestAccountUnreadCountImmediately:(_Bool)arg1;
@property(readonly, nonatomic) QQLockDictionary *interestAccountUnreadCountDict;
- (_Bool)firstLoadNewVersion;
- (void)updateSharedChatList;
- (void)reportPublicAccountInfo:(_Bool)arg1 andModel:(id)arg2;
- (void)onMessageTabTopStateChanged:(id)arg1;
- (_Bool)isUinInRenceMsgList:(id)arg1;
- (id)GetMessageModelByModel:(id)arg1;
- (void)onMsgStateChange:(id)arg1;
- (_Bool)shouldUseModelState;
- (_Bool)isMsg:(id)arg1 pieceOfLargeMsg:(id)arg2;
- (void)onPublicAccountAssistantSettingChanged_delay;
- (void)onPublicAccountAssistantSettingChanged:(id)arg1;
- (void)handlePublicAccountNotificationInChatList:(id)arg1;
- (void)saveRecentMsgListInPBFromat;
- (void)sortGroupAssistantAtMsg;
- (void)reloadMessageList;
- (void)setNeedReload:(_Bool)arg1;
- (void)onCmShowGameHotChatMsgComplete_delay;
- (void)onCmShowGameHotChatMsgComplete:(id)arg1;
- (void)onMulAccountsChanged_delay;
- (void)onMulAccountsChanged:(id)arg1;
- (void)clearGroupNotificationUnreadAndSetReported;
- (void)onGroupAssistantSettingChanged:(id)arg1;
- (void)markClusterMessageAsHandled:(id)arg1;
- (void)asyncRefreshUnreadCount:(id)arg1;
- (void)refreshUnreadCount:(id)arg1 type:(int)arg2 withValue:(unsigned int)arg3;
- (void)asyncBatchRefreshUnreadCount:(id)arg1 forAccount:(long long)arg2;
- (void)asyncRefreshUnreadCount:(id)arg1 type:(int)arg2 withValue:(unsigned int)arg3;
- (void)clearUnreadCountWithKey:(id)arg1;
- (void)clearUnreadCount:(id)arg1 type:(int)arg2;
- (void)clearUnReadCount:(id)arg1;
- (void)setMessageContent:(id)arg1 type:(int)arg2 andContent:(id)arg3;
- (void)setMessageContent:(id)arg1 type:(int)arg2 andContent:(id)arg3 andLongMsgState:(unsigned long long)arg4;
- (int)getUnreadMessageCount:(id)arg1 type:(int)arg2;
- (int)filterNearbyClusterTwowayUnreadCount:(id)arg1;
- (int)getDiscussUnreadCountForBackGroudReq;
- (int)getGroupUnreadCountForBackGroudReq;
- (int)getC2CUnreadCountForBackGroundReq;
- (int)getUnreadMessageCount:(int)arg1;
- (int)getUnreadMessageCountExceptMarkUnread;
- (int)getUnreadMessageCount;
- (_Bool)haveUnReadMsg:(id)arg1 type:(int)arg2;
- (_Bool)haveUnReadMsg;
- (id)filterChatListWithUinAtArray:(id)arg1;
- (void)clearMessageList;
- (void)clearAllMessageInfinitly;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessage:(id)arg1 type:(int)arg2;
- (void)clearRecentMessageData;
- (_Bool)saveMessageList;
- (void)updateQQNMsgShowBar;
- (void)updateChatlist;
- (void)updateCacheFromMsgArray:(id)arg1;
- (void)logTraceMessageModel:(id)arg1;
- (void)logTraceSessionModel:(id)arg1;
- (void)updateMessageCache:(id)arg1 messageKey:(id)arg2;
- (void)removeMessageFromCache:(id)arg1;
- (void)removeAllMessageFromCache;
- (id)getSessionFromCache:(id)arg1;
- (id)getMessageFromCache:(id)arg1;
- (void)updateAllMessageTime;
- (void)convertMessageInCluster:(id)arg1 uin:(long long)arg2;
- (void)convertSessionStateFromCluster:(long long)arg1;
- (id)GetMessageModel:(id)arg1 type:(int)arg2;
- (id)GetMessageModel:(id)arg1;
- (id)getUnreadMessageIndexArrayWithShieldFlag:(_Bool)arg1;
- (id)getUnreadMessageIndexArrayBlue;
- (id)getUnreadMessageIndexArrayRed;
- (id)getAllSortedMessageList;
- (id)getTimeSortedSessionList;
- (id)getSessionList;
- (id)getMessageList;
- (void)changeAccount:(id)arg1;
- (void)updateTableWithMessage:(id)arg1 causedBy:(int)arg2;
- (void)updateMessageTime:(id)arg1;
- (void)updateMessageModel:(id)arg1;
- (void)updateLastMessage:(id)arg1;
- (void)updateMessage:(id)arg1;
- (_Bool)isValidMsgModelForMsgList:(id)arg1;
- (void)reloadQQMessageView;
- (void)performedToCheckPriorityForSpecialFriends:(id)arg1;
- (_Bool)checkPriorityForSpecialFriends:(id)arg1;
- (void)onUnReadCountRefreshed:(id)arg1 unreadCount:(int)arg2 type:(int)arg3;
- (_Bool)onMessageCreated:(id)arg1 causedBy:(int)arg2 offlineMsgFlag:(_Bool)arg3;
- (void)onMessageAdded:(id)arg1;
- (void)updateTroopExinfo:(id)arg1 type:(int)arg2;
- (_Bool)checkIsPCOpenGroupMessage:(id)arg1;
- (_Bool)onMessageArrayReceived:(id)arg1 offlineMsgFlag:(_Bool)arg2;
- (void)addMessage:(id)arg1;
- (void)onlyForUpdateSummaryInRecentModel:(id)arg1;
- (void)tryToAlert;
- (void)alert:(id)arg1;
- (void)logAlert:(id)arg1;
- (void)ActionGetQQMessage:(id)arg1;
- (_Bool)checkShouldUpdateMsg:(id)arg1;
- (id)getItemForm:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)createMessageListFrom:(id)arg1;
- (id)getMessageListFormCache:(id)arg1;
- (void)nearByNewUnreadCountCalc:(id)arg1;
- (void)calcLbsClusterModelUnreadCount;
- (void)refreshUnreadCountWithReadInfo:(id)arg1;
- (void)recordWithQQPushMsgMonitor:(id)arg1;
- (void)checkMaxMessageListSize;
- (id)filterHideMessage:(id)arg1;
- (void)deleteMessageWithKey:(id)arg1 shouldReload:(_Bool)arg2;
- (void)deleteMessageWithKeys:(id)arg1;
- (void)deleteMessageWithKey:(id)arg1;
- (void)saveGroupMessageRemoved;
- (_Bool)groupMessageRemovedWithKey:(id)arg1;
- (void)setGroupMessageRemovedWithKey:(id)arg1 removed:(_Bool)arg2;
- (void)setIsQidianGroup:(id)arg1;
- (void)markGroupMessageRecoved:(id)arg1;
- (void)markGroupMessageRemovedWithKey:(id)arg1;
- (void)markGroupMessageRemoved:(id)arg1;
- (void)initRemovedGroupListFromFile;
- (id)getRemovedGroupListFileName;
- (void)loadMessageList;
- (void)configMessageListWith:(id)arg1 handleCountDic:(id)arg2;
- (id)loadMessageListFromDB;
- (void)updateTabTopState;
- (id)loadMessageListFromFile;
- (id)convertFlatListToTreeList:(id)arg1;
- (id)convertDismissOldSystemMessage:(id)arg1;
- (id)converSayHelloToCluster:(id)arg1;
- (id)loadMessageListFromFileInPBFormat;
- (void)dealloc;
- (id)init;
- (int)getReadMsgSessionType:(id)arg1;
- (_Bool)shouldConvertToSession:(id)arg1;
- (id)getSessionClassName:(id)arg1;
- (void)distinguishModelTypeForTwo:(id)arg1 T:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)distinguishModelType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)getMessageKey:(id)arg1 type:(int)arg2;
- (id)getUinFromMessageKey:(id)arg1;
- (id)isDiscussMessageKey:(id)arg1;
- (id)isGroupMessageKey:(id)arg1;
- (id)getMessageKey:(id)arg1;
- (int)parseMessageTypeWithUin:(id)arg1 acctype:(int)arg2;
- (int)parseMessageType:(id)arg1;
- (void)afterGroupVidoChatOthersMesg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetConnectGameTempUpMesg:(id)arg1 newRecMsg:(id)arg2 AssistantPolicy:(int)arg3;
- (void)afterGetArkGameTempUpMesg:(id)arg1 newRecMsg:(id)arg2 AssistantPolicy:(int)arg3;
- (void)afterGetDeliverGiftForOthersMesg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetHomeworkLike:(id)arg1 newRecMsg:(id)arg2 AssistantPolicy:(int)arg3;
- (void)afterGetHomeworkStructMessage:(id)arg1;
- (void)afterGetGroupPublicAccountMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetReceiptMsg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetAtAllGroupMemberMsg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetGroupPicShowMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetGroupFileOrAlbumMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetSpecialFocusMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetQQMsgStructXMLMsg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 causedBy:(int)arg4 AssistantPolicy:(int)arg5;
- (void)afterGetGroupCalendarRemindMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3;
- (void)afterGetAtGroupMemberMsg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetReplyToMeMsg:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 AssistantPolicy:(int)arg4;
- (void)afterGetDeliverGiftMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3;
- (void)afterGetGroupAllMemberGiftMessage:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3;
- (void)troopMsgRemindSettingWithNewObj:(id)arg1 newRecMsg:(id)arg2 oldRecMsg:(id)arg3 causedBy:(int)arg4;
- (id)createArkDebugAssistantMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createExpertMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createMassScheduleMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createMassBlessingMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createActivateFriendsMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createBindAccountsClusterMessageModel;
- (id)createPubAccountMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createHotChatFolderMessageWith:(id)arg1 causedBy:(int)arg2 isNewMsg:(_Bool)arg3;
- (id)createShoppingAssistantAccountMessageWith:(id)arg1 causedBy:(int)arg2 withPolicy:(long long)arg3;
- (id)createPublicServerAccountMessageWith:(id)arg1 causedBy:(int)arg2 withPolicy:(long long)arg3;
- (id)createQQReadInJoyMultipleMessageWith:(id)arg1 causedBy:(int)arg2 withPolicy:(long long)arg3;
- (id)createInterestTribeAccountMessageWith:(id)arg1 causedBy:(int)arg2 withPolicy:(long long)arg3;
- (id)createPublicAccountAssistantMessageWith:(id)arg1 causedBy:(int)arg2 withPolicy:(long long)arg3;
- (id)createDiscussMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createTroopAssistantMessageWith:(id)arg1 causedBy:(int)arg2 isNewMsg:(_Bool)arg3;
- (id)createTroopMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createTmpContactMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createSameStateClusterMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createTmpSameStateMessageWith:(id)arg1 causedBy:(int)arg2 isNewMsg:(_Bool)arg3;
- (id)createRobertMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createGroupNotificationMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (_Bool)createGreetingMessageWith:(id)arg1 clusterModel:(id)arg2 causeBy:(int)arg3 isNew:(_Bool)arg4;
- (id)createNearbyAssistantMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createSayHelloMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createSayHelloMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3 withMessageType:(int)arg4;
- (id)createSayHelloClusterMessageWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;
- (id)createC2CMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createDatalineMessageMessageWith:(id)arg1 causedBy:(int)arg2;
- (id)createSystemMessageMessageWith:(id)arg1 causedBy:(int)arg2;
- (_Bool)haveArkGameTeamTipsConfigWithArkAppName:(id)arg1;
- (id)recombineGreetingMsg:(id)arg1 clusterModel:(id)arg2;
- (id)loadNearByMsgFromDB:(int)arg1;
- (id)loadDeletedGreetingCluster:(id)arg1;
- (id)getMessageBoxClusterFormDB:(id)arg1 clusterUin:(id)arg2;
- (id)loadDeletedCluster:(id)arg1 clusterUin:(id)arg2;
- (id)createRecentMessageModelWith:(id)arg1 causedBy:(int)arg2 isNew:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

