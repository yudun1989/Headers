//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface AWELiveGiftCollectionViewLayout : UICollectionViewLayout
{
    long long _cellCount;
    long long _pageCount;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    long long _rows;
    long long _columns;
    struct CGSize _itemSize;
}

@property(nonatomic) long long columns; // @synthesize columns=_columns;
@property(nonatomic) long long rows; // @synthesize rows=_rows;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end

