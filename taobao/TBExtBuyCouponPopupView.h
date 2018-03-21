//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyPopupBaseView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TBTradeCouponModel, UITableView;

@interface TBExtBuyCouponPopupView : TBExtBuyPopupBaseView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    TBTradeCouponModel *_couponModel;
}

@property(nonatomic) __weak TBTradeCouponModel *couponModel; // @synthesize couponModel=_couponModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)needCancelButton;
- (id)title;
- (void)dealloc;
- (void)bindData:(id)arg1;
- (id)contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

