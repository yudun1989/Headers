//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSUUserInfo, NSString;

@interface KSUShareFeed : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int liveAssistantType; // @dynamic liveAssistantType;
@property(nonatomic) unsigned long long sortRank; // @dynamic sortRank;
@property(nonatomic) unsigned int thirdPartyPlatform; // @dynamic thirdPartyPlatform;
@property(nonatomic) unsigned long long time; // @dynamic time;
@property(retain, nonatomic) KSUUserInfo *user; // @dynamic user;

@end

