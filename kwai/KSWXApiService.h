//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSActivity-Protocol.h"
#import "KSThirdPartyOAuth-Protocol.h"
#import "KSURLHandler-Protocol.h"
#import "KSWXApiServiceDelegate-Protocol.h"
#import "WXApiDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIView;
@protocol KSWXApiServiceDelegate;

@interface KSWXApiService : NSObject <KSWXApiServiceDelegate, KSURLHandler, WXApiDelegate, KSThirdPartyOAuth, KSActivity>
{
    _Bool _loginRequestSent;
    _Bool _onceEnterBackgroundAfterRequestSent;
    int _buyStatus;
    id <KSWXApiServiceDelegate> _delegate;
    UIView *_view;
    NSString *_wechatState;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSString *_accessToken;
    NSString *_openId;
    CDUnknownBlockType _activityCompletion;
    unsigned long long _activityStatus;
    CDUnknownBlockType _buyOnSuccess;
    CDUnknownBlockType _buyOnError;
    CDUnknownBlockType _buyOnCancel;
    NSArray *_avaliableWXAppIds;
}

+ (_Bool)isAvailable;
+ (_Bool)isNativeAvailable;
+ (id)shareService;
@property(nonatomic) _Bool onceEnterBackgroundAfterRequestSent; // @synthesize onceEnterBackgroundAfterRequestSent=_onceEnterBackgroundAfterRequestSent;
@property(nonatomic) _Bool loginRequestSent; // @synthesize loginRequestSent=_loginRequestSent;
@property(retain, nonatomic) NSArray *avaliableWXAppIds; // @synthesize avaliableWXAppIds=_avaliableWXAppIds;
@property(copy, nonatomic) CDUnknownBlockType buyOnCancel; // @synthesize buyOnCancel=_buyOnCancel;
@property(copy, nonatomic) CDUnknownBlockType buyOnError; // @synthesize buyOnError=_buyOnError;
@property(copy, nonatomic) CDUnknownBlockType buyOnSuccess; // @synthesize buyOnSuccess=_buyOnSuccess;
@property(nonatomic) unsigned long long activityStatus; // @synthesize activityStatus=_activityStatus;
@property(copy, nonatomic) CDUnknownBlockType activityCompletion; // @synthesize activityCompletion=_activityCompletion;
@property(nonatomic) int buyStatus; // @synthesize buyStatus=_buyStatus;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *wechatState; // @synthesize wechatState=_wechatState;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <KSWXApiServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)activityType;
- (_Bool)activityAvailable;
- (void)performActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPerformActivityItems:(id)arg1;
- (id)lastUseOAuthDate;
@property(readonly, nonatomic) NSString *platformName;
@property(readonly, nonatomic) NSDictionary *OAuthParams;
- (void)didReceiveObtainWechatError:(id)arg1;
- (void)didReceiveObtainWechatCode:(id)arg1;
- (void)oauthWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)loginWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)logout;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (void)didReceiveApplicationDidEnterBackground:(id)arg1;
- (void)didReceiveApplicationDidBecomeActive:(id)arg1;
- (void)buyWithAppId:(id)arg1 storeId:(id)arg2 prepayId:(id)arg3 nonceStr:(id)arg4 timeStamp:(unsigned int)arg5 sign:(id)arg6 onSuccess:(CDUnknownBlockType)arg7 onCancel:(CDUnknownBlockType)arg8 onError:(CDUnknownBlockType)arg9;
- (id)init;
- (void)dealloc;
- (void)WXApiService:(id)arg1 authByCode:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

