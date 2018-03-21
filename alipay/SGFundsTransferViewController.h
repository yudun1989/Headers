//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGFundsBaseViewController.h"

#import "AUDialogDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APContactInfo, APTableView, NSArray, NSString, SGFundsManageViewController;

@interface SGFundsTransferViewController : SGFundsBaseViewController <UITableViewDataSource, UITableViewDelegate, AUDialogDelegate>
{
    SGFundsManageViewController *_manageViewController;
    APTableView *_tableView;
    NSArray *_dataArray;
    APContactInfo *_selectedInfo;
    NSString *_groupId;
}

@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) APContactInfo *selectedInfo; // @synthesize selectedInfo=_selectedInfo;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SGFundsManageViewController *manageViewController; // @synthesize manageViewController=_manageViewController;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_submitTransferGroupOwner;
- (void)nextButtonClicked:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)contactNameWithInfo:(id)arg1;
- (void)_setupUI;
- (void)_prepareContactData;
- (id)initWithGroupId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

