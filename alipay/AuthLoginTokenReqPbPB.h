//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface AuthLoginTokenReqPbPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appKey; // @dynamic appKey;
@property(retain, nonatomic) NSArray *externParams; // @dynamic externParams;
@property(readonly) _Bool hasAppKey; // @dynamic hasAppKey;
@property(readonly) _Bool hasSignData; // @dynamic hasSignData;
@property(readonly) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(readonly) _Bool hasUuid; // @dynamic hasUuid;
@property(retain, nonatomic) NSString *signData; // @dynamic signData;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

