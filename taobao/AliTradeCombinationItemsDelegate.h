//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliTradeSKUViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AliDetailModel, AliDetailSkuControl, AliTradeCombinationItemsBottomBar, AliTradeCombinationItemsMainView, AliTradeCombinationItemsModel, AliTradeSKUView, NSArray, NSMutableDictionary, NSString, UIImage, UITableView;

@interface AliTradeCombinationItemsDelegate : NSObject <UITableViewDelegate, UITableViewDataSource, AliTradeSKUViewDelegate>
{
    AliDetailModel *_detailModel;
    NSArray *_combinationItemsCellModels;
    AliTradeCombinationItemsModel *_combinationItemsModel;
    UITableView *_tableView;
    AliTradeCombinationItemsBottomBar *_bottomBar;
    AliTradeCombinationItemsMainView *_mainView;
    UIImage *_placeHolder;
    double _quantity;
    NSMutableDictionary *_limitDic;
    AliTradeSKUView *_tradeSKUView;
    AliDetailSkuControl *_skuControl;
    NSString *_realSKUId;
    double _stepperOffset;
}

@property(nonatomic) double stepperOffset; // @synthesize stepperOffset=_stepperOffset;
@property(copy, nonatomic) NSString *realSKUId; // @synthesize realSKUId=_realSKUId;
@property(retain, nonatomic) AliDetailSkuControl *skuControl; // @synthesize skuControl=_skuControl;
@property(retain, nonatomic) AliTradeSKUView *tradeSKUView; // @synthesize tradeSKUView=_tradeSKUView;
@property(retain, nonatomic) NSMutableDictionary *limitDic; // @synthesize limitDic=_limitDic;
@property(nonatomic) double quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) UIImage *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) __weak AliTradeCombinationItemsMainView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak AliTradeCombinationItemsBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AliTradeCombinationItemsModel *combinationItemsModel; // @synthesize combinationItemsModel=_combinationItemsModel;
@property(retain, nonatomic) NSArray *combinationItemsCellModels; // @synthesize combinationItemsCellModels=_combinationItemsCellModels;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)clearAllData;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setQuantityNumber:(double)arg1;
- (void)addCartFailed:(id)arg1;
- (void)registCartEngine;
- (void)utFromToRelation;
- (void)ensureLoginedWithHandler:(CDUnknownBlockType)arg1;
- (void)tradeSkuAddCartButtonClicked:(id)arg1;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)dismissItemSKU;
- (void)presentSKUControl:(id)arg1 cellModel:(id)arg2;
- (void)openUrlWith:(id)arg1;
- (id)insertAreaInfo:(id)arg1;
- (void)updateSKUCellString:(id)arg1;
- (_Bool)isAllSKUSelected;
- (_Bool)applySKUSelected;
- (void)updatePrice;
- (void)updateStepperLimit;
- (void)updateInfo;
- (void)addCart;
- (void)gotoBuy;
- (id)getSKUIdFrom:(id)arg1 itemId:(id)arg2;
- (void)setAvailableItemSKU:(id)arg1;
- (void)checkAndSetAvailableItemSKU:(id)arg1;
- (id)getItemSelectSKUIDs:(id)arg1;
- (void)resetAllSKUItem;
- (id)getAvailableItemSKUs;
- (void)setAllSingleItemsSKU:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

