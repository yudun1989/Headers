//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/TBVideoServiceDelegate-Protocol.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TBStoryService : NSObject <TBVideoServiceDelegate>
{
    NSMutableArray *_cancelingPublishTasks;
    NSMutableDictionary *_sessionDict;
    NSMutableDictionary *_seqDict;
    NSObject<OS_dispatch_queue> *_publishTaskQueue;
    NSObject<OS_dispatch_semaphore> *_publishTaskSemaphore;
    NSString *_cuttingTaskVideoPath;
    id _cuttingTaskUserData;
    NSTimer *_exportVideoTimer;
    NSDate *_lastRequestConfigDate;
    NSMutableDictionary *_retryCutDic;
}

+ (id)sharedInstance;
+ (id)NTShareToDiscover;
+ (id)NTMarkAllRead;
+ (id)NTMarkReadExpiredUser;
+ (id)NTLikeVideo;
+ (id)NTMarkReadStoryVideoNet;
+ (id)NTEnterNowLive;
+ (id)NTCommentVideo;
+ (id)NTReportEvilVideo;
+ (id)NTForbidStory;
+ (id)NTDelStoryVideo;
+ (id)NTMarkReadStoryVideoBatch;
+ (id)NTMarkReadStoryVideo;
+ (id)NTLikeFeed;
+ (_Bool)shouldReqMsgTabCheckActivity;
+ (_Bool)addMsgTabNodeInfo:(id)arg1 toMutableArray:(id)arg2 needCompareReqtime:(_Bool)arg3;
+ (void)_mergeNodeReadInfo:(id)arg1 rspNode:(id)arg2;
+ (id)RequestMsgTabNodeWatchedNotify;
+ (id)RequestMsgTabNodeListNotify;
+ (id)freeDiskSpace;
+ (void)video_compositeDataReportWithErro:(id)arg1 userData:(id)arg2;
+ (void)operateEndDataReport:(id)arg1 opName:(id)arg2 operateKey:(id)arg3 userData:(id)arg4 errorInfo:(id)arg5;
+ (void)operateStartDataReport:(id)arg1 opName:(id)arg2 operateKey:(id)arg3 userData:(id)arg4;
+ (id)NTProcessStoryVideoResult;
+ (id)NTProcessStoryVideoBegin;
+ (id)NTGetHotTopicInfo;
+ (id)RequestJoinShareGroup;
+ (id)NTBatchRemoveMembers;
+ (id)NTAddShareGroupVideoResult;
+ (id)NTAddShareGroupVideoBegin;
+ (id)NTGetShareGroupInfo;
+ (id)NTEditShareGroup;
+ (id)NTCreateShareGroup;
+ (id)NTGetConfig;
+ (id)NTSetConfig;
+ (id)NTVideoFeatureInfoChange;
+ (id)NTReportCommentVideo;
+ (id)NTDelFeedComment;
+ (id)NTAddFeedComment;
+ (id)NTGetStoryUserIconInfoList;
+ (id)NTGetStoryVideoWatcherList;
+ (id)getReportNetWorkString;
+ (void)publishResultReport:(id)arg1 withErrorInfo:(id)arg2 withVid:(id)arg3;
+ (id)getPublishThumbleDir;
+ (id)getPublishDoodleDir;
+ (id)getPublishVideoDir;
+ (id)NTPublishStoryVideoCancelFailed;
+ (id)NTPublishStoryVideoCancel;
+ (id)NTPublishStoryVideoCancelStart;
+ (id)NTPublishStoryVideoSyncFromAio;
+ (id)NTDelPublishStoryVideo;
+ (id)NTPublishStoryVideoProgress;
+ (id)NTPublishStoryVideoBegin;
+ (id)NTPublishStoryVideo;
+ (id)NTFeedStoryFeedVideoTagInfo;
+ (id)NTFeedVideoList;
@property(retain, nonatomic) NSMutableDictionary *retryCutDic; // @synthesize retryCutDic=_retryCutDic;
@property(retain, nonatomic) NSDate *lastRequestConfigDate; // @synthesize lastRequestConfigDate=_lastRequestConfigDate;
@property(retain, nonatomic) NSTimer *exportVideoTimer; // @synthesize exportVideoTimer=_exportVideoTimer;
@property(retain, nonatomic) id cuttingTaskUserData; // @synthesize cuttingTaskUserData=_cuttingTaskUserData;
@property(retain, nonatomic) NSString *cuttingTaskVideoPath; // @synthesize cuttingTaskVideoPath=_cuttingTaskVideoPath;
- (void)onConnect;
- (void)onPrcessInit;
- (void)doInitConfig;
- (void)onLoginSuccess:(id)arg1;
- (void)onAccountChanged:(id)arg1;
- (id)createSelfQQUserInfo:(unsigned long long)arg1;
- (void)setSeq:(unsigned int)arg1 withKey:(id)arg2;
- (unsigned int)getSeq:(id)arg1;
- (id)getMyStorySession;
- (id)getStorySession:(id)arg1;
- (void)doInitNotification;
- (id)getVideoReaderConfig:(id)arg1;
- (id)getPublishStoryVideoCache:(id)arg1;
- (id)getUserSelfInfoCaches:(id)arg1;
- (id)getHotTopicVideoList:(unsigned long long)arg1;
- (id)getAllEmoticonPackList;
- (id)getAllForbiddenListCaches:(unsigned int)arg1;
- (void)updateVIPQQUserInfoCache:(id)arg1;
- (void)updateQQUserInfoCache:(id)arg1;
- (_Bool)isFriendWithUnionID:(id)arg1;
- (id)getQQUserInfoCache:(id)arg1;
- (id)getQQUserInfoCacheWithUnionID:(id)arg1;
- (id)getQQUserInfoCacheWithUid:(id)arg1;
- (id)getAllPublishStoryVideoList;
- (id)getNowPublishStoryVideoList;
- (id)getAllZombieDesListCaches;
- (id)getUnWatchStoryListCaches:(id)arg1;
- (id)getAllUnWatchStoryListCaches;
- (unsigned int)getStoryVideoTotalCountCache:(id)arg1 withPullType:(unsigned int)arg2;
- (unsigned long long)getStoryVideoTotalTimeCache:(id)arg1 withPullType:(unsigned int)arg2;
- (id)getUnwatchStoryVideoDesCaches:(id)arg1;
- (id)getStoryVideoDesCache:(id)arg1 withVid:(id)arg2;
- (id)getStoryVideoDesCaches:(id)arg1 withPullType:(unsigned int)arg2;
- (id)getMyAllPublishSucceedStoryVideoDesCaches;
- (id)getMyAllStoryVideoDesCaches;
- (void)dealloc;
- (id)init;
- (void)updateAllWatchCache:(id)arg1;
- (void)updateSelfVideoInfoAfterDeleteItem:(id)arg1;
- (void)updateSelfVideoInfoAfterDelete:(id)arg1;
- (void)updateZombieDesCache:(id)arg1;
- (unsigned long long)requestTranslateTokenWithToken:(id)arg1 type:(unsigned int)arg2 feedID:(id)arg3 withUserData:(id)arg4 withDelegate:(id)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (unsigned long long)requestMarkAllRead:(id)arg1 withDelegate:(id)arg2;
- (unsigned long long)reportZombieRead:(id)arg1 withNewestVideoTs:(unsigned long long)arg2 withDelegate:(id)arg3;
- (void)updateUIVisitNumWithFeedID:(id)arg1 visitNum:(unsigned int)arg2;
- (void)updateUICommentWithFeedID:(id)arg1 isAddComment:(_Bool)arg2;
- (void)updateUILikeVideoWithFeedID:(id)arg1 withOperationType:(unsigned int)arg2;
- (unsigned long long)reportMonitorVauleID:(unsigned int)arg1 errMsg:(id)arg2;
- (void)updateUnWatchCache:(id)arg1 withVid:(id)arg2;
- (void)postMarkReadStoryVideoNotification:(id)arg1 withUserData:(id)arg2;
- (void)markRelatedVideoEntryState:(id)arg1 withLabel:(id)arg2 withExist:(_Bool)arg3;
- (unsigned long long)requestReportEvilVideo:(id)arg1 withType:(unsigned int)arg2;
- (unsigned long long)requestReportEvilVideo:(id)arg1 withType:(unsigned int)arg2 unionID:(id)arg3;
- (unsigned long long)requestForbidStory:(id)arg1 withForbidden:(_Bool)arg2 withForbidType:(unsigned int)arg3;
- (unsigned long long)requestDelStoryVideo:(id)arg1 withVids:(id)arg2 withUserData:(id)arg3;
- (_Bool)isWatchStoryVideo:(id)arg1;
- (unsigned long long)requestMarkReadStoryVideoBatch:(id)arg1;
- (void)postLocalReadVideoNotification:(id)arg1;
- (unsigned long long)requestMarkReadStoryVideo:(id)arg1 withUnionID:(id)arg2 withVid:(id)arg3 source:(unsigned int)arg4 createTime:(unsigned long long)arg5 vidType:(unsigned int)arg6 withUserData:(id)arg7;
- (id)getFeedLikeInfoCache:(id)arg1 source:(unsigned int)arg2 type:(unsigned int)arg3;
- (unsigned long long)requestLikeFeed:(id)arg1 withOperation:(unsigned int)arg2 withSource:(int)arg3 withType:(unsigned int)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (unsigned long long)requestLikeFeed:(id)arg1 withOperation:(unsigned int)arg2 withSource:(int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestFeedLikeList:(unsigned int)arg1 withFeedID:(id)arg2 withType:(unsigned int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestFeedLikeList:(unsigned int)arg1 withFeedID:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestBatchFeedLike:(unsigned int)arg1 withFeedIDAry:(id)arg2 withType:(unsigned int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestBatchFeedLike:(unsigned int)arg1 withFeedIDAry:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (void)addVidForMsgTabNodeUnionUnionID:(id)arg1 reqTimeStamp:(unsigned long long)arg2 feedID:(id)arg3 vid:(id)arg4 oldIndexListIsEmpty:(_Bool)arg5;
- (id)vidListForMsgTabNodeUnionID:(id)arg1 reqTimeStamp:(unsigned long long)arg2 deleteExpireData:(_Bool)arg3;
- (unsigned long long)requestMsgTabCheckActivity:(id)arg1;
- (unsigned long long)requestMsgTabNodeWatched:(id)arg1 node_type:(unsigned long long)arg2 operation:(unsigned int)arg3 recommend_id:(unsigned long long)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (unsigned long long)requestGetMsgTabNodeVidList:(id)arg1 withTimeStamp:(unsigned long long)arg2 withNodetype:(unsigned int)arg3 withRecommendID:(unsigned long long)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (_Bool)recommendNodeReadFlagForUnionID:(id)arg1;
- (void)setRecommendNodeHasReadForUnionID:(id)arg1;
- (void)markReadMsgTabNodeVideoForUnionID:(id)arg1 index:(unsigned long long)arg2;
- (void)deleteMsgTabNodeVideoForUnionID:(id)arg1 index:(unsigned long long)arg2 nodeType:(unsigned long long)arg3 entire:(_Bool)arg4;
- (_Bool)getMsgTabNodeListIsEndInCache;
- (id)getMsgTabNodeListInCache;
- (void)insertPublishedMsgTabNodeListInCache:(id)arg1 feedId:(id)arg2;
- (_Bool)insertMsgTabNodeListInCache:(id)arg1 seq:(id)arg2;
- (void)_mergeNodeReadInfoList:(id)arg1 rspList:(id)arg2;
- (void)_handleGetMsgTabNodeList:(id)arg1 withRspModel:(id)arg2;
- (unsigned long long)requestGetMsgTabNodeListWithSource:(unsigned int)arg1 isFromHead:(_Bool)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (id)getVideoLabelListFromCache;
- (unsigned long long)requestVideoLabelList:(id)arg1 musicType:(unsigned int)arg2 musicID:(unsigned long long)arg3 WithUserData:(id)arg4 withDelegate:(id)arg5;
- (id)getRspPhotographyGuideCache;
- (id)getPhotographyGuideWord:(unsigned int)arg1 withDelCache:(_Bool)arg2;
- (unsigned long long)requestGetPhotographyGuideInfo:(id)arg1 withDelegate:(id)arg2;
- (void)video_compositeDataReportWithpublishParams:(id)arg1;
- (void)retryCutingVideoWithErrorCode:(unsigned int)arg1 withErrorDesc:(id)arg2;
- (void)checkExportVideoTimeOut;
- (void)printOutPiecesModel:(id)arg1;
- (void)printOutPublishModel:(id)arg1;
- (void)printOutProcessModel:(id)arg1;
- (void)processVideoInfo:(id)arg1;
- (void)onStoryVideoInfoProcess:(id)arg1;
- (unsigned long long)getCreateTime:(id)arg1;
- (_Bool)restoreFileFrom:(id)arg1 to:(id)arg2;
- (id)getFitVideoPath:(id)arg1;
- (id)getThumbImage:(id)arg1 withStartTime:(double)arg2 withEndTime:(double)arg3 withFilter:(id)arg4 withEffectType:(long long)arg5 withCoverPath:(id)arg6 withThumbScale:(double)arg7 withError:(id *)arg8;
- (id)createThumbImage:(id)arg1 publishParams:(id)arg2 piecesInfo:(id)arg3;
- (void)onSendResult:(id)arg1;
- (void)doInitPublishNotification;
- (void)postEndProcessNotify:(id)arg1 withErrorCode:(unsigned int)arg2 withErrorDesc:(id)arg3 withUserData:(id)arg4;
- (void)postStartProcessNotify:(id)arg1 publishParams:(id)arg2 piecesInfo:(id)arg3 isRetry:(_Bool)arg4;
- (id)getVideoPiecesInfo:(id)arg1;
- (id)getProcessParams:(id)arg1;
- (void)saveProcessParams:(id)arg1 publishParams:(id)arg2 piecesInfo:(id)arg3;
- (void)addQQOverLayToVideoAndExport:(id)arg1 overlay:(id)arg2 outputPath:(id)arg3 lastOutputUrl:(id)arg4;
- (void)exportResourceToLocalAlbum:(id)arg1;
- (void)publishVideo:(id)arg1 publishModel:(id)arg2 withUserData:(id)arg3;
- (void)processVideo:(id)arg1 processParams:(id)arg2 publishParams:(id)arg3 withUserData:(id)arg4;
- (void)cutVideo:(id)arg1 publishParams:(id)arg2 piecesInfo:(id)arg3 withUserData:(id)arg4;
- (void)retryProcessAndPublishVideo:(id)arg1;
- (void)processAndPublishVideo:(id)arg1 publishParams:(id)arg2 piecesInfo:(id)arg3;
- (id)getUserShareGroupInfoListFromCache:(id)arg1;
- (unsigned long long)requestUserShareGroupList:(id)arg1 nextCookie:(id)arg2 pageSize:(unsigned int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (id)getHotTopicInfo:(unsigned long long)arg1;
- (unsigned long long)requestGetHotTopicInfo:(unsigned long long)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestBatchRemoveMembers:(id)arg1 withMemeberList:(id)arg2 withRemoveStory:(unsigned int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (_Bool)getMyselfSecretCircleBlackStatus;
- (_Bool)getMyselfPublicCircleBlackStatus;
- (id)getUserBlackListInCaches:(id)arg1;
- (void)delayRefreshBlackList:(id)arg1;
- (void)handleGetBannerBlackList:(id)arg1 withRspModel:(id)arg2;
- (unsigned long long)requestGetBlackList:(id)arg1 withDelegate:(id)arg2 withUserData:(id)arg3;
- (void)handleCreateGroupAddVideo:(id)arg1 rspModel:(id)arg2;
- (unsigned long long)requestAddStoryVideoToGroup:(id)arg1 withDelegate:(id)arg2 withUserData:(id)arg3;
- (id)getRspBannerVideoListInCaches:(id)arg1;
- (void)handleGetBannerVideoList:(id)arg1 withRspModel:(id)arg2;
- (unsigned long long)requestGetBannerVideoList:(id)arg1 cookie:(id)arg2 isFromHead:(_Bool)arg3 withDelegate:(id)arg4 withUserData:(id)arg5;
- (_Bool)getGroupHotRankVideoIsEndInCaches:(id)arg1;
- (id)getGroupHotRankVideoModelInCaches:(id)arg1;
- (void)handleGetGroupHotRankVideo:(id)arg1 withRspModel:(id)arg2;
- (unsigned long long)requestGetGroupHotRankVideo:(id)arg1 count:(unsigned int)arg2 isFromHead:(_Bool)arg3 withDelegate:(id)arg4 withUserData:(id)arg5;
- (void)updateShareGroupInfoModel:(id)arg1;
- (id)getShareGroupInfoCache:(id)arg1;
- (id)getBatchShareGroupInfoList:(id)arg1;
- (unsigned long long)requestGetShareGroupInfo:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)retryAddStoryVideoToGroup:(id)arg1 withDate:(unsigned int)arg2 withVid:(id)arg3 withDelegate:(id)arg4 withUserData:(id)arg5;
- (unsigned long long)requestAddStoryVideoToGroup:(id)arg1 vidList:(id)arg2 addSource:(unsigned int)arg3 inScene:(unsigned int)arg4 isGroupVideo:(_Bool)arg5 withDelegate:(id)arg6 withUserData:(id)arg7;
- (unsigned long long)requestEditShareGroup:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestCreateShareGroup:(id)arg1 withMemeberList:(id)arg2 withShowInMainPage:(_Bool)arg3 withVideoCount:(unsigned int)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (_Bool)setShareGroupMemberCountInCaches:(id)arg1 groupID:(id)arg2 memberCount:(unsigned long long)arg3;
- (_Bool)deleteShareVideoCollectionInCaches:(id)arg1 groupID:(id)arg2;
- (_Bool)deleteShareVideoCollectionListCaches:(id)arg1 groupID:(id)arg2 vid:(id)arg3 deleteShareGroup:(_Bool *)arg4;
- (unsigned int)getShareVideoTotalVideoCountCaches:(id)arg1;
- (id)getAllShareVideoCollectionListCaches:(id)arg1;
- (void)handleGetShareVideoCollectionList:(id)arg1 withRspModel:(id)arg2;
- (unsigned long long)requestGetShareVideoCollectionList:(id)arg1 withCollectionCount:(unsigned int)arg2 withVideoCount:(unsigned int)arg3 isFromHead:(_Bool)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (unsigned long long)requestJoinShareGroup:(id)arg1 optype:(unsigned int)arg2 memberList:(id)arg3 source:(unsigned int)arg4 exitSrc:(unsigned int)arg5 delegate:(id)arg6 userData:(id)arg7;
- (id)getBatchShareGroupMemberList:(id)arg1;
- (unsigned long long)requestGetShareGroupMemberList:(id)arg1 count:(unsigned int)arg2 startCookie:(id)arg3 delegate:(id)arg4 userData:(id)arg5;
- (void)setSGFeedStoryListCookie:(id)arg1 isEnd:(_Bool)arg2 groupID:(id)arg3 feedID:(id)arg4;
- (void)deleteSGFeedStortListAndSeqCache:(id)arg1 feedID:(id)arg2;
- (void)deleteAllSGFeedStortListAndSeqCaches:(id)arg1;
- (id)getAllSGFeedStortListCaches:(id)arg1 feedID:(id)arg2;
- (_Bool)getSGFeedStortListIsEndCache:(id)arg1 feedID:(id)arg2;
- (unsigned long long)requestSGLoadMoreVideoList:(id)arg1 feedID:(id)arg2 videoCount:(unsigned int)arg3 from:(unsigned int)arg4 delegate:(id)arg5 autoReq:(_Bool)arg6 maxCount:(int)arg7 completBlock:(CDUnknownBlockType)arg8;
- (unsigned long long)requestGetJoinedShareGroupFriList:(id)arg1 delegate:(id)arg2 userData:(id)arg3;
- (void)deleteSGStoryInfoCacheWithStoryID:(id)arg1;
- (void)deleteAllShareGroupListCache:(id)arg1;
- (id)getBatchShareGroupInfoCacheWithGroupID:(id)arg1 withStoryIDAry:(id)arg2 withNeedComplete:(_Bool)arg3;
- (_Bool)getShareGroupDateListIsEndCache:(id)arg1;
- (id)getAllShareGroupDateListCaches:(id)arg1 withTimeZone:(int)arg2;
- (void)handleGetShareGroupDateList:(id)arg1 withRspModel:(id)arg2;
- (unsigned long long)requestBatchGetVideoInfo:(id)arg1 delegate:(id)arg2;
- (unsigned long long)requestDateGroupList:(id)arg1 dateCount:(unsigned int)arg2 videoCount:(unsigned int)arg3 timeZone:(int)arg4 from:(unsigned int)arg5 isFromHead:(_Bool)arg6 delegate:(id)arg7;
- (unsigned long long)requestSyncVideoWithChatType:(unsigned int)arg1 clientType:(unsigned int)arg2 fileID:(id)arg3 groupCode:(unsigned long long)arg4 fileMD5:(id)arg5 businessType:(unsigned int)arg6 source:(unsigned int)arg7 withDelegate:(id)arg8;
- (unsigned int)getConfigUint32Value:(id)arg1 default:(unsigned int)arg2;
- (_Bool)getConfigBoolValue:(id)arg1 default:(_Bool)arg2;
- (unsigned int)getAutoPlayNetType;
- (unsigned int)getStoryPublishQualityFlagConfig;
- (unsigned int)getStoryPublishQualityFlag;
- (_Bool)hasPublishLimitOptionCaches;
- (unsigned int)getPublishLimitOptionCaches;
- (_Bool)isShowAutoPost2discovery;
- (_Bool)isAutoPost2discovery;
- (_Bool)isShowAllowStrangerState;
- (unsigned int)getAllowStrangerDayNum;
- (_Bool)getAllowStrangerState;
- (void)asyncGetAllUserConfig:(CDUnknownBlockType)arg1;
- (id)getAllUserConfig;
- (unsigned long long)requestSetPublishLimitOption:(unsigned int)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestSetStoryPublishFlagQuality:(_Bool)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestSetAutoPost2discovery:(_Bool)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestSetAllowStrangerState:(_Bool)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestSetConfig:(id)arg1;
- (unsigned long long)requestGetConfig:(id)arg1 withDelegate:(id)arg2;
- (unsigned long long)requestSetConfig:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (void)updateMemoryCachesVersion:(id)arg1;
- (void)batchUpdateFeedFeatureInfo:(id)arg1;
- (void)handleGetMemoryCollectionList:(id)arg1 withRspModel:(id)arg2;
- (id)getProfileYearNodeListCache:(id)arg1;
- (unsigned int)getMemoryTotalVideoCountCaches:(id)arg1;
- (_Bool)isMemoryFriendWithCache:(id)arg1;
- (_Bool)getMemoryCollectionListIsEndCache:(id)arg1;
- (id)getCollectionVideoDesListCaches:(id)arg1 withFeedID:(id)arg2 withCollectionID:(unsigned int)arg3 withTimeZone:(int)arg4;
- (id)getMemoryCollectionListCaches:(id)arg1 withCollectionID:(unsigned int)arg2 withTimeZone:(int)arg3;
- (id)getAllMemoryCollectionListCaches:(id)arg1 withTimeZone:(int)arg2;
- (unsigned long long)reqGetProfileYearListWithUnionID:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)reqGetCollectionViewCount:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)reqGetCollectionVideoList:(id)arg1 withFeedID:(id)arg2 withIdentify:(int)arg3 withCollectionID:(unsigned int)arg4 withTimeZone:(int)arg5 withUserData:(id)arg6 withDelegate:(id)arg7;
- (unsigned long long)requestGetBatchVideoSimpleInfoOfMax20:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestGetMemoryCollectionList:(id)arg1 withCollectionCount:(unsigned int)arg2 withVideoCount:(unsigned int)arg3 withTimeZone:(int)arg4 isFromHead:(_Bool)arg5 withUserData:(id)arg6 withDelegate:(id)arg7;
- (unsigned long long)requestGetBatchFeedFeatureInfoListOfMax20FeedList:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (id)getSelfLikeInfoFromLikeCache:(id)arg1;
- (id)getUserVidListWithUnionID:(id)arg1 andPullType:(unsigned int)arg2;
- (id)getUserVidListWithUid:(id)arg1 andPullType:(unsigned int)arg2;
- (id)getBatchVideoDesModelCacheWithVid:(id)arg1 withVidAry:(id)arg2 withNeedComplete:(_Bool)arg3;
- (id)getVideoDesModelCacheWithVid:(id)arg1 withVid:(id)arg2;
- (id)getBatchVideoSimpleInfoCacheWithVid:(id)arg1 withVidAry:(id)arg2 withNeedComplete:(_Bool)arg3;
- (id)getUserVideoBasicInfoCacheWithUnionID:(id)arg1 withVidAry:(id)arg2 withNeedComplete:(_Bool)arg3;
- (id)getBatchVideoBasicInfoCacheWithVid:(id)arg1 withVidAry:(id)arg2 withNeedComplete:(_Bool)arg3;
- (id)getVideoBasicInfoCacheWithVid:(id)arg1 withVid:(id)arg2;
- (unsigned long long)requestGetGroupVidList:(id)arg1 withPullType:(unsigned int)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestGetBatchUserVidListOfMax20:(id)arg1 withPullType:(unsigned int)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestGetBatchVideoBasicInfoListOfMax20:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestGetBatchVideoBasicInfoListOfMax20:(id)arg1 withVidList:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (void)delPublishFailFeedComment:(unsigned long long)arg1;
- (void)delFeedCommentInfoCache:(id)arg1 withCommentID:(unsigned int)arg2;
- (id)getFeedComentListCache:(unsigned int)arg1 withFeedID:(id)arg2 withType:(unsigned int)arg3;
- (id)getFakeFeedCommentInfoCache:(unsigned int)arg1 withFeedID:(id)arg2 withType:(unsigned int)arg3;
- (id)getFeedCommentInfoCache:(unsigned int)arg1 withFeedID:(id)arg2 withType:(unsigned int)arg3;
- (unsigned long long)requestReportComment:(id)arg1 commentId:(unsigned int)arg2 withType:(unsigned int)arg3;
- (unsigned long long)requestDelFeedComment:(id)arg1 withCommentID:(unsigned int)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestAddFeedComment:(id)arg1 withReply:(id)arg2 withContent:(id)arg3 withFakeID:(unsigned long long)arg4 withSource:(int)arg5 withType:(unsigned int)arg6 withUserData:(id)arg7 withDelegate:(id)arg8;
- (unsigned long long)requestFeedMoreCommentList:(id)arg1 nextCookie:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestFeedCommentList:(unsigned int)arg1 withFeedID:(id)arg2 withType:(unsigned int)arg3 nextCookie:(id)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (unsigned long long)requestFeedCommentList:(unsigned int)arg1 withFeedID:(id)arg2 nextCookie:(id)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestBatchFeedComent:(unsigned int)arg1 withFeedIDAry:(id)arg2 withType:(unsigned int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestBatchFeedComent:(unsigned int)arg1 withFeedIDAry:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (id)batchCheckUserIconInfoCache:(id)arg1;
- (id)getBatchUserIconInfoCache:(id)arg1 shouldRequestData:(_Bool)arg2;
- (id)getUserIconInfoCache:(id)arg1 shouldRequestData:(_Bool)arg2;
- (void)updateBatchUserIconInfoCache:(id)arg1;
- (unsigned long long)requestBatchUserIconInfoOfMax30:(id)arg1 userData:(id)arg2 delegate:(id)arg3;
- (id)loadMusicList;
- (void)saveMusicList:(id)arg1;
- (unsigned long long)requestGroupAssistantFeedIDList:(_Bool)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestForwardGroupVideoWithType:(unsigned int)arg1 forwardTo:(unsigned long long)arg2 vid:(id)arg3 time:(unsigned int)arg4 withUserData:(id)arg5 withDelegate:(id)arg6;
- (unsigned long long)requestGetGroupDynamicEntrancePictureWithDelegate:(id)arg1;
- (id)groupRecentVidList:(unsigned long long)arg1 withPullType:(unsigned int)arg2;
- (unsigned long long)requestDeleteGroupStoryWithID:(id)arg1 type:(unsigned int)arg2 removeAuthor:(unsigned int)arg3 withDelegate:(id)arg4 withUserData:(id)arg5;
- (unsigned long long)requestDeleteGroupStoryWithID:(id)arg1 type:(unsigned int)arg2 withDelegate:(id)arg3 withUserData:(id)arg4;
- (unsigned long long)requestVideoReaderConf:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestGetWeather:(id)arg1 longitude:(int)arg2 latitude:(int)arg3 coordinate:(unsigned int)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestGetVideoFilterList:(id)arg1 withDelegate:(id)arg2;
- (void)fillUserInfo:(id)arg1;
- (unsigned long long)getMobileType;
- (void)addQQUserInfoCaches:(id)arg1;
- (unsigned long long)requestGetUserSelfInfo:(id)arg1;
- (unsigned long long)requestGetMissStoryInfo:(id)arg1 withDelegate:(id)arg2;
- (unsigned long long)requestGetUserGuide:(id)arg1 withDelegate:(id)arg2;
- (id)getShareVideoDesModelList:(id)arg1 withShareTime:(unsigned long long)arg2 withTimeZone:(int)arg3;
- (id)getShareVideoList:(id)arg1 withShareTime:(unsigned long long)arg2 withTimeZone:(int)arg3;
- (unsigned long long)requestGetShareVideoList:(id)arg1 withShareTime:(unsigned long long)arg2 withTimeZone:(int)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requsetGetMuiscList:(id)arg1;
- (unsigned long long)requsetGetLocation:(unsigned int)arg1 withGps:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requsetGetPOIList:(id)arg1 withCoordinate:(unsigned int)arg2 withGps:(id)arg3 withCookie:(id)arg4 withCount:(unsigned int)arg5 withDelegate:(id)arg6;
- (unsigned long long)requestGetForbiddenStates:(id)arg1 withDelegate:(id)arg2;
- (unsigned long long)requestAllForbiddenList:(unsigned int)arg1 withDelegate:(id)arg2;
- (unsigned long long)requestGetForbiddenList:(unsigned int)arg1 withCookie:(id)arg2 withCount:(unsigned int)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestGetPublishConfig:(id)arg1;
- (unsigned long long)requestGetPOIPosters:(id)arg1 withCoordinate:(unsigned int)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestGetEmoticonPackList:(id)arg1 withCount:(unsigned int)arg2 withDelegate:(id)arg3;
- (void)publishSucceedReport:(id)arg1;
- (id)removeAuthKey:(id)arg1;
- (id)getNewVid;
- (_Bool)resaveImageFile:(id)arg1 imageURL:(id)arg2;
- (_Bool)resaveVideoFile:(id)arg1 videoModel:(id)arg2;
- (void)updatePublishingStoryVideoDesModel:(id)arg1 newVideoModel:(id)arg2;
- (void)addPublishSucceedStoryVideoToCache:(id)arg1;
- (void)setPublishStoryVideoUploadIP:(id)arg1 videoPath:(id)arg2;
- (void)setPublishStoryVideoUploadFileOffset:(id)arg1 videoPath:(id)arg2;
- (void)setPublishStoryVideoFailAtCache:(id)arg1;
- (void)delPublishStoryVideoCache:(id)arg1;
- (void)addPublishStoryVideoToCache:(id)arg1;
- (void)postUploadVideoFail:(id)arg1 withVideoPath:(id)arg2 withErrorCode:(unsigned int)arg3 withErrorDesc:(id)arg4;
- (void)uploadVideoFail:(id)arg1 withError:(id)arg2 withUserData:(id)arg3;
- (void)uploadVideoProgress:(id)arg1 withProgress:(double)arg2 withUserData:(id)arg3;
- (void)uploadVideoSuccess:(id)arg1 withVideoPath:(id)arg2 withDoodleUrl:(id)arg3 withDoodlePath:(id)arg4 withThumbPath:(id)arg5 withResultDict:(id)arg6 withUserData:(id)arg7;
- (void)updateUploadingVideoSize:(long long)arg1 withVideoPath:(id)arg2 withUserData:(id)arg3;
- (void)uploadVideoBegin:(id)arg1 withVideoSize:(long long)arg2 withVideoCover:(id)arg3 withDoodlePath:(id)arg4 withUserData:(id)arg5;
- (void)postCancelPublishTaskFailed:(id)arg1 delVid:(id)arg2;
- (void)postCancelPublishTaskSuccess:(id)arg1;
- (void)removeCanceledPublishTask:(id)arg1;
- (_Bool)isPublishTaskCanceled:(id)arg1;
- (_Bool)cancelPublishTask:(id)arg1;
- (void)delFakeFeedInfoAndPost:(id)arg1 withTime:(unsigned long long)arg2;
- (void)delNowPublishStoryVideo:(id)arg1;
- (void)delPublishingStoryVideoInfoFromCache:(id)arg1 removeFile:(_Bool)arg2;
- (void)retryPublishStoryVideo:(id)arg1;
- (void)requestPublishStoryVideo:(id)arg1 isRetryData:(id)arg2;
- (void)requestPublishStoryVideo:(id)arg1;
- (_Bool)isHiddenHisStoryOfCacheWithUin:(unsigned long long)arg1;
- (id)filterAlreadyWatchedVid:(id)arg1 withVidList:(id)arg2;
- (id)filterAlreadyWatchedVideos:(id)arg1;
- (id)filterUselessQQUserInfo:(id)arg1;
- (id)getMySession:(id)arg1;
- (id)storyTagInfoBaseListWithFeedID:(id)arg1;
- (unsigned long long)requestTagInfoWithFeedIDs:(id)arg1 date:(int)arg2 userData:(id)arg3 delegate:(id)arg4;
- (void)deleteFeedToCache:(id)arg1;
- (_Bool)updateFeedInfoCacheToJoinShareGroup:(_Bool)arg1 shareGroupID:(id)arg2;
- (id)mergeFakeFeedInfo:(id)arg1;
- (_Bool)isNeedMergeFakeFeedInfo:(id)arg1;
- (id)getStoryFeedInfoListCache:(id)arg1;
- (id)createReqStoryFeedModel:(id)arg1;
- (id)createReqFriendStoryFeedModel:(id)arg1;
- (id)getPublishFeedSeqInfoList;
- (id)getPublishModelWithFeedVidInfo:(id)arg1;
- (id)getFeedVisitorListCache:(id)arg1;
- (void)updateFeedInfoCacheFeed:(id)arg1 hasShareToDiscover:(_Bool)arg2;
- (id)getStoryInfoCache:(id)arg1;
- (id)getStoryFeedInfoListCache:(id)arg1 withNeedComplete:(_Bool)arg2;
- (id)getAllGroupAssistantFeedInfoCache;
- (id)getAllGroupAssiatantFeedIDListCache;
- (id)getAllProfileFeedIDListCacheWithUnionID:(id)arg1;
- (id)getAllFeedIDListCache;
- (void)updateMyOneDayVidListHasShareToDiscover:(_Bool)arg1 date:(unsigned int)arg2;
- (id)getMyOneDayVidListCache:(unsigned int)arg1;
- (unsigned long long)requestGetFeedVisitorList:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestFeedVideoList:(id)arg1 withOrder:(unsigned int)arg2 nextCookie:(id)arg3 withUserData:(id)arg4 withDelegate:(id)arg5;
- (unsigned long long)requestFeedInfo:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestBatchFeedInfo:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestProfileFeedIDList:(_Bool)arg1 withUnionID:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (unsigned long long)requestFeedIDList:(_Bool)arg1 withUserData:(id)arg2 withDelegate:(id)arg3 gpsModel:(id)arg4;
- (unsigned long long)requestMyOneDayVidList:(_Bool)arg1 withDate:(unsigned int)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

