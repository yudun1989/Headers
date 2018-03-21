//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LYStorage, QQDynamicAvatarStrategyModel;

@interface QQDynamicAvatarStrategyManager : NSObject
{
    LYStorage *_storage;
    _Bool _cancelDelay;
    QQDynamicAvatarStrategyModel *_strategyModel;
}

+ (id)getInstance;
@property(retain, nonatomic) QQDynamicAvatarStrategyModel *strategyModel; // @synthesize strategyModel=_strategyModel;
- (void).cxx_destruct;
- (void)recordToday;
- (_Bool)isSameDay;
- (id)largeRecordParams;
- (id)mediumRecordParams;
- (id)smallRecordParams;
- (_Bool)isFlowAllowToDownload;
- (void)addFlowBytes:(long long)arg1;
- (unsigned long long)currentNetworkStatus;
- (_Bool)isNetWorkAllowToDownload:(unsigned long long)arg1;
- (_Bool)isAllowToDownload:(unsigned long long)arg1;
- (int)nearbyFriendDelayStartTime;
- (int)contactTabDelayStartTime;
- (int)messageTabDelayStartTime;
- (_Bool)isContactTabPlayListSave;
- (_Bool)isMessageTabPlayListSave;
- (_Bool)isContactTabShow;
- (_Bool)isMessageTabShow;
- (_Bool)isGroupUserSummaryShow;
- (_Bool)isNearbyUserSummaryBrowserShow;
- (_Bool)isNearbyUserSummaryShow;
- (_Bool)isUserSummaryPendantStoreShow;
- (_Bool)isUserSummaryBrowserShow;
- (_Bool)isUserSummaryShow;
- (_Bool)isDrawerShow;
- (_Bool)isNearbyFriendShow;
- (void)saveStrategyModelToFile;
- (id)init;

@end

