//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString;
@protocol AliDetailSkuContractPlan;

@interface AliDetailSkuContractPlanList : TBJSONModel
{
    NSArray<AliDetailSkuContractPlan> *_plan;
    NSString *_planName;
    NSDictionary *_planMap;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSDictionary *planMap; // @synthesize planMap=_planMap;
@property(retain, nonatomic) NSString *planName; // @synthesize planName=_planName;
@property(retain, nonatomic) NSArray<AliDetailSkuContractPlan> *plan; // @synthesize plan=_plan;
- (void).cxx_destruct;

@end

