//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBBeaconStrategyQueryHandler : NSObject
{
    int _retryTime;
}

+ (id)sharedInstance;
@property(nonatomic) int retryTime; // @synthesize retryTime=_retryTime;
- (_Bool)processStrategy:(id)arg1;
- (_Bool)processCommonStrategy:(id)arg1;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failQuery:(id)arg1;
- (void)startStrategyQuery;
- (void)checkStrategyQuery:(double)arg1;
- (id)init;

@end

