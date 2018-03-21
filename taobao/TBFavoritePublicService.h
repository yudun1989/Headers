//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBFavoriteContentServiceProtocol-Protocol.h"
#import "TBFavoriteDetailedListServiceProtocol-Protocol.h"
#import "TBFavoriteGoodsServiceProtocol-Protocol.h"
#import "TBFavoriteServiceProtocol-Protocol.h"

@class NSString, TBFavContentRequestModel, TBFavService, TBFavoriteGoodRequestModel, TBFavoriteNewGoodRequestModel;

@interface TBFavoritePublicService : NSObject <TBFavoriteGoodsServiceProtocol, TBFavoriteContentServiceProtocol, TBFavoriteDetailedListServiceProtocol, TBFavoriteServiceProtocol>
{
    TBFavContentRequestModel *_contentRequet;
    TBFavoriteGoodRequestModel *_oldGoodRequestModel;
    TBFavoriteNewGoodRequestModel *_goodRequestModel;
    TBFavService *_favService;
}

+ (void)fetchConfigureInfomation:(CDUnknownBlockType)arg1 timeOutSeconds:(double)arg2;
+ (void)removeConentFavWithBizId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 contentUrl:(id)arg3 block:(CDUnknownBlockType)arg4 needShowToast:(_Bool)arg5;
+ (void)isConentFavWithBizId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 contentUrl:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)addConentFavWithBizId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 title:(id)arg3 summary:(id)arg4 imgUrl:(id)arg5 contentUrl:(id)arg6 block:(CDUnknownBlockType)arg7 needShowToast:(_Bool)arg8;
+ (void)favCacheAddFavorsFromIdArray:(id)arg1;
+ (_Bool)favCacheIsFavor:(id)arg1;
+ (void)favCacheRemoveFavor:(id)arg1;
+ (void)favCacheAddFavor:(id)arg1;
+ (void)favCacheSetFavor:(id)arg1 status:(_Bool)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) TBFavService *favService; // @synthesize favService=_favService;
@property(retain, nonatomic) TBFavoriteNewGoodRequestModel *goodRequestModel; // @synthesize goodRequestModel=_goodRequestModel;
@property(retain, nonatomic) TBFavoriteGoodRequestModel *oldGoodRequestModel; // @synthesize oldGoodRequestModel=_oldGoodRequestModel;
@property(retain, nonatomic) TBFavContentRequestModel *contentRequet; // @synthesize contentRequet=_contentRequet;
- (void).cxx_destruct;
- (void)createListScreenImageWithCategory:(id)arg1 utdid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createListWithCategory:(id)arg1 isScreenShot:(_Bool)arg2 utdid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteListWithId:(id)arg1 source:(id)arg2 utdid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchListWithId:(id)arg1 source:(id)arg2 offset:(unsigned long long)arg3 count:(unsigned long long)arg4 utdid:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchCategoryItemsWithCategory:(id)arg1 isLoadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createCategoryWithListId:(id)arg1 utdid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createCategoryWithModel:(id)arg1 itemIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyCategoryWithCategory:(id)arg1 addedItemIds:(id)arg2 deletedItemIds:(id)arg3 model:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteCategories:(id)arg1 withGoodsDelection:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCategoryList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchCategoryListWithCursor:(id)arg1 isLoadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchGoodListWithKeyword:(id)arg1 startTime:(id)arg2 count:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchSimilarItemListWithGood:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchItemsWithCategoryName:(id)arg1 source:(id)arg2 catAttrId:(id)arg3 startCursorItemId:(id)arg4 count:(long long)arg5 queryType:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)fetchPriceTrendListForGood:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addItemId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteItemIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteItemId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPropertyListBySource:(id)arg1 andCategoryName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchCategoryList:(CDUnknownBlockType)arg1;
- (void)fetchItemListWithCursorItemId:(id)arg1 queryType:(long long)arg2 frontCategoryId:(id)arg3 isBigSale:(_Bool)arg4 pageSize:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchItemListWithCursorItemId:(id)arg1 pageSize:(long long)arg2 keyword:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteFavoriteItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteFavoriteItem:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)deleteFavoriteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFavoriteItem:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)addFavoriteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showCategoryList:(id)arg1 x:(double)arg2 y:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)isFavoriteItem:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)isFavoriteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isFavContentForType:(unsigned long long)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteFavContentForType:(unsigned long long)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addFavContentForType:(unsigned long long)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchFavContentsByPageNo:(unsigned long long)arg1 size:(unsigned long long)arg2 bizID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

