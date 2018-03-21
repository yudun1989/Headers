//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVBridgeProtocol-Protocol.h"

@class NSString;
@protocol WVBridgeContext;

@interface WVReporter : NSObject <WVBridgeProtocol>
{
}

+ (void)reportPerformanceCheckResult:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)commitAppMonitorStat:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)commitUTEvent:(id)arg1 withWVBridgeContext:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <WVBridgeContext> context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

