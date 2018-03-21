//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSPointerArray;

@interface ODObserver : NSObject
{
    _Bool _needClean;
    _Bool _waitClean;
    NSPointerArray *_delegates;
    NSLock *_lock;
}

@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(retain) NSPointerArray *delegates; // @synthesize delegates=_delegates;
- (void)cleanInvalidObserver;
- (void)checkNeedClean;
- (void)blankCall;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)removeObserverDelegate:(id)arg1;
- (void)addObserverDelegate:(id)arg1;
- (id)init;
- (void)dealloc;

@end

