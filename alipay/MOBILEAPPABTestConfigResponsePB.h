//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface MOBILEAPPABTestConfigResponsePB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *experiment_list; // @dynamic experiment_list;
@property(readonly) _Bool hasIdentification_code; // @dynamic hasIdentification_code;
@property(readonly) _Bool hasStatus_code; // @dynamic hasStatus_code;
@property(retain, nonatomic) NSString *identification_code; // @dynamic identification_code;
@property(retain, nonatomic) NSString *status_code; // @dynamic status_code;

@end

