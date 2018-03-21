//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/DeviceInfoCellDelegate-Protocol.h>
#import <QQMainProject/NIAttributedLabelDelegate-Protocol.h>
#import <QQMainProject/QQDeviceLockDevicesReqDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class CALayer, NSDictionary, NSMutableArray, NSString, ODRefreshControl, QQDeviceLockDevicesManager, QQNavigationBar, UITableView;

@interface QQDeviceLockAndSecurityViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, QQDeviceLockDevicesReqDelegate, NIAttributedLabelDelegate, DeviceInfoCellDelegate, UIActionSheetDelegate>
{
    _Bool _authorizeLoaded;
    int _authorizeRet;
    _Bool _accSecStatusLoaded;
    _Bool _authorizeLoadedByNewProtocol;
    NSString *_authorizeWording;
    unsigned long long _authorizeStatus;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    QQDeviceLockDevicesManager *_devManager;
    _Bool _listLoaded;
    NSMutableArray *_currentDevices;
    NSString *_accSecStatusWording;
    NSString *_accSecStatusUrl;
    _Bool _hasRisk;
    NSDictionary *_riskData;
    ODRefreshControl *_refreshControl;
    QQNavigationBar *_customBar;
    CALayer *_customBarLayer;
    _Bool _bAppear;
}

- (void)endRiskCheck:(id)arg1 level:(BOOL)arg2;
- (void)startRiskCheck;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (_Bool)isURL:(id)arg1;
- (void)jumpTo:(id)arg1;
- (void)onQueryRiskInfoResult:(id)arg1;
- (void)processRiskResult:(id)arg1;
- (void)goBack:(id)arg1;
- (void)initCustomNavigationBar;
- (void)onButtonClicked:(id)arg1;
- (void)showPhoneBindingView;
- (void)onRenameDeviceResult:(id)arg1;
- (void)onAccountSecurityStatusResult:(id)arg1;
- (void)notifyShowDevLockMainUI:(id)arg1;
- (void)kickOfflineButtonClickedIn:(id)arg1;
- (void)onCheckStateResult:(id)arg1;
- (void)finishQuery:(_Bool)arg1 Devices:(id)arg2;
- (void)finishDelete:(_Bool)arg1 Device:(id)arg2;
- (void)showAccountSecurityStatusWebView;
- (void)showDeviceProtectView;
- (void)SetGesturePassword;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)showHistoryDeviceList;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadData;
- (void)loadAuthorizeData;
- (void)loadListData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool authorizeLoadedByNewProtocol; // @dynamic authorizeLoadedByNewProtocol;
@property(nonatomic) unsigned long long authorizeStatus; // @dynamic authorizeStatus;
@property(retain, nonatomic) NSString *authorizeWording; // @dynamic authorizeWording;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

