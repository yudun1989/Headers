//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSearchBaseViewController.h>

#import <QQMainProject/DiscussGroupListViewDelegate-Protocol.h>
#import <QQMainProject/IDiscussGroupListView-Protocol.h>
#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQSearchResultClickResponding-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class DiscussGroupListViewNew, NSMutableArray, NSString, NSTimer, NobodyView, ODRefreshControl, UIActivityIndicatorView;

@interface DiscussGroupListViewController : QQSearchBaseViewController <QQSearchResultClickResponding, UITableViewDataSource, UITableViewDelegate, MulMemSelBusiProcessDelegate, IDiscussGroupListView, DiscussGroupListViewDelegate>
{
    DiscussGroupListViewNew *_tableView;
    NSMutableArray *_tableData;
    NobodyView *_nobodyView;
    UIActivityIndicatorView *_activityView;
    ODRefreshControl *_refreshControl;
    NSTimer *_refreshListTimer;
    _Bool _notifyLoad;
}

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onResultCellClick:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)discussGroupListViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)discussGroupListViewDidScroll:(id)arg1;
- (void)refreshDiscussListFail;
- (void)refreshDiscussList;
- (void)refreshDiscussInfo:(long long)arg1;
- (void)delayEndRefreshing:(_Bool)arg1;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)refreshListTimeout;
- (void)refreshFail;
- (void)refreshSuccess;
- (void)initDisCussChatViewController:(id)arg1;
- (void)popToRootView:(id)arg1;
- (void)updateDiscussGroupList;
- (void)iconTouch:(id)arg1;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)addDiscussGroup;
- (void)reload;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)layoutViewsIfNeeds:(id)arg1;
- (_Bool)isSupportFullScreenLayout;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

