//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface QZReportOperationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_reqProcessQueue;
    NSObject<OS_dispatch_queue> *_trafficStaticQueue;
    NSMutableArray *_waitReqArray;
    NSOperationQueue *_connectionOpQueue;
    long long _currentNetwork;
}

+ (void)scheduleRequestOperation:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3 retryCount:(long long)arg4;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)startNextRequest;
- (void)requestFinished:(id)arg1;
- (void)startReqOperation:(id)arg1;
- (void)scheduleRequestOperation:(id)arg1;
- (id)init;

@end

