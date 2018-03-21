//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APBaseReq, APSdkApp, APShareServiceCardControl, APThreadPool, DTNavigationController, DTRpcAsyncCaller, NSString;

@interface APShareServiceHandlerImpl : NSObject
{
    _Bool _isAuthing;
    _Bool _isSharing;
    APShareServiceCardControl *_cardControl;
    APThreadPool *_loginThreadPool;
    DTRpcAsyncCaller *_authRpcCaller;
    APSdkApp *_thirdApp;
    APBaseReq *_thirdReq;
    NSString *_thirdShareId;
    APSdkApp *_authApp;
    DTNavigationController *_nctr;
}

@property(retain, nonatomic) DTNavigationController *nctr; // @synthesize nctr=_nctr;
@property(retain, nonatomic) APSdkApp *authApp; // @synthesize authApp=_authApp;
@property(retain, nonatomic) NSString *thirdShareId; // @synthesize thirdShareId=_thirdShareId;
@property(retain, nonatomic) APBaseReq *thirdReq; // @synthesize thirdReq=_thirdReq;
@property(retain, nonatomic) APSdkApp *thirdApp; // @synthesize thirdApp=_thirdApp;
@property(nonatomic) _Bool isSharing; // @synthesize isSharing=_isSharing;
@property(retain, nonatomic) DTRpcAsyncCaller *authRpcCaller; // @synthesize authRpcCaller=_authRpcCaller;
@property(retain, nonatomic) APThreadPool *loginThreadPool; // @synthesize loginThreadPool=_loginThreadPool;
@property(retain, nonatomic) APShareServiceCardControl *cardControl; // @synthesize cardControl=_cardControl;
@property(nonatomic) _Bool isAuthing; // @synthesize isAuthing=_isAuthing;
- (void).cxx_destruct;
- (_Bool)isShareWidgetValid;
- (void)responseApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)cancelShare;
- (id)authAppUrl:(id)arg1;
- (void)authApp:(id)arg1 sendMessageReq:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)backToApp;
- (_Bool)handleOpenURL:(id)arg1 userInfo:(id)arg2;
- (void)showResultCardView;
- (void)sendRespToApp:(id)arg1 errCode:(int)arg2 errStr:(id)arg3;
- (_Bool)isReqSupported:(id)arg1 sdkVer:(id)arg2;
- (void)handleOpenURLAfterLogin:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

