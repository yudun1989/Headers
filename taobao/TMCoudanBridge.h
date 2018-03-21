//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, StyleKitContext, TMCoudanBagPriceModel, TMCoudanHeaderView, UIViewController;
@protocol TMCoudanControllerProtocol;

@interface TMCoudanBridge : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _isLoadRecommend;
    TMCoudanBagPriceModel *_bagPriceModel;
    StyleKitContext *_styleKitContext;
    NSString *_sellerId;
    NSArray *_recommendItems;
    NSString *_client;
    UIViewController<TMCoudanControllerProtocol> *_targetVC;
    TMCoudanHeaderView *_headerView;
    NSString *_scm;
    NSString *_pvid;
}

@property(retain, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) TMCoudanHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UIViewController<TMCoudanControllerProtocol> *targetVC; // @synthesize targetVC=_targetVC;
@property(retain, nonatomic) NSString *client; // @synthesize client=_client;
@property(retain, nonatomic) NSArray *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(nonatomic) _Bool isLoadRecommend; // @synthesize isLoadRecommend=_isLoadRecommend;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) TMCoudanBagPriceModel *bagPriceModel; // @synthesize bagPriceModel=_bagPriceModel;
- (void).cxx_destruct;
- (id)utArgsWithItem:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerEngineCallback;
- (id)recommendParamsWithBagPriceModel:(id)arg1;
- (void)loadDataWithRecommend:(_Bool)arg1;
- (void)configCollectionView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

