//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWESwitchRecordModeCollectionView, NSArray, NSMutableArray, NSString;
@protocol AWESwitchRecordModeViewDelegate;

@interface AWESwitchRecordModeView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isPanned;
    _Bool _forbidScroll;
    id <AWESwitchRecordModeViewDelegate> _delegate;
    AWESwitchRecordModeCollectionView *_collectionView;
    UIView *_cursorView;
    NSArray *_titleArray;
    NSMutableArray *_widthArray;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *widthArray; // @synthesize widthArray=_widthArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) AWESwitchRecordModeCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <AWESwitchRecordModeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool forbidScroll; // @synthesize forbidScroll=_forbidScroll;
@property(nonatomic) _Bool isPanned; // @synthesize isPanned=_isPanned;
- (void).cxx_destruct;
- (void)_updateSubviewsLayout;
- (void)layoutSubviews;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)_offsetXforIndex:(long long)arg1;
- (void)_updateSelectedIndex:(long long)arg1;
- (void)_selectAtIndex:(long long)arg1;
- (void)_fillTitleArrayWithEmptyItems:(id)arg1;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndex:(long long)arg1;
- (void)reloadWithTitleArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

