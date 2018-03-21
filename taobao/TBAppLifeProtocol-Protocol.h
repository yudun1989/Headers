//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, NSNotification, NSString, NSURL, NSUserActivity, UIApplication, UIApplicationShortcutItem, UILocalNotification;
@protocol TBAppConfigurationProtocol;

@protocol TBAppLifeProtocol <NSObject>

@optional
- (void)didReceiveMessageNotification:(NSNotification *)arg1;
- (void)application:(UIApplication *)arg1 didReceiveLocalNotification:(UILocalNotification *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2 fetchCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (void)application:(UIApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (void)application:(UIApplication *)arg1 performFetchWithCompletionHandler:(void (^)(unsigned long long))arg2;
- (_Bool)application:(UIApplication *)arg1 continueUserActivity:(NSUserActivity *)arg2 restorationHandler:(void (^)(NSArray *))arg3;
- (void)application:(UIApplication *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (void)handleAppWillResignActiveNotification:(NSNotification *)arg1;
- (void)handleAppDidEnterBackgroundNotification:(NSNotification *)arg1;
- (void)handleAppDidBecomeActiveNotification:(NSNotification *)arg1;
- (void)handleAppDidFinishLaunchingNotification:(NSNotification *)arg1;
- (void)homePageDidFinishLaunchingWithConfiguration:(id <TBAppConfigurationProtocol>)arg1;
- (void)appDidFinishLaunchingWithConfiguration:(id <TBAppConfigurationProtocol>)arg1;
@end

