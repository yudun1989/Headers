//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSStoreManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CAGradientLayer, HTSHonorView, HTSStoreManager, MBProgressHUD, NSNumber, NSString, UIImageView, UILabel, UITableView, UIView;

@interface UIChargeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, HTSStoreManagerDelegate>
{
    _Bool _busy;
    UILabel *_accoutValue;
    UIImageView *_diamondImage;
    UITableView *_giftTableView;
    UIView *_indicatorView;
    UIView *_buyTipView;
    NSNumber *_hotsoonID;
    CAGradientLayer *_accountViewGradientLayer;
    UIView *_headerTopView;
    HTSHonorView *_headerBottomView;
    HTSStoreManager *_storeManager;
    MBProgressHUD *_hud;
}

@property(nonatomic) __weak MBProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic, getter=isBusy) _Bool busy; // @synthesize busy=_busy;
@property(retain, nonatomic) HTSStoreManager *storeManager; // @synthesize storeManager=_storeManager;
@property(retain, nonatomic) HTSHonorView *headerBottomView; // @synthesize headerBottomView=_headerBottomView;
@property(retain, nonatomic) UIView *headerTopView; // @synthesize headerTopView=_headerTopView;
@property(retain, nonatomic) CAGradientLayer *accountViewGradientLayer; // @synthesize accountViewGradientLayer=_accountViewGradientLayer;
@property(retain, nonatomic) NSNumber *hotsoonID; // @synthesize hotsoonID=_hotsoonID;
@property(retain, nonatomic) UIView *buyTipView; // @synthesize buyTipView=_buyTipView;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UITableView *giftTableView; // @synthesize giftTableView=_giftTableView;
@property(retain, nonatomic) UIImageView *diamondImage; // @synthesize diamondImage=_diamondImage;
@property(retain, nonatomic) UILabel *accoutValue; // @synthesize accoutValue=_accoutValue;
- (void).cxx_destruct;
- (void)storeManager:(id)arg1 product:(id)arg2 didAddPaymentCompletedWithError:(id)arg3 transaction:(id)arg4;
- (void)storeManager:(id)arg1 product:(id)arg2 didRequestProductsCompletedWithError:(id)arg3 successProducts:(id)arg4 invalidProductIdentifiers:(id)arg5;
- (void)storeManager:(id)arg1 product:(id)arg2 didCompletedWithError:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pr_updateCharge;
- (void)pr_enterHonorDetail:(id)arg1;
- (void)handleNaviRightButtonClick:(id)arg1;
- (void)chargeHistoryButtonTouchUpInside:(id)arg1;
- (void)backButtonTouchUpInside:(id)arg1;
- (id)headerViewForTableView:(id)arg1;
- (id)fakeNavigationBar;
- (_Bool)isInSlideContainer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initFromWebView:(id)arg1;
- (id)initFromPushService:(id)arg1;
- (id)init;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

