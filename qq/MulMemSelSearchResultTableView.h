//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UILabel, UITableView;
@protocol DiscussListViewDelegate, MulMemSelSearchResultTableViewDelegate, TroopListViewDelegate;

@interface MulMemSelSearchResultTableView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UILabel *_nonResultLabel;
    _Bool _isFromBatchAddFriend;
    NSMutableArray *_searchResultDataList;
    id <MulMemSelSearchResultTableViewDelegate> _mulMemSelSearchResultTableViewDelegate;
    id <DiscussListViewDelegate> _listViewDisGroupDelegate;
    id <TroopListViewDelegate> _listViewTroopDelegate;
}

@property(nonatomic) _Bool isFromBatchAddFriend; // @synthesize isFromBatchAddFriend=_isFromBatchAddFriend;
@property(nonatomic) __weak id <TroopListViewDelegate> listViewTroopDelegate; // @synthesize listViewTroopDelegate=_listViewTroopDelegate;
@property(nonatomic) __weak id <DiscussListViewDelegate> listViewDisGroupDelegate; // @synthesize listViewDisGroupDelegate=_listViewDisGroupDelegate;
@property(nonatomic) __weak id <MulMemSelSearchResultTableViewDelegate> mulMemSelSearchResultTableViewDelegate; // @synthesize mulMemSelSearchResultTableViewDelegate=_mulMemSelSearchResultTableViewDelegate;
@property(retain, nonatomic) NSMutableArray *searchResultDataList; // @synthesize searchResultDataList=_searchResultDataList;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getSearchResultInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showNoResultTips:(_Bool)arg1;
- (void)setTableViewInsets:(struct UIEdgeInsets)arg1;
- (void)refreshSearchResultTableView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

