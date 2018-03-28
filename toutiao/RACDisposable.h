//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RACDisposable : NSObject
{
    void *_disposeBlock;
}

+ (id)disposableWithBlock:(CDUnknownBlockType)arg1;
- (id)asScopedDisposable;
- (void)dispose;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
@property(readonly, getter=isDisposed) _Bool disposed;

@end

