//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GrowingChildContentPanelCellBase.h"

@class GrowingRealtimeBarChartView;

@interface GrowingChildContentPanelBarCell : GrowingChildContentPanelCellBase
{
    _Bool _enableSave;
    GrowingRealtimeBarChartView *_barChartView;
}

@property(retain, nonatomic) GrowingRealtimeBarChartView *barChartView; // @synthesize barChartView=_barChartView;
@property(nonatomic) _Bool enableSave; // @synthesize enableSave=_enableSave;
- (void).cxx_destruct;
- (void)loadElement:(id)arg1 andImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)elementForSave;
- (void)prepareForReuse;

@end

