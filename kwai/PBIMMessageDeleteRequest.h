//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array;

@interface PBIMMessageDeleteRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int chatTargetType; // @dynamic chatTargetType;
@property(retain, nonatomic) GPBInt64Array *seqIdArray; // @dynamic seqIdArray;
@property(readonly, nonatomic) unsigned long long seqIdArray_Count; // @dynamic seqIdArray_Count;
@property(nonatomic) long long targetId; // @dynamic targetId;

@end

