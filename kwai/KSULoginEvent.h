//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KSULoginEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int actionType; // @dynamic actionType;
@property(copy, nonatomic) NSString *extraMessage; // @dynamic extraMessage;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int platform; // @dynamic platform;
@property(nonatomic) int source; // @dynamic source;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) unsigned int stayTime; // @dynamic stayTime;
@property(nonatomic) int step; // @dynamic step;
@property(nonatomic) _Bool stepBack; // @dynamic stepBack;

@end

