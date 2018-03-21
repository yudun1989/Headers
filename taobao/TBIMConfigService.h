//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMConfigServiceAdapter-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol TBIMConfigServiceDelegate;

@interface TBIMConfigService : NSObject <TBIMConfigServiceAdapter>
{
    YHMuticastDelegate<TBIMConfigServiceDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMConfigServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)removeValue:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

