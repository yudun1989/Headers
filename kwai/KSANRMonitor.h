//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface KSANRMonitor : NSObject
{
    struct __CFRunLoop *_runloop;
    NSThread *_threadOfRunloop;
    struct __CFRunLoopObserver *_observer;
    struct _opaque_pthread_t *_thread;
    struct {
        unsigned long long _field1;
        double _field2;
        unsigned long long _field3;
        struct __CFRunLoop *_field4;
    } *_threadExt;
    _Bool _mainLoop;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)detachRunloop;
- (void)attachRunloop:(struct __CFRunLoop *)arg1;

@end

