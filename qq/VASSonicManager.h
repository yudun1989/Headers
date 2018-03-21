//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface VASSonicManager : NSObject <ISCListenerCallback, ISCBusinessCallback>
{
    NSObject<OS_dispatch_queue> *_sonicQueue;
}

+ (void)reportException:(id)arg1 errorCode:(long long)arg2;
+ (id)shareManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sonicQueue; // @synthesize sonicQueue=_sonicQueue;
- (void)preloadTemplateByUrl:(id)arg1 preloadType:(long long)arg2 templateTime:(double)arg3;
- (id)getGameCenterUrl;
- (void)dealWithPreloadTask:(id)arg1 withPreloadTs:(long long)arg2 redPointPath:(id)arg3;
- (id)pathToBusinessID;
- (void)dealRedPointInfoWithBufferDict:(id)arg1 withPreloadTs:(long long)arg2 andRedPointPath:(id)arg3;
- (_Bool)checkCanScanByUpdateTimeKey:(id)arg1;
- (_Bool)isPreloadTsCheck:(long long)arg1 templateChangeTime:(long long)arg2;
- (void)scanRedPointUpdate:(unsigned long long)arg1;
- (void)loadWithSonic:(id)arg1 withDelegate:(id)arg2;
- (void)dealConfigItem:(id)arg1;
- (_Bool)isMatchUinAndVersionRule:(id)arg1;
- (void)dealWithTemplateJsonConfig;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (id)getSonicUpdateJsonPath;
- (void)clearCacheData;
- (_Bool)isSonicUrl:(id)arg1;
- (_Bool)checkSonicXVFlagWithType:(long long)arg1 fromUrl:(id)arg2;
- (_Bool)isStoreOnly:(id)arg1;
- (_Bool)isSupportCacheControl:(id)arg1;
- (_Bool)isEnableLocalServer:(id)arg1;
- (id)isSupportIpConnect:(id)arg1;
- (id)defaultQQUserAgent;
- (void)onLoginSuccess:(id)arg1;
- (void)dealloc;
- (id)defaultUserAgent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

