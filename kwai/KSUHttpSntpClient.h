//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol OS_dispatch_queue;

@interface KSUHttpSntpClient : NSObject
{
    NSNumber *_networkOffset;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSNumber *networkOffset; // @synthesize networkOffset=_networkOffset;
- (void).cxx_destruct;
- (void)networkOffsetWithHost:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)networkDateWithHosts:(id)arg1 index:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)networkDateWithHosts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)networkDateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)networkDate;
@property(readonly, nonatomic) NSNumber *timeOffset;
- (id)init;

@end

