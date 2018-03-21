//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AliCartActivityView, NSMutableArray, NSString, StyleKitContext, TBCartQueryCouponItem, TBCartShopComponent, UIButton, UILabel, UITableView;
@protocol AliCartBizProtocol;

@interface AliCartTicket : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_table;
    UILabel *_title;
    NSMutableArray *_dataSource;
    TBCartShopComponent *_shop;
    id <AliCartBizProtocol> _sourceTarget;
    AliCartActivityView *_dataLoadingView;
    UIView *_contentView;
    UIButton *_closeBtn;
    StyleKitContext *_styleKitContext;
    TBCartQueryCouponItem *_currentApplyBonus;
}

@property(nonatomic) __weak TBCartQueryCouponItem *currentApplyBonus; // @synthesize currentApplyBonus=_currentApplyBonus;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AliCartActivityView *dataLoadingView; // @synthesize dataLoadingView=_dataLoadingView;
@property(nonatomic) __weak id <AliCartBizProtocol> sourceTarget; // @synthesize sourceTarget=_sourceTarget;
@property(retain, nonatomic) TBCartShopComponent *shop; // @synthesize shop=_shop;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (void)hideBigLoadingView;
- (void)delayShowLoading;
- (void)showBigLoadingView:(id)arg1 delay:(double)arg2;
- (void)registerCartEngine;
- (double)containViewHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)closePromotionWithAnimation;
- (void)showWithAnimation;
- (void)setupWithData:(id)arg1 andShop:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

