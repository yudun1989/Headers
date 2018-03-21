//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQConnectPluginCheckDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSDictionary, NSNotification, NSString, NSTimer, QQConnectPluginInfoQuery, QQShareMsgInfo, QZUserCreditLevelManager;

@interface QZone : NSObject <QQConnectPluginCheckDelegate, UIAlertViewDelegate>
{
    QZUserCreditLevelManager *_creditLevelManager;
    QQConnectPluginInfoQuery *_pluginInfoCheck;
    QQShareMsgInfo *_shareMsgInfo;
    NSDictionary *_shareParams;
    _Bool _hasPreload;
    NSTimer *_thirdShareTimer;
    NSNotification *_thirdShareNotification;
    NSNotification *_thirdURLShareNotification;
    _Bool _isURLShare;
    double _startAPPTime;
    unsigned long long _durationFromStartAPPToEnterQZone;
    NSString *_userLocalIP;
}

+ (id)topViewControllerInCurrentTabBar;
+ (id)instance;
@property(retain) NSString *userLocalIP; // @synthesize userLocalIP=_userLocalIP;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onQQConnectCheckPluginInfoComplete;
- (void)startCheckPluginInfoValid;
- (void)uploadAIOGroupPhoto:(long long)arg1 albumModel:(id)arg2 refer:(id)arg3 compressBatchId:(long long)arg4 quality:(long long)arg5 uploadEntrance:(long long)arg6;
- (void)onUpdateFavourCacheData:(id)arg1;
- (void)onShowFavourDetail:(id)arg1;
- (void)pushGateInfoNotificationMainThread:(id)arg1;
- (void)onQQPushGateInfoNotification:(id)arg1;
- (void)onCompetenceSetting:(id)arg1;
- (int)onGetBlackNotify:(id)arg1;
- (int)onSetBlackNotify:(id)arg1;
- (void)notifyMQQCompetence:(int)arg1 uin:(long long)arg2 isblack:(int)arg3 errCode:(long long)arg4 msg:(id)arg5;
- (void)notifyMQQCompetence:(id)arg1 errCode:(long long)arg2 msg:(id)arg3;
- (void)on3rdShare:(id)arg1;
- (_Bool)check3rdShareCanSend:(id)arg1;
- (void)removeQZoneTab;
- (_Bool)isQZoneViewControllerVisible:(id)arg1;
- (_Bool)isPassiveFeedVisible;
- (_Bool)isActiveFeedVisible;
- (id)tabBarController;
- (void)onCrashShouldClearCache;
- (void)onClearCacheEnd;
- (void)onClearCacheBegin;
- (void)clearCacheByUser;
- (void)clearFeedCache;
- (id)getQzoneNeedClearCachePaths:(_Bool)arg1;
- (void)clearCacheOnDeleteAccount:(long long)arg1;
- (void)onWNSCommandNotify:(id)arg1;
- (void)onSHowQZGAAlbumListViewController:(id)arg1;
- (void)onGroupZoneAIOUrlNotify:(id)arg1;
- (void)onAIOGZPassiveViewCtrShowNotify:(id)arg1;
- (void)onReceiveForwardAIOPicturesToGroupAlbumNotification:(id)arg1;
- (id)decodeUpdateData:(id)arg1;
- (id)decodePushData:(id)arg1;
- (void)onSetUploadShowNotify:(id)arg1;
- (void)onGroupZoneShowNotify:(id)arg1;
- (void)onSettingViewShowNotify:(id)arg1;
- (void)onAlbumListShowNotify:(id)arg1;
- (void)onLoginOutNotify:(id)arg1;
- (void)onBeforeLoginOutNotify:(id)arg1;
- (void)onLogin;
- (void)scanRecentPhoto;
- (void)onEnterBackground;
- (void)onEnterForeGround;
- (void)onAppleWatchShare2QZone:(id)arg1;
- (_Bool)isAppDelegateAlertViewShown;
- (void)thirdAppForwardSpecialHandler:(id)arg1;
- (void)thirdAppURLShare:(id)arg1;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (void)shareToQzoneNative:(id)arg1;
- (id)currentActiveFeedViewCtonroller:(id)arg1;
- (void)onEnterActiveViewCtrAnd3rdShare:(id)arg1;
- (void)onEnterSendGiftInAIO:(id)arg1;
- (void)onEnterPassiveViewCtr:(id)arg1;
- (void)onEnterActiveViewCtr:(id)arg1;
- (void)onEnterActiveViewCtr:(id)arg1 isFromThirdApp:(_Bool)arg2;
- (void)shareBackToThirdApp:(id)arg1;
- (id)manageThirdAppTitle:(id)arg1 appid:(id)arg2;
- (void)onEnterUploadPhoto:(id)arg1;
- (void)exportVideo:(id)arg1 paramDict:(id)arg2;
- (void)searchAssetWithAssetURL:(id)arg1 paramDict:(id)arg2;
- (void)thirdAppShareVideo:(id)arg1;
- (_Bool)isFromWriteMood:(id)arg1;
- (void)onEnterMoodEdit:(id)arg1;
- (void)innerOnLiveShow:(id)arg1;
- (void)onLiveShow:(id)arg1;
- (void)exportPituVideoWithDict:(id)arg1;
- (void)dispatchThirdAppShareType:(long long)arg1 userInfo:(id)arg2;
- (void)configThirdAppShareParam:(id)arg1;
- (void)thirdAppShareToQZone:(id)arg1;
- (void)onThirdAppShareToQZone:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showDifferAccountLoginHint;
- (void)getOpenIDFinished:(id)arg1;
- (void)getOpenIDTimeOut;
- (void)checkOpenID:(id)arg1;
- (void)checkAccountDifferent:(id)arg1;
- (void)releaseNotification;
- (void)onEnterDetail:(id)arg1;
- (void)onHandleOpenQzoneSchemaNotify:(id)arg1;
- (void)onEnterHomepage:(id)arg1;
- (void)onEnterQZSearchBoard:(id)arg1;
- (unsigned long long)durationFromStartAPPToEnterQZone;
- (double)startAPPTime;
- (void)preLoadInSubthread;
- (void)preGenerateVipIcon;
- (void)preloadUserlogo;
- (void)cleanPhotoEventCacheForNewVersion;
- (void)preloadLocalFriendFeeds;
- (long long)getLastMiniFeedTimestampWithUin:(long long)arg1;
- (long long)unreadActiveLastUin;
- (long long)unreadPassiveCount;
- (long long)unreadActiveCount;
- (void)onCrashedWithCrashStack:(id)arg1;
- (void)onCrashed;
- (void)afterLoginAndMessageReceivedNotify:(id)arg1;
- (void)initparseDNSModule;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

