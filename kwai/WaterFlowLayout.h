//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, UIView;
@protocol UICollectionViewDataSourceWaterFlowLayout;

@interface WaterFlowLayout : UICollectionViewLayout
{
    long long numberOfColumns;
    long long currentPage;
    id <UICollectionViewDataSourceWaterFlowLayout> _flowdatasource;
    double cellWidth;
    double padding;
    double contentHeight;
    long long _cellCount;
    NSMutableArray *_cellHeight;
    NSMutableArray *_cellIndex;
    NSMutableArray *_cellPosition;
    double _edgePadding;
    double _centerPadding;
    UIView *_headerView;
    NSMutableArray *_attributes;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double centerPadding; // @synthesize centerPadding=_centerPadding;
@property(nonatomic) double edgePadding; // @synthesize edgePadding=_edgePadding;
@property(nonatomic) __weak id <UICollectionViewDataSourceWaterFlowLayout> flowdatasource; // @synthesize flowdatasource=_flowdatasource;
@property(retain, nonatomic) NSMutableArray *cellPosition; // @synthesize cellPosition=_cellPosition;
@property(retain, nonatomic) NSMutableArray *cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) NSMutableArray *cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) long long cellCount; // @synthesize cellCount=_cellCount;
- (void).cxx_destruct;
- (id)generateIndexListWithIndexCollection:(id)arg1 heightCollection:(id)arg2;
- (id)orderFromHeightCollection:(id)arg1 indexCollection:(id)arg2 deletedIndexpaths:(id)arg3 decreaseHeight:(double)arg4;
- (id)reorderedListByDeleteCellAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (double)initialize;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end

