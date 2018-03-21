//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/AccountEditCellPWDelegate-Protocol.h>
#import <QQMainProject/AcountEditCellIDDelegate-Protocol.h>
#import <QQMainProject/IQSRegEngineObserver-Protocol.h>
#import <QQMainProject/QQSmsLoginFillVerifyViewDelegate-Protocol.h>
#import <QQMainProject/QQSmsLoginSetPhoneViewDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class AcountEditCellID, AcountEditCellPW, NSString, QQSmsLoginFillVerifyViewController, QQSmsLoginSetPhoneViewController, UIButton;
@protocol QQLoginViewDelegate;

@interface QQSetAccountViewController : QQViewController <AcountEditCellIDDelegate, AccountEditCellPWDelegate, UIActionSheetDelegate, QQSmsLoginSetPhoneViewDelegate, QQSmsLoginFillVerifyViewDelegate, IQSRegEngineObserver>
{
    AcountEditCellID *_accountEditCellId;
    AcountEditCellPW *_accountEditCellPw;
    _Bool _newAccount;
    NSString *_uinToSet;
    NSString *_unloadedUin;
    NSString *_unloadedPwd;
    id <QQLoginViewDelegate> _delegate;
    QQSmsLoginSetPhoneViewController *_smsLoginSetPhoneViewController;
    QQSmsLoginFillVerifyViewController *_smsLoginFillVerifyViewController;
    UIButton *_nameLabel;
    UIButton *_pwLabel;
    int _fromType;
}

@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) id <QQLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSupportRightDragToGoBack;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismissSmsLoginInputSmsCodeUI;
- (void)showSmsLoginInputSmsCodeUI:(id)arg1 msgCnt:(int)arg2 timeout:(int)arg3 tag:(int)arg4;
- (void)QQSmsLoginFillVerifyViewShouldDismiss:(id)arg1;
- (void)QQSmsLoginSetPhoneViewNextBtnAction:(id)arg1 country:(id)arg2;
- (void)QQSmsLoginSetPhoneViewShouldDismiss:(id)arg1;
- (void)notifyQuickRegCheckResponse:(id)arg1;
- (void)registerAction;
- (void)startLogin:(id)arg1 psw:(id)arg2;
- (void)doLogin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)forgetPassWordClicked;
- (void)rightButtonClick:(id)arg1;
- (void)onAccountPasswordShouldReturn;
- (void)onAccountPasswordCleared;
- (void)onAccountPasswordEditedBegin:(double)arg1;
- (void)onAccountPasswordEdited;
- (void)didAccountEditReturnToPw:(id)arg1;
- (void)didAccountEditUinBegin:(double)arg1;
- (void)didAccountUinEdited;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRangeOverride:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadAppearance;
- (void)loadView;
- (id)initWithUin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

