//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt64Array;

@interface KSEPreviewEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt64Array *assetIdsArray; // @dynamic assetIdsArray;
@property(readonly, nonatomic) unsigned long long assetIdsArray_Count; // @dynamic assetIdsArray_Count;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) double playSec; // @dynamic playSec;

@end

