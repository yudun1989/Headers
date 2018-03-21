//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UILabel;
@protocol WCPayT2BCHistoryViewControllerDelegate;

@interface WCPayT2BCHistoryViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _bIsLoadingMorePrevious;
    _Bool _bIsLoadMoreDataEnd;
    unsigned int _uiOffset;
    NSMutableDictionary *m_dicRecordsByTitle;
    NSMutableDictionary *m_dicSectionTitle;
    id <WCPayT2BCHistoryViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_historyList;
    UILabel *_emptyTipsLabel;
}

@property(nonatomic) unsigned int uiOffset; // @synthesize uiOffset=_uiOffset;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(nonatomic) _Bool bIsLoadMoreDataEnd; // @synthesize bIsLoadMoreDataEnd=_bIsLoadMoreDataEnd;
@property(nonatomic) _Bool bIsLoadingMorePrevious; // @synthesize bIsLoadingMorePrevious=_bIsLoadingMorePrevious;
@property(retain, nonatomic) NSMutableArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayT2BCHistoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dicSectionTitle; // @synthesize m_dicSectionTitle;
@property(retain, nonatomic) NSMutableDictionary *m_dicRecordsByTitle; // @synthesize m_dicRecordsByTitle;
- (void).cxx_destruct;
- (void)clickLoadMore;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutCell:(id)arg1 item:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)confirmDeleteHistoryItem:(id)arg1;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupEmptyTipsView;
- (void)rebuildHistoryData;
- (void)refreshControllerWithLoadMorePreviousRecordHistoryList:(id)arg1 isDataLoadEnd:(_Bool)arg2;
- (void)refreshControllerWithLoadDataFail;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewControllerBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

