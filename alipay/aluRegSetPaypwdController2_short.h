//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluRegSetPaypwdController2_base.h"

#import "aluSetPayPwdBoxDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView, aluCheckBox, aluSetPayPwdBox;

@interface aluRegSetPaypwdController2_short : aluRegSetPaypwdController2_base <aluSetPayPwdBoxDelegate>
{
    _Bool _optionStatus;
    NSString *_showOptionalInfo;
    NSString *_agreementURL;
    aluSetPayPwdBox *_pwdBox;
    aluCheckBox *_checkBox;
    UILabel *_optionalInfoLabel;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UILabel *optionalInfoLabel; // @synthesize optionalInfoLabel=_optionalInfoLabel;
@property(nonatomic) __weak aluCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak aluSetPayPwdBox *pwdBox; // @synthesize pwdBox=_pwdBox;
@property(nonatomic) _Bool optionStatus; // @synthesize optionStatus=_optionStatus;
@property(copy, nonatomic) NSString *agreementURL; // @synthesize agreementURL=_agreementURL;
@property(copy, nonatomic) NSString *showOptionalInfo; // @synthesize showOptionalInfo=_showOptionalInfo;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyBoardNotification;
- (void)addKeyBoardNotification;
- (void)clearPassword;
- (void)aluSetPayPwdBoxDone:(id)arg1;
- (void)aluSetPayPwdBoxInputDidChange:(id)arg1;
- (void)linkButtonAction;
- (void)onCheckBox:(id)arg1;
- (void)onNext;
- (void)onDismissKeyBoard;
- (id)getPasswordType;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)createSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

