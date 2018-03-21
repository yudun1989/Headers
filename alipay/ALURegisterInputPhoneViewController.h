//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALUSMSRegisterBaseViewController.h"

#import "aluButtonDelegate-Protocol.h"
#import "aluCountryListViewControllerDelegate-Protocol.h"
#import "aluInputBoxDelegate-Protocol.h"
#import "aluKeyboardHandlerDelegate-Protocol.h"

@class ALUMobileNumberFormatter, ALURDSView, APSecRDS, NSString, UILabel, aluInputBox, aluProtocalBox2;

@interface ALURegisterInputPhoneViewController : ALUSMSRegisterBaseViewController <aluInputBoxDelegate, aluCountryListViewControllerDelegate, aluButtonDelegate, aluKeyboardHandlerDelegate>
{
    _Bool _isFirstTimeInput;
    APSecRDS *_registerRDS;
    ALURDSView *_rdsView;
    aluInputBox *_areaCodeBox;
    aluInputBox *_phoneNumberBox;
    UILabel *_protocalLabel;
    aluProtocalBox2 *_protocalBox;
    ALUMobileNumberFormatter *_mobileNumberFormatter;
}

@property(retain, nonatomic) ALUMobileNumberFormatter *mobileNumberFormatter; // @synthesize mobileNumberFormatter=_mobileNumberFormatter;
@property(nonatomic) _Bool isFirstTimeInput; // @synthesize isFirstTimeInput=_isFirstTimeInput;
@property(retain, nonatomic) aluProtocalBox2 *protocalBox; // @synthesize protocalBox=_protocalBox;
@property(retain, nonatomic) UILabel *protocalLabel; // @synthesize protocalLabel=_protocalLabel;
@property(retain, nonatomic) aluInputBox *phoneNumberBox; // @synthesize phoneNumberBox=_phoneNumberBox;
@property(retain, nonatomic) aluInputBox *areaCodeBox; // @synthesize areaCodeBox=_areaCodeBox;
@property(retain, nonatomic) ALURDSView *rdsView; // @synthesize rdsView=_rdsView;
@property(retain, nonatomic) APSecRDS *registerRDS; // @synthesize registerRDS=_registerRDS;
- (void).cxx_destruct;
- (void)updateRegisterBizModel;
- (void)hideProgress;
- (void)showProgress;
- (void)updateBtnStatus;
- (void)textFieldDidEnd:(id)arg1;
- (void)textFieldDidBegin:(id)arg1;
- (void)reformatForTextField:(id)arg1;
- (void)aluCountryListViewController:(id)arg1 selectedCountry:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)aluInputBoxTextInputDidChange:(id)arg1;
- (void)aluIputBoxRightAccessoryClicked:(id)arg1;
- (void)aluButton:(id)arg1 touchedAt:(struct CGPoint)arg2;
- (void)changeAreaCode;
- (void)onBack;
- (void)onNext;
- (void)alipayLinkButtonAction;
- (void)taobaoLinkButtonAction;
- (void)creatSubView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)startRecordRDSInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

