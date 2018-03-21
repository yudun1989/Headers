//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSOverseaLoginStepViewController.h"

@class KSOverseaLoginRowView, UIButton, UITextField;

@interface KSOverseaLoginPasswordInputViewController : KSOverseaLoginStepViewController
{
    UITextField *_passwordTextField;
    KSOverseaLoginRowView *_passwordRowView;
    UIButton *_forgotPwdButton;
}

@property(retain, nonatomic) UIButton *forgotPwdButton; // @synthesize forgotPwdButton=_forgotPwdButton;
@property(retain, nonatomic) KSOverseaLoginRowView *passwordRowView; // @synthesize passwordRowView=_passwordRowView;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
- (void).cxx_destruct;
- (void)retrievePassword;
- (void)login;
- (id)nextStepButtonTitle;
- (void)nextStepButtonDidTapped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

