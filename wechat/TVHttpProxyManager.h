//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVHttpProxyManager : NSObject
{
}

+ (id)getInstance;
- (void)TVHttpProxyHandlerMemoryWarning;
- (void)TVHttpProxySetPlayerState:(int)arg1;
- (void)TVHttpProxySetNetWorkState:(int)arg1;
- (void)TVHttpProxyStopPlay:(int)arg1;
- (void)TVHttpProxySetRemainTime:(int)arg1 withRemainTime:(int)arg2;
- (id)TVHttpProxyBuildPlayURLMP4:(int)arg1;
- (int)TVHttpProxyPreLoad:(int)arg1 withDuration:(int)arg2;
- (int)TVHttpProxyStartPlay:(id)arg1 withFileType:(int)arg2 withFileID:(id)arg3 withFileSize:(long long)arg4 withFileDuration:(int)arg5;
- (id)TVHttpProxyGetVersion;
- (void)TVHttpProxyDeinit;
- (int)TVHttpProxyGetLocalServerPort;
- (int)TVHttpProxyInit:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)deinitModule;
- (int)initModule:(CDUnknownFunctionPointerType)arg1 withReportFunc:(CDUnknownFunctionPointerType)arg2 withIDKeyReportFunc:(CDUnknownFunctionPointerType)arg3 withKVReportFunc:(CDUnknownFunctionPointerType)arg4;
- (void)deinitLog;
- (void)initLog;
- (id)init;

@end

