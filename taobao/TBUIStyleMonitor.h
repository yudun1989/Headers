//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBUIStyleMonitor : NSObject
{
}

+ (void)commitCountWithMonitorPoint:(id)arg1 value:(double)arg2;
+ (void)commitFailWithMonitorPoint:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)commitSuccessWithMonitorPoint:(id)arg1;
+ (void)sentMessage3:(id)arg1 selector:(id)arg2 andStrArg1:(id)arg3 andStrArg2:(id)arg4 andStrArg3:(id)arg5 andStrArg4:(id)arg6;
+ (void)sentMessage2:(id)arg1 selector:(id)arg2 andStrArg1:(id)arg3 andStrArg2:(id)arg4;
+ (void)sentMessage1:(id)arg1 selector:(id)arg2 andStrArg1:(id)arg3 andStrArg2:(id)arg4 andLongArg3:(long long)arg5;

@end

