//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray, NSNumber, NSString;
@protocol FRFollowChannelColdBootRecommendUserCardStructModel><Optional, Optional;

@interface FRUserRelationUserRecommendV1FollowChannelRecommendsResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSNumber<Optional> *_auto_skip;
    NSString<Optional> *_unselected_tips;
    NSString<Optional> *_selected_tips;
    NSString<Optional> *_err_tips;
    NSArray<FRFollowChannelColdBootRecommendUserCardStructModel><Optional> *_recommends;
}

@property(retain, nonatomic) NSArray<FRFollowChannelColdBootRecommendUserCardStructModel><Optional> *recommends; // @synthesize recommends=_recommends;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSString<Optional> *selected_tips; // @synthesize selected_tips=_selected_tips;
@property(retain, nonatomic) NSString<Optional> *unselected_tips; // @synthesize unselected_tips=_unselected_tips;
@property(retain, nonatomic) NSNumber<Optional> *auto_skip; // @synthesize auto_skip=_auto_skip;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

