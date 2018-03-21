//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSValue, Protocol;

@interface TBTradeDelegateProxy : NSProxy
{
    struct __CFDictionary *_signatures;
    id _delegate;
    Protocol *_protocol;
    NSValue *_defaultReturnValue;
}

@property(readonly, nonatomic) NSValue *defaultReturnValue; // @synthesize defaultReturnValue=_defaultReturnValue;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)methodSignaturesForProtocol:(id)arg1 inDictionary:(struct __CFDictionary *)arg2;
- (struct __CFDictionary *)methodSignaturesForProtocol:(id)arg1;
- (id)copyThatDefaultsToYES;
- (id)copyThatDefaultsTo:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)initWithDelegate:(id)arg1 conformingToProtocol:(id)arg2 defaultReturnValue:(id)arg3;

@end

