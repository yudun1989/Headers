//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface TokenEventMonitor : NSObject
{
    NSTimer *_timer;
    int _rdmSeq;
    int _curEvent;
}

+ (id)instance;
- (void)setTokenEvent:(int)arg1;
- (void)onEventServerResponseSucc;
- (void)onEventServerResponseFail;
- (void)onEventReceivedAndSendToServer;
- (void)onEventFailedToReceive;
- (void)onEventRequest;
- (void)onTimeout;
- (void)restartTimer:(int)arg1;
- (void)resetTimer;
- (void)dealloc;

@end

