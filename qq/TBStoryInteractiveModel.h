//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString, TBFeedBannerModel, TBQQUserInfoModel, TBShareGroupInfoModel;

@interface TBStoryInteractiveModel : QQModel
{
    _Bool _hasVideoTag;
    _Bool _isEnd;
    _Bool _hasShareToDiscover;
    _Bool _isTagsShowMaxLine;
    _Bool _hasPublicVideo;
    unsigned int _feedDate;
    unsigned int _vidListOrder;
    unsigned int _videoTotal;
    long long _type;
    TBQQUserInfoModel *_user;
    TBShareGroupInfoModel *_shareGroupInfo;
    NSArray *_videoInfo;
    NSString *_feedID;
    TBFeedBannerModel *_bannerFeed;
    NSArray *_videoTags;
}

@property(nonatomic) _Bool hasPublicVideo; // @synthesize hasPublicVideo=_hasPublicVideo;
@property(nonatomic) _Bool isTagsShowMaxLine; // @synthesize isTagsShowMaxLine=_isTagsShowMaxLine;
@property(retain, nonatomic) NSArray *videoTags; // @synthesize videoTags=_videoTags;
@property(retain, nonatomic) TBFeedBannerModel *bannerFeed; // @synthesize bannerFeed=_bannerFeed;
@property(nonatomic) _Bool hasShareToDiscover; // @synthesize hasShareToDiscover=_hasShareToDiscover;
@property(nonatomic) unsigned int videoTotal; // @synthesize videoTotal=_videoTotal;
@property(nonatomic) unsigned int vidListOrder; // @synthesize vidListOrder=_vidListOrder;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSArray *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) TBShareGroupInfoModel *shareGroupInfo; // @synthesize shareGroupInfo=_shareGroupInfo;
@property(retain, nonatomic) TBQQUserInfoModel *user; // @synthesize user=_user;
@property(nonatomic) _Bool hasVideoTag; // @synthesize hasVideoTag=_hasVideoTag;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int feedDate; // @synthesize feedDate=_feedDate;
- (void)dealloc;

@end

