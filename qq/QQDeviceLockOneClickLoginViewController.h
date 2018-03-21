//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TXQRBaseViewController.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class MBProgressHUD, NSString, QQDeviceLockLoginVerifySchemeParser, UIButton, UILabel, UIView;

@interface QQDeviceLockOneClickLoginViewController : TXQRBaseViewController <UIAlertViewDelegate>
{
    MBProgressHUD *hud;
    UIView *_ctrlView;
    UILabel *_nicknameLabel;
    UILabel *_textLabel;
    UILabel *_subTextLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    _Bool _userChooseTmpAuth;
    NSString *_sigUrl;
    QQDeviceLockLoginVerifySchemeParser *_scheme;
}

@property(retain, nonatomic) QQDeviceLockLoginVerifySchemeParser *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *sigUrl; // @synthesize sigUrl=_sigUrl;
- (void)dismiss;
- (void)onLoginButtonTap:(id)arg1;
- (void)confirmSig;
- (void)qrCodeFailed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeConfirm_failed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeConfirm_succ:(unsigned int)arg1 withAppName:(id)arg2;
- (void)qrCodeVerify_failed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeVerify_succ:(unsigned int)arg1 withAppName:(id)arg2;
- (void)hideHUD;
- (void)showWaitHUD;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showLoginFailView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)layoutTextAndButtonsBeginAtY:(double)arg1;
- (void)loadView;
- (void)dealloc;
- (void)updateWithSigUrl:(id)arg1 andScheme:(id)arg2;
- (id)initWithSigUrl:(id)arg1 andScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

