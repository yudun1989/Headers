//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface TMBabyAgeStepsModel : TBJSONModel
{
    long long _currentDataTag;
    long long _currentDay;
    NSArray *_babyGrowStage;
}

@property(retain, nonatomic) NSArray *babyGrowStage; // @synthesize babyGrowStage=_babyGrowStage;
@property(nonatomic) long long currentDay; // @synthesize currentDay=_currentDay;
@property(nonatomic) long long currentDataTag; // @synthesize currentDataTag=_currentDataTag;
- (void).cxx_destruct;
- (id)convertMapToOrdedArray:(id)arg1;
- (void)refreshDataOnDic:(id)arg1;

@end

