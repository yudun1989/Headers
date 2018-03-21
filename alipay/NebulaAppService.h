//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTService-Protocol.h"

@class NSString, NebulaStartApplicationHandler;

@interface NebulaAppService : NSObject <DTService>
{
    NebulaStartApplicationHandler *_startHandler;
}

@property(retain, nonatomic) NebulaStartApplicationHandler *startHandler; // @synthesize startHandler=_startHandler;
- (void).cxx_destruct;
- (void)configuration;
- (void)addCommonApps:(id)arg1;
- (void)setDebugDelegate:(id)arg1;
- (int)appType:(id)arg1;
- (_Bool)enableNebulaHandler;
- (_Bool)isVersionValid:(id)arg1 opversion:(id)arg2 nbversion:(id)arg3;
- (_Bool)verifyApp:(id)arg1;
- (_Bool)isNebulaAppId:(id)arg1 nebulaVersion:(id *)arg2;
- (void)installApp:(id)arg1 process:(CDUnknownBlockType)arg2 finish:(CDUnknownBlockType)arg3;
- (void)requestApps:(id)arg1 param:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (id)findApp:(id)arg1;
- (void)prepareWithAppId:(id)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

