//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_LOGGMMAppEvent, GMSx_LOGGMMDeviceState, GMSx_LOGGMMDynamicReroutingEvent, GMSx_LOGGMMNavigationSession, GMSx_LOGGMMPageActivatedEvent, GMSx_LOGGMMUserInteraction, GMSx_LOGGMMVisualElementImpressions;

@interface GMSx_LOGGMMLoggedUserEvent3 : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_LOGGMMAppEvent *appEvent; // @dynamic appEvent;
@property(nonatomic) long long deltaToActualTimeMs; // @dynamic deltaToActualTimeMs;
@property(retain, nonatomic) GMSx_LOGGMMDeviceState *deviceState; // @dynamic deviceState;
@property(retain, nonatomic) GMSx_LOGGMMDynamicReroutingEvent *dynamicReroutingEvent; // @dynamic dynamicReroutingEvent;
@property(nonatomic) int expiredEventCount; // @dynamic expiredEventCount;
@property(nonatomic) _Bool hasAppEvent; // @dynamic hasAppEvent;
@property(nonatomic) _Bool hasDeltaToActualTimeMs; // @dynamic hasDeltaToActualTimeMs;
@property(nonatomic) _Bool hasDeviceState; // @dynamic hasDeviceState;
@property(nonatomic) _Bool hasDynamicReroutingEvent; // @dynamic hasDynamicReroutingEvent;
@property(nonatomic) _Bool hasExpiredEventCount; // @dynamic hasExpiredEventCount;
@property(nonatomic) _Bool hasImpressions; // @dynamic hasImpressions;
@property(nonatomic) _Bool hasNavigationSession; // @dynamic hasNavigationSession;
@property(nonatomic) _Bool hasPageActivatedEvent; // @dynamic hasPageActivatedEvent;
@property(nonatomic) _Bool hasRawClientTimestampMs; // @dynamic hasRawClientTimestampMs;
@property(nonatomic) _Bool hasRealTimestampMs; // @dynamic hasRealTimestampMs;
@property(nonatomic) _Bool hasSendTimestampMs; // @dynamic hasSendTimestampMs;
@property(nonatomic) _Bool hasSequenceId; // @dynamic hasSequenceId;
@property(nonatomic) _Bool hasUserInteraction; // @dynamic hasUserInteraction;
@property(retain, nonatomic) GMSx_LOGGMMVisualElementImpressions *impressions; // @dynamic impressions;
@property(retain, nonatomic) GMSx_LOGGMMNavigationSession *navigationSession; // @dynamic navigationSession;
@property(retain, nonatomic) GMSx_LOGGMMPageActivatedEvent *pageActivatedEvent; // @dynamic pageActivatedEvent;
@property(nonatomic) long long rawClientTimestampMs; // @dynamic rawClientTimestampMs;
@property(nonatomic) long long realTimestampMs; // @dynamic realTimestampMs;
@property(nonatomic) long long sendTimestampMs; // @dynamic sendTimestampMs;
@property(nonatomic) int sequenceId; // @dynamic sequenceId;
@property(retain, nonatomic) GMSx_LOGGMMUserInteraction *userInteraction; // @dynamic userInteraction;

@end

