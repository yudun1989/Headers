//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVH5MonitorProtocol-Protocol.h"

@class NSString;

@interface WVH5Monitor : NSObject <WVH5MonitorProtocol>
{
}

+ (id)sharedMonitor;
- (void)receiveJavsScriptError:(id)arg1;
- (void)pageEmpty:(id)arg1 arg:(id)arg2;
- (id)parseResStat:(id)arg1;
- (void)reportPerformance2UT:(id)arg1;
- (id)getH5Point:(id)arg1;
- (void)pageFinishLoad:(id)arg1;
- (void)reportWebProcessTerminated:(id)arg1 arg:(id)arg2;
- (void)insecurityHost:(id)arg1 arg:(id)arg2;
- (void)pageOccurNativeError:(id)arg1 arg:(id)arg2;
- (void)reportPostRequest:(id)arg1;
- (void)receiveStatusCode:(id)arg1;
- (void)webViewStart:(id)arg1;
- (void)reportWebViewStatistics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

