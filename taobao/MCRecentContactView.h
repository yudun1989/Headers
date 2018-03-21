//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MCRecentContactPlaceholderView, NSString, UITableView;
@protocol MCRecentContactViewDelegate;

@interface MCRecentContactView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_recentContactTableView;
    MCRecentContactPlaceholderView *_placeholderView;
    id <MCRecentContactViewDelegate> _delegate;
    double _initialOffsetY;
}

@property(nonatomic) double initialOffsetY; // @synthesize initialOffsetY=_initialOffsetY;
@property(nonatomic) __weak id <MCRecentContactViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MCRecentContactPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UITableView *recentContactTableView; // @synthesize recentContactTableView=_recentContactTableView;
- (void).cxx_destruct;
- (void)stopPullToRefreshView;
- (void)reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

