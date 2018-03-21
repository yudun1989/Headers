//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIModule.h"

@class NSDictionary, NSNumber, NSString, UIViewController, VIPasswdPopupController, VIPayPwdPluginModule;

@interface VIPasswdModule : VIModule
{
    NSString *_pubKey;
    NSString *_timestamp;
    NSString *_pageStyle;
    NSString *_keyHeadline;
    NSString *_bodyContent;
    NSString *_keyFootRemark;
    NSString *_loadingTip;
    NSNumber *_isSimplePPW;
    NSNumber *_hasOthers;
    NSNumber *_isFindPPW;
    NSString *_logonId;
    NSString *_referer;
    NSNumber *_isExistPPW;
    NSString *_completePPWUrl;
    NSString *_action;
    NSString *_other;
    NSString *_pass;
    NSNumber *_setPwd;
    NSDictionary *_extraData;
    NSString *_moduleNameAtSubmission;
    NSString *_pwdTopTip;
    UIViewController *_currentNavigationController;
    VIPayPwdPluginModule *_pluginModule;
    VIPasswdPopupController *_popupController;
    NSString *_fromType;
}

+ (id)keyMapper;
- (void).cxx_destruct;
- (id)specificVerifyType;
- (void)updateFromType;
- (void)logForCompletion:(long long)arg1;
- (void)logWithParams:(id)arg1;
- (_Bool)canChooseOtherWays;
- (_Bool)canFindPasswd;
- (_Bool)isNumericPasswd;
- (_Bool)canSetupPPWSelf;
- (_Bool)isPPWExist;
- (void)tryOtherVerificationMethods;
- (void)findPasswdAndCancel:(_Bool)arg1;
- (void)dealloc;
- (void)closeAnimated:(_Bool)arg1;
- (void)moduleWillFinish;
- (void)start;
- (void)setupPPWSelf;
- (void)renderPPWOnNative;
- (void)renderPPWOnPlugin;
- (void)leadToSetupPPW;
- (void)verifyWithPwdInputView:(id)arg1;
- (void)updatePubKey:(id)arg1;
- (id)currentPubKey;
- (void)invalidate;
- (_Bool)isLiving;

@end

