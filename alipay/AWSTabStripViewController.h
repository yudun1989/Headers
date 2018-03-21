//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEBaseController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWSBarHighlightView, AWSBarView, NSArray, NSMutableDictionary, NSString, UICollectionView;

@interface AWSTabStripViewController : BEEBaseController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSMutableDictionary *_viewControllerDict;
    double _lastContentOffset;
    unsigned long long _lastPageNumber;
    unsigned long long _pageBeforeRotate;
    NSArray *_originalPagerTabStripChildViewControllers;
    _Bool _skipIntermediateViewControllers;
    _Bool _hideBarView;
    _Bool _scrollDisable;
    UICollectionView *_containerView;
    AWSBarView *_barView;
    AWSBarHighlightView *_highLightView;
}

@property(nonatomic) _Bool scrollDisable; // @synthesize scrollDisable=_scrollDisable;
@property(nonatomic) _Bool hideBarView; // @synthesize hideBarView=_hideBarView;
@property _Bool skipIntermediateViewControllers; // @synthesize skipIntermediateViewControllers=_skipIntermediateViewControllers;
@property(retain, nonatomic) AWSBarHighlightView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) AWSBarView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) UICollectionView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (unsigned long long)numberOfTabStrViewController;
- (id)viewControllerForPagerTabStrViewController:(long long)arg1;
- (id)viewControllerForIndex:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;
- (void)tabItemExposureLogger:(id)arg1;
- (void)tabItemClickLogger:(id)arg1;
- (void)viewWillFirstAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)pagerTabStripViewControllerInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

