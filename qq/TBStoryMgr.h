//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, TBFeedVideoList;
@protocol OS_dispatch_queue, TBStoryMgrDelegate;

@interface TBStoryMgr : NSObject <TBBizNetworkLogicDelegate>
{
    NSMutableArray *_selfVidBasicInfoReqSeqList;
    NSMutableArray *_selfVidDynamicInfoReqSeqList;
    NSMutableArray *_requestVideoFeatureSeqArr;
    NSString *_displayLatestFeedId;
    _Bool _isFeedIdListEnd;
    NSMutableArray *_feedIdList;
    NSMutableArray *_displayFeedIdList;
    NSMutableDictionary *_feedListRefreshTaskDic;
    int _refreshTime;
    _Bool _bEnableHeightCache;
    _Bool _isRefreshFailed;
    unsigned int _autoPlayNetType;
    id <TBStoryMgrDelegate> _delegate;
    long long _dataType;
    TBFeedVideoList *_selfVidListInfo;
    NSObject<OS_dispatch_queue> *_logQueue;
    NSString *_latestRequestBeginFeedID;
}

@property(copy, nonatomic) NSString *latestRequestBeginFeedID; // @synthesize latestRequestBeginFeedID=_latestRequestBeginFeedID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(retain, nonatomic) TBFeedVideoList *selfVidListInfo; // @synthesize selfVidListInfo=_selfVidListInfo;
@property(nonatomic) unsigned int autoPlayNetType; // @synthesize autoPlayNetType=_autoPlayNetType;
@property(nonatomic) _Bool isRefreshFailed; // @synthesize isRefreshFailed=_isRefreshFailed;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) __weak id <TBStoryMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onJoinShareGroupVideo:(id)arg1;
- (void)onRefreshShareGroupVideo:(id)arg1;
- (void)onCancelPublishingTaskFailed:(id)arg1;
- (void)onCancelPublishingTaskSuccess:(id)arg1;
- (void)delFeedIdFromRspList:(id)arg1;
- (void)deleteFeedData:(id)arg1;
- (void)onDelVideoRsp:(id)arg1;
- (void)onDelCommentRsp:(id)arg1;
- (void)refreshFeedListUI:(_Bool)arg1;
- (void)handleErrorInfo:(id)arg1;
- (void)refreshData;
- (void)onUpdateUserConfig:(id)arg1;
- (void)onLoadMoreVideo:(id)arg1;
- (void)onCommentActionCompleteRsp:(id)arg1;
- (void)onLikeActionCompleteRsp:(id)arg1;
- (void)onVideoBeginSend:(id)arg1;
- (void)onVideoSendCompleteRsp:(id)arg1;
- (void)onStoryShareToDiscover:(id)arg1;
- (void)onVideoProcessCompleteRsp:(id)arg1;
- (void)onFeedBeginSend:(id)arg1;
- (void)deliverUserSelfInfoToViewController:(id)arg1;
- (void)handleUserSelfInfoErrorReq:(id)arg1;
- (void)handleRspFeedTagInfoList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3 withUserData:(id)arg4;
- (void)handleRspFeedViewCountList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3 withUserData:(id)arg4;
- (void)handleRspFeedLikeList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3 withUserData:(id)arg4;
- (void)handleRspFeedComment:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3;
- (void)handleRspFeedCommentList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3 withUserData:(id)arg4;
- (void)handleRspYearNodeList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3 withUserData:(id)arg4;
- (void)handleRspFeedBasicInfoList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3 withUserData:(id)arg4;
- (void)handleRspFeedIdList:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3;
- (void)handleRspGetVideoBasicInfoList:(unsigned long long)arg1 withRspModel:(id)arg2 withRequestModel:(id)arg3;
- (void)handleRspGetSelfOneDayList:(id)arg1 withRequestModel:(id)arg2 withLocalErr:(id)arg3;
- (void)handleRspUserSelfInfo:(id)arg1 withRequestModel:(id)arg2;
- (void)handleRspUserGuide:(id)arg1 withLocalError:(id)arg2;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)handleRspSelfTodayFeedFeatureInfo:(id)arg1 requestModel:(id)arg2 withLocalError:(id)arg3;
- (void)handleRspConfig:(id)arg1;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (long long)getIndexAtFeedIdList:(id)arg1;
- (id)getNextFeedId:(id)arg1 currentIndex:(long long)arg2;
- (void)insertFeedIdInDisplayList:(id)arg1;
- (void)mergeFeedIdList;
- (void)checkSelfStoryList;
- (void)requestSelfStoryInfoList;
- (void)requestSelfVidList:(_Bool)arg1;
- (void)requestUserSelfInfo;
- (void)requestDeliverUserGuide;
- (id)getSelfTodayVideoInfoCache:(id)arg1;
- (void)asyncGetSelfTodayVideoListCache:(CDUnknownBlockType)arg1;
- (id)getSelfTodayVideoListCache;
- (id)getTodayFeedFeatureInfoCache;
- (id)getUserSelfInfoCaches;
- (void)saveRefreshTaskWithKey:(id)arg1;
- (void)completeRefreshTaskWithKey:(id)arg1;
- (void)requestMoreComment:(id)arg1;
- (void)requestFeedDetailList:(id)arg1 isRefresh:(_Bool)arg2;
- (void)requestFeedIdList:(_Bool)arg1 gpsModel:(id)arg2;
- (void)requesetProfileFeedIdList:(_Bool)arg1 withUnionID:(id)arg2 hasYearNode:(_Bool)arg3;
- (void)loadFeedInfo:(_Bool)arg1;
- (_Bool)isFakeModel:(id)arg1;
- (void)reloadFeedIdList:(id)arg1 isEnd:(_Bool)arg2 isRefresh:(_Bool)arg3;
- (void)requestTodayFeedFeatureInfo;
- (void)requestUserConfig;
- (void)getAutoPlayCache;
- (_Bool)isFeedIdDisplay:(id)arg1;
- (void)onSubscriptCancel:(id)arg1;
- (void)onForbidUser:(id)arg1;
- (_Bool)needInsertInteractiveModel:(id)arg1;
- (void)asyncGenerateStoryInteractiveViewModel:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetDisplayFeedListModel720:(id)arg1 filterRecommend:(_Bool)arg2 beginDay:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)insertNewDayFeed:(id)arg1 dayFeeds:(id)arg2 feedList:(id)arg3;
- (void)asyncGetStoryListFilterRecommend:(_Bool)arg1 refresh:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetStoryProfileList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetProfileFeedListCache:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetFeedListCacheFilterRecommend:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)refreshProfileLastFeedId:(id)arg1;
- (void)refreshLastFeedId:(id)arg1;
- (long long)requestFeedListCount;
- (_Bool)isFeedListEnd;
- (void)updateFeedListData;
- (void)checkCommentInfoListComplete:(id)arg1;
- (void)requestFeedCommentInfo:(id)arg1;
- (void)updateFeedInfo:(id)arg1 isCommentInfo:(_Bool)arg2 isLikeInfo:(_Bool)arg3;
- (id)getNextThreeFeedId:(id)arg1;
- (void)requestFeedVideoList:(id)arg1;
- (void)requestProfileFeedList:(_Bool)arg1 withUnionID:(id)arg2;
- (void)requestFeedList:(_Bool)arg1 gpsModel:(id)arg2;
- (void)refreshSelfStoryList;
- (id)getSelfFeedListModel;
- (id)getSelfCurrentDayFeedId;
- (unsigned int)getAutoPlayNetType;
- (void)requestSelfInfo;
- (void)dealloc;
- (void)doInitNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

