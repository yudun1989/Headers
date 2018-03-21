//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliHAAppLifeProtocol-Protocol.h"
#import "AliHAUserEventProtocol-Protocol.h"
#import "AliHAVCLifeProtocol-Protocol.h"

@class NSString, UIViewController;

@interface TBPageLoadMonitorOnline : NSObject <AliHAVCLifeProtocol, AliHAAppLifeProtocol, AliHAUserEventProtocol>
{
    _Bool _isLaunchInvalidate;
    _Bool _isResignActive;
    _Bool _isAppLaunched;
    _Bool _isVaildUpdateTime;
    unsigned long long _lastClickTime;
    unsigned long long _launchStartTime;
    unsigned long long _launchEndTime;
    unsigned long long _renderEndTime;
    UIViewController *_recentPushVC;
    UIViewController *_curRealViewController;
}

+ (void)load;
@property(nonatomic) __weak UIViewController *curRealViewController; // @synthesize curRealViewController=_curRealViewController;
@property(nonatomic) __weak UIViewController *recentPushVC; // @synthesize recentPushVC=_recentPushVC;
@property(nonatomic) unsigned long long renderEndTime; // @synthesize renderEndTime=_renderEndTime;
@property(nonatomic) unsigned long long launchEndTime; // @synthesize launchEndTime=_launchEndTime;
@property(nonatomic) unsigned long long launchStartTime; // @synthesize launchStartTime=_launchStartTime;
@property(nonatomic) _Bool isVaildUpdateTime; // @synthesize isVaildUpdateTime=_isVaildUpdateTime;
@property(nonatomic) unsigned long long lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(nonatomic) _Bool isAppLaunched; // @synthesize isAppLaunched=_isAppLaunched;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isLaunchInvalidate; // @synthesize isLaunchInvalidate=_isLaunchInvalidate;
- (void).cxx_destruct;
- (void)uploadPerformanceData:(id)arg1 loadTime:(double)arg2 networkRequestCost:(double)arg3 isFromTouchEvent:(_Bool)arg4 isLauncher:(_Bool)arg5;
- (void)calculateLoadTime:(unsigned long long)arg1 andEndTime:(unsigned long long)arg2 andRenderTime:(unsigned long long)arg3 andCost:(double *)arg4 andOldCost:(double *)arg5;
- (void)launchPerformance:(_Bool)arg1;
- (void)loadVCPerformance:(_Bool)arg1;
- (void)finishPageLoad:(_Bool)arg1;
- (void)updateLoadPerformance:(id)arg1;
- (void)startTrace:(id)arg1 startTime:(unsigned long long)arg2;
- (id)init;
- (void)checkPageLoad:(id)arg1;
- (void)onViewDidDisappear:(_Bool)arg1 viewController:(id)arg2;
- (void)onViewDidLayoutSubviews:(id)arg1;
- (void)onViewDidAppear:(_Bool)arg1 viewController:(id)arg2;
- (void)onUIViewLayoutSubviews;
- (void)onNavigationDidEndTransitionFromView:(id)arg1 toView:(id)arg2;
- (void)onPageChange:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 args:(id)arg4;
- (void)onApplicationEnterForeground;
- (void)onApplicationEnterBackground;
- (void)onApplicationBecomeActive;
- (void)onApplicationResignActive;
- (void)onApplicationOpenFromURL:(id)arg1 sourceApplication:(id)arg2;
- (void)onUserSwipe;
- (void)onUserTap;
- (void)onUserEvent;
- (void)setViewController:(id)arg1 withHaveLayout:(_Bool)arg2;
- (void)setViewController:(id)arg1 withLayoutTime:(unsigned long long)arg2;
- (void)setViewController:(id)arg1 withStartTime:(unsigned long long)arg2;
- (id)appBootType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

