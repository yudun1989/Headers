//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTAccountLoginPlatformLoginViewDelegate-Protocol.h"
#import "TTAccountMulticastProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SSNavigationBar, SSThemedButton, SSThemedView, TTAccountLoginInputView, TTAccountLoginPlatformLoginView, TTIndicatorView, UIBarButtonItem;

@interface TTAccountLoginBaseViewController : SSViewControllerBase <TTAccountMulticastProtocol, UITextFieldDelegate, TTAccountLoginPlatformLoginViewDelegate>
{
    _Bool _hideLeftItem;
    _Bool _registerButtonEnabled;
    _Bool _resendButtonEnabled;
    NSString *_source;
    NSArray *_excludedPlatformNames;
    SSNavigationBar *_navigationBar;
    SSThemedView *_backgroundView;
    SSThemedView *_upInfoContainerView;
    TTAccountLoginPlatformLoginView *_platformLoginView;
    unsigned long long _types;
    TTAccountLoginInputView *_mobileInput;
    TTAccountLoginInputView *_captchaInput;
    SSThemedButton *_registerButton;
    UIBarButtonItem *_leftItem;
    UIBarButtonItem *_rightItem;
    long long _countdown;
    NSTimer *_timer;
    NSString *_captchaString;
    long long _loginState;
    long long _subscribeState;
    CDUnknownBlockType _loginCompletionHandler;
    CDUnknownBlockType _subscribeCompletionHandler;
    TTIndicatorView *_waitingIndicatorView;
}

@property(retain, nonatomic) TTIndicatorView *waitingIndicatorView; // @synthesize waitingIndicatorView=_waitingIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType subscribeCompletionHandler; // @synthesize subscribeCompletionHandler=_subscribeCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType loginCompletionHandler; // @synthesize loginCompletionHandler=_loginCompletionHandler;
@property(nonatomic) long long subscribeState; // @synthesize subscribeState=_subscribeState;
@property(nonatomic) long long loginState; // @synthesize loginState=_loginState;
@property(copy, nonatomic) NSString *captchaString; // @synthesize captchaString=_captchaString;
@property(nonatomic) _Bool resendButtonEnabled; // @synthesize resendButtonEnabled=_resendButtonEnabled;
@property(nonatomic) _Bool registerButtonEnabled; // @synthesize registerButtonEnabled=_registerButtonEnabled;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) UIBarButtonItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIBarButtonItem *leftItem; // @synthesize leftItem=_leftItem;
@property(nonatomic) _Bool hideLeftItem; // @synthesize hideLeftItem=_hideLeftItem;
@property(retain, nonatomic) SSThemedButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) TTAccountLoginInputView *captchaInput; // @synthesize captchaInput=_captchaInput;
@property(retain, nonatomic) TTAccountLoginInputView *mobileInput; // @synthesize mobileInput=_mobileInput;
@property(nonatomic) unsigned long long types; // @synthesize types=_types;
@property(retain, nonatomic) TTAccountLoginPlatformLoginView *platformLoginView; // @synthesize platformLoginView=_platformLoginView;
@property(retain, nonatomic) SSThemedView *upInfoContainerView; // @synthesize upInfoContainerView=_upInfoContainerView;
@property(retain, nonatomic) SSThemedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SSNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSArray *excludedPlatformNames; // @synthesize excludedPlatformNames=_excludedPlatformNames;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)navigationBarTap:(id)arg1;
- (id)_indicatorErrorTextFromError:(id)arg1;
- (void)showAutoDismissIndicatorWithText:(id)arg1;
- (void)showAutoDismissIndicatorWithError:(id)arg1;
- (void)_dismissWaitingIndicator;
- (void)dismissWaitingIndicatorWithText:(id)arg1;
- (void)dismissWaitingIndicatorWithError:(id)arg1;
- (void)dismissWaitingIndicator;
- (void)showWaitingIndicator;
- (void)addTapGesture;
- (_Bool)isContentValid;
- (_Bool)validateMobileNumber:(id)arg1;
- (void)respondsToAccountAuthLoginWithError:(id)arg1 forPlatform:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)uMengPlatform:(id)arg1;
- (void)loginPlatform:(id)arg1;
- (void)rightItemClicked;
- (void)leftItemClicked;
- (void)registerButtonClicked:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)refreshSubviews;
- (void)fitResendView;
- (void)refreshRegisterButton;
- (void)layoutSubviews;
- (void)countDownActionFired:(id)arg1;
- (void)clearTimer;
- (void)startTimer;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 source:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

