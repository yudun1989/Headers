//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveVideoGoodModel : TBJSONModel
{
    long long _itemId;
    NSString *_itemImg;
    NSString *_itemTitle;
    NSString *_itemUrl;
    NSString *_price;
    long long _relatedLiveId;
    NSString *_status;
}

@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long relatedLiveId; // @synthesize relatedLiveId=_relatedLiveId;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemImg; // @synthesize itemImg=_itemImg;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

