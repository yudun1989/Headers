//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSActivity-Protocol.h"
#import "KSThirdPartyOAuth-Protocol.h"
#import "KSURLHandler-Protocol.h"
#import "WeiboSDKDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface KSWeiboService : NSObject <KSURLHandler, WeiboSDKDelegate, KSThirdPartyOAuth, KSActivity>
{
    _Bool _loginRequestSent;
    _Bool _onceEnterBackgroundAfterRequestSent;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _activityCompletion;
    unsigned long long _activityStatus;
}

+ (_Bool)isAvailable;
+ (_Bool)isNativeAvailable;
+ (id)shareService;
@property(nonatomic) _Bool onceEnterBackgroundAfterRequestSent; // @synthesize onceEnterBackgroundAfterRequestSent=_onceEnterBackgroundAfterRequestSent;
@property(nonatomic) _Bool loginRequestSent; // @synthesize loginRequestSent=_loginRequestSent;
@property(nonatomic) unsigned long long activityStatus; // @synthesize activityStatus=_activityStatus;
@property(copy, nonatomic) CDUnknownBlockType activityCompletion; // @synthesize activityCompletion=_activityCompletion;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (_Bool)activityAvailable;
- (void)performActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPerformActivityItems:(id)arg1;
- (id)activityType;
- (id)lastUseOAuthDate;
- (void)didReceiveSinaSession:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSDictionary *OAuthParams;
@property(readonly, nonatomic) NSString *platformName;
- (void)loginWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)logout;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (id)init;
- (void)didReceiveApplicationDidEnterBackground:(id)arg1;
- (void)didReceiveApplicationDidBecomeActive:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
