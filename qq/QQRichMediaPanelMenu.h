//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewCell, UICollectionViewFlowLayout;
@protocol QQRichMediaPanelMenuDelegate;

@interface QQRichMediaPanelMenu : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIView *_selectedIndicator;
    NSMutableArray *_cellsWidth;
    UICollectionViewCell *_selectedCell;
    _Bool _bAutoSelected;
    NSArray *_classificationIDList;
    NSArray *_classificationList;
    NSArray *_needRedDotList;
    long long _selectedIndex;
    id <QQRichMediaPanelMenuDelegate> _richMediaPaneldelegate;
    UICollectionView *_menuView;
    UICollectionViewFlowLayout *_collectionLayout;
}

@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak id <QQRichMediaPanelMenuDelegate> richMediaPaneldelegate; // @synthesize richMediaPaneldelegate=_richMediaPaneldelegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *needRedDotList; // @synthesize needRedDotList=_needRedDotList;
@property(retain, nonatomic) NSArray *classificationList; // @synthesize classificationList=_classificationList;
@property(retain, nonatomic) NSArray *classificationIDList; // @synthesize classificationIDList=_classificationIDList;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)selectedToFrame:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)setSelectedIndex:(long long)arg1 needScroll:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

