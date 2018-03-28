//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BDSDKApiDelegate-Protocol.h"
#import "TTAccountAuthProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface TTAccountAuthTTFinance : NSObject <BDSDKApiDelegate, TTAccountAuthProtocol>
{
    _Bool _isSDKAuthorizing;
    _Bool _isSSOAuthorizing;
    _Bool _isInBackground;
    _Bool _isTTFinanceAuthResp;
    _Bool _newPlatform;
    NSString *_appId;
    NSString *_scope;
    NSDictionary *_customUserInfo;
    NSString *_code;
    CDUnknownBlockType _willLoginHandler;
    CDUnknownBlockType _loginCompletedHandler;
}

+ (id)errMsgForErrCode:(long long)arg1;
+ (id)defaultUserInfo;
+ (id)stateString;
+ (id)scopeString;
+ (long long)platformProductType;
+ (id)getAppInstallUrl;
+ (id)displayName;
+ (id)platformAppID;
+ (id)platformName;
+ (long long)platformType;
+ (id)currentVersion;
+ (_Bool)isAppAvailable;
+ (_Bool)isAppInstalled;
+ (_Bool)isSupportCustomWebSSO;
+ (_Bool)isSupportWebSSO;
+ (_Bool)isSupportSSO;
+ (_Bool)handleOpenURL:(id)arg1;
+ (void)registerApp:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType loginCompletedHandler; // @synthesize loginCompletedHandler=_loginCompletedHandler;
@property(copy, nonatomic) CDUnknownBlockType willLoginHandler; // @synthesize willLoginHandler=_willLoginHandler;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSDictionary *customUserInfo; // @synthesize customUserInfo=_customUserInfo;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic, getter=isNewPlatform) _Bool newPlatform; // @synthesize newPlatform=_newPlatform;
- (void).cxx_destruct;
- (void)getUserInfoWithAuthResponse:(id)arg1 waitUtilGetUserInfo:(_Bool)arg2;
- (void)requestLoginCallbackWithAuthResponse:(id)arg1;
- (void)loginDidFinishWithUser:(id)arg1 error:(id)arg2 response:(id)arg3;
- (void)authorizeDidFinishWithErrCode:(long long)arg1 error:(id)arg2 code:(id)arg3 state:(id)arg4;
- (void)didReceiveResponse:(id)arg1;
- (void)sdkAuthorizeWithScope:(id)arg1 openID:(id)arg2 customUserInfo:(id)arg3;
- (void)customWapAuthorize;
- (void)authorizeInCustomWebView:(_Bool)arg1 withCustomUserInfo:(id)arg2;
- (void)requestLogout:(CDUnknownBlockType)arg1;
- (void)requestLoginByCustomWebView:(_Bool)arg1 willLogin:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestLoginByCustomWebView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)__laziedRegisterSDKIfNeeded__;
- (_Bool)handleOpenURL:(id)arg1;
- (void)registerApp:(id)arg1;
- (void)tryCancelAuthWhenAppDidBeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

