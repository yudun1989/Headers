//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSString;
@protocol TBMeasureSizeTableColumnModel;

@interface TBMeasureSingleSizeChartModel : AliDetailComponentModel
{
    NSArray<TBMeasureSizeTableColumnModel> *_columnData;
    NSString *_tableTitle;
}

@property(retain, nonatomic) NSString *tableTitle; // @synthesize tableTitle=_tableTitle;
@property(retain, nonatomic) NSArray<TBMeasureSizeTableColumnModel> *columnData; // @synthesize columnData=_columnData;
- (void).cxx_destruct;

@end

