//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface KSUSCLiveWatchingList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *displayWatchingCount; // @dynamic displayWatchingCount;
@property(nonatomic) unsigned long long watchingCount; // @dynamic watchingCount;
@property(retain, nonatomic) NSMutableArray *watchingUserArray; // @dynamic watchingUserArray;
@property(readonly, nonatomic) unsigned long long watchingUserArray_Count; // @dynamic watchingUserArray_Count;

@end

