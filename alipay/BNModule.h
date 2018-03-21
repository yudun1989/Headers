//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIModule.h"

#import "MQPBNEventDelegate-Protocol.h"
#import "MQPTemplateUpdateLog-Protocol.h"

@class NSMutableDictionary, NSString, UIView, VINavigationController;

@interface BNModule : VIModule <MQPBNEventDelegate, MQPTemplateUpdateLog>
{
    long long _logKeyIndex;
    _Bool _openUrlAnimating;
    NSMutableDictionary *_logBuilder;
    UIView *_rpcMask;
    VINavigationController *_webNav;
}

@property(retain, nonatomic) VINavigationController *webNav; // @synthesize webNav=_webNav;
- (void).cxx_destruct;
- (void)moduleWillFinish;
- (void)addLogError:(unsigned long long)arg1 renderDuration:(unsigned long long)arg2 tplId:(id)arg3 tplInfo:(id)arg4 tplData:(id)arg5 bp:(id)arg6;
- (void)addLogEvent:(id)arg1 rpcResp:(id)arg2 rpcDuration:(unsigned long long)arg3;
- (id)logInfo:(id)arg1;
- (void)submitParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideRPCMask;
- (void)showRPCMask;
- (void)openUrl:(id)arg1;
- (void)commonServiceHandleWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleEvent:(id)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)handleAsyncEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2 from:(id)arg3;
- (_Bool)handleEvent:(id)arg1 from:(id)arg2;
- (void)logUpdateTemplate:(id)arg1 withError:(id)arg2;
- (_Bool)isLiving;
- (void)renderWithCompletion:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithString:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

