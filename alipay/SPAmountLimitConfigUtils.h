//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SPAmountLimitConfigUtils : NSObject
{
    NSString *_payee_friend_limit;
    NSString *_payee_stranger_limit;
    NSString *_group_transfer_per_limit;
    NSString *_group_aa_per_limit;
    NSString *_group_aa_share_limit;
    NSString *_group_activity_per_limit;
    NSString *_group_activity_share_limit;
    NSString *_group_emergency_limit;
}

+ (id)sharedConfigUtils;
@property(retain, nonatomic) NSString *group_emergency_limit; // @synthesize group_emergency_limit=_group_emergency_limit;
@property(retain, nonatomic) NSString *group_activity_share_limit; // @synthesize group_activity_share_limit=_group_activity_share_limit;
@property(retain, nonatomic) NSString *group_activity_per_limit; // @synthesize group_activity_per_limit=_group_activity_per_limit;
@property(retain, nonatomic) NSString *group_aa_share_limit; // @synthesize group_aa_share_limit=_group_aa_share_limit;
@property(retain, nonatomic) NSString *group_aa_per_limit; // @synthesize group_aa_per_limit=_group_aa_per_limit;
@property(retain, nonatomic) NSString *group_transfer_per_limit; // @synthesize group_transfer_per_limit=_group_transfer_per_limit;
@property(retain, nonatomic) NSString *payee_stranger_limit; // @synthesize payee_stranger_limit=_payee_stranger_limit;
@property(retain, nonatomic) NSString *payee_friend_limit; // @synthesize payee_friend_limit=_payee_friend_limit;
- (void).cxx_destruct;
- (void)readConfig;
- (id)init;

@end

