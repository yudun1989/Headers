//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSearchableTableViewController.h"

#import "UITableViewDelegate-Protocol.h"

@class NSString;
@protocol KSSearchDataSource;

@interface KSFollowSearchableViewController : KSSearchableTableViewController <UITableViewDelegate>
{
    _Bool _shouldNotReloadDataWhenAppear;
    id <KSSearchDataSource> _dataSource;
}

@property(nonatomic) _Bool shouldNotReloadDataWhenAppear; // @synthesize shouldNotReloadDataWhenAppear=_shouldNotReloadDataWhenAppear;
@property(nonatomic) __weak id <KSSearchDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)didDragToRefresh:(id)arg1;
- (void)didEndRefresh;
- (void)didTapRefresh;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didTapRefreshWithloadingErrorView:(id)arg1;
- (id)createModel;
- (void)reloadDataAndShowLoading:(_Bool)arg1 showErrorAtTop:(_Bool)arg2 ignoreCache:(_Bool)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

