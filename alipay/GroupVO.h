//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PersonalGroupConfig;

@interface GroupVO : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(retain, nonatomic) PersonalGroupConfig *config; // @dynamic config;
@property(retain, nonatomic) NSArray *delRoles; // @dynamic delRoles;
@property(nonatomic) long long gmtCreate; // @dynamic gmtCreate;
@property(nonatomic) long long groupCount; // @dynamic groupCount;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSString *groupImg; // @dynamic groupImg;
@property(retain, nonatomic) NSString *groupName; // @dynamic groupName;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasConfig; // @dynamic hasConfig;
@property(readonly) _Bool hasGmtCreate; // @dynamic hasGmtCreate;
@property(readonly) _Bool hasGroupCount; // @dynamic hasGroupCount;
@property(readonly) _Bool hasGroupId; // @dynamic hasGroupId;
@property(readonly) _Bool hasGroupImg; // @dynamic hasGroupImg;
@property(readonly) _Bool hasGroupName; // @dynamic hasGroupName;
@property(readonly) _Bool hasMasterUserId; // @dynamic hasMasterUserId;
@property(readonly) _Bool hasNotice; // @dynamic hasNotice;
@property(readonly) _Bool hasThreshold; // @dynamic hasThreshold;
@property(readonly) _Bool hasThridNo; // @dynamic hasThridNo;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSString *masterUserId; // @dynamic masterUserId;
@property(retain, nonatomic) NSArray *memberInfos; // @dynamic memberInfos;
@property(retain, nonatomic) NSArray *menus; // @dynamic menus;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NSArray *permissions; // @dynamic permissions;
@property(nonatomic) int threshold; // @dynamic threshold;
@property(retain, nonatomic) NSString *thridNo; // @dynamic thridNo;
@property(nonatomic) long long version; // @dynamic version;

@end

