//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_LOGGMMAppEvent_ExternalAppInvocationParams, GMSx_LOGGMMAppEvent_NewVersionParams, GMSx_LOGGMMAppEvent_UserPreferences;

@interface GMSx_LOGGMMAppEvent : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appCheckpoint; // @dynamic appCheckpoint;
@property(retain, nonatomic) GMSx_LOGGMMAppEvent_ExternalAppInvocationParams *externalAppInvocationParams; // @dynamic externalAppInvocationParams;
@property(nonatomic) _Bool hasAppCheckpoint; // @dynamic hasAppCheckpoint;
@property(nonatomic) _Bool hasExternalAppInvocationParams; // @dynamic hasExternalAppInvocationParams;
@property(nonatomic) _Bool hasNewVersionParams; // @dynamic hasNewVersionParams;
@property(nonatomic) _Bool hasUserPreferences; // @dynamic hasUserPreferences;
@property(retain, nonatomic) GMSx_LOGGMMAppEvent_NewVersionParams *newVersionParams; // @dynamic newVersionParams;
@property(retain, nonatomic) GMSx_LOGGMMAppEvent_UserPreferences *userPreferences; // @dynamic userPreferences;

@end

