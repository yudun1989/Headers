//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ANXLogManager, ANXOTPManager, ANXPayQueryRes, ANXRuntimeConfig, NSMutableArray;

@interface ANXProcessResult : NSObject
{
    _Bool _onProcess;
    CDUnknownBlockType _processResult;
    ANXPayQueryRes *_response;
    ANXOTPManager *_otpManager;
    ANXLogManager *_logManager;
    ANXRuntimeConfig *_runtimeConfig;
    NSMutableArray *_processQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *processQueue; // @synthesize processQueue=_processQueue;
@property(nonatomic) _Bool onProcess; // @synthesize onProcess=_onProcess;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
@property(retain, nonatomic) ANXOTPManager *otpManager; // @synthesize otpManager=_otpManager;
@property(retain, nonatomic) ANXPayQueryRes *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType processResult; // @synthesize processResult=_processResult;
- (void).cxx_destruct;
- (void)processDataForcashierAndCallerWithSdkBizDataJson:(id)arg1;
- (void)processDataForCashierWithSdkBizDataJson:(id)arg1;
- (void)processAck;
- (void)processPaySuccess;
- (_Bool)processPayMemo:(id)arg1;
- (void)processCashier;
- (void)processDeleteSeed;
- (void)processWithResponse:(id)arg1 logManager:(id)arg2 runtimeConfig:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)mprocessWithResponse:(id)arg1 logManager:(id)arg2 runtimeConfig:(id)arg3 result:(CDUnknownBlockType)arg4;

@end

