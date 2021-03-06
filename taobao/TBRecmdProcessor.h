//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TBRecmdCollectionViewLayout, TBRecmdConfiguration, TBRecmdContext, TBRecmdLoadMoreCardProvider, TBRecmdLoadMoreView, TBRecmdMaskView, TBRecmdQueryResponse, UICollectionView, UIScrollView, UIView;

@interface TBRecmdProcessor : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _canAutoLoadMore;
    unsigned long long _outputViewType;
    long long _currentPage;
    TBRecmdContext *_context;
    TBRecmdLoadMoreView *_loadMoreView;
    NSMutableArray *_cardProviders;
    NSMutableArray *_tableViewCellProviders;
    double _headerViewHeight;
    UIView *_headerView;
    TBRecmdMaskView *_maskView;
    TBRecmdQueryResponse *_latestQueryResponse;
    UICollectionView *_recmdCollectionView;
    NSMutableDictionary *_cardIdentifiers;
    TBRecmdLoadMoreCardProvider *_loadMoreCardProvider;
    NSMutableSet *_cards;
    TBRecmdCollectionViewLayout *_recmdCollectionViewLayout;
    UIScrollView *_bigHouseView;
    NSMutableArray *_exposeLoserArray;
}

@property(retain, nonatomic) NSMutableArray *exposeLoserArray; // @synthesize exposeLoserArray=_exposeLoserArray;
@property(retain, nonatomic) UIScrollView *bigHouseView; // @synthesize bigHouseView=_bigHouseView;
@property(retain, nonatomic) TBRecmdCollectionViewLayout *recmdCollectionViewLayout; // @synthesize recmdCollectionViewLayout=_recmdCollectionViewLayout;
@property(retain, nonatomic) NSMutableSet *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) TBRecmdLoadMoreCardProvider *loadMoreCardProvider; // @synthesize loadMoreCardProvider=_loadMoreCardProvider;
@property(retain, nonatomic) NSMutableDictionary *cardIdentifiers; // @synthesize cardIdentifiers=_cardIdentifiers;
@property(nonatomic) _Bool canAutoLoadMore; // @synthesize canAutoLoadMore=_canAutoLoadMore;
@property(retain, nonatomic) UICollectionView *recmdCollectionView; // @synthesize recmdCollectionView=_recmdCollectionView;
@property(retain, nonatomic) TBRecmdQueryResponse *latestQueryResponse; // @synthesize latestQueryResponse=_latestQueryResponse;
@property(retain, nonatomic) TBRecmdMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) NSMutableArray *tableViewCellProviders; // @synthesize tableViewCellProviders=_tableViewCellProviders;
@property(retain, nonatomic) NSMutableArray *cardProviders; // @synthesize cardProviders=_cardProviders;
@property(retain, nonatomic) TBRecmdLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) TBRecmdContext *context; // @synthesize context=_context;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long outputViewType; // @synthesize outputViewType=_outputViewType;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 marginTopForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadListViewData;
- (void)dealloc;
- (void)exposeTrackAtIndex:(long long)arg1;
- (id)tableViewCellProviderAtIndex:(long long)arg1;
- (id)cardProviderAtIndex:(long long)arg1;
- (void)dismissDeleteMaskView;
- (id)showCardInContentView:(id)arg1 atIndex:(long long)arg2;
- (id)reuseIdentifierAtIndex:(long long)arg1;
- (_Bool)isVisibleAtIndex:(long long)arg1;
- (_Bool)isHalfScreenAtIndex:(long long)arg1;
- (double)cardSeparateAboveIndex:(long long)arg1;
- (_Bool)isFirstLineBelowHeader:(long long)arg1;
- (_Bool)isHeader:(long long)arg1;
- (double)cardSeparateHeight;
- (double)cardHeightAtIndex:(long long)arg1;
- (double)cardWidthAtIndex:(long long)arg1;
- (struct CGSize)cardSizeAtIndex:(long long)arg1;
- (struct CGSize)cardSizeForTemplateCard:(id)arg1;
- (id)factoryKeyAtIndex:(long long)arg1;
- (unsigned long long)recmdCardCount;
- (void)changeLoadMoreState:(int)arg1;
- (_Bool)isCardModelMatchedWithIndexPath:(id)arg1 deleteId:(id)arg2;
- (void)reloadCardWithIndexPath:(id)arg1 cardData:(id)arg2;
- (void)deleteItem:(id)arg1 indexPath:(id)arg2 reasonId:(id)arg3;
- (id)pageNameFromSourceChannel:(id)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)updateLoadingStateIsSucceed:(_Bool)arg1 endPage:(_Bool)arg2;
- (_Bool)containReuseIdentifier:(id)arg1;
- (id)reuseIdentifiers;
- (void)fillReuseIdentifiers;
- (void)parseRecommendResponse:(id)arg1;
- (id)providerKeyWithCardData:(id)arg1 type:(id)arg2;
- (id)typeWithCardData:(id)arg1;
- (void)configLoadMoreAction:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)actionBlockForKey:(unsigned long long)arg1;
- (void)removeActionBlockForKey:(unsigned long long)arg1;
- (void)registerActionBlock:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;
- (void)setPageName:(id)arg1;
@property(retain, nonatomic) TBRecmdConfiguration *config;
- (void)updateTemplate:(id)arg1;
- (id)initWithSourceChannel:(id)arg1;
- (void)showMaskView:(id)arg1;
- (id)init;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)prepareTableView:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

