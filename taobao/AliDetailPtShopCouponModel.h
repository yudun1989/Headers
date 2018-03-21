//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class AliDetailApiUnit, NSDictionary, NSString;

@interface AliDetailPtShopCouponModel : AliDetailComponentModel
{
    NSString *_couponId;
    NSString *_supplierId;
    NSString *_price;
    NSString *_title;
    NSString *_tips;
    NSString *_timePeriod;
    NSString *_type;
    NSString *_uuid;
    AliDetailApiUnit *_getCouponApi;
    NSString *_trackName;
    NSDictionary *_trackParams;
}

@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(retain, nonatomic) AliDetailApiUnit *getCouponApi; // @synthesize getCouponApi=_getCouponApi;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *timePeriod; // @synthesize timePeriod=_timePeriod;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *supplierId; // @synthesize supplierId=_supplierId;
@property(copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
- (void).cxx_destruct;

@end

