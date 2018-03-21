//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBaseEngine.h>

@class NSMutableArray;

@interface SCFServiceEngine : QQBaseEngine
{
    NSMutableArray *_SCFRecomemdList;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableArray *SCFRecomemdList; // @synthesize SCFRecomemdList=_SCFRecomemdList;
- (void).cxx_destruct;
- (_Bool)isUinAtSCFriendList:(id)arg1;
- (id)getSCFriendsModelList;
- (void)saveRecommedFriendsModelListToDisk:(id)arg1 forUin:(long long)arg2;
- (id)loadRecommedFriendsModelListFromDiskForUin:(long long)arg1;
- (void)sendGetSCFRecommendModelList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requstGetSCFRecommendModelListCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getSCFRecommendModelList;
- (void)saveSCFSettingInfo:(id)arg1 toFriendListWithUin:(id)arg2;
- (id)getSpecialCareFriendSettingInfo:(id)arg1;
- (void)sendSettingSCFList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)switchSpecialCareFriend:(id)arg1 turnOnRing:(_Bool)arg2 turnOnQZone:(_Bool)arg3 CompletionHandler:(CDUnknownBlockType)arg4;
- (void)switchSpecialCareFriend:(id)arg1 turnOn:(_Bool)arg2 CompletionHandler:(CDUnknownBlockType)arg3;
- (void)setSpecialCareFriends:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelSpecialCareFriend:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
- (void)setSpecialCareFriend:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
- (void)modifygetSuccessSCFRecommendTime:(id)arg1 timeValue:(id)arg2;
- (id)getSuccessSCFRecommendTime:(id)arg1;
- (void)modifyHasGetSuccessSCFRecommendFlag:(id)arg1 boolValue:(_Bool)arg2;
- (_Bool)hasGetSuccessSCFRecommend:(id)arg1;
- (void)modifySCFHasBeenEnterFlag:(id)arg1 boolValue:(_Bool)arg2;
- (_Bool)SCFHasBeenEnter:(id)arg1;
- (void)reloadSCFList;
- (void)registerNotification;
- (id)init;

@end

