//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray;

@interface faudiorecVoiceTvInfoRpcResponsePB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *activeList; // @dynamic activeList;
@property(readonly) _Bool hasQueryIntervalTime; // @dynamic hasQueryIntervalTime;
@property(readonly) _Bool hasRecIntervalTime; // @dynamic hasRecIntervalTime;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) long long queryIntervalTime; // @dynamic queryIntervalTime;
@property(nonatomic) long long recIntervalTime; // @dynamic recIntervalTime;
@property(nonatomic) _Bool success; // @dynamic success;

@end

