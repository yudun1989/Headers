//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface KSUNotificationSettingPackage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int alertSetting; // @dynamic alertSetting;
@property(nonatomic) int alertStyle; // @dynamic alertStyle;
@property(nonatomic) int authorizationStatus; // @dynamic authorizationStatus;
@property(nonatomic) int badgeSetting; // @dynamic badgeSetting;
@property(nonatomic) int carPlaySetting; // @dynamic carPlaySetting;
@property(nonatomic) int lockScreenSetting; // @dynamic lockScreenSetting;
@property(nonatomic) int notificationCenterSetting; // @dynamic notificationCenterSetting;
@property(nonatomic) int notificationSwitcher; // @dynamic notificationSwitcher;
@property(nonatomic) int soundSetting; // @dynamic soundSetting;
@property(retain, nonatomic) NSMutableArray *switchAuthorizationStatusArray; // @dynamic switchAuthorizationStatusArray;
@property(readonly, nonatomic) unsigned long long switchAuthorizationStatusArray_Count; // @dynamic switchAuthorizationStatusArray_Count;

@end

