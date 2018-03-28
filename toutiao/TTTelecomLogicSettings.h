//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTTelecomLogicSettings : NSObject
{
}

+ (_Bool)meetTimeLimitRequirement;
+ (void)recordTimeIntervalWhenGettingPhoneSuccess;
+ (long long)maxRetryTimesWhenFailed;
+ (void)setMaxRetryTimes:(long long)arg1;
+ (long long)minIntervalDays;
+ (void)setMinIntervalDays:(long long)arg1;
+ (void)setGettingPhoneEnabled:(_Bool)arg1;
+ (_Bool)newGettignPhoneEnabled;
+ (_Bool)gettingPhoneEnabled;
+ (_Bool)needGettingPhone;
+ (void)setNeedGettingPhone:(_Bool)arg1;
+ (void)setGettingPhoneDelay:(double)arg1;
+ (_Bool)meetCellularGetPhoneCondition;
+ (void)setForceToGetPhoneEnabledForValue:(_Bool)arg1;
+ (_Bool)forceToGetPhoneEnabled;
+ (void)parseGettingPhoneConfigsFromSettings:(id)arg1;

@end

