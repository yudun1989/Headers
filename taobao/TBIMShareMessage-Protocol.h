//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageAdapter-Protocol.h"

@class NSArray, NSDate, NSString;

@protocol TBIMShareMessage <TBIMMessageAdapter>
- (NSString *)from;
- (NSString *)attrHostPic;
- (NSString *)attrHostName;
- (NSArray *)attrItems;
- (NSString *)attrGoodNum;
- (NSString *)attrSaleNum;
- (NSString *)attrActDesc;
- (NSString *)attrActPic;
- (NSString *)attrActUrl;
- (NSString *)attrBuyNum;
- (NSArray *)attrTags;
- (NSString *)shareTag;
- (NSDate *)likeModifyTime;
- (NSString *)getLikeNum;
- (_Bool)like;
- (NSString *)getshopLevelImageUrl;
- (NSString *)getactionUrl;
- (double)getPrice;
- (NSString *)getpicUrl;
- (NSString *)getInnerContent;
- (NSString *)getTitle;
- (int)getShareType;
@end
