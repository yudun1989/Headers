//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSETimeRange;

@interface KSEVisualEffectParam : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRange; // @dynamic hasRange;
@property(nonatomic) unsigned long long id_p; // @dynamic id_p;
@property(retain, nonatomic) KSETimeRange *range; // @dynamic range;
@property(nonatomic) int visualEffectType; // @dynamic visualEffectType;

@end

