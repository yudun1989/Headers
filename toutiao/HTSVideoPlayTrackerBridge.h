//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HTSVideoPlayTrackerBridge : NSObject
{
}

+ (void)monitorData:(id)arg1 logTypeStr:(id)arg2;
+ (void)monitorService:(id)arg1 status:(long long)arg2 extra:(id)arg3;
+ (void)monitorEvent:(id)arg1 label:(id)arg2 duration:(float)arg3 needAggregate:(_Bool)arg4;
+ (void)trackEvent:(id)arg1 params:(id)arg2;
+ (void)trackEvent:(id)arg1 label:(id)arg2 value:(id)arg3 extra:(id)arg4 attributes:(id)arg5;

@end

