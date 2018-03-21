//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "IChatMigrationServerExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface WXGMigrationServerViewController : MMUIViewController <IChatMigrationServerExt, UIAlertViewDelegate, CNetworkStatusExt>
{
    UIImageView *m_qrCodeImageView;
    UILabel *m_qrCodeTipLabel;
    UIActivityIndicatorView *m_qrCodeLoadingView;
    int m_retryGetQRCodeTimes;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onGetQRCodeImg:(id)arg1;
- (void)p_setQRCodeTipLabelWithText:(id)arg1;
- (void)p_makeQRCodeImageFailureFinishState;
- (void)p_makeQRCodeImageFinishState:(id)arg1 withText:(id)arg2;
- (void)p_makeQRCodeLoadingState;
- (void)onPressLeftNavigationButton;
- (void)p_popNavigationController;
- (void)popToSettingViewController;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

