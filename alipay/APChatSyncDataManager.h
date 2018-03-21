//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSTimer;

@interface APChatSyncDataManager : NSObject
{
    NSOperationQueue *_syncDownloadQueue;
    NSTimer *_hasMoreTimer;
}

@property(retain, nonatomic) NSTimer *hasMoreTimer; // @synthesize hasMoreTimer=_hasMoreTimer;
@property(retain, nonatomic) NSOperationQueue *syncDownloadQueue; // @synthesize syncDownloadQueue=_syncDownloadQueue;
- (void).cxx_destruct;
- (id)mockPrivateMessageSafeInfoIfNeeded:(id)arg1;
- (id)joinThePreloadTasksWithMessages:(id)arg1 userID:(id)arg2 userType:(id)arg3;
- (id)joinThePreloadTasksWithSessionMap:(id)arg1;
- (void)dealloc;
- (void)liveShowSyncTipStatusBarUpdate:(id)arg1;
- (void)handleInputLongLinkService:(id)arg1;
- (void)deleteLocalMessagesWithClientMsgIds:(id)arg1 userId:(id)arg2 toType:(id)arg3 extParams:(id)arg4;
- (void)deleteLocalWithMessage:(id)arg1;
- (void)deleteLocalMessages:(id)arg1 userType:(id)arg2 userId:(id)arg3 extParams:(id)arg4;
- (void)deleteLocalMessages:(id)arg1 userType:(id)arg2 userId:(id)arg3;
- (void)deleteLocalMessage:(id)arg1;
- (id)handleMockJSONMessage:(id)arg1;
- (void)sendMockMessagesWithPlString:(id)arg1 isPB:(_Bool)arg2;
- (id)handleSingleMessageModel:(id)arg1;
- (id)handleMultiMessageModel:(id)arg1;
- (void)handleSessionMapWithMap:(id)arg1 cancelMap:(id)arg2 deleteArray:(id)arg3 privateMsgSessionMap:(id)arg4 syncInfo:(id)arg5;
- (void)handleIgnoreMessage:(id)arg1;
- (void)handleRequstFriendMessage:(id)arg1 mrfArray:(id)arg2;
- (void)handleBecomeFriendMessage:(id)arg1 friendDict:(id)arg2;
- (void)addMessageList:(id)arg1 inList:(id)arg2;
- (void)addMessage:(id)arg1 inList:(id)arg2;
- (void)handleChatMessageSyncService:(id)arg1 forBiz:(id)arg2;
- (void)handleSyncFor_UCHAT:(id)arg1;
- (void)handleSyncFor_UCHAT_G:(id)arg1;
- (void)handleSyncFor_UCHAT_D:(id)arg1;
- (void)handleSyncFor_UCHAT_P:(id)arg1;
- (id)buildMessageWithPBModel:(id)arg1;
- (id)buildMessageWithDic:(id)arg1;
- (id)getRealDealSessionIdWithPBModel:(id)arg1;
- (id)getRealDealSessionId:(id)arg1;
- (void)userInfoUpdated:(id)arg1;
- (void)realRegisterSyncService;
- (void)registerSyncService;
- (id)init;

@end

