//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSString;
@protocol AliDetailShortItemModel;

@interface AliDetailPtGoodsmatchingModel : AliDetailComponentModel
{
    NSString *_picUrl;
    NSString *_matchingTitle;
    NSArray<AliDetailShortItemModel> *_goodsmatchingList;
}

@property(retain, nonatomic) NSArray<AliDetailShortItemModel> *goodsmatchingList; // @synthesize goodsmatchingList=_goodsmatchingList;
@property(retain, nonatomic) NSString *matchingTitle; // @synthesize matchingTitle=_matchingTitle;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;

@end

