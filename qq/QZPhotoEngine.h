//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZPhotoModuleBaseEngine.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface QZPhotoEngine : QZPhotoModuleBaseEngine
{
    NSMutableDictionary *_attachInfoDic;
    NSMutableArray *_timelineArr;
    NSMutableArray *_poiAreaArr;
    int _birthTime;
    int _loveTime;
    NSMutableDictionary *_travelAlbumBusiParam;
    NSArray *_timeEvent;
}

+ (long long)allowShareMemberRequestAlbumOwner:(long long)arg1 allowJoinShareAlbumData:(id)arg2 source:(long long)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (long long)applyShareAlbumUin:(long long)arg1 albumOwner:(long long)arg2 albumID:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (void)markFaceInPhoto:(long long)arg1 markFaceOp:(long long)arg2 faceItem:(id)arg3 albumid:(id)arg4 shuoshuoid:(id)arg5 photoUrl:(id)arg6 photoOwner:(unsigned int)arg7 success:(CDUnknownBlockType)arg8 faildBlock:(CDUnknownBlockType)arg9;
+ (void)detectUinFromFeatures:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)requestShareMemberDataWithUin:(long long)arg1 albumID:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
+ (void)reportRecommendPhotos:(id)arg1 recommendId:(id)arg2;
+ (void)getAlbumShareInfoWithGroupid:(id)arg1 kShareInCategoryid:(id)arg2 avatarUrl:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
+ (void)requestPhotoAdapt:(id)arg1 deletedBlock:(CDUnknownBlockType)arg2;
+ (long long)categoryOperator:(long long)arg1 operator:(long long)arg2 classifyID:(id)arg3 photoModels:(id)arg4 confirmLabel:(id)arg5 confirmUIN:(long long)arg6 groupids:(id)arg7;
+ (long long)getCategoryDetail:(long long)arg1 itemMap:(id)arg2 isLoadMore:(_Bool)arg3;
+ (long long)getAllClassifyList:(long long)arg1 itemMap:(id)arg2 isLoadMore:(_Bool)arg3;
+ (id)convertFromOutshare:(id)arg1;
+ (void)cacheWithObject:(id)arg1 key:(id)arg2;
+ (id)loadDataForKey:(id)arg1;
+ (void)setAttachInfoWithAlbumId:(id)arg1 attachInfo:(id)arg2;
+ (id)getAttachInfoWithAlbumId:(id)arg1;
+ (long long)getAlbumCover:(id)arg1 owner:(long long)arg2 type:(long long)arg3 busiParam:(id)arg4 needLocalData:(_Bool)arg5 notifyName:(id)arg6;
+ (long long)modifyTravelPhotoSceneAlbumID:(id)arg1 type:(long long)arg2 poiArea:(id)arg3 poiStartTime:(int)arg4 modifyModelArray:(id)arg5;
+ (long long)getPhotoListByTimeLine:(long long)arg1 albumId:(id)arg2 timeRange:(id)arg3 sort:(int)arg4 start:(int)arg5 num:(int)arg6 albumType:(int)arg7 password:(id)arg8 attachInfo:(id)arg9 busiParam:(id)arg10 userParam:(id)arg11 gettimeline:(int)arg12;
+ (long long)editPhotosBatchTime:(id)arg1 albumID:(id)arg2 picid_list:(id)arg3;
+ (long long)editPhotos:(long long)arg1 albumid:(id)arg2 picid:(id)arg3 name:(id)arg4 desc:(id)arg5 uploadtime:(int)arg6 modifytime:(int)arg7 busiParam:(id)arg8;
+ (long long)getTravelPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(int)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 attachInfoOfUntimed:(id)arg10 filterVideo:(_Bool)arg11;
+ (long long)getParentPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(int)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 attachInfoOfUntimed:(id)arg10 filterVideo:(_Bool)arg11;
+ (void)cacheAllFeeds:(long long)arg1 photo:(id)arg2 type:(long long)arg3;
+ (long long)getAllFeedsPhotoEx:(long long)arg1 appid:(long long)arg2 count:(long long)arg3 attachInfo:(id)arg4 albumShowType:(long long)arg5 refreshType:(long long)arg6 extranceType:(long long)arg7 mapEx:(id)arg8 hasMore:(_Bool)arg9 needLocal:(_Bool)arg10 req_type:(long long)arg11;
+ (void)localAllFeedsPhotoListWithUin:(long long)arg1 type:(long long)arg2;
+ (long long)getPhotoListEx:(long long)arg1 albumid:(id)arg2 needleft:(_Bool)arg3 needright:(_Bool)arg4 password:(id)arg5 curlloc:(id)arg6 url:(id)arg7 swidth:(int)arg8 sheight:(int)arg9 busiParam:(id)arg10 appid:(long long)arg11 curid:(id)arg12 albumtype:(int)arg13;
+ (long long)getPhotoListEx:(long long)arg1 albumid:(id)arg2 needleft:(_Bool)arg3 needright:(_Bool)arg4 password:(id)arg5 curlloc:(id)arg6 url:(id)arg7 swidth:(int)arg8 sheight:(int)arg9 busiParam:(id)arg10 appid:(long long)arg11 curid:(id)arg12 albumtype:(int)arg13 shareMemberUIN:(long long)arg14;
+ (long long)getPhotoList:(id)arg1 pstart:(long long)arg2 pnum:(int)arg3 password:(id)arg4 curlloc:(id)arg5 swidth:(int)arg6 sheight:(int)arg7 busiParam:(id)arg8;
+ (long long)getPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(long long)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 needLocal:(_Bool)arg10 targetUin:(long long)arg11 filterVideo:(_Bool)arg12 shareMemberUIN:(long long)arg13;
+ (long long)getPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(long long)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 needLocal:(_Bool)arg10 targetUin:(long long)arg11 shareMemberUIN:(long long)arg12;
+ (long long)getPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(long long)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 needLocal:(_Bool)arg10 targetUin:(long long)arg11;
+ (long long)getPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(long long)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 needLocal:(_Bool)arg10 targetUin:(long long)arg11 filterVideo:(_Bool)arg12;
+ (void)getLocalPhotoListWithUin:(long long)arg1 albumid:(id)arg2 withType:(int)arg3 eventKey:(id)arg4;
+ (id)keyWithAlbumID:(id)arg1 type:(int)arg2;
+ (id)localPhotoListWithUin:(long long)arg1 albumid:(id)arg2 withType:(int)arg3;
+ (void)removeFakeVideoWithAlbumID:(id)arg1 clientKey:(id)arg2;
+ (void)addFakeVideo:(id)arg1 albumId:(id)arg2 bigURL:(id)arg3 currentURL:(id)arg4 uploadTime:(int)arg5 clientKey:(id)arg6;
+ (void)updateFakeVideo:(id)arg1 cacheKey:(id)arg2;
+ (void)updateFakeVideo:(id)arg1 albumID:(id)arg2;
+ (void)rewriteVideoCacheOfUin:(long long)arg1 WithDeletedArray:(id)arg2;
+ (long long)getVideoList:(long long)arg1 attachNew:(id)arg2 attachOld:(id)arg3 needLocal:(_Bool)arg4 getMore:(_Bool)arg5;
+ (void)getLocalVidelList:(long long)arg1;
+ (long long)getPhotoCountInAlbum:(id)arg1 albumType:(id)arg2;
+ (long long)movePhotos:(id)arg1 sourceAlbumID:(id)arg2 targetAlbumID:(id)arg3;
+ (long long)deletePhotos:(id)arg1 albumID:(id)arg2 vids:(id)arg3;
+ (long long)deleteAlbum:(id)arg1 ownerID:(long long)arg2 busiParam:(id)arg3;
+ (void)likePhoto:(id)arg1 userParam:(id)arg2;
+ (void)commentPhoto:(id)arg1 feedModel:(id)arg2 isPrivate:(_Bool)arg3;
+ (void)commentAlbum:(id)arg1 feedModel:(id)arg2 isPrivate:(_Bool)arg3;
+ (void)likeAlbum:(id)arg1 isMyLike:(_Bool)arg2;
+ (long long)reInviteShareUser:(id)arg1;
+ (long long)bigEventEditAlbum:(id)arg1;
+ (long long)editAlbum:(id)arg1 albumCoverID:(id)arg2 shareUsersInfo:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (long long)editAlbum:(id)arg1 albumCoverID:(id)arg2 shareUsersInfo:(id)arg3;
+ (long long)joinShareAlbum:(id)arg1 inviteKey:(id)arg2 isFromPublicURL:(_Bool)arg3;
+ (long long)createAlbum:(id)arg1;
+ (long long)requestAlbumList:(unsigned long long)arg1 appID:(int)arg2 notifyName:(id)arg3 more:(_Bool)arg4 isNeedLocal:(_Bool)arg5 params:(id)arg6;
+ (void)loadLocalAlbumList:(unsigned long long)arg1 appID:(int)arg2 notifyName:(id)arg3;
+ (id)instance;
- (void).cxx_destruct;
- (long long)requestShareMemberDataWithUin:(long long)arg1 albumID:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)requestPhotoAdapt:(id)arg1 deletedBlock:(CDUnknownBlockType)arg2;
- (id)buildRecommondAlbumList:(id)arg1;
- (long long)categoryOperator:(long long)arg1 operator:(long long)arg2 classifyID:(id)arg3 photoModels:(id)arg4 confirmLabel:(id)arg5 confirmUIN:(long long)arg6 groupids:(id)arg7;
- (long long)getCategoryDetail:(long long)arg1 itemMap:(id)arg2 isLoadMore:(_Bool)arg3;
- (long long)getAllClassifyList:(long long)arg1 itemMap:(id)arg2 isLoadMore:(_Bool)arg3;
- (id)loadDataForKey:(id)arg1;
- (void)cacheWithObject:(id)arg1 key:(id)arg2;
- (id)albumCoverInfoCacheWithAlbumId:(id)arg1;
- (void)setAttachInfoWithAlbumId:(id)arg1 attachInfo:(id)arg2;
- (id)getAttachInfoWithAlbumId:(id)arg1;
- (long long)getAlbumCover:(id)arg1 owner:(long long)arg2 type:(long long)arg3 busiParam:(id)arg4 needLocalData:(_Bool)arg5 notifyName:(id)arg6;
- (long long)reportUploadFinishWithBatchId:(long long)arg1 albumType:(long long)arg2 handset:(int)arg3 albumId:(id)arg4 total:(int)arg5 succ:(int)arg6 retryCount:(int)arg7 clientRetryCount:(int)arg8 clientKey:(id)arg9 userInfo:(id)arg10 first:(_Bool)arg11;
- (void)retryReportUploadFinish:(id)arg1;
- (void)reportUploadFinish:(id)arg1;
- (void)notifyUploadSuccess:(id)arg1;
- (void)reportUploadFinish:(id)arg1 isFirstRequest:(_Bool)arg2;
- (long long)modifyTravelPhotoSceneAlbumID:(id)arg1 type:(long long)arg2 poiArea:(id)arg3 poiStartTime:(int)arg4 modifyModelArray:(id)arg5;
- (void)cancelOldTimelineRequest:(long long)arg1;
- (long long)getPhotoListByTimeLine:(long long)arg1 albumId:(id)arg2 timeRange:(id)arg3 sort:(int)arg4 start:(int)arg5 num:(int)arg6 albumType:(int)arg7 password:(id)arg8 attachInfo:(id)arg9 busiParam:(id)arg10 userParam:(id)arg11 gettimeline:(int)arg12;
- (long long)editPhotosBatchTime:(id)arg1 albumID:(id)arg2 picid_list:(id)arg3;
- (long long)editPhotos:(long long)arg1 albumid:(id)arg2 picid:(id)arg3 name:(id)arg4 desc:(id)arg5 uploadtime:(int)arg6 modifytime:(int)arg7 busiParam:(id)arg8;
- (long long)getTravelPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(int)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 attachInfoOfUntimed:(id)arg10 filterVideo:(_Bool)arg11;
- (long long)getParentPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(int)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 attachInfoOfUntimed:(id)arg10 filterVideo:(_Bool)arg11;
- (long long)getAllFeedsPhotoEx:(long long)arg1 appid:(long long)arg2 count:(long long)arg3 attachInfo:(id)arg4 albumShowType:(long long)arg5 refreshType:(long long)arg6 extranceType:(long long)arg7 mapEx:(id)arg8 hasMore:(_Bool)arg9 needLocal:(_Bool)arg10 req_type:(long long)arg11;
- (void)localAllFeedsPhotoListWithUin:(long long)arg1 type:(long long)arg2;
- (long long)getPhotoListEx:(long long)arg1 albumid:(id)arg2 needleft:(_Bool)arg3 needright:(_Bool)arg4 password:(id)arg5 curlloc:(id)arg6 url:(id)arg7 swidth:(int)arg8 sheight:(int)arg9 busiParam:(id)arg10 appid:(long long)arg11 curid:(id)arg12 albumtype:(int)arg13 shareMemberUIN:(long long)arg14;
- (long long)getPhotoList:(id)arg1 pstart:(long long)arg2 pnum:(int)arg3 password:(id)arg4 curlloc:(id)arg5 swidth:(int)arg6 sheight:(int)arg7 busiParam:(id)arg8;
- (long long)getPhotoList:(long long)arg1 albumid:(id)arg2 pstart:(long long)arg3 pnum:(long long)arg4 password:(id)arg5 curlloc:(id)arg6 swidth:(int)arg7 sheight:(int)arg8 busiParam:(id)arg9 needLocal:(_Bool)arg10 targetUin:(long long)arg11 filterVideo:(_Bool)arg12;
- (void)getLocalPhotoListWithUin:(long long)arg1 albumid:(id)arg2 withType:(int)arg3 eventKey:(id)arg4;
- (id)keyWithAlbumID:(id)arg1 type:(int)arg2;
- (id)localPhotoListWithUin:(long long)arg1 albumid:(id)arg2 withType:(int)arg3;
- (long long)internalGetPhotoList:(long long)arg1 albumid:(id)arg2 url:(id)arg3 pstart:(long long)arg4 pnum:(long long)arg5 password:(id)arg6 curlloc:(id)arg7 swidth:(int)arg8 sheight:(int)arg9 busiParam:(id)arg10 needLocal:(_Bool)arg11 targetUin:(long long)arg12 filterVideo:(_Bool)arg13 shareMemberUIN:(long long)arg14;
- (long long)internalGetPhotoList:(long long)arg1 albumid:(id)arg2 url:(id)arg3 pstart:(long long)arg4 pnum:(long long)arg5 password:(id)arg6 curlloc:(id)arg7 swidth:(int)arg8 sheight:(int)arg9 busiParam:(id)arg10 needLocal:(_Bool)arg11 targetUin:(long long)arg12 filterVideo:(_Bool)arg13;
- (void)removeFakeVideoFromCache:(id)arg1 albumID:(id)arg2;
- (void)cacheFakeVideoIntoCache:(id)arg1 albumID:(id)arg2 photoModel:(id)arg3;
- (void)rewriteVideoCacheOfUin:(long long)arg1 WithDeletedArray:(id)arg2;
- (long long)getVideoList:(long long)arg1 attachNew:(id)arg2 attachOld:(id)arg3 needLocal:(_Bool)arg4 getMore:(_Bool)arg5;
- (void)getLocalVidelList:(long long)arg1;
- (long long)getPhotoCountInAlbum:(id)arg1 albumType:(id)arg2;
- (long long)movePhotos:(id)arg1 sourceAlbumID:(id)arg2 targetAlbumID:(id)arg3;
- (long long)deletePhotos:(id)arg1 albumID:(id)arg2 vids:(id)arg3;
- (long long)deleteAlbum:(id)arg1 ownerID:(long long)arg2 busiParam:(id)arg3;
- (long long)reInviteShareUser:(id)arg1;
- (long long)bigEventEditAlbum:(id)arg1;
- (long long)editAlbum:(id)arg1 albumCoverID:(id)arg2 shareUsersInfo:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (long long)createAlbum:(id)arg1 isJoinShareAlbum:(_Bool)arg2 inviteKey:(id)arg3 isFromPublicURL:(_Bool)arg4;
- (long long)requestAlbumList:(unsigned long long)arg1 appID:(int)arg2 notifyName:(id)arg3 more:(_Bool)arg4 isNeedLocal:(_Bool)arg5 params:(id)arg6;
- (void)loadLocalAlbumList:(unsigned long long)arg1 appID:(int)arg2 notifyName:(id)arg3;
- (id)init;

@end

