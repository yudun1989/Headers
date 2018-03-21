//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/MsfSDKCallbackProtocol-Protocol.h>

@class ArkHTTPSessionConfig, NSArray, NSMutableArray, NSString;
@protocol IMSFDelegate, OS_dispatch_queue;

@interface MSFSDKCallback : NSObject <MsfSDKCallbackProtocol>
{
    id <IMSFDelegate> _msfDelegate;
    NSArray *_passThroughCmd;
    NSObject<OS_dispatch_queue> *_httpQueue;
    NSMutableArray *_taskArr;
    ArkHTTPSessionConfig *_pArkConfig;
}

+ (id)instance;
- (id)getwifiInfo;
- (id)getCellularInfo;
- (void)removeArkTask:(id)arg1;
- (void)onArkTimeout:(id)arg1;
- (void)getHTTPDataTask:(long long *)arg1 withURLRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAuthForSidewayTcp:(id)arg1;
- (void)onMSFServerTimeUpdated:(id)arg1;
- (void)onHTTPStatus:(id)arg1;
- (void)onMSFNetworkSocketHandle:(id)arg1;
- (void)onMSFSSOReturn:(id)arg1;
- (void)onMSFSocketFlow:(id)arg1;
- (void)onMSFPacketState:(id)arg1;
- (void)onMSFApnState:(id)arg1;
- (void)onMSFBackgroundNetworkState:(id)arg1;
- (void)onMSFNetworkState:(id)arg1;
- (void)onMSFNotGrayUser:(id)arg1;
- (void)onMSFIllegalApp:(id)arg1;
- (void)setMSFDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

