//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MBKUnifiedPaymentSign : NSObject
{
    NSString *_url;
    NSString *_mwebUrl;
    NSString *_partnerId;
    NSString *_mchid;
    NSString *_package;
    NSString *_noncestr;
    NSString *_sign;
    NSString *_appid;
    NSNumber *_timestamp;
    NSString *_prepayid;
    NSString *_tn;
}

@property(copy, nonatomic) NSString *tn; // @synthesize tn=_tn;
@property(copy, nonatomic) NSString *prepayid; // @synthesize prepayid=_prepayid;
@property(copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *noncestr; // @synthesize noncestr=_noncestr;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString *mchid; // @synthesize mchid=_mchid;
@property(copy, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(copy, nonatomic) NSString *mwebUrl; // @synthesize mwebUrl=_mwebUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

