//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSTimer, TXDAlipayAccountDataController, TXDBarCodeDataController, TXDPayCodeBottomBar, TXDPayCodeUserViewModel, TXDPayDataController, UITableView;

@interface TXDPayCodeViewController : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _barcodeFetched;
    _Bool _fromTxd;
    _Bool _locationUpdating;
    double _brightness;
    UITableView *_tableView;
    TXDPayCodeBottomBar *_bottomBar;
    TXDAlipayAccountDataController *_alipayAccountFetch;
    TXDBarCodeDataController *_barCodeFetch;
    TXDPayCodeUserViewModel *_userViewModel;
    TXDPayDataController *_payStatusFetch;
    NSTimer *_timeOut;
    NSString *_shopId;
    double _latitude;
    double _longitude;
}

@property(nonatomic) _Bool locationUpdating; // @synthesize locationUpdating=_locationUpdating;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(nonatomic) _Bool fromTxd; // @synthesize fromTxd=_fromTxd;
@property(retain, nonatomic) NSTimer *timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) _Bool barcodeFetched; // @synthesize barcodeFetched=_barcodeFetched;
@property(retain, nonatomic) TXDPayDataController *payStatusFetch; // @synthesize payStatusFetch=_payStatusFetch;
@property(retain, nonatomic) TXDPayCodeUserViewModel *userViewModel; // @synthesize userViewModel=_userViewModel;
@property(retain, nonatomic) TXDBarCodeDataController *barCodeFetch; // @synthesize barCodeFetch=_barCodeFetch;
@property(retain, nonatomic) TXDAlipayAccountDataController *alipayAccountFetch; // @synthesize alipayAccountFetch=_alipayAccountFetch;
@property(retain, nonatomic) TXDPayCodeBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleError:(id)arg1;
- (void)fetchPay;
- (void)fetchBarCode;
- (void)doFetchUserData;
- (void)fetchUserData;
- (void)fetchAlipayAccount;
- (void)refreshBarcode;
- (void)resume;
- (void)pause;
- (void)quit;
- (void)resetPageTime;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)fetchData;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)memberRecognized;
- (void)appEnterForeground;
- (void)appEnterBackground;
- (void)viewDidAppear:(_Bool)arg1;
- (void)popup:(id)arg1;
- (void)observeUserBindAccs;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

