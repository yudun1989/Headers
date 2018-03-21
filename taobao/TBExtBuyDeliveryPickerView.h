//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyPopupBaseView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TBTradeDeliveryMethodModel, UITableView;

@interface TBExtBuyDeliveryPickerView : TBExtBuyPopupBaseView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSString *_selectedId;
    TBTradeDeliveryMethodModel *_model;
}

@property(nonatomic) __weak TBTradeDeliveryMethodModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *selectedId; // @synthesize selectedId=_selectedId;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)notificationAccessibilityEnd;
- (void)notificationAccessibilityStart;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)title;
- (void)confirmButtonClicked;
- (id)contentView;
- (void)bindData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

