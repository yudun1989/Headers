//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBViewController.h"

#import "ALBBCountryListViewControllerDelegate-Protocol.h"
#import "ALBBRegisterBoxDelegate-Protocol.h"
#import "aluRegisterPageAppearance-Protocol.h"

@class ALBBCountryCode, ALBBRegisterBizModel, ALBBRegisterBox, NSDictionary, NSString, UIButton, UILabel, UIView;

@interface ALBBRegisterViewController : ALBBViewController <ALBBRegisterBoxDelegate, ALBBCountryListViewControllerDelegate, aluRegisterPageAppearance>
{
    _Bool _beeingInGobackProcess;
    _Bool _hasCloseWindVane;
    int _lastScreenHeight;
    int _lastScreenWidth;
    NSString *_site;
    ALBBRegisterBizModel *_bizModel;
    NSDictionary *_registerContext;
    UIButton *_nextBtn;
    ALBBRegisterBox *_regBox;
    UIView *_containerView;
    UILabel *_protocalLabel;
    UIButton *_taobaoProtocal;
    UIButton *_alipayProtocal;
    UIButton *_alibabaServiceProtocal;
    UIButton *_privacyProtocal;
    UIButton *_privateProtocal;
    NSString *_taobaoProtocalString;
    NSString *_alipayProtocalString;
    NSString *_privateProtocalString;
    NSString *_privacyProtocalString;
    NSString *_alibabaServiceProtocalString;
    ALBBCountryCode *_selectedCountry;
    NSString *_protocolUrl;
    NSString *_sessionId;
    long long _regRdsStatus;
}

+ (void)setSharedBizContext:(id)arg1;
+ (id)sharedBizContext;
@property(nonatomic) _Bool hasCloseWindVane; // @synthesize hasCloseWindVane=_hasCloseWindVane;
@property(nonatomic) _Bool beeingInGobackProcess; // @synthesize beeingInGobackProcess=_beeingInGobackProcess;
@property(nonatomic) int lastScreenWidth; // @synthesize lastScreenWidth=_lastScreenWidth;
@property(nonatomic) int lastScreenHeight; // @synthesize lastScreenHeight=_lastScreenHeight;
@property(nonatomic) long long regRdsStatus; // @synthesize regRdsStatus=_regRdsStatus;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(retain, nonatomic) ALBBCountryCode *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(retain, nonatomic) NSString *alibabaServiceProtocalString; // @synthesize alibabaServiceProtocalString=_alibabaServiceProtocalString;
@property(retain, nonatomic) NSString *privacyProtocalString; // @synthesize privacyProtocalString=_privacyProtocalString;
@property(retain, nonatomic) NSString *privateProtocalString; // @synthesize privateProtocalString=_privateProtocalString;
@property(retain, nonatomic) NSString *alipayProtocalString; // @synthesize alipayProtocalString=_alipayProtocalString;
@property(retain, nonatomic) NSString *taobaoProtocalString; // @synthesize taobaoProtocalString=_taobaoProtocalString;
@property(retain, nonatomic) UIButton *privateProtocal; // @synthesize privateProtocal=_privateProtocal;
@property(retain, nonatomic) UIButton *privacyProtocal; // @synthesize privacyProtocal=_privacyProtocal;
@property(retain, nonatomic) UIButton *alibabaServiceProtocal; // @synthesize alibabaServiceProtocal=_alibabaServiceProtocal;
@property(retain, nonatomic) UIButton *alipayProtocal; // @synthesize alipayProtocal=_alipayProtocal;
@property(retain, nonatomic) UIButton *taobaoProtocal; // @synthesize taobaoProtocal=_taobaoProtocal;
@property(retain, nonatomic) UILabel *protocalLabel; // @synthesize protocalLabel=_protocalLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) ALBBRegisterBox *regBox; // @synthesize regBox=_regBox;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(copy, nonatomic) NSDictionary *registerContext; // @synthesize registerContext=_registerContext;
@property(retain, nonatomic) ALBBRegisterBizModel *bizModel; // @synthesize bizModel=_bizModel;
@property(copy, nonatomic) NSString *site; // @synthesize site=_site;
- (void).cxx_destruct;
- (_Bool)isNextBtnEnabled;
- (void)updateNextBtnEnabledStatus;
- (void)setPrivacyAgreementText:(id)arg1 link:(id)arg2 color:(id)arg3 highLightColor:(id)arg4;
- (void)setAlipayAgreementText:(id)arg1 link:(id)arg2 color:(id)arg3 highLightColor:(id)arg4;
- (void)setRegisterPageTitle:(id)arg1;
- (void)setTaobaoAgreementText:(id)arg1 link:(id)arg2 color:(id)arg3 highLightColor:(id)arg4;
- (void)setAgreementColor:(id)arg1 highLightColor:(id)arg2;
- (id)nextStepButton;
- (_Bool)isCheckCodeAvaial;
- (void)resetCheckCodeStatus;
- (void)alu_p_updateCountries:(id)arg1;
- (void)doVerificationRegister;
- (void)restoreUI;
- (void)countryListViewController:(id)arg1 selectedCountry:(id)arg2;
- (id)originalPhoneNumText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)ALBBRegisterBoxGoCountryList:(id)arg1;
- (void)aluIputBoxTextInputDidChange:(id)arg1;
- (void)clearRegbox4Resue;
- (void)onNext;
- (void)onBack;
- (void)onProTocal:(id)arg1;
- (void)openPrivateProtocal;
- (void)openAlibabaServiceProtocal;
- (void)openAliPayProtocal;
- (void)openTaoBaoProtocal;
- (void)openPrivacyProtocal;
- (void)createSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needDropDownList;
@property(readonly) Class superclass;

@end

