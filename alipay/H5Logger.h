//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface H5Logger : NSObject
{
}

+ (void)behaviorLogger:(id)arg1 ucId:(id)arg2 actionId:(id)arg3 params:(id)arg4 logLevel:(long long)arg5 bizType:(id)arg6 spmToken:(id)arg7 abTestInfo:(id)arg8 entityId:(id)arg9 extLogInfo:(id)arg10;
+ (void)monitorLogger:(id)arg1 ucId:(id)arg2 params:(id)arg3 logHeader:(id)arg4 realTime:(_Bool)arg5;
+ (void)monitorLogger:(id)arg1 ucId:(id)arg2 params:(id)arg3;
+ (void)performaceLogger:(id)arg1 params:(id)arg2;
+ (void)behaviorLogger:(id)arg1 ucId:(id)arg2 params:(id)arg3;
+ (void)getAppId:(id *)arg1 publicId:(id *)arg2 openAppId:(id *)arg3 shopId:(id *)arg4 version:(id *)arg5 sourceId:(id *)arg6 bizScenario:(id *)arg7 customParams:(id *)arg8;
+ (void)getAppId:(id *)arg1 publicId:(id *)arg2 version:(id *)arg3 sourceId:(id *)arg4 bizScenario:(id *)arg5;

@end

