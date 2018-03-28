//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SSCommonLogic : NSObject
{
    _Bool _ssIPhoneSupportRotate;
    NSString *_requestURL;
}

+ (void)saveCommentInputViewPlaceHolder:(id)arg1;
+ (id)commentInputViewPlaceHolder;
+ (id)fixStringTypeGroupID:(id)arg1;
+ (long long)fixLongLongTypeGroupID:(long long)arg1;
+ (id)fixNumberTypeGroupID:(id)arg1;
+ (_Bool)isZoneVersion;
+ (id)handleError:(id)arg1 responseResult:(id)arg2 exceptionInfo:(id *)arg3 treatExceptionAsError:(_Bool)arg4 requestURL:(id)arg5;
+ (id)handleError:(id)arg1 responseResult:(id)arg2 exceptionInfo:(id *)arg3 treatExceptionAsError:(_Bool)arg4;
+ (id)handleError:(id)arg1 responseResult:(id)arg2 exceptionInfo:(id *)arg3;
+ (void)monitorLoginoutWithUrl:(id)arg1 status:(long long)arg2 error:(id)arg3;
+ (void)saveInstallAppsInterval:(id)arg1;
+ (id)getInstallAppsInterval;
+ (void)saveRecentAppsInterval:(id)arg1;
+ (id)getRecentAppsInterval;
+ (id)getShareTemplate;
+ (void)saveShareTemplate:(id)arg1;
+ (id)getInterceptURLs;
+ (void)saveInterceptURLs:(id)arg1;
+ (id)parseShareContentWithTemplate:(id)arg1 title:(id)arg2 shareURLString:(id)arg3;
+ (_Bool)couldRequestForKey:(int)arg1;
+ (void)updateRequestTimeForKey:(int)arg1;
+ (id)shareTimeDict;
+ (float)floatForKey:(id)arg1;
+ (_Bool)boolForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)shareCommonLogic;
+ (void)setMinimumTimeInterval:(double)arg1;
+ (double)minimumTimeInterval;
+ (void)setToken:(id)arg1;
+ (id)token;
+ (void)setDisabledTBUFP:(_Bool)arg1;
+ (_Bool)disabledTBUFP;
+ (void)setMinimumLocationAlertTimeInterval:(double)arg1;
+ (double)minimumLocationAlertTimeInterval;
+ (void)setMinimumLocationUploadTimeInterval:(double)arg1;
+ (double)minimumLocationUploadTimeInterval;
+ (double)locateTimeoutInterval;
+ (void)setLocateTimeoutInterval:(double)arg1;
+ (void)setAmapKey:(id)arg1;
+ (id)amapKey;
+ (void)setBaiduMapKey:(id)arg1;
+ (id)baiduMapKey;
+ (id)loginAlertTitleOfIndex:(unsigned long long)arg1;
+ (void)setLoginAlertTitles:(id)arg1;
+ (id)dialogTitleOfIndex:(unsigned long long)arg1;
+ (void)setDialogTitles:(id)arg1;
+ (void)setQuickLoginSwitch:(_Bool)arg1;
+ (_Bool)quickLoginSwitch;
+ (void)setQuickRegisterButtonText:(id)arg1;
+ (id)quickRegisterButtonText;
+ (void)setQuickRegisterPageTitle:(id)arg1;
+ (id)quickRegisterPageTitle;
+ (void)setWebviewRedirectReportType:(long long)arg1;
+ (long long)webviewRedirectReportType;
+ (void)setEnableWebViewHttps:(_Bool)arg1;
+ (_Bool)enableWebViewHttps;
+ (void)setEnabledWhitePageMonitor:(_Bool)arg1;
+ (_Bool)enabledWhitePageMonitor;
+ (void)setEnabledAFNetworking:(_Bool)arg1;
+ (_Bool)enabledAFNetworking;
+ (void)setEnabledDNSMapping:(long long)arg1;
+ (_Bool)enabledDNSMapping;
+ (void)setShowGestureTip:(_Bool)arg1;
+ (_Bool)showGestureTip;
+ (void)setShowLiveChatTipView:(_Bool)arg1 liveId:(id)arg2;
+ (_Bool)showLiveChatTipViewForliveId:(id)arg1;
+ (void)setEnabledShowAlwaysOriginImageAlertRepeatly:(_Bool)arg1;
+ (_Bool)enabledShowAlwaysOriginImageAlertRepeatly;
+ (void)setAccountABVersionEnabled:(_Bool)arg1;
+ (_Bool)accountABVersionEnabled;
+ (void)enableSearchInitialPageWap:(_Bool)arg1;
+ (_Bool)searchInitialPageWapEnabled;
+ (_Bool)shouldAppendQueryStirngWithUrl:(id)arg1;
+ (void)setWebViewQueryEnableHostList:(id)arg1;
+ (void)enableWebViewQueryString:(_Bool)arg1;
+ (void)enableSearchInDetailNavBar:(long long)arg1;
+ (_Bool)searchInDetailNavBarEnabled;
+ (void)setSearchBarTipForVideo:(id)arg1;
+ (id)searchBarTipForVideo;
+ (void)setSearchBarTipForNormal:(id)arg1;
+ (id)searchBarTipForNormal;
+ (_Bool)isSearchTransitionEnabled;
+ (void)setSearchTransitionEnabled:(_Bool)arg1;
+ (void)setMineTabSearchEnabled:(_Bool)arg1;
+ (_Bool)mineTabSearchEnabled;
+ (void)setWKWebViewEnabledEnabled:(_Bool)arg1;
+ (_Bool)WKWebViewEnabled;
+ (void)setIar:(_Bool)arg1;
+ (_Bool)iar;
+ (void)setForumRefreshTimeInterval:(double)arg1;
+ (double)forumListRefreshTimeInterval;
+ (void)setShouldFilterContact:(_Bool)arg1;
+ (_Bool)shouldFilterContact;
+ (void)setNeedCleanCoreData:(_Bool)arg1;
+ (_Bool)needCleanCoreData;
+ (void)setWeixinSharedExtendedObjectEnabled:(_Bool)arg1;
+ (_Bool)weixinSharedExtendedObjectEnabled;
+ (void)setTTAlertControllerEnabled:(_Bool)arg1;
+ (_Bool)ttAlertControllerEnabled;
+ (void)setWebContentArticleProtectionTimeoutInterval:(double)arg1;
+ (double)webContentArticleProtectionTimeoutInterval;
+ (void)setWebContentArticleProtectionTimeoutDisabled:(_Bool)arg1;
+ (_Bool)webContentArticleProtectionTimeoutDisabled;
+ (void)setExploreDetailToolBarWriteCommentPlaceholderText:(id)arg1;
+ (id)exploreDetailToolBarWriteCommentPlaceholderText;
+ (void)setJsActLogURLString:(id)arg1;
+ (id)shouldEvaluateActLogJsStringForAdID:(id)arg1;
+ (id)jsActLogURLString;
+ (void)setJsSafeDomainList:(id)arg1;
+ (void)setTaobaoSlotIDs:(id)arg1;
+ (id)taobaoSlotIDs;
+ (void)setAutoFloatingRefreshBtnInterval:(long long)arg1;
+ (void)setShowFloatingRefreshBtn:(_Bool)arg1;
+ (void)setLastReadStyle:(long long)arg1;
+ (void)setLastReadRefreshEnabled:(_Bool)arg1;
+ (_Bool)LastReadRefreshEnabled;
+ (void)setShowWithScensEnabled:(_Bool)arg1;
+ (_Bool)showWithScensEnabled;
+ (void)setVideoVisibleEnabled:(_Bool)arg1;
+ (_Bool)videoVisibleEnabled;
+ (void)setFeedVideoEnterBackEnabled:(_Bool)arg1;
+ (_Bool)feedVideoEnterBackEnabled;
+ (void)setArticleFLAnimatedImageViewEnabled:(_Bool)arg1;
+ (_Bool)articleFLAnimatedImageViewEnabled;
+ (void)setReportInWapPageEnabled:(_Bool)arg1;
+ (_Bool)reportInWapPageEnabled;
+ (void)setEssayCommentDetailEnabled:(_Bool)arg1;
+ (_Bool)essayCommentDetailEnabled;
+ (void)setRefreshButtonSettingEnabled:(_Bool)arg1;
+ (_Bool)refreshButtonSettingEnabled;
+ (void)setLaunchedTimes4ShowIntroductionView:(long long)arg1;
+ (long long)launchedTimes4ShowIntroductionView;
+ (id)refreshADDefaultShowLimit;
+ (void)setRefreshADDisable:(_Bool)arg1;
+ (_Bool)RefreshADDisable;
+ (double)refreshDefaultAdFetchInterval;
+ (void)setFeedRefreshADExpireInterval:(double)arg1;
+ (double)feedRefreshADExpireInterval;
+ (_Bool)refectorPhotoAlbumControlEnable;
+ (void)setRefacorPhotoAlbumControlAble:(_Bool)arg1;
+ (void)setShowRefreshButton:(_Bool)arg1;
+ (_Bool)showRefreshButton;
+ (void)setVideoTipServerInterval:(double)arg1;
+ (double)videoTipServerInterval;
+ (void)setVideoTipServerEnabled:(_Bool)arg1;
+ (_Bool)videoTipServerSettingEnabled;
+ (long long)shareIconStye;
+ (void)setShareIconStyle:(long long)arg1;
+ (_Bool)toolbarLabelEnabled;
+ (void)setToolbarLabelEnabled:(_Bool)arg1;
+ (_Bool)CDNBlockEnabled;
+ (void)setCDNBlockEnabled:(_Bool)arg1;
+ (_Bool)detailNewLayoutEnabled;
+ (void)setDetailNewLayoutEnabled:(_Bool)arg1;
+ (_Bool)detailSharedWebViewEnabled;
+ (void)setDetailSharedWebViewEnabled:(_Bool)arg1;
+ (_Bool)detailWKEnabled;
+ (void)setDetailWKEnabled:(_Bool)arg1;
+ (void)setNewNatantStyleInADEnabled:(_Bool)arg1;
+ (_Bool)newNatantStyleInADEnabled;
+ (void)setNewNatantStyleEnabled:(_Bool)arg1;
+ (_Bool)newNatantStyleEnabled;
+ (void)setDetailQuickExitEnabled:(_Bool)arg1;
+ (_Bool)detailQuickExitEnabled;
+ (_Bool)hasLocalVideoSpotVersion;
+ (long long)serverVideoTabSpotVersion;
+ (long long)localVideoTabSpotVersion;
+ (void)saveLocalVideoTabSpotVersion:(long long)arg1;
+ (void)saveServerVideoTabSpotVersion:(long long)arg1;
+ (void)showedVideoTabSpot;
+ (void)setVideoTabSpotServerEnabled:(_Bool)arg1;
+ (_Bool)shouldShowVideoTabSpotServerEnabled;
+ (_Bool)shouldShowVideoTabSpotForVersion:(long long)arg1;
+ (_Bool)saveForwordStatusEnabled;
+ (void)setSaveForwordStatusEnabled:(_Bool)arg1;
+ (void)cleanDrafts;
+ (id)draftForType:(long long)arg1;
+ (void)setDraft:(id)arg1 forType:(long long)arg2;
+ (void)setCrashReporter:(id)arg1;
+ (_Bool)crashlyticsCrashReportEnable;
+ (_Bool)toutiaoCrashReportEnable;
+ (_Bool)umengCrashReportEnable;
+ (void)setUgcCellLineNumber:(id)arg1;
+ (long long)getUgcCellLineNumber:(unsigned long long)arg1;
+ (id)followButtonDefaultColor;
+ (_Bool)followButtonDefaultColorStyleRed;
+ (id)followUnSelectedImageName;
+ (id)followSelectedImageName;
+ (id)followButtonDefaultColorStyle;
+ (id)followButtonColorStringForWap;
+ (id)followButtonDefaultColorDict;
+ (void)setFollowButtonColorTemplate:(id)arg1;
+ (void)setAppseeSampleSetting:(id)arg1;
+ (id)appseeSampleSetting;
+ (void)setGallerySlideDownOutTip:(id)arg1;
+ (_Bool)needToShowSlideDownOutTip;
+ (void)setGalleryTileSwitch:(id)arg1;
+ (_Bool)appGalleryTileSwitchOn;
+ (void)setGallerySlideOutSwitch:(id)arg1;
+ (_Bool)appGallerySlideOutSwitchOn;
+ (void)setPGCAuthorSelfRecommendAllowed:(_Bool)arg1;
+ (_Bool)isPGCAuthorSelfRecommendAllowed;
+ (void)setNewTaobaoSDkEnable:(_Bool)arg1;
+ (_Bool)newTaobaoSDkEnable;
+ (void)saveTeMaiURLs:(id)arg1;
+ (id)getTeMaiURLs;
+ (_Bool)isTeMaiURL:(id)arg1;
+ (void)setKeplerEnable:(_Bool)arg1;
+ (void)setTBSDKEnable:(_Bool)arg1;
+ (_Bool)isKeplerEnable;
+ (_Bool)isTBSDKEnable;
+ (void)setCagetoryGuideCount:(long long)arg1;
+ (long long)cagetoryGuideCount;
+ (void)setDetailActionType:(long long)arg1;
+ (long long)detailActionType;
+ (void)setDetailActionTick:(id)arg1;
+ (id)detailActionTick;
+ (void)setFavorDetailActionType:(long long)arg1;
+ (long long)favorDetailActionType;
+ (void)setFavorDetailActionTick:(id)arg1;
+ (id)favorDetailActionTick;
+ (void)setFavorDetailDialogOrder:(long long)arg1;
+ (long long)favorDetailDialogOrder;
+ (void)setSubscribeCount:(long long)arg1;
+ (long long)subscribeCount;
+ (void)setFavorCount:(long long)arg1;
+ (long long)favorCount;
+ (void)setEnableCacheSizeReport:(_Bool)arg1;
+ (_Bool)enableCacheSizeReport;
+ (void)setEnableJSONModelMonitor:(_Bool)arg1;
+ (_Bool)enableJSONModelMonitor;
+ (void)setEnableDebugRealMonitor:(_Bool)arg1;
+ (_Bool)enableDebugRealMonitor;
+ (void)setEnableCrashMonitor:(_Bool)arg1;
+ (_Bool)enableCrashMonitor;
+ (void)setCheckLog:(_Bool)arg1;
+ (_Bool)checkLog;
+ (void)setMonitorLog:(_Bool)arg1;
+ (_Bool)monitorLog;
+ (void)setUseEncrypt:(_Bool)arg1;
+ (_Bool)useEncrypt;
+ (_Bool)enableSdWebImageMonitor;
+ (void)setEnableSdWebImageMonitor:(_Bool)arg1;
+ (_Bool)isPreloadVideoUseStreamDisabled;
+ (void)setPreloadVideoDisableStream:(_Bool)arg1;
+ (_Bool)isPreloadVideoEnabled;
+ (void)setPreloadVideoEnable:(_Bool)arg1;
+ (id)followTabTipsString;
+ (void)setFollowTabTipsString:(id)arg1;
+ (_Bool)isFollowTabTipsEnable;
+ (void)setFollowTabTipsEnable:(_Bool)arg1;
+ (_Bool)isPreloadFollowEnable;
+ (void)setPreloadFollowEnable:(_Bool)arg1;
+ (_Bool)isEnableArticleReadPosition;
+ (void)setArticleReadPositionEnable:(_Bool)arg1;
+ (_Bool)shouldShowLastReadForCategoryID:(id)arg1;
+ (unsigned long long)getAutoRefreshIntervalForCategoryID:(id)arg1;
+ (id)getChannelControlDict;
+ (void)setChannelControlDict:(id)arg1;
+ (void)removeHomepageUIConfigSimultaneousKey;
+ (void)setHomepageUIConfigSimultaneouslyValid:(_Bool)arg1;
+ (_Bool)homepageUIConfigSimultaneouslyValid;
+ (void)setUploadAccurateTrackFinished:(_Bool)arg1;
+ (_Bool)hasUploadAccurateTrack;
+ (_Bool)isPosterADClickEnabled;
+ (void)setPosterADClickEnabled:(_Bool)arg1;
+ (id)loginEntryList;
+ (void)setLoginEntryList:(id)arg1;
+ (void)setRefactorNaviEnabled:(_Bool)arg1;
+ (_Bool)isVideoOwnPlayerEnabled;
+ (void)setVideoOwnPlayerEnabled:(_Bool)arg1;
+ (void)setIsNetWorkDebugEnable:(_Bool)arg1;
+ (_Bool)isNetWorkDebugEnable;
+ (void)setMaxNSUrlCache:(double)arg1;
+ (double)maxNSUrlCache;
+ (void)setShouldUseKeplerService:(_Bool)arg1;
+ (_Bool)shouldUseKeplerService;
+ (void)setShouldUseALBBService:(_Bool)arg1;
+ (_Bool)shouldUseALBBService;
+ (void)setShouldUseOptimisedLaunch:(_Bool)arg1;
+ (_Bool)shouldUseOptimisedLaunch;
+ (void)setDetailCDNVersion:(unsigned long long)arg1;
+ (unsigned long long)detailCDNVersion;
+ (_Bool)isNewFeedImpressionEnabled;
+ (void)setNewFeedImpressionEnabled:(_Bool)arg1;
+ (id)fetchH5SettingsForAuthor;
+ (void)setH5SettingsForAuthor:(id)arg1;
+ (_Bool)strictDetailJudgementEnabled;
+ (void)setStrictDetailJudgementEnabled:(_Bool)arg1;
+ (_Bool)isSearchOptimizeDisabled;
+ (void)disableSearchOptimize:(_Bool)arg1;
+ (_Bool)isUpgradeUserAfterImageDisplayModelControlled;
+ (void)setIsUpgradeUserAfterImageDisplayModeControlled:(_Bool)arg1;
+ (_Bool)imageDisplayModeFor3GIsSameAs2G;
+ (void)setImageDisplayModeFor3GIsSameAs2GEnable:(_Bool)arg1;
+ (_Bool)isMyFollowSwitchEnabled;
+ (_Bool)isThirdTabFollowEnabled;
+ (_Bool)isThirdTabWeitoutiaoEnabled;
+ (void)setThirdTabWeitoutiaoEnabled:(_Bool)arg1;
+ (id)userVerifyFeedShowArray;
+ (id)userVerifyAvatarIconModelOfType:(id)arg1;
+ (id)userVerifyLabelIconModelOfType:(id)arg1;
+ (id)userVerifyIconModelConfigs;
+ (id)userVerifyConfigs;
+ (void)setUserVerifyConfigs:(id)arg1;
+ (unsigned long long)WeitoutiaoTabListUpdateTipType;
+ (void)setWeitoutiaoTabListUpdateTipType:(unsigned long long)arg1;
+ (_Bool)isCollectDiskSpaceEnable;
+ (void)setCollectDiskSpaceEnable:(_Bool)arg1;
+ (_Bool)isLiveUseOwnPlayerEnabled;
+ (void)setLiveUseOwnPlayerEnabled:(_Bool)arg1;
+ (_Bool)isPicsFollowEnabled;
+ (void)setPicsFollowEnabled:(_Bool)arg1;
+ (_Bool)isV3LogFormatEnabled;
+ (void)setV3LogFormatEnabled:(_Bool)arg1;
+ (_Bool)isRefactorGetDomainsEnabled;
+ (void)setRefactorGetDomainsEnabled:(_Bool)arg1;
+ (_Bool)isRotateTipEnabled;
+ (void)setVideoNewRotateTipEnabled:(_Bool)arg1;
+ (_Bool)enableMonitorFirstHostSuccessRate;
+ (void)setMonitorFirstHostSuccessRateEnable:(_Bool)arg1;
+ (_Bool)enableImageOptimizeStrategy;
+ (void)setUseImageOptimizeStrategyEnable:(_Bool)arg1;
+ (_Bool)enableBugfixSDWebImageDownloader;
+ (void)setBugfixSDWebImageDownloaderEnable:(_Bool)arg1;
+ (_Bool)enableCustomSDDownloaderOperation;
+ (void)setCustomSDDownloaderOperationEnable:(_Bool)arg1;
+ (_Bool)isFirstSplashEnable;
+ (void)setFirstSplashEnable:(_Bool)arg1;
+ (void)setBlackListForClickJump:(id)arg1;
+ (id)blackListForClickJump;
+ (void)setFrobidClickJumpTips:(id)arg1;
+ (id)frobidClickJumpTips;
+ (void)setClickJumpTimeInterval:(double)arg1;
+ (double)clickJumpTimeInterval;
+ (void)setShouldClickJumpControlEnabled:(_Bool)arg1;
+ (_Bool)shouldClickJumpControlEnabled;
+ (void)setWhiteListForAutoJump:(id)arg1;
+ (id)whiteListForAutoJump;
+ (void)setShouldAutoJumpControlEnabled:(_Bool)arg1;
+ (_Bool)shouldAutoJumpControlEnabled;
+ (void)setShouldInterceptAdJump:(_Bool)arg1;
+ (_Bool)shouldInterceptAdJump;
+ (_Bool)isAdGifImageViewEnable;
+ (void)setAdGifImageViewEnable:(_Bool)arg1;
+ (_Bool)isAdImpressionTrack;
+ (void)setAdImpressionTrack:(_Bool)arg1;
+ (_Bool)isAdResPreloadEnable;
+ (void)setAdResPreloadEnable:(_Bool)arg1;
+ (_Bool)isAdUseV2PreloadEnable;
+ (void)setAdUseV2PreloadEnable:(_Bool)arg1;
+ (_Bool)isCanvasEnable;
+ (void)setCanvasEnable:(_Bool)arg1;
+ (_Bool)isCanvasNativeEnable;
+ (void)setCanvasNativeEnable:(_Bool)arg1;
+ (void)setCanvasPreloadStrategy:(id)arg1;
+ (id)canvasPreloadStrategy;
+ (_Bool)isUrlTrackerEnable;
+ (void)setUrlTrackerEnable:(_Bool)arg1;
+ (_Bool)isTemailTrackerEnable;
+ (void)setTemailTrackerEnable:(_Bool)arg1;
+ (_Bool)isAppPreloadEnable;
+ (void)setAppPreloadEnable:(_Bool)arg1;
+ (_Bool)isWebDomCompleteEnable;
+ (void)setWebDomCompleteEnable:(_Bool)arg1;
+ (_Bool)isMZSDKEnable;
+ (void)setMZSDKEnable:(_Bool)arg1;
+ (_Bool)isUAEnable;
+ (void)setUAEnable:(_Bool)arg1;
+ (_Bool)isRNMonitorEnable;
+ (void)setRNMonitorEnable:(_Bool)arg1;
+ (_Bool)isSDKDelayEnable;
+ (void)setSDKDelayEnable:(_Bool)arg1;
+ (_Bool)isRawAdDataEnable;
+ (void)setRawAdDataEnable:(_Bool)arg1;
+ (_Bool)isSKVCBugFixEnable;
+ (void)setSKVCBugFixEnable:(_Bool)arg1;
+ (_Bool)isSKVCLoadEnable;
+ (void)setSKVCLoadEnable:(_Bool)arg1;
+ (_Bool)isVideoBusinessSplitEnabled;
+ (void)setVideoBusinessSplitEnabled:(_Bool)arg1;
+ (double)fetchSettingTimeInterval;
+ (void)setFetchSettingTimeInterval:(double)arg1;
+ (_Bool)isFetchSettingWhenEnterForegroundEnabled;
+ (void)setFetchSettingWhenEnterForegroundEnable:(_Bool)arg1;
+ (_Bool)isGetRemoteCheckNetworkEnabled;
+ (void)setGetRemoteCheckNetworkEnable:(_Bool)arg1;
+ (void)setMakeScreenshotForMethodBEnable:(_Bool)arg1;
+ (_Bool)makeScreenshotForMethodB;
+ (void)setScreenshotShareQR:(id)arg1;
+ (id)screenshotShareQR;
+ (void)setShareTextWithText:(id)arg1;
+ (id)shareText;
+ (void)setScreenshotEnable:(_Bool)arg1;
+ (_Bool)screenshotEnable;
+ (void)setLoadmoreRefreshStyle:(id)arg1 scheme:(id)arg2;
+ (id)loadmoreRefreshStyle:(id)arg1;
+ (double)articleNotifyBarHeight;
+ (_Bool)isNewPullRefreshEnabled;
+ (void)setNewPullRefreshEnabled:(_Bool)arg1;
+ (void)setVideoCompressRefactorEnabled:(_Bool)arg1;
+ (_Bool)isVideoCompressRefactorEnabled;
+ (long long)isVideoFeedCellHeightAjust;
+ (void)setVideoFeedCellHeightAjust:(long long)arg1;
+ (_Bool)isVideoAdAutoPlayedWhenHalfShow;
+ (void)setVideoAdAutoPlayedWhenHalfShow:(_Bool)arg1;
+ (void)setRepostOriginalReviewHint:(id)arg1;
+ (id)repostOriginalReviewHint;
+ (_Bool)isFeedDislikeRefactorEnabled;
+ (void)setFeedDislikeRefactorEnabled:(_Bool)arg1;
+ (_Bool)isDislikeRefactorEnabled;
+ (void)setDislikeRefactorEnabled:(_Bool)arg1;
+ (_Bool)isVideoADReplayBtnEnabled;
+ (void)setVideoADReplayBtnEnabled:(_Bool)arg1;
+ (void)setIcloudBtnEnabled:(_Bool)arg1;
+ (_Bool)isIcloudEabled;
+ (_Bool)isRealnameAuthEncryptDisabled;
+ (void)setRealnameAuthEncryptDisabled:(_Bool)arg1;
+ (_Bool)isReportTyposEnabled;
+ (void)setReportTyposEnabled:(_Bool)arg1;
+ (_Bool)transitionAnimationEnable;
+ (void)setTransitionAnimationEnable:(_Bool)arg1;
+ (_Bool)isIMServerEnable;
+ (void)setIMServerEnabled:(_Bool)arg1;
+ (_Bool)imageTransitionAnimationEnable;
+ (void)setImageTransitionAnimationEnable:(_Bool)arg1;
+ (_Bool)isNewMessageNotificationEnabled;
+ (void)setNewMessageNotificationEnabled:(_Bool)arg1;
+ (_Bool)isPersonalHomeMediaTypeThreeEnable;
+ (void)setPersonalHomeMediaTypeThreeEnable:(_Bool)arg1;
+ (void)setAWEVideoDetailFirstFrame:(id)arg1;
+ (void)setHTSVideoPlayerType:(long long)arg1;
+ (long long)htsVideoPlayerType;
+ (_Bool)htsTabMineIconTipsHasShow;
+ (void)setHTSTabMineIconTipsHasShow:(_Bool)arg1;
+ (id)htsAPPAppleID;
+ (id)htsAppDownloadInfoDict;
+ (void)setHTSAppDownloadInfoDict:(id)arg1;
+ (id)htsTabMineIconURL;
+ (void)setHTSTabMineIconURL:(id)arg1;
+ (_Bool)htsTabBannerEnabled;
+ (id)htsTabBannerInfoDict;
+ (void)setHTSTabBannerInfoDict:(id)arg1;
+ (_Bool)isLaunchHuoShanAppEnabled;
+ (void)setLaunchHuoShanAppEnabled:(_Bool)arg1;
+ (_Bool)isHTSAppInstalled;
+ (long long)forthTabInitialVisibleCategoryIndex;
+ (void)setForthTabInitialVisibleCategoryIndex:(long long)arg1;
+ (_Bool)isForthTabHTSEnabled;
+ (_Bool)isThirdTabHTSEnabled;
+ (void)setHTSTabSwitch:(long long)arg1;
+ (id)awemeAPPAppleID;
+ (_Bool)isAWEMEAppInstalled;
+ (_Bool)isAppLogSendOptimizeEnabled;
+ (void)setAppLogSendOptimizeEnabled:(_Bool)arg1;
+ (_Bool)isNewLaunchOptimizeEnabled;
+ (void)setNewLaunchOptimizeEnabled:(_Bool)arg1;
+ (_Bool)playerImageEnhancementEnabel;
+ (void)setPlayerImageEnhancementEnabel:(_Bool)arg1;
+ (_Bool)isUGCNewCellEnable;
+ (void)setUGCNewCellEnable:(_Bool)arg1;
+ (_Bool)isUGCThreadPostImageWebP;
+ (void)setUGCThreadPostImageWebP:(_Bool)arg1;
+ (_Bool)handleInterruptTrickMethodEnable;
+ (void)setHandleInterruptTrickMethodEnable:(_Bool)arg1;
+ (_Bool)isUGCEmojiQuickInputEnabled;
+ (void)setUGCEmojiQuickInputEnabled:(_Bool)arg1;
+ (id)followChannelUploadContactsText;
+ (void)setFollowChannelUploadContactsText:(id)arg1;
+ (_Bool)followChannelUploadContactsEnable;
+ (void)setFollowChannelUploadContactsEnable:(_Bool)arg1;
+ (_Bool)followChannelMessageEnable;
+ (void)setFollowChannelMessageEnable:(_Bool)arg1;
+ (_Bool)followChannelColdStartEnable;
+ (void)setFollowChannelColdStartEnable:(_Bool)arg1;
+ (_Bool)weiboExpirationDetectEnable;
+ (void)setWeiboExpirationDetectEnable:(_Bool)arg1;
+ (long long)feedDetailShareImageStyle;
+ (void)setFeedDetailShareImageStyle:(long long)arg1;
+ (long long)homeClickActionTypeForCategoryID:(id)arg1;
+ (_Bool)homeClickLoadmoreEnableForCategoryID:(id)arg1;
+ (_Bool)homeClickLoadmoreEnable;
+ (_Bool)homeClickRefreshEnable;
+ (_Bool)homeClickNoAction;
+ (void)setFeedHomeClickRefreshSetting:(id)arg1;
+ (_Bool)webOfflineEnable;
+ (void)setWebOfflineEnable:(_Bool)arg1;
+ (id)searchTemplateRoute;
+ (void)setFeTemplateRouteConfig:(id)arg1;
+ (id)feedStartTab;
+ (void)setFeedStartTabConfig:(id)arg1;
+ (long long)firstTabStyle;
+ (void)setCategoryTabAllConfig:(id)arg1;
+ (double)clientImprRecycleTimeLimit;
+ (_Bool)clientImprRecycleEnable;
+ (void)setClientImprRecycleSettings:(id)arg1;
+ (_Bool)feedListImpressionRecordFromCellDisplay;
+ (_Bool)loadLocalUseMemoryCache;
+ (_Bool)newItemIndexStrategyEnable;
+ (long long)feedLoadLocalStrategy;
+ (_Bool)useRealUnixTimeEnable;
+ (_Bool)useNewSearchTransitionAnimationForVideo;
+ (_Bool)useNewSearchTransitionAnimation;
+ (_Bool)useImageVideoNewApi;
+ (_Bool)showMyAppFansView;
+ (_Bool)enableRequestIDReport;
+ (void)setFeedLoadLocalStrategy:(id)arg1;
+ (_Bool)feedCaregoryAddHiddenEnable;
+ (void)setFeedCaregoryAddHiddenEnable:(_Bool)arg1;
+ (long long)preloadmoreOutScreenNumber;
+ (void)setPreloadmoreOutScreenNumber:(long long)arg1;
+ (_Bool)searchHintSuggestEnable;
+ (void)setSearchHintSuggestEnable:(_Bool)arg1;
+ (_Bool)feedSearchEntryEnable;
+ (_Bool)feedSearchEntrySettingsSaved;
+ (void)setFeedSearchEntryEnable:(_Bool)arg1;
+ (_Bool)fantasyWindowAlwaysResizeable;
+ (_Bool)fantasyWindowResizeable;
+ (_Bool)fantasyCountDownEnable;
+ (void)setFeedFantasyLocalSettings:(id)arg1;
+ (long long)feedTipsShowStrategyColor;
+ (long long)feedTipsShowStrategyType;
+ (_Bool)feedTipsShowStrategyEnable;
+ (void)setFeedTipsShowStrategyDict:(id)arg1;
+ (id)feedRefreshCategoryWhiteList;
+ (_Bool)feedLoadingInitImageEnable;
+ (_Bool)feedRefreshClearAllEnable;
+ (_Bool)feedLastReadCellShowEnable;
+ (_Bool)feedLoadMoreWithNewData;
+ (void)updateRefreshHistoryTip;
+ (_Bool)showRefreshHistoryTip;
+ (void)setFeedRefreshStrategyDict:(id)arg1;
+ (_Bool)detailPushTipsEnable;
+ (void)setDetailPushTipsEnable:(_Bool)arg1;
+ (double)feedAutoInsertTimeInterval;
+ (long long)feedAutoInsertTimes;
+ (_Bool)feedAutoInsertEnable;
+ (void)setFeedAutoInsertDict:(id)arg1;
+ (_Bool)isRepeatedAdDisable;
+ (void)setRepeatedAdDisable:(_Bool)arg1;
+ (long long)imCommunicateStrategy;
+ (void)setimCommunicateStrategy:(long long)arg1;
+ (_Bool)dislikeEnable;
+ (void)setDislikeEnable:(_Bool)arg1;
+ (_Bool)appBootEnable;
+ (void)setAppBootEnable:(_Bool)arg1;
+ (void)setMiniProgramPathTemplate:(id)arg1;
+ (id)miniProgramPathTemplate;
+ (void)setMiniProgramID:(id)arg1;
+ (id)miniProgramID;
+ (_Bool)openInSafariWindowEnable;
+ (void)setOpenInSafariWindowEnable:(_Bool)arg1;
+ (_Bool)threeTopBarEnable;
+ (void)setThreeTopBarEnable:(_Bool)arg1;
+ (id)commonParameterNameWithIndex:(long long)arg1;
+ (void)setCommonParameterNameWithName:(id)arg1 index:(long long)arg2;
+ (id)commonParameterValueWithIndex:(long long)arg1;
+ (void)setCommonParameterWithValue:(id)arg1 index:(long long)arg2;
+ (long long)videoDetailRelatedStyle;
+ (void)setVideoDetailRelatedStyle:(long long)arg1;
+ (id)autoUploadContactsInterval;
+ (void)setAutoUploadContactsInterval:(id)arg1;
+ (id)shortVideoScrollDirection;
+ (void)setShortVideoScrollDirection:(id)arg1;
+ (id)shortVideoFirstUsePromptType;
+ (void)setShortVideoFirstUsePromptType:(id)arg1;
+ (_Bool)shortVideoDetailInfiniteScrollEnable;
+ (void)setShortVideoDetailInfiniteScrollEnable:(_Bool)arg1;
+ (_Bool)shouldMonitorMemoryWarningHierarchy;
+ (void)setShouldMonitorMemoryWarningHierarchy:(_Bool)arg1;
+ (long long)nightShiftWindowLevel;
+ (void)setNightShiftWindowLevel:(long long)arg1;
+ (id)nightShiftSettingSwitchTipContent;
+ (void)setNightShiftSettingSwitchTipContent:(id)arg1;
+ (id)nightShiftBlackRemoteViewControllerClassNameArray;
+ (void)setNightShiftBlackRemoteViewControllerClassNameArray:(id)arg1;
+ (id)nightShiftRemoteViewControllerClassNameArray;
+ (void)setNightShiftRemoteViewControllerClassNameArray:(id)arg1;
+ (long long)nightShiftModeTipViewAutoDismissTime;
+ (void)setNightShiftModeTipViewAutoDismissTime:(long long)arg1;
+ (long long)nightShiftModeTipViewTotalTime;
+ (void)setNightShiftModeTipViewTotalTime:(long long)arg1;
+ (long long)nightShiftModeUnnecessaryEndTime;
+ (void)setNightShiftModeUnnecessaryEndTime:(long long)arg1;
+ (long long)nightShiftModeUnnecessaryStartTime;
+ (void)setNightShiftModeUnnecessaryStartTime:(long long)arg1;
+ (long long)nightShiftModeEndTime;
+ (void)setNightShiftModeEndTime:(long long)arg1;
+ (long long)nightShiftModeStartTime;
+ (void)setNightShiftModeStartTime:(long long)arg1;
+ (id)nightShiftVideoModeWindowColorHex;
+ (void)setNightShiftVideoModeWindowColorHex:(id)arg1;
+ (id)nightShiftWindowColorHex;
+ (void)setNightShiftWindowColorHex:(id)arg1;
+ (long long)nightShiftModeTipViewPresentTime;
+ (void)setNightShiftModeTipViewPresentTime:(long long)arg1;
+ (void)setNightShiftModeTipViewDisable;
+ (void)nightShiftModeTipViewShowCountPlus;
+ (_Bool)nightShiftModeTipViewEnable;
+ (id)nightShiftModeBubbleTipViewContent;
+ (void)setNightShiftModeBubbleTipViewContent:(id)arg1;
+ (id)openNightShiftModeTipViewContent;
+ (void)setOpenNightShiftModeTipViewContent:(id)arg1;
+ (id)nightShiftModeTipViewContent;
+ (void)setNightShiftModeTipViewContent:(id)arg1;
+ (id)openNightShiftModeTipViewTitle;
+ (void)setOpenNightShiftModeTipViewTitle:(id)arg1;
+ (id)nightShiftModeTipViewTitle;
+ (void)setNightShiftModeTipViewTitle:(id)arg1;
+ (_Bool)nightShiftModeEnable;
+ (void)setNightShiftModeEnable:(_Bool)arg1;
+ (void)setResurfaceTrackForStartupEnable:(_Bool)arg1;
+ (_Bool)resurfaceTrackForStartupEnable;
+ (_Bool)resurfaceTabbarDisable;
+ (void)setResurfaceTabbarDisable:(_Bool)arg1;
+ (_Bool)resurfaceGuideWeakEnable;
+ (void)setResurfaceGuideWeakEnable:(_Bool)arg1;
+ (id)resurfaceBubbleTipContent;
+ (void)setResurfaceBubbleTipContent:(id)arg1;
+ (_Bool)resurfaceEnable;
+ (void)setResurfaceEnable:(_Bool)arg1;
+ (_Bool)pushSDKEnable;
+ (void)setPushSDKEnable:(_Bool)arg1;
+ (_Bool)appUpdateEnable;
+ (void)setAppUpdateEnable:(_Bool)arg1;
+ (id)commonwealTips;
+ (void)setCommonwealTips:(id)arg1;
+ (long long)commonwealDefaultShowTipTime;
+ (void)setCommonwealDefaultShowTipTime:(long long)arg1;
+ (id)commonwealInfo;
+ (void)setCommonwealInfo:(id)arg1;
+ (_Bool)commonwealEntranceEnable;
+ (void)setCommonwealEntranceEnable:(_Bool)arg1;
+ (_Bool)isQuickFeedbackGateShow;
+ (_Bool)isLoginPlatformPhoneOnly;
+ (void)setInHouseSetting:(id)arg1;
+ (_Bool)multiDiggEnable;
+ (void)setMultiDiggEnable:(_Bool)arg1;
+ (void)setShouldTrackLocalImage:(_Bool)arg1;
+ (_Bool)shouldTrackLocalImage;
+ (void)setNavBarShowFansMinNum:(long long)arg1;
+ (long long)navBarShowFansMinNum;
+ (void)setArticleNavBarShowFansNumEnable:(_Bool)arg1;
+ (_Bool)articleNavBarShowFansNumEnable;
+ (void)setRecorderMaxLength:(double)arg1;
+ (double)recorderMaxLength;
+ (_Bool)chatroomVideoLiveSDKEnable;
+ (void)setChatroomVideoLiveSDKEnable:(_Bool)arg1;
+ (void)setSensetimeLicenceMd5:(id)arg1;
+ (void)setSensetimeLicenceURL:(id)arg1;
+ (id)sensetimeLicenceMd5;
+ (id)sensetimeLicenceURL;
+ (_Bool)shouldArticleShareWithPGCName;
+ (void)setArticleShareWithPGCName:(_Bool)arg1;
+ (_Bool)articleTitleLogoEnable;
+ (void)setArticleTitleLogoEnbale:(_Bool)arg1;
+ (_Bool)searchCancelClickActionChangeEnable;
+ (void)setSearchCancelClickActionChangeEnable:(_Bool)arg1;
+ (void)setClearLocalFeedDataList:(id)arg1;
+ (id)clearLocalFeedDataList;
+ (_Bool)disableGetLocalData;
+ (void)setGetLocalDataDisable:(_Bool)arg1;
+ (id)HomePageAddVSettings;
+ (void)setHomePageAddVSettings:(id)arg1;
+ (id)HomePageAddAuthSettings;
+ (void)setHomePageAddAuthSettings:(id)arg1;
+ (id)videoTabMainCategoryName;
+ (void)setVideoTabMainCategoryName:(id)arg1;
+ (void)setCategoryNameConfigDict:(id)arg1;
+ (_Bool)enableWXShareCallback;
+ (void)setEnableWXShareCallback:(_Bool)arg1;
+ (_Bool)enableArticleWXShare;
+ (void)setEnableArticleWXShare:(_Bool)arg1;
+ (void)setScpJumpOutWhiteList:(id)arg1;
+ (id)scpJumpOutWhiteList;
+ (void)setScpJumpOutWhiteListEnable:(_Bool)arg1;
+ (_Bool)scpJumpOutWhiteListEnable;
+ (long long)localCspReportFlag;
+ (void)setLocalCspReportFlag:(long long)arg1;
+ (long long)feCspReportFlag;
+ (void)setFeCspReportFlag:(long long)arg1;
+ (_Bool)cspJsCheckEnabled;
+ (void)setCspJsCheckEnable:(_Bool)arg1;
+ (_Bool)cspReportEnabled;
+ (void)setCspReportEnable:(_Bool)arg1;
+ (void)saveArticleCspVersion;
+ (id)articleCspFetchURL;
+ (id)articleCspNewVersionURL;
+ (void)setNewArticleCspURL:(id)arg1;
+ (_Bool)enableUGCDislikeFilter;
+ (void)setEnableUGCDislikeFilter:(_Bool)arg1;
@property(copy, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
@property(nonatomic) _Bool ssIPhoneSupportRotate; // @synthesize ssIPhoneSupportRotate=_ssIPhoneSupportRotate;
- (void).cxx_destruct;

@end

