//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBaseContainerView.h"

@class AliDetailModel, AliTradeCombinationItemsBottomBar, AliTradeCombinationItemsDelegate, AliTradeCombinationItemsModel, AliTradeCombinationItemsService, UIActivityIndicatorView, UITableView, UIViewController;

@interface AliTradeCombinationItemsMainView : AliDetailBaseContainerView
{
    UIViewController *_containerVC;
    UITableView *_contentView;
    AliTradeCombinationItemsDelegate *_delegate;
    AliTradeCombinationItemsBottomBar *_bottomBar;
    AliTradeCombinationItemsModel *_combinationItemsModel;
    AliTradeCombinationItemsService *_service;
    UIActivityIndicatorView *_loadingIndicator;
    AliDetailModel *_detailModel;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) AliTradeCombinationItemsService *service; // @synthesize service=_service;
@property(retain, nonatomic) AliTradeCombinationItemsModel *combinationItemsModel; // @synthesize combinationItemsModel=_combinationItemsModel;
@property(retain, nonatomic) AliTradeCombinationItemsBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) AliTradeCombinationItemsDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIViewController *containerVC; // @synthesize containerVC=_containerVC;
- (void).cxx_destruct;
- (void)createCellModels;
- (void)layoutSubviews;
- (void)hideLoading;
- (void)showLoading;
- (void)clearAllData;
- (void)showNASKU;
- (void)showCombinationItemsView:(id)arg1 type:(unsigned long long)arg2 placeHolder:(id)arg3;
- (void)viewWillDisapper;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

