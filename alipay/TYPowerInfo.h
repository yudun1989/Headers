//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TYPowerInfo : NSObject
{
    unsigned long long _cost_idle_wakeups;
    unsigned long long _cost_total_user;
    unsigned long long _cost_time;
}

@property(nonatomic) unsigned long long cost_time; // @synthesize cost_time=_cost_time;
@property(nonatomic) unsigned long long cost_total_user; // @synthesize cost_total_user=_cost_total_user;
@property(nonatomic) unsigned long long cost_idle_wakeups; // @synthesize cost_idle_wakeups=_cost_idle_wakeups;
- (id)init;

@end

