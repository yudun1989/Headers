//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LoginProtocol-Protocol.h"

@class NSArray, NSLock, NSString;

@interface TBLoginCenter : NSObject <LoginProtocol>
{
    NSLock *_loginLock;
    NSArray *_loginUrls;
    NSArray *_logoutUrls;
}

+ (id)sharedInstantce;
@property(retain, nonatomic) NSArray *logoutUrls; // @synthesize logoutUrls=_logoutUrls;
@property(retain, nonatomic) NSArray *loginUrls; // @synthesize loginUrls=_loginUrls;
@property(retain) NSLock *loginLock; // @synthesize loginLock=_loginLock;
- (void).cxx_destruct;
- (_Bool)isLogoutURL:(id)arg1;
- (_Bool)isLoginURL:(id)arg1;
- (void)implantationLocalCookies;
- (void)changeIsLogining:(id)arg1;
- (void)loginBySsoTokenUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)retrievePassword:(id)arg1;
- (void)changePhoneNum:(id)arg1;
- (void)bindPhoneNum:(id)arg1;
- (void)modifyPassword:(id)arg1;
- (void)makeSessionInvalidLocally;
- (void)clearSession;
- (void)logout;
- (void)loginWithLoginOption:(int)arg1 timeout:(int)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)loginWithLoginOption:(int)arg1 extraInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)loginWithLoginOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3;
- (void)doRegister;
- (void)mockEasyLoginCompletionHandler:(CDUnknownBlockType)arg1 useName:(id)arg2 userPwd:(id)arg3;
- (id)currentSession;
- (void)getHavanaSsoToken:(CDUnknownBlockType)arg1;
- (_Bool)isValidLogin;
- (_Bool)isProcessingLogin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

