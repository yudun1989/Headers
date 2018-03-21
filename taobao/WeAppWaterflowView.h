//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppListBasicComponent.h"

#import "PSCollectionViewDataSource-Protocol.h"
#import "PSCollectionViewDelegate-Protocol.h"

@class NSString, PSCollectionView, WeAppViewManager;

@interface WeAppWaterflowView : WeAppListBasicComponent <PSCollectionViewDelegate, PSCollectionViewDataSource>
{
    PSCollectionView *_waterflowView;
    WeAppViewManager *_cellHeightViewManager;
}

@property(retain, nonatomic) WeAppViewManager *cellHeightViewManager; // @synthesize cellHeightViewManager=_cellHeightViewManager;
@property(retain, nonatomic) PSCollectionView *waterflowView; // @synthesize waterflowView=_waterflowView;
- (void).cxx_destruct;
- (long long)getVisibleCellIndexWithPoint:(struct CGPoint)arg1;
- (void)setWaterFallViewCellWidth:(double)arg1;
- (double)getWaterFallViewHeight:(double)arg1;
- (int)getGridHeight:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (int)getGridWidth:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (void)onMeasureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (void)loadImagesForOnscreenCells;
- (double)collectionView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)collectionView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (long long)numberOfRowsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3;
- (void)setFootView:(id)arg1;
- (void)reloadData;
- (_Bool)needFootView;
- (void)refreshData;
- (void)updateFrame;
- (void)dealloc;
- (void)releaseConstrutView;
- (id)createView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

