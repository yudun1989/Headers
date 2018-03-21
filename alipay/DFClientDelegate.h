//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class DFContext, NSString, UIWindow;

@interface DFClientDelegate : UIResponder <UNUserNotificationCenterDelegate, UIApplicationDelegate>
{
    double _lastReportActive;
    _Bool _bootUpDone;
    _Bool _isReceivePush;
    _Bool _bootingUpFromRemoteNotification;
    _Bool _bootingUpFromLocalNotification;
    DFContext *_context;
    UIWindow *_window;
}

+ (id)sharedDelegate;
@property(nonatomic) _Bool bootingUpFromLocalNotification; // @synthesize bootingUpFromLocalNotification=_bootingUpFromLocalNotification;
@property(nonatomic) _Bool bootingUpFromRemoteNotification; // @synthesize bootingUpFromRemoteNotification=_bootingUpFromRemoteNotification;
@property(nonatomic) _Bool isReceivePush; // @synthesize isReceivePush=_isReceivePush;
@property(nonatomic) _Bool bootUpDone; // @synthesize bootUpDone=_bootUpDone;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) DFContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleNotificationAsLocal:(id)arg1 response:(id)arg2;
- (void)handleNotificationAsRemote:(id)arg1 launching:(_Bool)arg2;
- (void)handleCategoryAction:(id)arg1 launching:(_Bool)arg2;
- (_Bool)containsCategory:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setupUserNotificationCenter;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleShortCutItem:(id)arg1;
- (id)parseUrlQueryValueWithUrl:(id)arg1 key:(id)arg2;
- (void)startBootLoader;
- (void)logLaunchApplicationByScheme:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 launching:(_Bool)arg2;
- (_Bool)bootUp;
- (void)handleUserActivityCallback:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (double)usedMemory;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)localNotificationRemoteLogging:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

