//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPACardViewController.h>

#import <QQMainProject/ARQRManagerDelegate-Protocol.h>
#import <QQMainProject/QQPubImageDelegate-Protocol.h>
#import <QQMainProject/QQPublicAccountHeaderViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UserSummaryTouchControlDelegate-Protocol.h>

@class NSArray, NSString, QQPublicAccountHeaderView, QQPublicAccountPicWallView, UITableView, UserSummaryTouchControl;

@interface QQPublicAccountViewController : QQPACardViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UserSummaryTouchControlDelegate, QQPublicAccountHeaderViewDelegate, QQPubImageDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ARQRManagerDelegate>
{
    QQPublicAccountHeaderView *_headerView;
    QQPublicAccountPicWallView *_wallView;
    UITableView *_tableView;
    UserSummaryTouchControl *_operationView;
    double _clickFollowTime;
    double _clickUnFollowTime;
    NSString *_bussinessWpaSigT;
    _Bool _haveShowAppear;
    _Bool haveSetHeader;
    double _visibleHeadHeight;
    double _contentHeight;
    _Bool _shouldChangeContentSize;
    unsigned long long _account_type;
    long long _certifiedGrade;
    NSString *_displayNumber;
    NSArray *_configGroupInfo;
    NSArray *_picConfigInfo;
    NSString *_summary;
    NSString *_certificateString;
    NSString *_bgColorString;
    NSString *_bgImageUrl;
    NSString *_unifiedDescrption;
    NSString *_certificateEnterprise;
    NSString *_certificateWeixin;
    double _timeEnterView;
}

+ (void)getQQBussinessChatSettingViewController:(id)arg1 bussinessWpaSigT:(id)arg2;
@property(nonatomic) double timeEnterView; // @synthesize timeEnterView=_timeEnterView;
@property(retain, nonatomic) NSString *certificateWeixin; // @synthesize certificateWeixin=_certificateWeixin;
@property(retain, nonatomic) NSString *certificateEnterprise; // @synthesize certificateEnterprise=_certificateEnterprise;
@property(retain, nonatomic) NSString *unifiedDescrption; // @synthesize unifiedDescrption=_unifiedDescrption;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(retain, nonatomic) NSString *bgColorString; // @synthesize bgColorString=_bgColorString;
@property(retain, nonatomic) NSString *certificateString; // @synthesize certificateString=_certificateString;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain) NSArray *picConfigInfo; // @synthesize picConfigInfo=_picConfigInfo;
@property(retain) NSArray *configGroupInfo; // @synthesize configGroupInfo=_configGroupInfo;
@property(retain, nonatomic) NSString *displayNumber; // @synthesize displayNumber=_displayNumber;
@property(nonatomic) long long certifiedGrade; // @synthesize certifiedGrade=_certifiedGrade;
@property(nonatomic) unsigned long long account_type; // @synthesize account_type=_account_type;
- (void)openAIO;
- (void)shareBtnClicked;
- (void)CloseViewController;
- (void)onFollowButtonTouched:(id)arg1;
- (void)onRTVoiceCallTouched:(id)arg1;
- (void)onSendMsgTouched:(id)arg1;
- (void)imageTouch:(id)arg1;
- (id)tableView:(id)arg1 cellForIAImageWebView:(id)arg2;
- (id)tableView:(id)arg1 cellForStateChange:(id)arg2;
- (id)tableView:(id)arg1 cellForNomal:(id)arg2;
- (id)getDefaultStyleForCellWithIdentifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)updateData;
- (_Bool)loadData;
- (void)reSetLeftButtonTitle;
- (id)getTableHeaderView:(id)arg1;
- (id)getTableFooterView:(id)arg1;
- (double)getRowsHeightInTable;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addIphoneXBottom;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (id)initWithCardModel:(id)arg1;
- (id)initWithQQBussinessUin:(unsigned long long)arg1 bussinessWpaSigT:(id)arg2;
- (id)initWithPublicAccountUin:(unsigned long long)arg1;
- (id)initWithPublicAccountUinAndType:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)init:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

