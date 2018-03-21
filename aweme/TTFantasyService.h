//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSDateFormatter, NSDictionary, NSString, TTFActivityConfigStruct, TTFDashboardViewController, TTFNavigationController, TTFUserStruct;
@protocol TTFLoginServiceProtocol, TTFNavigateServiceProtocol, TTFShareServiceProtocol, TTFWebServiceProtocol, TTFantasyServiceProtocol;

@interface TTFantasyService : NSObject
{
    _Bool _isSignedActivity;
    _Bool _isDebugLogEnabled;
    _Bool _isNeedResumeStatusBarAfterLeave;
    _Bool _isRequestSettingsBySelf;
    _Bool _isTestEnvEnabled;
    _Bool _isDebugToolEnable;
    _Bool _isCurLaunchFantasyEnable;
    _Bool _isTeamBattleEnable;
    id <TTFantasyServiceProtocol> _delegate;
    id <TTFLoginServiceProtocol> _loginDelegate;
    id <TTFWebServiceProtocol> _webServiceDelegate;
    id <TTFNavigateServiceProtocol> _navigateDelegate;
    TTFUserStruct *_userStruct;
    TTFActivityConfigStruct *_activityConfig;
    TTFNavigationController *_rootNavigationController;
    id <TTFShareServiceProtocol> _shareDelegate;
    NSDictionary *_settings;
    NSBundle *_resourceBundle;
    NSDateFormatter *_dateFormatter;
    TTFDashboardViewController *_dashboardVC;
}

+ (id)sharedService;
@property(nonatomic) _Bool isTeamBattleEnable; // @synthesize isTeamBattleEnable=_isTeamBattleEnable;
@property(nonatomic) _Bool isCurLaunchFantasyEnable; // @synthesize isCurLaunchFantasyEnable=_isCurLaunchFantasyEnable;
@property(nonatomic) __weak TTFDashboardViewController *dashboardVC; // @synthesize dashboardVC=_dashboardVC;
@property(nonatomic) _Bool isDebugToolEnable; // @synthesize isDebugToolEnable=_isDebugToolEnable;
@property(nonatomic) _Bool isTestEnvEnabled; // @synthesize isTestEnvEnabled=_isTestEnvEnabled;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSBundle *resourceBundle; // @synthesize resourceBundle=_resourceBundle;
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <TTFShareServiceProtocol> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(nonatomic) _Bool isRequestSettingsBySelf; // @synthesize isRequestSettingsBySelf=_isRequestSettingsBySelf;
@property(nonatomic) __weak TTFNavigationController *rootNavigationController; // @synthesize rootNavigationController=_rootNavigationController;
@property(nonatomic) _Bool isNeedResumeStatusBarAfterLeave; // @synthesize isNeedResumeStatusBarAfterLeave=_isNeedResumeStatusBarAfterLeave;
@property(nonatomic) _Bool isDebugLogEnabled; // @synthesize isDebugLogEnabled=_isDebugLogEnabled;
@property(retain, nonatomic) TTFActivityConfigStruct *activityConfig; // @synthesize activityConfig=_activityConfig;
@property(retain, nonatomic) TTFUserStruct *userStruct; // @synthesize userStruct=_userStruct;
@property(nonatomic) _Bool isSignedActivity; // @synthesize isSignedActivity=_isSignedActivity;
@property(nonatomic) __weak id <TTFNavigateServiceProtocol> navigateDelegate; // @synthesize navigateDelegate=_navigateDelegate;
@property(nonatomic) __weak id <TTFWebServiceProtocol> webServiceDelegate; // @synthesize webServiceDelegate=_webServiceDelegate;
@property(nonatomic) __weak id <TTFLoginServiceProtocol> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(nonatomic) __weak id <TTFantasyServiceProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enterFantasyFromViewController:(id)arg1 activityID:(long long)arg2;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)requestSettings;
- (id)eliminateViewShareButtonTitle;
- (_Bool)isTreasureChestEnabled;
- (void)configureTreasureChestEnable:(_Bool)arg1;
- (long long)eliminatLotteryDelay;
- (_Bool)eliminatLotteryEnabled;
- (_Bool)isDisableCommentOnShowQuestion;
- (void)setEnableTeamBattle:(_Bool)arg1;
- (_Bool)isEnableTeamBattle;
- (void)notifyFantasyExitWithUserInfo:(id)arg1;
- (_Bool)isGetRebirthCardAnimationEnabled;
- (_Bool)teamScreenShareEnabled;
- (_Bool)isRevivalTaskPreloadEnabled;
- (_Bool)isRevivalTaskEnabled;
- (_Bool)newUserGuideEnabled;
- (long long)reportMaxRetryCount;
- (long long)reportRetryTimeout;
- (_Bool)isReportEnable;
- (_Bool)isNewUserLoginAddLife;
- (_Bool)isUpgradeAddLife;
- (long long)sdkUpgradeVersion;
- (_Bool)needShowTipForSDKUpgrade;
- (_Bool)showTipForSDKUpgradeEnabled;
- (_Bool)showLogoInLiveRoom;
- (_Bool)shouldShareToSystemInsteadOfWechatMoments;
- (_Bool)showShareImageEnabled;
- (int)getSDKVersion;
- (_Bool)isTTNetEnabled;
- (_Bool)isSecondDahsBoardViewEnabled;
- (_Bool)isShowShareTaskViewForResrrectionEnabled;
- (_Bool)isShowAlertForResrrectionEnabled;
- (void)setNeedResumeStatusBar:(_Bool)arg1;
- (_Bool)isNeedShowFirstGuide;
- (_Bool)isGetResurrectCardWebEnabled;
- (void)configureTestEnv:(_Bool)arg1;
- (_Bool)isTraceReportEnabled;
- (_Bool)isFrontierEnabled;
- (_Bool)isEnabled;
- (id)getAppDisplayName;
- (id)getAppDisplayNameForAppID:(long long)arg1;
- (void)loginFromViewController:(id)arg1 trackerDic:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getReachabilityDidChangeNotificationName;
@property(readonly, nonatomic) long long networkReachabilityStatus;
- (void)enableDebugLog;
- (void)registerDINAlternateFont;
- (void)setCurrentUser:(id)arg1;
@property(copy, nonatomic) NSString *invitationCode;
@property(nonatomic) _Bool inputInvitationCodeDisabled;
- (void)updateSettings:(id)arg1;
- (_Bool)isUserInFantasy;
- (_Bool)userHadBeenLogin;
- (_Bool)hasUserEnterBefore;
- (void)accountStatusChange;
- (void)enterFantasyFromViewController:(id)arg1 trackerDescriptor:(id)arg2;
- (_Bool)isConfigDebugTool;
- (void)configDebugTool:(_Bool)arg1;
- (Class)getTargetViewController;
- (void)requestSettingsBySelf;
- (void)configureNavigateServiceDelegation:(id)arg1;
- (void)configureWebServiceDelegation:(id)arg1;
- (void)configureLoginServiceDelegation:(id)arg1;
- (void)configureShareServiceDelegation:(id)arg1;
- (void)configureServiceWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)shareTeamBattlePhraseToDest:(unsigned long long)arg1 withTeamBattlePhrase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)ttf_canOpenThirdPartApp:(unsigned long long)arg1;
- (void)shareToDest:(unsigned long long)arg1 withTitle:(id)arg2 description:(id)arg3 image:(id)arg4 URL:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)shareSingleImageToDest:(unsigned long long)arg1 withImage:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

