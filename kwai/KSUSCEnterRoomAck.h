//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KSUSCEnterRoomAck : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int giftSlotAThreshold; // @dynamic giftSlotAThreshold;
@property(nonatomic) unsigned int giftSlotBThreshold; // @dynamic giftSlotBThreshold;
@property(nonatomic) unsigned int giftSlotBgGoldenThreshold; // @dynamic giftSlotBgGoldenThreshold;
@property(nonatomic) unsigned int giftSlotBgPurpleThreshold; // @dynamic giftSlotBgPurpleThreshold;
@property(nonatomic) unsigned long long heartbeatIntervalMs; // @dynamic heartbeatIntervalMs;
@property(nonatomic) unsigned long long maxReconnectMs; // @dynamic maxReconnectMs;
@property(nonatomic) unsigned long long minReconnectMs; // @dynamic minReconnectMs;
@property(copy, nonatomic) NSString *sUserId; // @dynamic sUserId;
@property(nonatomic) unsigned long long userId; // @dynamic userId;

@end

