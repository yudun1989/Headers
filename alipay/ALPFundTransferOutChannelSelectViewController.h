//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APFundBaseController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APWealthBaseTableView, APWealthTextFieldTitleCell, NSArray, NSString, WEALTHTransferOutChannel;
@protocol APWealthBankCardChannelSelectDelegate;

@interface ALPFundTransferOutChannelSelectViewController : APFundBaseController <UITableViewDataSource, UITableViewDelegate>
{
    APWealthBaseTableView *_tableView;
    APWealthTextFieldTitleCell *_channelCell;
    NSArray *_channelList;
    WEALTHTransferOutChannel *_selectedChannel;
    id <APWealthBankCardChannelSelectDelegate> _delegate;
}

@property(nonatomic) __weak id <APWealthBankCardChannelSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WEALTHTransferOutChannel *selectedChannel; // @synthesize selectedChannel=_selectedChannel;
@property(retain, nonatomic) NSArray *channelList; // @synthesize channelList=_channelList;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)getHeightForFooterInSection:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)createTableView;
- (void)gotoWap;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

