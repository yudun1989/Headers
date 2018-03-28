//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTAccountLoginManager : NSObject
{
}

+ (void)hideLoginAlert;
+ (void)showLoginAlert;
+ (_Bool)isLoginAlertShowing;
+ (void)requestLogoutPlatformByName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestLogoutPlatformByType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)canTencentQQSSOInCurrentTarget;
+ (void)requestLoginPlatformByName:(id)arg1 forceUseWebView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestLoginPlatformByName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestLoginPlatformByType:(long long)arg1 forceUseWebView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestLoginPlatformByType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)showLoginAlertWithTitle:(id)arg1 source:(id)arg2 inSuperView:(id)arg3 moreActionConf:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)showLoginAlertWithType:(unsigned long long)arg1 source:(id)arg2 inSuperView:(id)arg3 moreActionConf:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)showLoginAlertWithTitle:(id)arg1 source:(id)arg2 inSuperView:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)showLoginAlertWithType:(unsigned long long)arg1 source:(id)arg2 inSuperView:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)showLoginAlertWithType:(unsigned long long)arg1 source:(id)arg2 moreActionConf:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)showLoginAlertWithTitle:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)showLoginAlertWithType:(unsigned long long)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)presentLoginViewControllerFromVC:(id)arg1 type:(long long)arg2 source:(id)arg3 subscribeCompletion:(CDUnknownBlockType)arg4;
+ (id)presentLoginViewControllerFromVC:(id)arg1 title:(id)arg2 source:(id)arg3 isPasswordStyle:(_Bool)arg4 excludedPlatforms:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)presentLoginViewControllerFromVC:(id)arg1 title:(id)arg2 source:(id)arg3 isPasswordStyle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)presentLoginViewControllerFromVC:(id)arg1 type:(long long)arg2 source:(id)arg3 isPasswordStyle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)presentLoginViewControllerFromVC:(id)arg1 title:(id)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)presentLoginViewControllerFromVC:(id)arg1 title:(id)arg2 source:(id)arg3 excludedPlatforms:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)presentLoginViewControllerFromVC:(id)arg1 type:(long long)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (long long)defaultLoginUIStyle;
+ (void)setDefaultLoginUIStyleFor:(long long)arg1;

@end

