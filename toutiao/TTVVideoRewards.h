//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface TTVVideoRewards : GPBMessage
{
}

+ (id)descriptor;
+ (id)videoRewardsWithVideoInfoRewardsStructModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *rewardsListArray; // @dynamic rewardsListArray;
@property(readonly, nonatomic) unsigned long long rewardsListArray_Count; // @dynamic rewardsListArray_Count;
@property(copy, nonatomic) NSString *rewardsListURL; // @dynamic rewardsListURL;
@property(nonatomic) int rewardsNum; // @dynamic rewardsNum;
@property(copy, nonatomic) NSString *rewardsOpenURL; // @dynamic rewardsOpenURL;

@end

