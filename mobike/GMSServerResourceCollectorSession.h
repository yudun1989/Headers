//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSServerResourceManager, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface GMSServerResourceCollectorSession : NSObject
{
    GMSServerResourceManager *_resourceManager;
    NSSet *_urlStrings;
    NSMutableDictionary *_resourceMap;
    _Bool _isStarted;
    long long _inflightRequestCount;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)invokeHandler;
- (void)handleResource:(id)arg1;
- (void)start;
- (id)initWithResouceManager:(id)arg1 URLStrings:(id)arg2 handlerQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)init;

@end

