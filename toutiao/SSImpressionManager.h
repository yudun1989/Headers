//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface SSImpressionManager : NSObject
{
    _Bool _isSending;
    struct _opaque_pthread_mutex_t _memoryStoreLock;
    struct _opaque_pthread_mutex_t _appendingImpressionsLock;
    struct _opaque_pthread_mutex_t _customGroupLock;
    struct _opaque_pthread_mutex_t _registObjsLock;
    CDUnknownBlockType _todayExtensionBlock;
    NSMutableDictionary *_memoryStore;
    NSMutableArray *_appendingImpressions;
    NSMapTable *_registObjsMap;
    long long _impressionPolicy;
    NSMutableArray *_customizedGroupDicts;
}

+ (long long)fetchImpressionPolicy;
+ (void)saveImpressionPolicy:(unsigned long long)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *customizedGroupDicts; // @synthesize customizedGroupDicts=_customizedGroupDicts;
@property(nonatomic) long long impressionPolicy; // @synthesize impressionPolicy=_impressionPolicy;
@property(retain, nonatomic) NSMapTable *registObjsMap; // @synthesize registObjsMap=_registObjsMap;
@property(retain, nonatomic) NSMutableArray *appendingImpressions; // @synthesize appendingImpressions=_appendingImpressions;
@property(retain, nonatomic) NSMutableDictionary *memoryStore; // @synthesize memoryStore=_memoryStore;
@property(copy, nonatomic) CDUnknownBlockType todayExtensionBlock; // @synthesize todayExtensionBlock=_todayExtensionBlock;
- (void).cxx_destruct;
- (void)leaveMomentsRecommendUserListWithCategoryName:(id)arg1 cellId:(id)arg2;
- (void)enterMomentsRecommendUserListWithCategoryName:(id)arg1 cellId:(id)arg2;
- (void)recordMomentsRecommendUserListImpressionUserID:(id)arg1 categoryName:(id)arg2 cellId:(id)arg3 status:(long long)arg4 extra:(id)arg5;
- (void)leaveMessageNotificationList;
- (void)enterMessageNotificationList;
- (void)recordMessageNotificationImpressionWithItemID:(id)arg1 status:(long long)arg2 params:(id)arg3;
- (void)leaveVideoRecommendList;
- (void)enterVideoRecommendList;
- (void)recordVideoRecommendListWithUserID:(id)arg1 status:(long long)arg2 extra:(id)arg3;
- (void)leaveArticleRecommendList;
- (void)enterArticleRecommendList;
- (void)recordArticleRecommendListWithUserID:(id)arg1 status:(long long)arg2 extra:(id)arg3;
- (void)leaveVideoFloatListForKeyName:(id)arg1 groupType:(unsigned long long)arg2;
- (void)recordFloatListImpressionKeyName:(id)arg1 groupType:(unsigned long long)arg2 itemID:(id)arg3 status:(long long)arg4 userInfo:(id)arg5;
- (void)trackerWillSendNotification:(id)arg1;
- (void)trackerDidSendNotification:(id)arg1;
- (void)trackerSentSuccessNotification:(id)arg1;
- (void)trackerSentFailNotification:(id)arg1;
- (void)recordSubjectImpressionSubjectGroupID:(id)arg1 groupID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)leavePopularHashtagWithCategoryName:(id)arg1 cellID:(id)arg2;
- (void)enterPopularHashtagWithCategoryName:(id)arg1 cellID:(id)arg2;
- (void)recordPopularHashtagConcernId:(id)arg1 categoryName:(id)arg2 cellId:(id)arg3 status:(long long)arg4 rank:(long long)arg5;
- (void)leaveXiguaLiveRecommendWithCategoryName:(id)arg1 cellID:(id)arg2;
- (void)enterXiguaLiveRecommendWithCategoryName:(id)arg1 cellID:(id)arg2;
- (void)recordXiguaLiveRecommendGroupId:(id)arg1 categoryName:(id)arg2 cellId:(id)arg3 status:(long long)arg4 params:(id)arg5;
- (void)leaveRecommendUserListWithCategoryName:(id)arg1 cellId:(id)arg2;
- (void)enterRecommendUserListWithCategoryName:(id)arg1 cellId:(id)arg2;
- (void)recordRecommendUserListImpressionUserID:(id)arg1 categoryName:(id)arg2 cellId:(id)arg3 status:(long long)arg4 extra:(id)arg5 params:(id)arg6;
- (void)recordRecommendUserListImpressionUserID:(id)arg1 categoryName:(id)arg2 cellId:(id)arg3 status:(long long)arg4 extra:(id)arg5;
- (void)leaveForumListForKeyName:(id)arg1;
- (void)enterForumListForKeyName:(id)arg1;
- (void)recordForumImpressionKeyName:(id)arg1 forumID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)leaveForumViewForKeyName:(id)arg1;
- (void)enterForumViewForKeyName:(id)arg1;
- (void)leaveWeitoutiaoViewForKeyName:(id)arg1;
- (void)enterWeitoutiaoViewForKeyName:(id)arg1;
- (void)recordWeitoutiaoImpressionKeyName:(id)arg1 weitoutiaoID:(id)arg2 groupID:(id)arg3 status:(long long)arg4 userInfo:(id)arg5;
- (void)leaveMomentViewForKeyName:(id)arg1;
- (void)enterMomentViewForKeyName:(id)arg1;
- (void)recordMomentImpressionKeyName:(id)arg1 momentID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)recordImageRecommendImpressionWithKeyName:(id)arg1 status:(long long)arg2 itemID:(id)arg3 userInfo:(id)arg4;
- (void)recordDetailWendaImpressionWithKeyName:(id)arg1 listType:(unsigned long long)arg2 status:(long long)arg3 itemID:(id)arg4 userInfo:(id)arg5;
- (void)recordDetailRelatedImpressionWithKeyName:(id)arg1 listType:(unsigned long long)arg2 status:(long long)arg3 itemID:(id)arg4 userInfo:(id)arg5;
- (void)recordVideoDetailImpressionWithKeyName:(id)arg1 itemID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)enterVideoDetailViewForKeyName:(id)arg1;
- (void)leaveVideoDetailViewForKeyName:(id)arg1;
- (void)recordCommentDetailReplyImpressionGroupID:(id)arg1 commentID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)recordCommentImpressionGroupID:(id)arg1 commentID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)enterCommentViewForGroupID:(id)arg1;
- (void)leaveCommentViewForGroupID:(id)arg1;
- (void)enterCommentDetailViewForGroupID:(id)arg1;
- (void)leaveCommentDetailViewForGroupID:(id)arg1;
- (void)recordGroupImpressionCategoryID:(id)arg1 concernID:(id)arg2 refer:(unsigned long long)arg3 modelType:(unsigned long long)arg4 groupID:(id)arg5 adID:(id)arg6 status:(long long)arg7 userInfo:(id)arg8;
- (void)enterGroupViewForCategoryID:(id)arg1 concernID:(id)arg2 refer:(unsigned long long)arg3;
- (void)leaveGroupViewForCategoryID:(id)arg1 concernID:(id)arg2 refer:(unsigned long long)arg3;
- (void)leaveWendaListKeyName:(id)arg1 groupType:(unsigned long long)arg2;
- (void)enterWendaListKeyName:(id)arg1 groupType:(unsigned long long)arg2;
- (void)recordWendaListImpressionKeyName:(id)arg1 ansID:(id)arg2 groupType:(unsigned long long)arg3 status:(long long)arg4 userID:(id)arg5 userInfo:(id)arg6;
- (void)recordWendaListImpressionKeyName:(id)arg1 ansID:(id)arg2 groupType:(unsigned long long)arg3 status:(long long)arg4 userInfo:(id)arg5;
- (void)leaveConcernListKeyName:(id)arg1;
- (void)enterConcernListKeyName:(id)arg1;
- (void)recordConcernListImpressionKeyName:(id)arg1 concernID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)leaveThreadCommentListKeyName:(id)arg1;
- (void)enterThreadCommentListKeyName:(id)arg1;
- (void)recordThreadCommentListImpressionKeyName:(id)arg1 commentID:(id)arg2 status:(long long)arg3 userInfo:(id)arg4;
- (void)recordThreadListNewsGroupImpressionKeyName:(id)arg1 groupType:(unsigned long long)arg2 groupID:(id)arg3 status:(long long)arg4 userInfo:(id)arg5;
- (void)recordThreadListImpressionKeyName:(id)arg1 groupType:(unsigned long long)arg2 momoAdID:(id)arg3 status:(long long)arg4 userInfo:(id)arg5;
- (void)leaveThreadListForKeyName:(id)arg1 groupType:(unsigned long long)arg2;
- (void)enterThreadListForKeyName:(id)arg1 groupType:(unsigned long long)arg2;
- (void)recordThreadListImpressionKeyName:(id)arg1 groupType:(unsigned long long)arg2 threadID:(id)arg3 status:(long long)arg4 userInfo:(id)arg5;
- (void)recordWithListKey:(id)arg1 listType:(unsigned long long)arg2 itemID:(id)arg3 modelType:(unsigned long long)arg4 adID:(id)arg5 status:(long long)arg6 userInfo:(id)arg7;
- (void)leaveWithListKey:(id)arg1 listType:(unsigned long long)arg2;
- (void)enterWithListKey:(id)arg1 listType:(unsigned long long)arg2;
- (void)addImpressionGroupFromDictionary:(id)arg1;
- (void)removeRegist:(id)arg1;
- (void)addRegist:(id)arg1;
- (void)recordForKeyName:(id)arg1 groupType:(unsigned long long)arg2 itemID:(id)arg3 modelType:(unsigned long long)arg4 adID:(id)arg5 status:(long long)arg6 userID:(id)arg7 userInfo:(id)arg8;
- (void)recordForKeyName:(id)arg1 groupType:(unsigned long long)arg2 itemID:(id)arg3 modelType:(unsigned long long)arg4 adID:(id)arg5 status:(long long)arg6 userInfo:(id)arg7;
- (void)enterViewForKey:(id)arg1 itemType:(unsigned long long)arg2;
- (void)leaveViewForKey:(id)arg1 itemType:(unsigned long long)arg2;
- (id)groupForKeyName:(id)arg1 itemType:(unsigned long long)arg2;
- (void)save;
- (void)reuseModels;
- (void)saveImpression:(id)arg1;
- (id)fetchItemImpression;
- (void)deleteSavedImpressions;
- (_Bool)enableForGroupType:(unsigned long long)arg1 keyName:(id)arg2;
- (id)ImpressionsfromType:(unsigned long long)arg1;
- (void)cleanOutDiskCacheIfNeeded;
- (void)setupMutexLock;
- (id)init;
- (void)dealloc;

@end

