//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoEngineEventManagerProtocol-Protocol.h"

@class NSString, TTVideoEngineEventManager;

@interface TTVPlayerLogEvent : NSObject <TTVideoEngineEventManagerProtocol>
{
    TTVideoEngineEventManager *_event;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TTVideoEngineEventManager *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)eventManagerDidUpdate:(id)arg1;
- (void)logPreloaderData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

