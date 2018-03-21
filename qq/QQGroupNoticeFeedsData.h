//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, QQLockDictionary;

@interface QQGroupNoticeFeedsData : NSObject
{
    NSString *_currentUin;
    NSMutableDictionary *_dictNoticeDataMgr;
    QQLockDictionary *_dictBulletChallengData;
    QQLockDictionary *_dictBulletReadState;
    NSMutableDictionary *_dictBulletShowState;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onChangeAccount:(id)arg1;
- (void)onSaveGroupNoticeFeeds:(id)arg1;
- (_Bool)isExistBulletinFeeds:(id)arg1;
- (id)getGroupNoticeFeedsPath;
- (_Bool)saveGroupNoticeFeeds:(id)arg1;
- (id)loadGroupNoticeFeeds;
- (id)getGroupBulletChallengeFeeds:(id)arg1;
- (void)addGroupNoticeFeedsShowState:(id)arg1 feedID:(id)arg2;
- (void)addGroupGameChallengeMsg:(id)arg1 feeds:(id)arg2;
- (void)addGroupBulletinMsg:(id)arg1 feeds:(id)arg2;
- (_Bool)hasBulletChallengeNotice:(id)arg1;
- (void)save;
- (void)resetData;
- (id)init;

@end

