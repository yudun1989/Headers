//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcAsyncCaller, NSCondition, NSException;

@interface SCRPCSyncCaller : NSObject
{
    _Bool _hasCompleted;
    NSException *_exception;
    DTRpcAsyncCaller *_rpcCaller;
    NSCondition *_condition;
}

@property(nonatomic) _Bool hasCompleted; // @synthesize hasCompleted=_hasCompleted;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=_exception;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithEntry:(CDUnknownBlockType)arg1;

@end

