//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GrowingLineChartView.h"

@class GrowingRealTimeData, NSString;

@interface GrowingRealtimeLineChartView : GrowingLineChartView
{
    GrowingRealTimeData *_data;
    CDUnknownBlockType _onLoadFinish;
    NSString *_requestID;
}

@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) CDUnknownBlockType onLoadFinish; // @synthesize onLoadFinish=_onLoadFinish;
@property(retain, nonatomic) GrowingRealTimeData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)onLoadFinish:(_Bool)arg1;
- (void)loadElement:(id)arg1;

@end

