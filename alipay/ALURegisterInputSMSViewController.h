//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALUSMSRegisterBaseViewController.h"

#import "verifySMSViewDelegate-Protocol.h"

@class ALUActionSheet, ALUVerifySMSView, NSString, NSTimer, UILabel, aluLinkButton;

@interface ALURegisterInputSMSViewController : ALUSMSRegisterBaseViewController <verifySMSViewDelegate>
{
    _Bool _shouldRollBack;
    NSString *_phoneNum;
    NSString *_countryCode;
    ALUVerifySMSView *_verifyView;
    aluLinkButton *_resendSMSButton;
    long long _secondsCountDown;
    NSTimer *_countTimer;
    UILabel *_smsCodeErrorLabel;
    ALUActionSheet *_actionSheet;
}

@property(retain, nonatomic) ALUActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UILabel *smsCodeErrorLabel; // @synthesize smsCodeErrorLabel=_smsCodeErrorLabel;
@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(nonatomic) long long secondsCountDown; // @synthesize secondsCountDown=_secondsCountDown;
@property(retain, nonatomic) aluLinkButton *resendSMSButton; // @synthesize resendSMSButton=_resendSMSButton;
@property(retain, nonatomic) ALUVerifySMSView *verifyView; // @synthesize verifyView=_verifyView;
@property(nonatomic) _Bool shouldRollBack; // @synthesize shouldRollBack=_shouldRollBack;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hideProgress;
- (void)showProgress;
- (id)displayDescribeLabelText;
- (void)inputSMSCodeDidChanged;
- (void)inputSMSCodeFinished:(id)arg1;
- (void)updateErrorUI:(id)arg1;
- (void)verifySMSRequest:(id)arg1;
- (void)showVerifyViewAnimation;
- (void)didReceiveMemoryWarning;
- (void)timeFireMethod;
- (void)startTimer;
- (void)resendSMS:(_Bool)arg1;
- (void)moreActionForButtonTitle:(id)arg1;
- (id)moreActionTitles;
- (void)showResendSmSActionsheet;
- (void)onBack;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateresendSMSButtonPosition:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)creatSubView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

