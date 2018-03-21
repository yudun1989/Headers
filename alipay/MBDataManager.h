//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APCustomStorage, MBAppInfo;
@protocol MBFeedBackDAOProxy, MBMessageInfoDAOProxy, OS_dispatch_queue;

@interface MBDataManager : NSObject
{
    NSObject<OS_dispatch_queue> *_feedBackDataQueue;
    MBAppInfo *_appInfo;
    APCustomStorage *_storage;
    id <MBMessageInfoDAOProxy> _messageInfoDAOproxy;
    id <MBFeedBackDAOProxy> _feedBackShowDAOproxy;
    id <MBFeedBackDAOProxy> _feedBackClickDAOproxy;
    double _lastPreloadTime;
}

@property(nonatomic) double lastPreloadTime; // @synthesize lastPreloadTime=_lastPreloadTime;
@property(retain, nonatomic) id <MBFeedBackDAOProxy> feedBackClickDAOproxy; // @synthesize feedBackClickDAOproxy=_feedBackClickDAOproxy;
@property(retain, nonatomic) id <MBFeedBackDAOProxy> feedBackShowDAOproxy; // @synthesize feedBackShowDAOproxy=_feedBackShowDAOproxy;
@property(retain, nonatomic) id <MBMessageInfoDAOProxy> messageInfoDAOproxy; // @synthesize messageInfoDAOproxy=_messageInfoDAOproxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) MBAppInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
- (id)getFeedBackString:(id)arg1;
- (void)feedbackDataToCDP;
- (void)saveFeedBackShowDic:(id)arg1 feedBackClickDic:(id)arg2;
- (_Bool)doDaoTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)mergeArrayWithTodoArray:(id)arg1 withNoticeArray:(id)arg2;
- (void)mergeDatabase;
- (void)updateRecentContactMessageForFriendTab:(_Bool)arg1;
- (void)updateRecentContactMessageForFriendTab;
- (void)checkAndClearStaleMessages;
- (_Bool)clearAllMessagesWithType:(unsigned long long)arg1;
- (_Bool)clearAllMessagesWithType:(unsigned long long)arg1 isRecentDelete:(_Bool)arg2;
- (_Bool)setAllMessageReadWithType:(unsigned long long)arg1;
- (_Bool)setMessageReadWithMsgIDs:(id)arg1;
- (id)queryLatestMessage;
- (id)queryAllUnreadMessagesInPushMessages:(id)arg1;
- (id)queryMessagesWithType:(unsigned long long)arg1 beforeItem:(id)arg2 limit:(unsigned long long)arg3;
- (long long)queryUnreadMessageCountWithType:(unsigned long long)arg1;
- (long long)queryMessageCountWithType:(unsigned long long)arg1;
- (_Bool)deleteMessages:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)deleteMessagesWithTemplateCode:(id)arg1;
- (_Bool)deleteMessages:(id)arg1;
- (_Bool)deleteMessagesWithIMsgDs:(id)arg1;
- (_Bool)handleNewMessageInfoList:(id)arg1;
- (void)switchMessageProxyToType:(unsigned long long)arg1;
- (id)getTableName:(unsigned long long)arg1;
- (void)onLanguageChangeNotify;
- (void)recentContactDeleted:(id)arg1;
- (void)loginNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAppInfo:(id)arg1;

@end

