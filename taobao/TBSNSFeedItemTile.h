//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBSNSInnerFeedTilesItem;

@interface TBSNSFeedItemTile : TBJSONModel
{
    _Bool _preShelf;
    float _picWidth;
    float _picHeight;
    NSString *_type;
    NSString *_path;
    unsigned long long _itemId;
    NSString *_price;
    NSString *_text;
    NSString *_promotionPirce;
    NSString *_promotionDesc;
    NSString *_promotionName;
    NSString *_picDesc;
    NSString *_priceL;
    NSString *_promotionPirceL;
    NSString *_liveStatusIcon;
    long long _liveVideoStatus;
    unsigned long long _predictTime;
    NSString *_videoTimeLength;
    NSString *_videoStorageSize;
    NSString *_totalJoinCount;
    NSString *_videolayer;
    NSString *_videoSource;
    NSString *_interactiveVideoId;
    NSString *_videoId;
    NSString *_videoPath;
    NSString *_videoUrl;
    NSString *_videoAppKey;
    double _videoHeight;
    double _videoWidth;
    NSString *_itemClickUrl;
    NSString *_pictureClickUrl;
    TBSNSInnerFeedTilesItem *_eggInnerItem;
    unsigned long long _shelfTime;
}

@property(nonatomic) unsigned long long shelfTime; // @synthesize shelfTime=_shelfTime;
@property(nonatomic) _Bool preShelf; // @synthesize preShelf=_preShelf;
@property(retain, nonatomic) TBSNSInnerFeedTilesItem *eggInnerItem; // @synthesize eggInnerItem=_eggInnerItem;
@property(copy, nonatomic) NSString *pictureClickUrl; // @synthesize pictureClickUrl=_pictureClickUrl;
@property(copy, nonatomic) NSString *itemClickUrl; // @synthesize itemClickUrl=_itemClickUrl;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(copy, nonatomic) NSString *videoAppKey; // @synthesize videoAppKey=_videoAppKey;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *interactiveVideoId; // @synthesize interactiveVideoId=_interactiveVideoId;
@property(retain, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(retain, nonatomic) NSString *videolayer; // @synthesize videolayer=_videolayer;
@property(retain, nonatomic) NSString *totalJoinCount; // @synthesize totalJoinCount=_totalJoinCount;
@property(retain, nonatomic) NSString *videoStorageSize; // @synthesize videoStorageSize=_videoStorageSize;
@property(retain, nonatomic) NSString *videoTimeLength; // @synthesize videoTimeLength=_videoTimeLength;
@property(nonatomic) unsigned long long predictTime; // @synthesize predictTime=_predictTime;
@property(nonatomic) long long liveVideoStatus; // @synthesize liveVideoStatus=_liveVideoStatus;
@property(retain, nonatomic) NSString *liveStatusIcon; // @synthesize liveStatusIcon=_liveStatusIcon;
@property(retain, nonatomic) NSString *promotionPirceL; // @synthesize promotionPirceL=_promotionPirceL;
@property(retain, nonatomic) NSString *priceL; // @synthesize priceL=_priceL;
@property(copy, nonatomic) NSString *picDesc; // @synthesize picDesc=_picDesc;
@property(nonatomic) float picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) float picWidth; // @synthesize picWidth=_picWidth;
@property(retain, nonatomic) NSString *promotionName; // @synthesize promotionName=_promotionName;
@property(retain, nonatomic) NSString *promotionDesc; // @synthesize promotionDesc=_promotionDesc;
@property(retain, nonatomic) NSString *promotionPirce; // @synthesize promotionPirce=_promotionPirce;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)tileUrl;
- (id)toJSONDictionary;
- (double)getPriceForShow;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

