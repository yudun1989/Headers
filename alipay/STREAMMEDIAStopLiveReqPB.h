//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface STREAMMEDIAStopLiveReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasLiveId; // @dynamic hasLiveId;
@property(readonly) _Bool hasStopReason; // @dynamic hasStopReason;
@property(retain, nonatomic) NSString *liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *stopReason; // @dynamic stopReason;

@end

