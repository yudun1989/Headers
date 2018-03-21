//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UITableView, UIView;

@interface LBRangerRouterListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tv;
    NSMutableArray *_abTestArray;
    NSMutableArray *_pathArray;
    NSMutableDictionary *_expidToUrlDict;
    UIView *_controlView;
    NSArray *_sortedKeys;
    NSDictionary *_routers;
    NSArray *_sortedPathKeys;
    NSDictionary *_pathRouters;
}

@property(retain, nonatomic) NSDictionary *pathRouters; // @synthesize pathRouters=_pathRouters;
@property(retain, nonatomic) NSArray *sortedPathKeys; // @synthesize sortedPathKeys=_sortedPathKeys;
@property(retain, nonatomic) NSDictionary *routers; // @synthesize routers=_routers;
@property(retain, nonatomic) NSArray *sortedKeys; // @synthesize sortedKeys=_sortedKeys;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableViewForNewRangerPath:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableViewFroNewRangerPath:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableViewNumberOfRowsInSectionForNewRangerPath:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)onFreshCallBack:(id)arg1;
- (id)dictFromMultiRouterDict:(id)arg1;
- (id)sortKeysWithArray:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)setHeadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

