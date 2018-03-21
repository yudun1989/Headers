//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRDisposable.h"

@interface TBRCompoundDisposable : TBRDisposable
{
    int _spinLock;
    TBRDisposable *_inlineDisposables[2];
    struct __CFArray *_disposables;
    _Bool _disposed;
}

+ (id)compoundDisposableWithDisposables:(id)arg1;
+ (id)compoundDisposable;
- (void).cxx_destruct;
- (void)dispose;
- (void)removeDisposable:(id)arg1;
- (void)addDisposable:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithDisposables:(id)arg1;
- (_Bool)isDisposed;

@end

