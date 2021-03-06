//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSString;
@protocol AliDetailTimeLimitActivityItemModel;

@interface AliDetailTimeLimitActivityChaoShiModel : AliDetailComponentModel
{
    NSString *_title;
    NSString *_url;
    long long _time;
    NSArray<AliDetailTimeLimitActivityItemModel> *_itemList;
    NSString *_itemId;
}

@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSArray<AliDetailTimeLimitActivityItemModel> *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

