//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcAsyncCaller, NSString, NSTimer;

@interface APOnsitePaySDK : NSObject
{
    _Bool _isQuery;
    unsigned long long _envType;
    NSString *_extInfo;
    NSString *_mgwUrl;
    DTRpcAsyncCaller *_rpcCaller;
    NSTimer *_timeoutTimer;
    CDUnknownBlockType _completeBlock;
}

+ (id)instance;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) _Bool isQuery; // @synthesize isQuery=_isQuery;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
@property(copy, nonatomic) NSString *mgwUrl; // @synthesize mgwUrl=_mgwUrl;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long long envType; // @synthesize envType=_envType;
- (void).cxx_destruct;
- (id)getDynamicId:(id)arg1;
- (id)getQRCodeImg:(id)arg1 level:(long long)arg2 width:(int)arg3;
- (id)getQRCode:(id)arg1 level:(unsigned long long)arg2;
- (id)getBarCode:(id)arg1;
- (void)onTimeOut;
- (void)stopTimeout;
- (void)cancelGetDyid;
- (void)getDyid:(id)arg1 timeout:(double)arg2 result:(CDUnknownBlockType)arg3;
- (id)appRPCGatewayURL;
- (void)dealloc;

@end

