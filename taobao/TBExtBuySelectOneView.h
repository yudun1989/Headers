//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyPopupBaseView.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, TBTradeSelectModel, UISearchBar, UITableView;

@interface TBExtBuySelectOneView : TBExtBuyPopupBaseView <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    _Bool _searching;
    TBTradeSelectModel *_model;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    NSArray *_dataSource;
    NSString *_selectedId;
}

@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) NSString *selectedId; // @synthesize selectedId=_selectedId;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBTradeSelectModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)notificationAccessibilityEnd;
- (void)notificationAccessibilityStart;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollToSelectedOption;
- (_Bool)showSearchBar;
- (void)bindData:(id)arg1;
- (id)desc;
- (id)title;
- (void)show;
- (void)confirmButtonClicked;
- (void)layoutSubviews;
- (id)contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

