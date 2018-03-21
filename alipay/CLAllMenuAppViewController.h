//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "CLDoubleMenuCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APTableView, NSArray, NSString;
@protocol CLAllMenuAppVCDelegate;

@interface CLAllMenuAppViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, CLDoubleMenuCellDelegate>
{
    NSArray *_models;
    APTableView *_tableView;
    id <CLAllMenuAppVCDelegate> _delegate;
}

@property(nonatomic) __weak id <CLAllMenuAppVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cellClicked:(id)arg1;
- (void)viewDidLoad;
- (id)initWithModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

