//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface APWifiManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_scannedBSSID;
}

+ (id)shared;
@property(copy) NSString *scannedBSSID; // @synthesize scannedBSSID=_scannedBSSID;
- (void).cxx_destruct;
- (void)onHotspotEventEnd;
- (void)onHotspotEventBegin;
- (void)requestNetworkAuthInfo:(id)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)onNetworkFilterScanList:(id)arg1;
- (void)succeedWithConfidenceNetworks:(id)arg1 networks:(id)arg2;
- (void)deliverFailResponseNow:(id)arg1 result:(long long)arg2;
- (void)safeDeliverFailResponse:(id)arg1 seconds:(long long)arg2 result:(long long)arg3;
- (void)responseWithDelay:(id)arg1 result:(long long)arg2;
- (void)responseWithDelay:(id)arg1;
- (void)readHotspotConfigFactor:(long long *)arg1 normalDelaySeconds:(long long *)arg2;
- (_Bool)isResponseNowWhenNotSecure;
- (void)onNetworkEvaluate:(id)arg1;
- (void)logCommandType:(long long)arg1;
- (void)processCommand:(id)arg1;
- (void)start;
- (id)init;

@end

