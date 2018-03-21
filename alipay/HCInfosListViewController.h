//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CLoadMoreView, NSMutableArray, NSString, UITableView, UIView;
@protocol HCInfosListViewControllerDelegate;

@interface HCInfosListViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _loadingMore;
    _Bool _hasMore;
    _Bool _didLoad;
    id <HCInfosListViewControllerDelegate> _delegate;
    NSString *_navigationTitle;
    NSString *_sourceType;
    UITableView *_tableView;
    CLoadMoreView *_loadMoreView;
    UIView *_separatorLineFooter;
    NSMutableArray *_userInfos;
}

@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(nonatomic) _Bool didLoad; // @synthesize didLoad=_didLoad;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool loadingMore; // @synthesize loadingMore=_loadingMore;
@property(retain, nonatomic) UIView *separatorLineFooter; // @synthesize separatorLineFooter=_separatorLineFooter;
@property(retain, nonatomic) CLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) __weak id <HCInfosListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refresh;
- (void)resumeWithOptions:(id)arg1;
- (void)setUserInfosData:(id)arg1;
- (id)initWithUserInfos:(id)arg1;
- (void)firstLoadData;
- (void)requestInfosWithLastInfo:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)checkLoadMore;
- (void)refreshTableViewWithData:(id)arg1 cumulative:(_Bool)arg2;
- (void)setupLoadMoreView;
- (void)setupOriginalData;
- (void)commonInitialization;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

