//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface TTFCeremonyStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long prizeInCents; // @dynamic prizeInCents;
@property(nonatomic) long long winnerNumber; // @dynamic winnerNumber;
@property(retain, nonatomic) NSMutableArray *winnersArray; // @dynamic winnersArray;
@property(readonly, nonatomic) unsigned long long winnersArray_Count; // @dynamic winnersArray_Count;

@end
