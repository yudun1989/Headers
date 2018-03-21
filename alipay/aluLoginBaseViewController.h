//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "aluOnBackDelegate-Protocol.h"

@class ALUActionSheet, ALULoginPageBuilder, APSecRDS, NSDictionary, NSMutableDictionary, NSString, UIImage, UILabel, UITextField, UIView, aluButton, aluLinkButton, aluLoginBizModel, aluLoginBox, aluRoundHeadImage;
@protocol aluOnBackDelegate;

@interface aluLoginBaseViewController : aluBaseViewController <UIAlertViewDelegate, UIActionSheetDelegate, aluOnBackDelegate>
{
    UITextField *_activeTextField;
    UIImage *_alipayHeadImage;
    _Bool _isCancelledByUser;
    _Bool _allow3rdPartyKeyboard;
    _Bool _isEnterCheckPerson;
    _Bool _isLoginViewDidAppear;
    _Bool _willShowKeyboardWhenDidAppear;
    aluLoginBizModel *_bizModel;
    aluLoginBox *_loginBox;
    aluButton *_loginBtn;
    aluRoundHeadImage *_headImage;
    ALULoginPageBuilder *_loginPageBuilder;
    UILabel *_betaLabel;
    UIView *_containerView;
    aluLinkButton *_languageBtn;
    aluLinkButton *_moreBtn;
    NSDictionary *_extraInfo;
    ALUActionSheet *_actionSheet;
    APSecRDS *_apRDS;
    NSString *_rdsGotData;
    id <aluOnBackDelegate> _backDelegate;
    NSString *_monitorPageRef;
    NSMutableDictionary *_intentHandlers;
}

@property(retain, nonatomic) NSMutableDictionary *intentHandlers; // @synthesize intentHandlers=_intentHandlers;
@property(nonatomic) _Bool willShowKeyboardWhenDidAppear; // @synthesize willShowKeyboardWhenDidAppear=_willShowKeyboardWhenDidAppear;
@property(retain, nonatomic) NSString *monitorPageRef; // @synthesize monitorPageRef=_monitorPageRef;
@property(nonatomic) _Bool isLoginViewDidAppear; // @synthesize isLoginViewDidAppear=_isLoginViewDidAppear;
@property(nonatomic) _Bool isEnterCheckPerson; // @synthesize isEnterCheckPerson=_isEnterCheckPerson;
@property(nonatomic) __weak id <aluOnBackDelegate> backDelegate; // @synthesize backDelegate=_backDelegate;
@property(retain, nonatomic) NSString *rdsGotData; // @synthesize rdsGotData=_rdsGotData;
@property(retain, nonatomic) APSecRDS *apRDS; // @synthesize apRDS=_apRDS;
@property(nonatomic) _Bool allow3rdPartyKeyboard; // @synthesize allow3rdPartyKeyboard=_allow3rdPartyKeyboard;
@property(nonatomic) _Bool isCancelledByUser; // @synthesize isCancelledByUser=_isCancelledByUser;
@property(retain, nonatomic) ALUActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) aluLinkButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) aluLinkButton *languageBtn; // @synthesize languageBtn=_languageBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *betaLabel; // @synthesize betaLabel=_betaLabel;
@property(retain, nonatomic) ALULoginPageBuilder *loginPageBuilder; // @synthesize loginPageBuilder=_loginPageBuilder;
@property(retain, nonatomic) aluRoundHeadImage *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) aluButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) aluLoginBox *loginBox; // @synthesize loginBox=_loginBox;
@property(retain, nonatomic) aluLoginBizModel *bizModel; // @synthesize bizModel=_bizModel;
- (void).cxx_destruct;
- (void)receviceLanguageChangedNotification:(id)arg1;
- (void)aluOnBack;
- (void)monitorOnLogin:(id)arg1;
- (void)popBackAndRefreshAvatarAndPwdByLoginId:(id)arg1 animated:(_Bool)arg2;
- (void)refreshAvatarAndPwdByLoginId:(id)arg1;
- (void)popToRootControllerAnimated:(_Bool)arg1;
- (void)makePasswordVisible;
- (void)becomePasswordFirstReponder;
- (void)resignPasswordFirstReponder;
- (void)resignLoginIdFirstReponder;
- (void)clearPassword;
- (void)setAppDefaultAvatar;
- (void)setHeadImageUrl:(id)arg1;
- (id)headImageUrl:(id)arg1;
- (int)updateHeadImage;
- (void)updateLoginBtnStatus;
- (void)setLoginId:(id)arg1 hideLoginId:(_Bool)arg2 password:(id)arg3;
- (void)setLoginId:(id)arg1 password:(id)arg2;
- (void)cancelLogin;
- (void)onForgetPassword;
- (void)onLogin;
- (struct CGRect)getKeyboardSize:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyBoardNotification;
- (void)addKeyBoardNotification;
- (void)restoreUI;
- (void)aluLoginBoxHistoryListClicked:(id)arg1;
- (void)hideLoginProgress;
- (void)showLoginProgress;
- (void)onMore;
- (void)moreActionForButtonTitle:(id)arg1;
- (id)moreActionTitles;
- (void)OnLanguageBtnClicked;
- (void)changeToSMSStyle:(id)arg1;
- (void)changeToPasswordStyle:(id)arg1;
- (void)changeOtherAccount;
- (void)refreshCurrentLoginStyle:(id)arg1;
- (void)OnChangeToPasswordStyle;
- (void)arouseKeyboardOnLoginInputBox;
- (void)arouseKeyboard;
- (void)enterSecurtyCenter;
- (void)taobaoLogin;
- (void)doRegister;
- (void)onRegisterBtnClick;
- (void)onOtherLogin;
- (void)onBack;
- (void)dealloc;
- (CDUnknownBlockType)navigationBarHiddenAnimationCompletion;
- (_Bool)shouldShowNavigationBar;
- (void)aluButton:(id)arg1 touchedAt:(struct CGPoint)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textFieldEndEdit:(id)arg1;
- (void)textFieldBeginEdit:(id)arg1;
- (void)testPostLoginNotificaitonForCancelledByUserAction:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupCommands;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loginIdChanged:(id)arg1;
- (void)executeIntentWithParams:(id)arg1;
- (void)handleIntentWithParams:(id)arg1;
- (void)updateLanguageBtnStatus;
- (void)createLanguageBtn;
- (void)prepareSubviews;
- (_Bool)isLv2Page;
- (unsigned long long)pageStyle;
- (void)createSubviews;
- (void)beforeRefreshView;
- (id)currentDisplayLoginId;
- (id)currentLoginId;
- (void)removeIntents;
- (void)setupIntents;
- (void)startRecordRDSInfo;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

