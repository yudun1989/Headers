//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MSOAContext, MSOARouter;

@interface MSOABus : NSObject
{
    _Bool _useServiceHub;
    MSOAContext *_context;
    MSOARouter *_localRouter;
}

@property(nonatomic) _Bool useServiceHub; // @synthesize useServiceHub=_useServiceHub;
@property(retain, nonatomic) MSOARouter *localRouter; // @synthesize localRouter=_localRouter;
@property(retain, nonatomic) MSOAContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initializeMachOProvider;
- (void)initializeMachOConsumer;
- (void)exitDebugSwitch;
- (void)setDebugSwitch:(id)arg1;
- (void)setSwitchForGlobal:(id)arg1 scene:(id)arg2;
- (void)orangeConfigChangedNotify:(id)arg1;
- (void)setConsumerRawPathMap:(id)arg1;
- (void)setRawRouteMap:(id)arg1 withVersion:(id)arg2;
- (void)getConfigFromOrange;
- (id)servicesDigest;
- (unsigned long long)checkServiceState:(id)arg1;
- (void)prepareForIntent:(id)arg1;
- (_Bool)isNeedDemoteToServiceHub;
- (id)obtainServiceForIntent:(id)arg1;
- (_Bool)executeServiceWithIntent:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

