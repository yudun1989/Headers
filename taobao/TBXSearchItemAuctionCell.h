//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchItemCellBase.h"

@class TBSearchProgressBar, TBSearchSummaryTipsView, TBSearchWapItem, TBXSearchItemCellLongPressManager, TBXSearchItemCellMaskAuction;

@interface TBXSearchItemAuctionCell : TBXSearchItemCellBase
{
    TBXSearchItemCellLongPressManager *_lpmanager;
    TBSearchProgressBar *_stockProgressBar;
    TBSearchSummaryTipsView *_summaryTipsView;
}

@property(retain, nonatomic) TBSearchSummaryTipsView *summaryTipsView; // @synthesize summaryTipsView=_summaryTipsView;
@property(retain, nonatomic) TBSearchProgressBar *stockProgressBar; // @synthesize stockProgressBar=_stockProgressBar;
@property(retain, nonatomic) TBXSearchItemCellLongPressManager *lpmanager; // @synthesize lpmanager=_lpmanager;
- (void).cxx_destruct;
- (void)setCellAccessibilty;
- (void)adjustViews;
- (void)render;
- (void)didSelect;
- (void)hideMask;
- (void)longPress:(id)arg1;
- (_Bool)hasSame;
- (_Bool)hasSimilar;
- (void)cellMoreButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) TBXSearchItemCellMaskAuction *maskView; // @dynamic maskView;
@property(retain, nonatomic) TBSearchWapItem *model; // @dynamic model;

@end

