//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EWBaseSectionDelegate.h"

@class EWDrawerView, EWMainPageSectionHeaderView, EWMapAndListViewModel, EWMerchantsEntranceView;

@interface EWMapAndListDelegate : EWBaseSectionDelegate
{
    int _dragState;
    EWDrawerView *_drawerView;
    EWMerchantsEntranceView *_merchantsEntranceView;
    EWMainPageSectionHeaderView *_headerView;
}

@property(retain, nonatomic) EWMainPageSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) EWMerchantsEntranceView *merchantsEntranceView; // @synthesize merchantsEntranceView=_merchantsEntranceView;
@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
@property(nonatomic) __weak EWDrawerView *drawerView; // @synthesize drawerView=_drawerView;
- (void).cxx_destruct;
- (_Bool)hasData;
- (_Bool)hasMerchant;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

// Remaining properties
@property(retain, nonatomic) EWMapAndListViewModel *viewModel;

@end

