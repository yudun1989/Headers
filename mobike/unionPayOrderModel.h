//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface unionPayOrderModel : JSONModel
{
    NSString *_accessType;
    NSString *_bizType;
    NSString *_encoding;
    NSString *_merId;
    NSString *_orderId;
    NSString *_respCode;
    NSString *_signature;
    NSString *_tn;
    NSString *_totalFee;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSString *totalFee; // @synthesize totalFee=_totalFee;
@property(retain, nonatomic) NSString *tn; // @synthesize tn=_tn;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *respCode; // @synthesize respCode=_respCode;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *merId; // @synthesize merId=_merId;
@property(retain, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *accessType; // @synthesize accessType=_accessType;
- (void).cxx_destruct;

@end

