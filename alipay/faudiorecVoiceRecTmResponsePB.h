//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface faudiorecVoiceRecTmResponsePB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) int code; // @dynamic code;
@property(readonly) _Bool hasCode; // @dynamic hasCode;
@property(readonly) _Bool hasReason; // @dynamic hasReason;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSArray *tvInfoTms; // @dynamic tvInfoTms;

@end

