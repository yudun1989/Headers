//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSCountryInfo, KSLoginStatParam, NSDictionary, NSString, UIImage;

@interface KSLoginContext : NSObject
{
    _Bool _loginPromptShowed;
    NSString *_loginType;
    NSString *_phone;
    KSCountryInfo *_country;
    NSString *_phoneCaptcha;
    NSString *_email;
    NSString *_password;
    NSDictionary *_OAuthParams;
    KSLoginStatParam *_statParams;
    NSString *_userName;
    NSString *_userSex;
    UIImage *_userAvatarImage;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancel;
    long long _loginMaxErrorCount;
}

@property(nonatomic) long long loginMaxErrorCount; // @synthesize loginMaxErrorCount=_loginMaxErrorCount;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIImage *userAvatarImage; // @synthesize userAvatarImage=_userAvatarImage;
@property(copy, nonatomic) NSString *userSex; // @synthesize userSex=_userSex;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool loginPromptShowed; // @synthesize loginPromptShowed=_loginPromptShowed;
@property(retain, nonatomic) KSLoginStatParam *statParams; // @synthesize statParams=_statParams;
@property(copy, nonatomic) NSDictionary *OAuthParams; // @synthesize OAuthParams=_OAuthParams;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *phoneCaptcha; // @synthesize phoneCaptcha=_phoneCaptcha;
@property(retain, nonatomic) KSCountryInfo *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
- (void).cxx_destruct;

@end

