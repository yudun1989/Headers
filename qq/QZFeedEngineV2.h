//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseEngine.h>

@class NSMutableDictionary, NSOperationQueue;

@interface QZFeedEngineV2 : QZBaseEngine
{
    NSOperationQueue *_operationQuqeue;
    double _defaultInterval;
    NSMutableDictionary *_recommFeedWaitingForLikeAnim;
    long long _friendFeedType;
}

+ (void)tryInsertFeedAfterLikeAnim:(id)arg1;
+ (long long)requestRecommFeed:(id)arg1 buttonType:(long long)arg2 attachInfo:(id)arg3 param:(id)arg4;
+ (id)feedListInfoQueue;
+ (long long)get48BottomNavViewSetting:(long long)arg1;
+ (long long)getProfile:(long long)arg1;
+ (long long)topFeedWithFeedModel:(id)arg1 type:(unsigned long long)arg2;
+ (long long)getProfileFeeds:(_Bool)arg1 previous:(_Bool)arg2 forOwner:(long long)arg3 params:(id)arg4 attachinfo:(id)arg5 busi:(id)arg6 isFromTimeLine:(_Bool)arg7;
+ (long long)getProfileFeeds:(_Bool)arg1 forOwner:(long long)arg2 params:(id)arg3 attachinfo:(id)arg4;
+ (void)getLocalProfileFeeds:(long long)arg1;
+ (long long)delPassiveFeed:(id)arg1;
+ (long long)getPrePassiveFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3 busiParm:(id)arg4;
+ (long long)getPassiveFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3;
+ (_Bool)getLocalPassiveFeedFeeds;
+ (void)processPreLoadConvertData:(id)arg1;
+ (id)convetFeedModelData:(id)arg1;
+ (void)preLoadFeedModelData:(id)arg1;
+ (void)layoutDelayedFeedList:(id)arg1 withParam:(id)arg2 withFinishBlock:(CDUnknownBlockType)arg3;
+ (long long)getLBSEventFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3;
+ (long long)getUnreadFriendFeeds:(_Bool)arg1 forUin:(long long)arg2 params:(id)arg3 attachinfo:(id)arg4;
+ (long long)getPGCViewMoreFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3;
+ (long long)getFriendFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3 attachinfo:(id)arg4;
+ (void)getSingleFeedWithFeedModel:(id)arg1 reqType:(int)arg2;
+ (void)dealFollowUserWithUin:(long long)arg1 followed:(_Bool)arg2;
+ (void)delelteLocalFriendFeedsWithUin:(long long)arg1;
+ (void)preLoadFriendFeeds;
+ (_Bool)getLocalFriendFeeds;
+ (void)clearFeedListInfo:(id)arg1;
+ (id)refreshDelayedFeedProcessQueue;
+ (id)instance;
@property(nonatomic) long long friendFeedType; // @synthesize friendFeedType=_friendFeedType;
- (void).cxx_destruct;
- (long long)getLayoutKitFile;
- (_Bool)testAndUpdateNextRequestTimeLimit:(double)arg1;
- (void)tryInsertFeed:(id)arg1 reqID:(long long)arg2 param:(id)arg3;
- (void)tryInsertFeedAfterLikeAnim:(id)arg1;
- (long long)requestRecommFeed:(id)arg1 buttonType:(long long)arg2 attachInfo:(id)arg3 param:(id)arg4;
- (void)handleCustomDeco:(id)arg1 uin:(long long)arg2;
- (void)handleCustomDeco:(id)arg1;
- (id)relationInfoCache;
- (void)feedEngineCacheObject:(id)arg1;
- (long long)get48BottomNavViewSetting:(long long)arg1;
- (long long)getProfile:(long long)arg1;
- (long long)topFeedWithFeedModel:(id)arg1 type:(unsigned long long)arg2;
- (long long)getProfileFeeds:(_Bool)arg1 previous:(_Bool)arg2 forOwner:(long long)arg3 params:(id)arg4 attachinfo:(id)arg5 busi:(id)arg6 isFromTimeLine:(_Bool)arg7 isUnreadFeeds:(_Bool)arg8;
- (long long)getProfileFeeds:(_Bool)arg1 previous:(_Bool)arg2 forOwner:(long long)arg3 params:(id)arg4 attachinfo:(id)arg5 busi:(id)arg6 isFromTimeLine:(_Bool)arg7;
- (void)performBlockOnGlobalQueue:(CDUnknownBlockType)arg1 thenOnMainQueue:(CDUnknownBlockType)arg2;
- (void)getLocalProfileFeeds:(long long)arg1;
- (void)onlocalProfileFeeds:(id)arg1;
- (long long)delPassiveFeed:(id)arg1;
- (long long)getPassiveFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3 isPre:(_Bool)arg4 busiParm:(id)arg5;
- (_Bool)getLocalPassiveFeedFeeds;
- (void)onlocalPassiveFeeds:(id)arg1;
- (void)checkVideoTranscoding:(id)arg1 feedModel:(id)arg2;
- (void)preloadRooftopPage:(id)arg1;
- (id)getAddFakeSeparatorModelfor:(id)arg1;
- (long long)getFriendFeeds:(_Bool)arg1 params:(id)arg2 enableIncremental:(_Bool)arg3 cursor:(id)arg4 command:(id)arg5 filter:(long long)arg6 attachinfo:(id)arg7;
- (void)processFeedBuilder:(id)arg1 feedModels:(id)arg2 command:(id)arg3 attachInfo:(id)arg4 startIndex:(long long)arg5;
- (void)processFeedsInMainThread:(id)arg1;
- (id)processDelayedFeedList:(id)arg1 attachInfo:(id)arg2 startIndex:(long long)arg3;
- (long long)getFriendFeeds:(_Bool)arg1 params:(id)arg2 enableIncremental:(_Bool)arg3 cursor:(id)arg4 command:(id)arg5 filter:(long long)arg6;
- (long long)getLBSEventFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3;
- (long long)getPGCViewMoreFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3;
- (long long)preLoadFriendFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3;
- (long long)getFriendFeeds:(_Bool)arg1 cursor:(id)arg2 params:(id)arg3 attachinfo:(id)arg4;
- (void)onlocalLBSEventFeeds:(id)arg1;
- (id)prepareIncrementalUpdateBaseInfos:(long long)arg1 forType:(long long)arg2 cursor:(id)arg3;
- (void)dealFollowUserWithUin:(long long)arg1 followed:(_Bool)arg2;
- (void)delelteLocalFriendFeedsWithUin:(long long)arg1;
- (void)preLoadFriendFeeds;
- (_Bool)getLocalFriendFeeds;
- (void)onlocalFriends:(id)arg1;
- (id)init;

@end

