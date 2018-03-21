//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBLiveLastShareItem, TBLiveURLItemModel;

@interface TBLiveSimpleInfoModel : TBJSONModel
{
    NSString *_accountId;
    NSString *_coverImg;
    NSString *_joinCount;
    NSString *_liveId;
    NSString *_liveUrl;
    NSString *_liveUrlHls;
    NSString *_nativeFeedDetailUrl;
    NSString *_praiseCount;
    NSString *_roomStatus;
    NSString *_roomType;
    NSString *_status;
    NSString *_title;
    NSString *_totalJoinCount;
    NSString *_totalViewCount;
    NSString *_type;
    NSString *_viewCount;
    NSString *_favorImg;
    NSString *_isPlayerLow;
    NSArray<TBLiveURLItemModel> *_liveUrlList;
    long long _curItemNum;
    NSArray<TBLiveLastShareItem> *_showItemList;
}

@property(retain, nonatomic) NSArray<TBLiveLastShareItem> *showItemList; // @synthesize showItemList=_showItemList;
@property(nonatomic) long long curItemNum; // @synthesize curItemNum=_curItemNum;
@property(retain, nonatomic) NSArray<TBLiveURLItemModel> *liveUrlList; // @synthesize liveUrlList=_liveUrlList;
@property(copy, nonatomic) NSString *isPlayerLow; // @synthesize isPlayerLow=_isPlayerLow;
@property(copy, nonatomic) NSString *favorImg; // @synthesize favorImg=_favorImg;
@property(copy, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *totalViewCount; // @synthesize totalViewCount=_totalViewCount;
@property(copy, nonatomic) NSString *totalJoinCount; // @synthesize totalJoinCount=_totalJoinCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
@property(copy, nonatomic) NSString *roomStatus; // @synthesize roomStatus=_roomStatus;
@property(copy, nonatomic) NSString *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(copy, nonatomic) NSString *nativeFeedDetailUrl; // @synthesize nativeFeedDetailUrl=_nativeFeedDetailUrl;
@property(copy, nonatomic) NSString *liveUrlHls; // @synthesize liveUrlHls=_liveUrlHls;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *joinCount; // @synthesize joinCount=_joinCount;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;

@end

