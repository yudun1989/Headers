//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface PBBasicDownstreamPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *command; // @dynamic command;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSData *errorData; // @dynamic errorData;
@property(copy, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(copy, nonatomic) NSData *payloadData; // @dynamic payloadData;
@property(nonatomic) long long seqId; // @dynamic seqId;

@end

