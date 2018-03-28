//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRCommonUserStructModel, NSNumber, NSString;
@protocol Optional;

@interface FRRecommendUserLargeCardStructModel : JSONModel
{
    FRCommonUserStructModel *_user;
    NSString<Optional> *_recommend_reason;
    NSNumber<Optional> *_recommend_type;
    NSNumber<Optional> *_selected;
    NSString<Optional> *_stats_place_holder;
}

@property(retain, nonatomic) NSString<Optional> *stats_place_holder; // @synthesize stats_place_holder=_stats_place_holder;
@property(retain, nonatomic) NSNumber<Optional> *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSNumber<Optional> *recommend_type; // @synthesize recommend_type=_recommend_type;
@property(retain, nonatomic) NSString<Optional> *recommend_reason; // @synthesize recommend_reason=_recommend_reason;
@property(retain, nonatomic) FRCommonUserStructModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

