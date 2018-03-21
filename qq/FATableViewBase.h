//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class FADataSouceBase, NSString, ODRefreshControl, UITableView;
@protocol IFATableViewDelegate;

@interface FATableViewBase : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    FADataSouceBase *_dataSource;
    int _subCategory;
    id <IFATableViewDelegate> _delegate;
    _Bool _isCheckMode;
    _Bool _reloading;
    ODRefreshControl *_refreshControl;
    int _xo;
}

- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)didDeleteFileWithErrMsg:(id)arg1;
- (void)didLoadListDone:(_Bool)arg1;
- (id)createBackgroundCellWithTableView:(id)arg1 AtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doneLoadingTableViewData:(_Bool)arg1;
- (void)delayEndRefreshing:(_Bool)arg1;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)enableRefreshHeader:(_Bool)arg1 withName:(id)arg2;
@property(nonatomic) FADataSouceBase *dataSource; // @dynamic dataSource;
- (void)reloadData;
- (void)reloadTableViewDataSource;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <IFATableViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCheckMode; // @dynamic isCheckMode;
@property(nonatomic) int subCategory; // @dynamic subCategory;
@property(readonly) Class superclass;

@end

