//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IBackupExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "MMLoadSessionExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WXGChatLogSessionViewControllerDelegate-Protocol.h"

@class CTRichTextView, MMUILabel, NSString, UIButton, UIImageView, UIScrollView, UIView, WXGChatLogSessionViewController, WXGDotDotDotLabel;
@protocol WXGBackupEntryViewControllerDelegate;

@interface WXGBackupEntryViewController : MMWindowViewController <WXGChatLogSessionViewControllerDelegate, IBackupExt, MMLoadSessionExt, UIAlertViewDelegate, ILinkEventExt, WCActionSheetDelegate>
{
    UIScrollView *m_scrollView;
    UIView *m_backgroundView;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    NSString *m_lastIconName;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    MMUILabel *m_titleInGBPLable;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    UIView *m_barLine;
    MMUILabel *m_wifiTipLabel;
    CTRichTextView *m_helpTipsLabel;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    unsigned long long m_notifyCode;
    unsigned long long m_childrenCode;
    _Bool m_bBackup;
    _Bool m_bLoadDataFinish;
    _Bool m_bStartBackup;
    _Bool m_bStartRecoverTransfer;
    _Bool m_bStartRecover;
    _Bool m_bSelectAllData;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    _Bool m_bCanShowDisconnect;
    unsigned long long m_currentShowAlertViewTag;
    NSString *m_speedString;
    _Bool m_bRecoverError;
    WXGChatLogSessionViewController *m_selectSessionViewController;
    unsigned long long m_transferSpeedCount;
    _Bool m_bSelectAllTime;
    id <WXGBackupEntryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGBackupEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLoadDataFinished;
- (void)onBackupAlertCode:(unsigned long long)arg1;
- (void)onBackupTransferSpeed:(float)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)p_resetStartControlProtect;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onCancelSelectSession;
- (void)onSelectSession:(id)arg1 selectAllTime:(_Bool)arg2 selectTextOnly:(_Bool)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onContinueDelete;
- (void)onDeleteSession;
- (_Bool)p_checkSessionData;
- (_Bool)p_checkBatteryEnough;
- (void)startBackup;
- (void)onAlertShowEnergyIsNotEnough;
- (void)onAlertShowMigratedCostTime;
- (void)onAlertShowNoSession;
- (void)onAlertNowShouldRecoverData;
- (void)onCancelRecoverTransfer;
- (void)onCancelBackup;
- (void)onCancelDelete;
- (void)onCancelRecover;
- (void)onStopRecover;
- (void)onBeginRecover;
- (void)onBeginImport;
- (void)onShowSelectSessionViewController;
- (void)onBackupAllSession;
- (void)onSendCancelAndCloseView;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)addSmallTipsLabel;
- (void)addTipsLabel;
- (void)addGreyButton;
- (void)addTitleInGreenButtonPosition;
- (void)addGreenButton;
- (void)addIconImageView;
- (void)addLeftCornerButton;
- (void)setupView;
- (void)addLine;
- (void)addBlurEffectForView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

