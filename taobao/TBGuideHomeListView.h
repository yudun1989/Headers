//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGuideBaseHomeView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TBGuideExposureTool, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface TBGuideHomeListView : TBGuideBaseHomeView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _noticeViewDisplaying;
    _Bool _hasViewAppeared;
    int _listRowType;
    UICollectionView *_collectionView;
    UIView *_emptyView;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_footerView;
    NSMutableDictionary *_userTrackerDict;
    TBGuideExposureTool *_exposureTool;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
}

@property(nonatomic) _Bool hasViewAppeared; // @synthesize hasViewAppeared=_hasViewAppeared;
@property(retain, nonatomic) TBGuideExposureTool *exposureTool; // @synthesize exposureTool=_exposureTool;
@property(retain, nonatomic) NSMutableDictionary *userTrackerDict; // @synthesize userTrackerDict=_userTrackerDict;
@property(nonatomic) int listRowType; // @synthesize listRowType=_listRowType;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) _Bool noticeViewDisplaying; // @synthesize noticeViewDisplaying=_noticeViewDisplaying;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)utPageName;
- (void)visibleCellEndDisplay;
- (void)visibleCellWillDisplay;
- (void)applicationDidEnterBackGround:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)unregisterApplicationDidEnterBackgroundNotification;
- (void)registerApplicationDidEnterBackgroundNotification;
- (_Bool)showDislike;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showDislikeGuideView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showNoticeView:(id)arg1;
- (struct CGSize)getHeaderReferenceViewSize;
- (id)getHeaderReferenceView;
- (void)showMoreFreshEndView;
- (void)clickLoadMoreButton:(id)arg1;
- (void)showLoaddMoreError:(id)arg1;
- (void)hideEmptyView;
- (void)showEmptyView;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onLoadMoreFreshEnd;
- (void)onLoadMoreFreshFailed:(id)arg1;
- (void)onLoadMoreFreshSuccess:(_Bool)arg1 isDisplayTip:(_Bool)arg2;
- (void)onLoadMoreFresh;
- (void)onTopFreshError:(id)arg1;
- (void)onTopFreshSuccess:(_Bool)arg1 isDisplayTip:(_Bool)arg2;
- (void)onTopFreshForToday:(_Bool)arg1 isDisplayTip:(_Bool)arg2;
- (void)onTopFresh;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)setScrollToTop:(_Bool)arg1;
- (void)removeContentWith:(id)arg1;
- (void)toggleTopLoad;
- (void)reloadUI;
- (void)reloadData;
- (void)setRefreshTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateBackgroundImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 interestItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

