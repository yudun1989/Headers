//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface KSCouponChecker : NSObject
{
    _Bool _alerted;
    NSNumber *_couponCount;
}

+ (id)sharedKSCouponChecker;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(retain, nonatomic) NSNumber *couponCount; // @synthesize couponCount=_couponCount;
- (void).cxx_destruct;
- (void)showAlertIfNeedWithPassBlock:(CDUnknownBlockType)arg1 goCouponPageBlock:(CDUnknownBlockType)arg2;
- (void)loadCouponCountIfNeed;

@end

