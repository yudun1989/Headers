//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBShareListTypeBean;

@interface TBNewDetailedListConfigureModel : TBJSONModel
{
    NSArray *_names;
    NSArray<TBShareListTypeBean> *_shareListTypeBeans;
    NSString *_syncDesc;
    NSString *_syncDescUrl;
}

@property(retain, nonatomic) NSString *syncDescUrl; // @synthesize syncDescUrl=_syncDescUrl;
@property(retain, nonatomic) NSString *syncDesc; // @synthesize syncDesc=_syncDesc;
@property(retain, nonatomic) NSArray<TBShareListTypeBean> *shareListTypeBeans; // @synthesize shareListTypeBeans=_shareListTypeBeans;
@property(retain, nonatomic) NSArray *names; // @synthesize names=_names;
- (void).cxx_destruct;

@end

