//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface TZBTransferInRequest : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *amount; // @dynamic amount;
@property(retain, nonatomic) NSString *bizOrderNo; // @dynamic bizOrderNo;
@property(retain, nonatomic) NSString *fromSubCardNo; // @dynamic fromSubCardNo;
@property(readonly) _Bool hasAmount; // @dynamic hasAmount;
@property(readonly) _Bool hasBizOrderNo; // @dynamic hasBizOrderNo;
@property(readonly) _Bool hasFromSubCardNo; // @dynamic hasFromSubCardNo;
@property(readonly) _Bool hasSecurityId; // @dynamic hasSecurityId;
@property(readonly) _Bool hasSubCardNo; // @dynamic hasSubCardNo;
@property(retain, nonatomic) NSString *securityId; // @dynamic securityId;
@property(retain, nonatomic) NSString *subCardNo; // @dynamic subCardNo;

@end

