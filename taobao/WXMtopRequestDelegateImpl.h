//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSDictionary, NSString, WXMtopModule, WXMtopRequest;

@interface WXMtopRequestDelegateImpl : NSObject <TBSDKServerDelegate>
{
    _Bool _newStyleCallback;
    _Bool _isCallbacked;
    WXMtopRequest *_request;
    NSString *_requestId;
    WXMtopModule *_module;
    NSDictionary *_parameters;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    long long _timer;
    NSString *_cacheResult;
    NSString *_errorCode;
    NSString *_serverResponse;
}

@property(nonatomic) _Bool isCallbacked; // @synthesize isCallbacked=_isCallbacked;
@property(retain) NSString *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(retain) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain) NSString *cacheResult; // @synthesize cacheResult=_cacheResult;
@property(nonatomic) long long timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool newStyleCallback; // @synthesize newStyleCallback=_newStyleCallback;
@property(copy, nonatomic) CDUnknownBlockType failureCallback; // @synthesize failureCallback=_failureCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) WXMtopModule *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) WXMtopRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)retValue:(id)arg1 data:(id)arg2;
- (void)callbackFailure:(id)arg1 data:(id)arg2;
- (void)callbackSuccess:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)didLoadCache:(id)arg1 responseHeader:(id)arg2 body:(id)arg3;
- (void)initTimer;
- (_Bool)isNeedCallback;
- (id)initWithRequest:(id)arg1 id:(id)arg2 module:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 timer:(long long)arg6 parameters:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

