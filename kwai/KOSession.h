//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KOLoginWebViewControllerDelegate-Protocol.h"

@class KOLoginTypeSelectorController, KOLoginWebViewController, NSDictionary, NSMutableArray, NSString, NSTimer, UIColor, UIViewController;

@interface KOSession : NSObject <KOLoginWebViewControllerDelegate>
{
    NSString *_appBundleID;
    NSString *_appKey;
    NSString *_redirectUri;
    NSString *_accessToken;
    NSString *_refreshToken;
    _Bool _isRefreshingAccessToken;
    NSMutableArray *_pendingTasks;
    _Bool _isUpgradingGrant;
    CDUnknownBlockType _sessionCompletionHandler;
    KOLoginWebViewController *_webLoginController;
    NSDictionary *_authParams;
    CDUnknownBlockType _ageAuthCompletionHandler;
    _Bool _automaticPeriodicRefresh;
    _Bool _presentedViewBarTranslucent;
    long long _state;
    UIViewController *_presentingViewController;
    long long _presentedViewBarStyle;
    UIColor *_presentedViewBarTintColor;
    UIColor *_presentedViewBarButtonTintColor;
    KOLoginTypeSelectorController *_loginSelectorViewController;
    NSTimer *_tokenInfoTimer;
}

+ (void)handleDidEnterBackground;
+ (void)handleDidBecomeActive;
+ (_Bool)handleOpenURL:(id)arg1;
+ (_Bool)isStoryPostCallback:(id)arg1;
+ (_Bool)isKakaoLinkCallback:(id)arg1;
+ (_Bool)isKakaoAgeAuthCallback:(id)arg1;
+ (_Bool)isKakaoAccountLoginCallback:(id)arg1;
+ (id)sharedSession;
+ (id)createInstance;
@property(retain, nonatomic) NSTimer *tokenInfoTimer; // @synthesize tokenInfoTimer=_tokenInfoTimer;
@property(retain, nonatomic) KOLoginTypeSelectorController *loginSelectorViewController; // @synthesize loginSelectorViewController=_loginSelectorViewController;
@property(retain, nonatomic) UIColor *presentedViewBarButtonTintColor; // @synthesize presentedViewBarButtonTintColor=_presentedViewBarButtonTintColor;
@property(retain, nonatomic) UIColor *presentedViewBarTintColor; // @synthesize presentedViewBarTintColor=_presentedViewBarTintColor;
@property(nonatomic, getter=isPresentedViewBarTranslucent) _Bool presentedViewBarTranslucent; // @synthesize presentedViewBarTranslucent=_presentedViewBarTranslucent;
@property(nonatomic) long long presentedViewBarStyle; // @synthesize presentedViewBarStyle=_presentedViewBarStyle;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic, getter=isAutomaticPeriodicRefresh) _Bool automaticPeriodicRefresh; // @synthesize automaticPeriodicRefresh=_automaticPeriodicRefresh;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)requestTokensWithCode:(id)arg1;
- (void)refreshAccessToken;
- (void)postSessionDidChangeNotificationOnMainThread;
- (void)cancelPendingTasksWithError:(id)arg1;
- (void)resumePendingTasks;
- (void)pendTask:(id)arg1;
- (_Bool)isRefreshingAccessToken;
- (void)logoutAndCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dismissLoginSelectorView;
- (void)clearWebCookies;
- (void)close;
- (void)webViewController:(id)arg1 didAgeAuthResultWithError:(id)arg2;
- (void)webViewController:(id)arg1 didFailedUpgradeGrant:(id)arg2;
- (void)webViewController:(id)arg1 didCancelWithError:(id)arg2;
- (void)showNewApprovalViaWebView:(id)arg1;
- (void)loginViaWebView:(_Bool)arg1;
- (void)loginViaKakaoStory;
- (void)loginViaKakaoTalk;
- (id)dataString;
- (id)jsonString:(id)arg1;
- (id)extraAuthParams;
- (void)didSelectLoginType:(long long)arg1;
- (_Bool)hasApprovalProjectTypeParam:(id)arg1;
- (void)showAgeAuthWithAuthLevel:(long long)arg1 authLimit:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showNewApproval:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1 authParams:(id)arg2 authTypes:(id)arg3;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1 authParams:(id)arg2 authType:(long long)arg3;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1 authParams:(id)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleDidBecomeActive;
- (void)handleDidEnterBackground;
- (void)stopTokenInfoTimer;
- (void)starTokenInfoTimer:(double)arg1;
- (void)requestAccessTokenInfo;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)isOpen;
- (_Bool)isAccountIntegrationSupportedInStory;
- (_Bool)isAccountIntegrationSupportedInTalk;
- (_Bool)kompassStoryAppAuthAvailable;
- (_Bool)kompassAppAuthAvailable;
- (void)dealloc;
- (id)init;
- (id)initWithAppKey:(id)arg1 redirectUri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

