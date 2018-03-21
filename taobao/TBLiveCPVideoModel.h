//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBLiveFeedAccountModel;
@protocol TBLiveVideoGoodModel, TBLiveVideoUrlModel;

@interface TBLiveCPVideoModel : TBJSONModel
{
    _Bool _connectLocation;
    _Bool _hasPlayed;
    _Bool _hasDisplayMonitor;
    NSString *_liveId;
    NSString *_type;
    NSString *_status;
    NSString *_roomStatus;
    NSString *_title;
    NSString *_coverImg;
    NSString *_location;
    NSString *_customLogo;
    NSString *_appointmentTime;
    NSString *_accountId;
    TBLiveFeedAccountModel *_accountDO;
    NSString *_totalJoinCount;
    NSString *_viewCount;
    NSString *_joinCount;
    NSString *_praiseCount;
    NSString *_favorImg;
    NSString *_nativeFeedDetailUrl;
    NSString *_liveChannelId;
    NSString *_liveColumnId;
    NSString *_isPlayerLow;
    NSString *_actionType;
    NSString *_liveUrl;
    NSString *_liveUrlHls;
    NSArray<TBLiveVideoUrlModel> *_liveUrlList;
    NSArray<TBLiveVideoGoodModel> *_goodsList;
    NSString *_trackInfo;
    NSString *_scm;
    NSString *_matchType;
}

@property(nonatomic) _Bool hasDisplayMonitor; // @synthesize hasDisplayMonitor=_hasDisplayMonitor;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(copy, nonatomic) NSString *matchType; // @synthesize matchType=_matchType;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(retain, nonatomic) NSArray<TBLiveVideoGoodModel> *goodsList; // @synthesize goodsList=_goodsList;
@property(retain, nonatomic) NSArray<TBLiveVideoUrlModel> *liveUrlList; // @synthesize liveUrlList=_liveUrlList;
@property(copy, nonatomic) NSString *liveUrlHls; // @synthesize liveUrlHls=_liveUrlHls;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *isPlayerLow; // @synthesize isPlayerLow=_isPlayerLow;
@property(copy, nonatomic) NSString *liveColumnId; // @synthesize liveColumnId=_liveColumnId;
@property(copy, nonatomic) NSString *liveChannelId; // @synthesize liveChannelId=_liveChannelId;
@property(copy, nonatomic) NSString *nativeFeedDetailUrl; // @synthesize nativeFeedDetailUrl=_nativeFeedDetailUrl;
@property(copy, nonatomic) NSString *favorImg; // @synthesize favorImg=_favorImg;
@property(copy, nonatomic) NSString *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(copy, nonatomic) NSString *joinCount; // @synthesize joinCount=_joinCount;
@property(copy, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *totalJoinCount; // @synthesize totalJoinCount=_totalJoinCount;
@property(retain, nonatomic) TBLiveFeedAccountModel *accountDO; // @synthesize accountDO=_accountDO;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *appointmentTime; // @synthesize appointmentTime=_appointmentTime;
@property(copy, nonatomic) NSString *customLogo; // @synthesize customLogo=_customLogo;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) _Bool connectLocation; // @synthesize connectLocation=_connectLocation;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *roomStatus; // @synthesize roomStatus=_roomStatus;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (int)feedVideoStatus;

@end

