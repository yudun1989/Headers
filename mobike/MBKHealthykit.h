//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class HKHealthStore, NSString;

@interface MBKHealthykit : NSObject <UIAlertViewDelegate>
{
    float _distance;
    float _energy;
    HKHealthStore *_healthStore;
}

@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)savecycleDis:(double)arg1 energy:(double)arg2;
- (void)updateHealthyCycling:(float)arg1 activeEnergy:(float)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

