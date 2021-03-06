//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, QRServerEngine;
@protocol OS_dispatch_queue;

@interface QRReadingDurationReporter : NSObject
{
    QRServerEngine *_engine;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_readingDurations;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onSendReqFail:(id)arg1;
- (void)onSendReqSuccess:(id)arg1;
- (void)reportReadingDurations;
- (void)reportReadingDurationWith:(id)arg1;
- (void)increaseDuraiotnFor:(id)arg1;
- (void)stopDurationFor:(id)arg1;
- (void)startDurationFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

