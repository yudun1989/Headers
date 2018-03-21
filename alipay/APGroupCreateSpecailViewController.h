//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APGroupAppStageViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APGroupSectionHeaderView, APTableView, NSString;

@interface APGroupCreateSpecailViewController : APGroupAppStageViewController <UITableViewDataSource, UITableViewDelegate>
{
    APTableView *_tableView;
    APGroupSectionHeaderView *_normalHeaderView;
    APGroupSectionHeaderView *_specialHeaderView;
}

@property(retain, nonatomic) APGroupSectionHeaderView *specialHeaderView; // @synthesize specialHeaderView=_specialHeaderView;
@property(retain, nonatomic) APGroupSectionHeaderView *normalHeaderView; // @synthesize normalHeaderView=_normalHeaderView;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshGroupApps;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

