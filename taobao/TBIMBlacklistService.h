//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "TBIMBlacklistServiceAdapter-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol TBIMBlacklistServiceAdapterDelegate;

@interface TBIMBlacklistService : MKTMsgBusHelp <TBIMBlacklistServiceAdapter>
{
    YHMuticastDelegate<TBIMBlacklistServiceAdapterDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMBlacklistServiceAdapterDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)modifyStatusArgs:(id)arg1 error:(id)arg2;
- (void)modifyStatusArgs:(id)arg1;
- (void)blacklistArgs:(id)arg1 error:(id)arg2;
- (void)blacklistArgs:(id)arg1;
- (void)modifyStatus:(_Bool)arg1 withModifyUserId:(id)arg2 forUserId:(id)arg3;
- (void)blacklistPageNo:(long long)arg1 pageSize:(long long)arg2 forUserId:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

