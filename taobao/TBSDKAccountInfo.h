//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSDKAccountInfo : NSObject
{
    NSString *_appToken;
    NSString *_pubKey;
    NSString *_topSession;
    NSString *_sid;
    NSString *_nick;
    NSString *_userId;
    NSString *_loginToken;
    NSString *_ecode;
    NSString *_logintime;
    id _cookies;
    NSString *_ssoToken;
    NSString *_loginKey;
    NSString *_password;
    NSString *_sidInvalidTime;
    _Bool _isSidInvalid;
}

+ (_Bool)isLoggedIn;
+ (id)shareInstance;
@property(nonatomic) _Bool isSidInvalid; // @synthesize isSidInvalid=_isSidInvalid;
- (void).cxx_destruct;
- (void)postLogoutNotification;
- (void)postLoginSuccessNotification;
- (void)handleLoginSuccessNotification:(id)arg1;
- (id)description;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)fetchAuthToken:(id)arg1;
@property(retain, nonatomic) NSString *sidInvalidTime;
@property(retain, nonatomic) NSString *loginKey;
@property(retain, nonatomic) NSString *password;
@property(retain, nonatomic) NSString *ssoToken;
@property(retain, nonatomic) id cookies;
@property(retain, nonatomic) NSString *logintime;
@property(retain, nonatomic) NSString *ecode;
@property(retain, nonatomic) NSString *loginToken;
@property(retain, nonatomic) NSString *userId;
@property(retain, nonatomic) NSString *nick;
@property(retain, nonatomic) NSString *sid;
@property(retain, nonatomic) NSString *topSession;
@property(retain, nonatomic) NSString *pubkey;
@property(retain, nonatomic) NSString *appToken;
- (void)loadAccountInfo;
- (void)clearAccountInfo;

@end

