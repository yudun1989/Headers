//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ArticleBaseListView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ExploreSubscribeDataListManager, ExploreSubscribeListEmptyView, NSMutableDictionary, NSString, TTViewWrapper, UITableView;

@interface ExploreSubscribeListView : ArticleBaseListView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _accountChangedNeedReadloadList;
    long long _needClearBadgeDataIndex;
    UITableView *_listTableView;
    TTViewWrapper *_wrapperView;
    ExploreSubscribeListEmptyView *_listEmptyView;
    ExploreSubscribeDataListManager *_dataListManager;
    NSMutableDictionary *_cellIsDisplayedDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *cellIsDisplayedDictionary; // @synthesize cellIsDisplayedDictionary=_cellIsDisplayedDictionary;
@property(retain, nonatomic) ExploreSubscribeDataListManager *dataListManager; // @synthesize dataListManager=_dataListManager;
@property(retain, nonatomic) ExploreSubscribeListEmptyView *listEmptyView; // @synthesize listEmptyView=_listEmptyView;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
- (void).cxx_destruct;
- (void)willDisappear;
- (void)willAppear;
- (void)didDisappear;
- (void)themeChanged:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tryAutoReloadIfNeed;
- (void)listViewWillEnterForground;
- (void)scrollToTopEnable:(_Bool)arg1;
- (void)pullAndRefresh;
- (void)hiddeEmptyView;
- (void)showEmptyView;
- (struct CGRect)frameForEmptyView;
- (void)layoutSubviews;
- (void)reloadListView;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)receiveDataFetchFinishedNotification:(id)arg1;
- (void)receiveCoreDataCacheClearedNotification:(id)arg1;
- (void)fontChanged:(id)arg1;
- (void)refreshListViewForCategory:(id)arg1 isDisplayView:(_Bool)arg2 fromLocal:(_Bool)arg3 fromRemote:(_Bool)arg4 reloadFromType:(int)arg5;
- (void)receiveSubscribeOrUnsubscribeNotification:(id)arg1;
- (void)registNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (_Bool)isEmpty;
- (id)initWithFrame:(struct CGRect)arg1 topInset:(double)arg2 bottomInset:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

