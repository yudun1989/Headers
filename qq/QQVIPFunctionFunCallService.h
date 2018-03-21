//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QQVIPFunctionFunCallService : NSObject
{
    NSString *_currentUin;
    NSMutableDictionary *_defaultFunCallTemplate;
    NSMutableDictionary *_currentFunCallConfigDict;
    NSMutableDictionary *_updateInfos;
}

+ (id)localFilePathForFileURLString:(id)arg1;
+ (id)urlToLocalSavePath:(id)arg1;
+ (void)downloadThumbImage:(id)arg1 wifiOnly:(_Bool)arg2;
+ (void)downloadAllResOfID:(long long)arg1 resUrl:(id)arg2 colorRingId:(long long)arg3 ringUrl:(id)arg4 postUserInfo:(id)arg5 viaWiFiOnly:(_Bool)arg6;
+ (void)createFunnyCallVideoFileStorePathIfNeeded;
+ (id)getInstance;
- (void).cxx_destruct;
- (void)downloadFunCallResByFunCallSetting:(id)arg1;
- (void)downloadFunCallByFriendUin:(id)arg1 andFunCallSetting:(id)arg2;
- (void)getFriendSetFunCallVideo:(id)arg1 isPhone:(_Bool)arg2 viaWiFiOnly:(_Bool)arg3;
- (void)getSelfFunCallVideoForFriend:(id)arg1 viaWiFiOnly:(_Bool)arg2;
- (id)getColorRingPathFromFriend:(id)arg1;
- (id)getComeRingPathForFriend:(id)arg1;
- (_Bool)isAllResourcesDownloadedOfRes:(long long)arg1 resUrl:(id)arg2 ringUrl:(id)arg3;
- (void)downloadFunCallResourcesById:(long long)arg1 resUrl:(id)arg2 colorRingId:(long long)arg3 ringUrl:(id)arg4 viaWiFiOnly:(_Bool)arg5;
- (id)getUpdateInfoOfResId:(long long)arg1 resUrl:(id)arg2 ringId:(long long)arg3 ringUrl:(id)arg4;
- (void)resetAllFunCallConfigByServer:(id)arg1 groupSetting:(id)arg2;
- (void)deleteGroupFunCall:(long long)arg1;
- (void)saveQQFunCallConfigTemplate:(id)arg1 type:(long long)arg2;
- (void)reloadSelfFunCallSettingFromLocal;
- (id)getGroupFriendListByResId:(unsigned long long)arg1;
- (id)getFunCallSettingForFriend:(id)arg1;
- (unsigned long long)getCurrentGroupFunCallNumber;
- (long long)getFunCallTemplateSetTypeById:(long long)arg1;
- (id)init;

@end

