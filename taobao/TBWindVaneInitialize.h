//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAppLifeProtocol-Protocol.h"

@class NSString, UIWindow;

@interface TBWindVaneInitialize : NSObject <TBAppLifeProtocol>
{
}

+ (void)initWindVaneConfig:(id)arg1;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)initializeAfterLogout;
- (void)initializeAfterLogin;
- (void)clearCache:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)initWindVaneWithConfiguration:(id)arg1;
- (void)homePageDidFinishLaunchingWithConfiguration:(id)arg1;
- (void)appDidFinishLaunchingWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

