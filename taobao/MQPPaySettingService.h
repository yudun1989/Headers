//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPBaseService.h"

@class ImmPayEventHandler;

@interface MQPPaySettingService : MQPBaseService
{
    ImmPayEventHandler *_eventHandler;
}

@property(retain, nonatomic) ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)exit;
- (void)shouldExitCashier;
- (void)doExit;
- (void)doReset;
- (void)setupNotificationObserve;
- (void)handleMessage:(id)arg1;
- (void)stop:(id)arg1;
- (_Bool)startWithOptions:(id)arg1;
- (void)dealloc;

@end

