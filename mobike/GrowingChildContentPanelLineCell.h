//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GrowingChildContentPanelCellBase.h"

@class GrowingDetaiLineChartlView, UIImageView;

@interface GrowingChildContentPanelLineCell : GrowingChildContentPanelCellBase
{
    GrowingDetaiLineChartlView *_lineChartView;
    UIImageView *_screenShotImageView;
}

@property(retain, nonatomic) UIImageView *screenShotImageView; // @synthesize screenShotImageView=_screenShotImageView;
@property(retain, nonatomic) GrowingDetaiLineChartlView *lineChartView; // @synthesize lineChartView=_lineChartView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadElement:(id)arg1 andImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

