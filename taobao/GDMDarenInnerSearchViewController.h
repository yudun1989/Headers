//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface GDMDarenInnerSearchViewController : GDMViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_contentTableView;
    NSMutableArray *_displayItemArray;
    UIButton *_lastSelectedTap;
    UIView *_tabBar;
    struct CGPoint _tabBarBkCenter;
    UIButton *_followButton;
    _Bool _isLoadingMore;
    _Bool _isLoadEnd;
    UIView *_emptyView;
    struct CGPoint _refreshPoint;
    NSString *_title;
    NSString *_tags;
    NSString *_userId;
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)itemAtIndex:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)utPageName;
- (void)viewWillLayoutSubviews;
- (void)onLoadMoreFresh;
- (void)onTopFresh;
- (id)emptyView;
- (void)onReloadErrorCallBack;
- (void)onTopFreshByPull;
- (void)configTableviewFresh;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

