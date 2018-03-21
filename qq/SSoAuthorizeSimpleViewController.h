//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQAppIconImageDelegate-Protocol.h>
#import <QQMainProject/RequestDelegate-Protocol.h>
#import <QQMainProject/SimpleLoginDelegate-Protocol.h>

@class AuthorizationRequest, NSArray, NSData, NSString, UIButton, UIImageView, UILabel;

@interface SSoAuthorizeSimpleViewController : QQViewController <RequestDelegate, QQAppIconImageDelegate, SimpleLoginDelegate>
{
    UIButton *_btnConfirm;
    UIImageView *_viewAppIcon;
    UILabel *_lableMain;
    _Bool _isGetAuthorizationInfo;
    id _delegate;
    long long _uin;
    NSString *_appId;
    NSString *_pluginId;
    NSString *_appName;
    NSString *_mainText;
    AuthorizationRequest *_authorizationIconRequest;
    AuthorizationRequest *_authorizationRequest;
    NSData *_sKey;
    NSArray *_authInfoList;
}

@property(retain, nonatomic) NSArray *authInfoList; // @synthesize authInfoList=_authInfoList;
@property(retain, nonatomic) NSData *sKey; // @synthesize sKey=_sKey;
@property(retain, nonatomic) AuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(retain, nonatomic) AuthorizationRequest *authorizationIconRequest; // @synthesize authorizationIconRequest=_authorizationIconRequest;
@property(retain, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *pluginId; // @synthesize pluginId=_pluginId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property _Bool isGetAuthorizationInfo; // @synthesize isGetAuthorizationInfo=_isGetAuthorizationInfo;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginFailed:(int)arg1 withMsg:(id)arg2 loginType:(int)arg3;
- (void)loginSucceed:(id)arg1 Uin:(unsigned int)arg2 Nickname:(id)arg3 loginType:(int)arg4;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (void)RequestSvrErrorCode:(id)arg1;
- (void)RequestSystemNetError:(id)arg1;
- (void)RequestFailed:(id)arg1;
- (void)SetAuthorizationDelegate:(id)arg1 dicinfo:(id)arg2 errorMsg:(id)arg3;
- (void)GetAuthorizationInfoDelegate:(id)arg1 dicinfo:(id)arg2 data:(id)arg3 errorMsg:(id)arg4;
- (void)GetAppIconDelegate:(id)arg1 errorcode:(id)arg2 dicInfo:(id)arg3 errorMsg:(id)arg4;
- (void)setReadyState;
- (void)setRetryState;
- (void)enableButton:(_Bool)arg1 withText:(id)arg2;
- (void)doAuthorization;
- (_Bool)getAuthorizationInfoWithSKey:(id)arg1;
- (void)doLoginStep;
- (void)getAppInfo;
- (void)onBtnConfirm:(id)arg1;
- (void)addConfirmButton;
- (void)addAuthorizeInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)getDelegate;
- (id)initWithDelegate:(id)arg1 withAppId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

