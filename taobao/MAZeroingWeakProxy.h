//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class MAZeroingWeakRef;

@interface MAZeroingWeakProxy : NSProxy
{
    MAZeroingWeakRef *_weakRef;
    Class _targetClass;
}

+ (id)proxyWithTarget:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setCleanupBlock:(CDUnknownBlockType)arg1;
- (id)zeroingProxyTarget;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

