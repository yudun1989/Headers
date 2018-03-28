//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSVDataFetchManager.h"

#import "TSVShortVideoDataFetchManagerProtocol-Protocol.h"

@class ExploreFetchListManager, NSArray, NSString, RACSignal;

@interface TSVShortVideoCategoryFetchManager : TSVDataFetchManager <TSVShortVideoDataFetchManagerProtocol>
{
    _Bool _cardItemsHasMoreToLoad;
    _Bool _hasFetchDataSucceed;
    int _refreshFromType;
    CDUnknownBlockType _dataDidChangeBlock;
    NSString *_cardID;
    CDUnknownBlockType _cardItemsShouldLoadMore;
    ExploreFetchListManager *_fetchListManager;
    long long _offsetIndex;
    NSArray *_orderedDataArray;
    long long _preFetchType;
    NSArray *_cardItems;
}

@property(nonatomic) _Bool hasFetchDataSucceed; // @synthesize hasFetchDataSucceed=_hasFetchDataSucceed;
@property(copy, nonatomic) NSArray *cardItems; // @synthesize cardItems=_cardItems;
@property(nonatomic) long long preFetchType; // @synthesize preFetchType=_preFetchType;
@property(nonatomic) int refreshFromType; // @synthesize refreshFromType=_refreshFromType;
@property(copy, nonatomic) NSArray *orderedDataArray; // @synthesize orderedDataArray=_orderedDataArray;
@property(nonatomic) long long offsetIndex; // @synthesize offsetIndex=_offsetIndex;
@property(retain, nonatomic) ExploreFetchListManager *fetchListManager; // @synthesize fetchListManager=_fetchListManager;
@property(copy, nonatomic) CDUnknownBlockType cardItemsShouldLoadMore; // @synthesize cardItemsShouldLoadMore=_cardItemsShouldLoadMore;
@property(nonatomic) _Bool cardItemsHasMoreToLoad; // @synthesize cardItemsHasMoreToLoad=_cardItemsHasMoreToLoad;
@property(copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(copy, nonatomic) CDUnknownBlockType dataDidChangeBlock; // @synthesize dataDidChangeBlock=_dataDidChangeBlock;
- (void).cxx_destruct;
@property(nonatomic) long long currentIndex;
- (_Bool)shouldShowLoadingCell;
- (id)allItems;
- (id)horizontalCardItems;
- (id)filterAd:(id)arg1 scene:(unsigned long long)arg2;
- (void)insertCardItemsIfNeeded:(id)arg1;
- (void)refreshStatusForError;
@property(readonly, nonatomic) unsigned long long entrance;
- (void)requestDataAutomatically:(_Bool)arg1 refreshTyppe:(int)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)requestDataAutomatically:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)orderedDataAtIndex:(long long)arg1;
- (id)itemAtIndex:(long long)arg1 replaced:(_Bool)arg2;
- (id)itemAtIndex:(long long)arg1;
- (unsigned long long)numberOfShortVideoItems;
- (id)initWithOrderedDataArray:(id)arg1 cardID:(id)arg2 preFetchType:(long long)arg3;
- (id)initWithOrderedDataArray:(id)arg1 cardID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id detailCellCurrentItem;
@property(nonatomic) _Bool hasMoreToLoad;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isLoadingRequest;
@property(nonatomic) long long listCellCurrentIndex;
@property(nonatomic) _Bool needReloadData;
@property(nonatomic) _Bool refreshingWhenFullScreenPlayInTab;
@property(nonatomic) _Bool shouldShowNoMoreVideoToast;
@property(retain, nonatomic) RACSignal *showToastSignal;
@property(readonly) Class superclass;

@end

