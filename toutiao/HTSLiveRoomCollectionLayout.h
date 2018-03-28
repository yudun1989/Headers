//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface HTSLiveRoomCollectionLayout : UICollectionViewLayout
{
    long long _cellCount;
    long long _pageCount;
    int _rows;
    int _columns;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    struct CGSize _itemSize;
}

@property(nonatomic) int columns; // @synthesize columns=_columns;
@property(nonatomic) int rows; // @synthesize rows=_rows;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end
