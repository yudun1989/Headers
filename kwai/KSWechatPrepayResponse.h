//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSNumber, NSString;

@interface KSWechatPrepayResponse : KSUBaseResponse
{
    NSString *_prepayId;
    NSString *_sign;
    NSString *_noncestr;
    NSNumber *_timestamp;
    NSString *_ksOrderId;
    NSString *_appId;
    NSString *_storeId;
}

@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *ksOrderId; // @synthesize ksOrderId=_ksOrderId;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *noncestr; // @synthesize noncestr=_noncestr;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
- (void).cxx_destruct;

@end

