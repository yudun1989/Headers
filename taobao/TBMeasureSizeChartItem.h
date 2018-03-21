//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBMeasureSizeTableColumnModel, UILabel;

@interface TBMeasureSizeChartItem : UIView
{
    _Bool _hideRightLineInTitle;
    _Bool _firstColumn;
    TBMeasureSizeTableColumnModel *_chartColumnModel;
    double _minWidth;
    long long _recLine;
    unsigned long long _idx;
    UILabel *_recommendLabel;
}

@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(nonatomic) unsigned long long idx; // @synthesize idx=_idx;
@property(nonatomic) _Bool firstColumn; // @synthesize firstColumn=_firstColumn;
@property(nonatomic) long long recLine; // @synthesize recLine=_recLine;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) _Bool hideRightLineInTitle; // @synthesize hideRightLineInTitle=_hideRightLineInTitle;
@property(retain, nonatomic) TBMeasureSizeTableColumnModel *chartColumnModel; // @synthesize chartColumnModel=_chartColumnModel;
- (void).cxx_destruct;
- (void)createBodyView;
- (id)createLine;
- (void)setRecommendSize:(id)arg1;
- (void)createTitleView;
- (void)createSubviews;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

