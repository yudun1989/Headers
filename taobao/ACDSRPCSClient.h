//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSDynamicClient.h"

@class NSDictionary, NSNumber, NSString;

@interface ACDSRPCSClient : ACDSDynamicClient
{
    NSDictionary *_actions;
    NSString *_group;
    NSNumber *_schemaV;
}

+ (_Bool)needLoginBox:(id)arg1;
+ (id)proxyInstance;
+ (id)sharedInstance;
+ (id)instance;
@property(retain, nonatomic) NSNumber *schemaV; // @synthesize schemaV=_schemaV;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)handlerOfRPCInvocation:(id)arg1;
- (id)argumentsOfRPCInvocation:(id)arg1;
- (id)methodNameFromSelectorStr:(id)arg1;
- (void)decodeRPCResponse:(id)arg1 withHandler:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)doRemoteRPC:(id)arg1 withHandler:(id)arg2 withInvocation:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)remoteOnlyRPC:(id)arg1 withHandler:(id)arg2 withInvocation:(id)arg3;
- (void)remoteUpdateRPC:(id)arg1 withHandler:(id)arg2 withInvocation:(id)arg3;
- (void)cacheFirstRPC:(id)arg1 withHandler:(id)arg2 withInvocation:(id)arg3;
- (void)cacheAndRemoteUpdateRPC:(id)arg1 withHandler:(id)arg2 withInvocation:(id)arg3;
- (void)cacheOnlyRPC:(id)arg1 withHandler:(id)arg2 withInvocation:(id)arg3;
- (void)handleInvocation:(id)arg1;
- (void)afterProcessInvocation:(id)arg1;
- (void)beforeProcessInvocation:(id)arg1;
- (void)processInvocation:(id)arg1;

@end

