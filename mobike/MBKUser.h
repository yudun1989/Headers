//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKJsonModelObject-Protocol.h"
#import "MJCoding-Protocol.h"
#import "NSCoding-Protocol.h"

@class MBKThirdPartySocialInfo, NSArray, NSString;

@interface MBKUser : NSObject <MJCoding, NSCoding, MBKJsonModelObject>
{
    _Bool _needCollectConsent;
    _Bool _hasMonthcard;
    _Bool _needSelectCountry;
    _Bool _isLogin;
    NSArray *_thirdPartInfo;
    NSString *_authtoken;
    NSString *_comment;
    long long _country;
    long long _credits;
    long long _currency;
    long long _deposit;
    NSString *_h5Url;
    NSString *_img;
    NSString *_isfirstshare;
    long long _level;
    long long _minAge;
    NSString *_mobileno;
    NSString *_nation;
    NSString *_nickname;
    long long _progress;
    NSString *_pushkey;
    long long _requestedDeposit;
    NSString *_rsacode;
    long long _special_progress;
    NSString *_stripePublicKey;
    NSString *_tag;
    NSString *_userid;
    NSString *_userimage;
    NSString *_username;
    NSString *_idNumber;
    NSString *_stripeId;
    NSArray *_address;
    long long _sex;
    MBKThirdPartySocialInfo *_wechatInfo;
    MBKThirdPartySocialInfo *_qqInfo;
}

+ (id)jsonKeyToClassNameMap;
+ (id)jsonKeyToPropertyNameMap;
+ (id)mj_ignoredCodingPropertyNames;
+ (id)loginUser;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(nonatomic) _Bool needSelectCountry; // @synthesize needSelectCountry=_needSelectCountry;
@property(readonly, copy, nonatomic) MBKThirdPartySocialInfo *qqInfo; // @synthesize qqInfo=_qqInfo;
@property(readonly, copy, nonatomic) MBKThirdPartySocialInfo *wechatInfo; // @synthesize wechatInfo=_wechatInfo;
@property(nonatomic) _Bool hasMonthcard; // @synthesize hasMonthcard=_hasMonthcard;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSArray *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *stripeId; // @synthesize stripeId=_stripeId;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *userimage; // @synthesize userimage=_userimage;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *stripePublicKey; // @synthesize stripePublicKey=_stripePublicKey;
@property(nonatomic) long long special_progress; // @synthesize special_progress=_special_progress;
@property(copy, nonatomic) NSString *rsacode; // @synthesize rsacode=_rsacode;
@property(nonatomic) long long requestedDeposit; // @synthesize requestedDeposit=_requestedDeposit;
@property(copy, nonatomic) NSString *pushkey; // @synthesize pushkey=_pushkey;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) _Bool needCollectConsent; // @synthesize needCollectConsent=_needCollectConsent;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(copy, nonatomic) NSString *mobileno; // @synthesize mobileno=_mobileno;
@property(nonatomic) long long minAge; // @synthesize minAge=_minAge;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *isfirstshare; // @synthesize isfirstshare=_isfirstshare;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) long long deposit; // @synthesize deposit=_deposit;
@property(nonatomic) long long currency; // @synthesize currency=_currency;
@property(nonatomic) long long credits; // @synthesize credits=_credits;
@property(nonatomic) long long country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *authtoken; // @synthesize authtoken=_authtoken;
- (void).cxx_destruct;
- (void)updateAddressWithDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool didCompleteIdentification;
@property(readonly, nonatomic) _Bool needToAuthenticationInProgress;
@property(readonly, nonatomic) _Bool needToRechargeInProgress;
@property(copy, nonatomic) NSArray *thirdPartInfo; // @synthesize thirdPartInfo=_thirdPartInfo;
@property(readonly, nonatomic) _Bool isChineseUser;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

