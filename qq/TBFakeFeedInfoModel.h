//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString, TBFakeGroupInfoModel;

@interface TBFakeFeedInfoModel : QQModel
{
    _Bool _hasShareToDiscover;
    unsigned int _date;
    NSString *_feedID;
    unsigned long long _updateTime;
    NSArray *_videoInfo;
    NSString *_unionID;
    long long _feedType;
    TBFakeGroupInfoModel *_groupInfo;
}

@property(retain, nonatomic) TBFakeGroupInfoModel *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) _Bool hasShareToDiscover; // @synthesize hasShareToDiscover=_hasShareToDiscover;
@property(retain, nonatomic) NSArray *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)dealloc;
- (id)description;
- (id)getVidList:(unsigned int)arg1;
- (id)getVideoInfoModelWithVid:(id)arg1;
- (id)getVideoInfoModel:(unsigned long long)arg1;
- (id)converToShareGroupFeedModel;
- (id)converToFeedInfoModel;
- (id)converToStoryFeedModel;
- (void)filterDuplicateVideoInfo;
- (_Bool)delBatchVideoInfoWithModel:(id)arg1;
- (_Bool)delBatchVideoInfoWithVid:(id)arg1;
- (_Bool)delVideoInfoWithVid:(id)arg1;
- (_Bool)delVideoInfo:(unsigned long long)arg1;
- (void)updateGroupInfoDescribe:(id)arg1;
- (void)insertNewGroupMembers:(id)arg1;
- (void)insertVideoInfo:(id)arg1;
- (void)insertBatchVideoInfo:(id)arg1;

@end

