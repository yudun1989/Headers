//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBViewController.h"

#import "SafePayDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APAlertView, APTableView, DTRpcAsyncCaller, NSMutableArray, NSString;

@interface MBGoodsConfirmViewController : MBViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, SafePayDelegate>
{
    APTableView *_tableView;
    DTRpcAsyncCaller *_rpcAsyncCaller;
    NSMutableArray *_goodsInfoItems;
    APAlertView *_alertView;
}

@property(nonatomic) __weak APAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSMutableArray *goodsInfoItems; // @synthesize goodsInfoItems=_goodsInfoItems;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcAsyncCaller; // @synthesize rpcAsyncCaller=_rpcAsyncCaller;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)safepayDidFinishWithResult:(struct MQPResult *)arg1;
- (void)payGoods;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)payAction:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshGoodsPrice;
- (void)prepareGoodsInfo;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

