//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXSDKEngine : NSObject
{
}

+ (void)_originalRegisterHandlers:(id)arg1;
+ (void)_originalRegisterModules:(id)arg1;
+ (void)_originalRegisterComponents:(id)arg1;
+ (void)connectDevToolServer:(id)arg1;
+ (void)connectDebugServer:(id)arg1;
+ (void)restartWithScript:(id)arg1;
+ (void)restart;
+ (void)unload;
+ (id)customEnvironment;
+ (void)setCustomEnvironment:(id)arg1;
+ (id)topInstance;
+ (id)SDKEngineVersion;
+ (void)registerDefaults;
+ (void)initSDKEnvironment:(id)arg1;
+ (void)initSDKEnvironment;
+ (id)handlerForProtocol:(id)arg1;
+ (void)registerHandler:(id)arg1 withProtocol:(id)arg2;
+ (void)_registerDefaultHandlers;
+ (void)unregisterService:(id)arg1;
+ (void)registerService:(id)arg1 withScriptUrl:(id)arg2 WithOptions:(id)arg3;
+ (void)registerService:(id)arg1 withScript:(id)arg2 withOptions:(id)arg3;
+ (void)registerComponent:(id)arg1 withClass:(Class)arg2 withProperties:(id)arg3;
+ (void)registerExtendCallNative:(id)arg1 withClass:(Class)arg2;
+ (void)registerComponent:(id)arg1 withClass:(Class)arg2;
+ (void)_registerDefaultComponents;
+ (void)registerModule:(id)arg1 withClass:(Class)arg2;
+ (void)_registerDefaultModules;
+ (void)initSDKEnviroment:(id)arg1;
+ (void)initSDKEnviroment;

@end

