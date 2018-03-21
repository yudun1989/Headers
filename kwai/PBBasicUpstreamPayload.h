//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, PBBasicRequsetBasicInfo, PBBasicSettingInfo, PBBasicUserInstance;

@interface PBBasicUpstreamPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *command; // @dynamic command;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasRequestBasicInfo; // @dynamic hasRequestBasicInfo;
@property(nonatomic) _Bool hasSettingInfo; // @dynamic hasSettingInfo;
@property(nonatomic) _Bool hasUserInstance; // @dynamic hasUserInstance;
@property(copy, nonatomic) NSData *payloadData; // @dynamic payloadData;
@property(retain, nonatomic) PBBasicRequsetBasicInfo *requestBasicInfo; // @dynamic requestBasicInfo;
@property(nonatomic) unsigned int retryCount; // @dynamic retryCount;
@property(nonatomic) long long seqId; // @dynamic seqId;
@property(retain, nonatomic) PBBasicSettingInfo *settingInfo; // @dynamic settingInfo;
@property(retain, nonatomic) PBBasicUserInstance *userInstance; // @dynamic userInstance;

@end

