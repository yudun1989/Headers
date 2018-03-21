//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQReadInJoyChannelBarModel;

@interface QQReadInJoyChannelBarDataMgr : NSObject
{
    QQReadInJoyChannelBarModel *_kanDianChannelBarData;
    QQReadInJoyChannelBarModel *_videoChannelBarData;
    QQReadInJoyChannelBarModel *_subscribeTabBarData;
}

+ (unsigned int)getChannelBarShowStyle:(unsigned int)arg1;
+ (void)asyncSaveUserChannelBarModel:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) QQReadInJoyChannelBarModel *subscribeTabBarData; // @synthesize subscribeTabBarData=_subscribeTabBarData;
@property(retain, nonatomic) QQReadInJoyChannelBarModel *videoChannelBarData; // @synthesize videoChannelBarData=_videoChannelBarData;
@property(retain, nonatomic) QQReadInJoyChannelBarModel *kanDianChannelBarData; // @synthesize kanDianChannelBarData=_kanDianChannelBarData;
- (void).cxx_destruct;
- (int)myTopicUnreadNum;
- (void)saveMyTopicUnreadNum:(int)arg1;
- (unsigned int)myTopicEnterTime;
- (void)saveMyTopicEnterTime:(unsigned int)arg1;
- (id)enteredUrlKeyWithItemId:(int)arg1;
- (void)checkAndCleanEnteredUrl;
- (id)getEnteredUrlWithItemId:(int)arg1;
- (void)saveEnteredUrl:(id)arg1 withItemId:(int)arg2;
- (void)saveSubscribeTabBarData;
- (void)clearTopicUpdateUnReadNumber:(unsigned long long)arg1;
- (id)getTopicUpdateRightTitle;
- (id)getTopicUpdateLeftTitle;
- (void)setTopicUpdateInfo:(id)arg1;
- (unsigned long long)getChannelBarSeqWithType:(unsigned int)arg1;
- (void)updateChannelItemDataWithItemModel:(id)arg1;
- (void)postUpdateDataNotification:(unsigned int)arg1;
- (void)mergeChannelListInfoWithReceivedModel:(id)arg1 localModel:(id)arg2;
- (void)updateChannelBarDataWithType:(unsigned int)arg1 isForPage:(_Bool)arg2;
- (void)updateChannelBarDataWithType:(unsigned int)arg1;
- (id)filteredDataFromAllKandianData:(id)arg1;
- (id)filteredForBoardDataFromAllKandianData:(id)arg1;
- (id)getUserChannelBarDataWithType:(unsigned int)arg1;
- (void)initData;

@end

