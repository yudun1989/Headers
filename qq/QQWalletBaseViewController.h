//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQWalletBannerDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSString, QQFooterTextTableView, QQWalletHeaderView, QQWalletHeaderViewController, UIActivityIndicatorView, UIColor;

@interface QQWalletBaseViewController : QQViewController <QQWalletBannerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIColor *_barColor;
    UIColor *_curBannerColor;
    UIColor *_recordColor;
    UIActivityIndicatorView *_walletActView;
    _Bool _commonPopWndIsShowing;
    _Bool _isCheckingTenpayData;
    int _busyWorkCount;
    QQWalletHeaderView *_headerview;
    QQWalletHeaderViewController *_headerVC;
    QQFooterTextTableView *_tableView;
    NSIndexPath *_lastIndexPath;
}

@property(nonatomic) _Bool isCheckingTenpayData; // @synthesize isCheckingTenpayData=_isCheckingTenpayData;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @synthesize lastIndexPath=_lastIndexPath;
@property int busyWorkCount; // @synthesize busyWorkCount=_busyWorkCount;
@property(retain, nonatomic) QQFooterTextTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QQWalletHeaderViewController *headerVC; // @synthesize headerVC=_headerVC;
@property(nonatomic) _Bool commonPopWndIsShowing; // @synthesize commonPopWndIsShowing=_commonPopWndIsShowing;
@property(retain, nonatomic) QQWalletHeaderView *headerview; // @synthesize headerview=_headerview;
- (void).cxx_destruct;
- (void)showNavigationBarShadowImage:(_Bool)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (void)adjustNavBarColorWithBannerColor:(id)arg1;
- (void)setNavBarAndStatusBarColor:(id)arg1;
- (void)setNavigationBarBackgroundColor:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setNavigationBarTitleColor:(id)arg1;
- (void)reSetLeftButtonTitle;
- (void)resetLeftButtonWithoutTheme;
- (void)configTips:(id)arg1;
- (void)showWebUrl:(id)arg1 webTitle:(id)arg2;
- (void)showWebUrl:(id)arg1 webTitle:(id)arg2 style:(long long)arg3;
- (void)updateTableHeaderView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)checkBindCardEnvirenment;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)incraseBusyCount;
- (void)decreaseBusyCount;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)dealloc;
- (void)showError:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)createFooterTextTableViewWithStyle:(long long)arg1;
- (void)loadView;
- (void)baseinit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

