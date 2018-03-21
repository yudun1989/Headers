//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZBaseEngine : NSObject
{
}

+ (struct JceObjectV2 *)queryRequestWithRequestID:(long long)arg1;
+ (void)cancelRequest:(long long)arg1;
+ (long long)getCurrentUin;
+ (id)instance;
- (void)appendReferInfo:(struct JceObjectV2 *)arg1 from:(long long)arg2;
- (id)getReferStringOfType:(int)arg1;
- (void)cancelRequest:(long long)arg1;
- (void)notifyCancle:(id)arg1 requestID:(long long)arg2;
- (void)notifyError:(id)arg1 requestID:(long long)arg2 error:(id)arg3 userParam:(id)arg4;
- (void)notifySuccess:(id)arg1 requestID:(long long)arg2 action:(long long)arg3 userParam:(id)arg4;
- (void)notify:(id)arg1 withData:(id)arg2 delay:(double)arg3;
- (void)notify:(id)arg1 withData:(id)arg2;
- (long long)getCurrentUin;

@end

