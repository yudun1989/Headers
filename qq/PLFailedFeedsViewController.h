//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/PLLoadStatusDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, PLLoadStatusView, UITableView;

@interface PLFailedFeedsViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, PLLoadStatusDelegate>
{
    NSMutableArray *_failedArry;
    UITableView *_tableView;
    PLLoadStatusView *_loadStatusView;
}

@property(retain, nonatomic) PLLoadStatusView *loadStatusView; // @synthesize loadStatusView=_loadStatusView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)onRetryBtClicked:(id)arg1 Cell:(id)arg2;
- (void)onDeleteBtClicked:(id)arg1 Cell:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onShortVideoDeliverFailedNotification:(id)arg1;
- (void)refreshData;
- (void)reloadFailedData;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

