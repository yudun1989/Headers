//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseThemedViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SSThemedTableView;

@interface TTBaseTableViewController : TTBaseThemedViewController <UITableViewDelegate, UITableViewDataSource>
{
    SSThemedTableView *_tableView;
}

+ (double)insetRightOfSeparator;
+ (double)insetLeftOfSeparator;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)tableViewSeparatorStyle;
- (long long)tableViewStyle;
- (struct UIEdgeInsets)tableViewOriginalContentInset;
- (void)reload;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)themeChanged:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRouteParamObj:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

