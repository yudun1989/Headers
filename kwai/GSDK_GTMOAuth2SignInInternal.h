//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_GTMOAuth2SignIn.h"

@class NSString;

@interface GSDK_GTMOAuth2SignInInternal : GSDK_GTMOAuth2SignIn
{
    NSString *authorizationEmail_;
    NSString *authorizationTemplate_;
    _Bool shouldUseLoginScope_;
}

+ (id)defaultSourceString;
+ (id)tokenAuthURLWithAuthToken:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4;
+ (id)dictionaryWithClientLoginResponseString:(id)arg1;
+ (void)fetchTokenAuthURLWithValues:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)fetchTokenAuthURLWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)fetchAuthTokenWithValues:(id)arg1 service:(id)arg2 isSessionOnly:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchUberAuthTokenWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 doUberAuthFetch:(_Bool)arg4 parseBlock:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)nativeClientRedirectURI;
+ (id)googleUserInfoURL;
+ (id)googleRevocationURL;
+ (id)googleTokenURL;
+ (id)googleAuthorizationURL;
+ (id)userInfoHost;
+ (void)setUserInfoHost:(id)arg1;
+ (id)authorizationHost;
+ (void)setAuthorizationHost:(id)arg1;
+ (id)accountsHost;
+ (void)setAccountsHost:(id)arg1;
@property(nonatomic) _Bool shouldUseLoginScope; // @synthesize shouldUseLoginScope=shouldUseLoginScope_;
@property(retain, nonatomic) NSString *authorizationTemplate; // @synthesize authorizationTemplate=authorizationTemplate_;
@property(retain, nonatomic) NSString *authorizationEmail; // @synthesize authorizationEmail=authorizationEmail_;
- (_Bool)cookiesChanged:(id)arg1;
- (_Bool)titleChanged:(id)arg1;
- (id)parametersForWebRequest;
- (_Bool)startSigningIn;
- (void)dealloc;

@end

