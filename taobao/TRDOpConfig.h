//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, TRDOpSubConfig, TRDRTUploadStrategy;

@interface TRDOpConfig : NSObject
{
    _Bool _logSwitch;
    _Bool _logDestroy;
    _Bool _bLevelAutoFormat;
    _Bool _bMtopServiceVaild;
    _Bool _bRuntimeTurnOn;
    _Bool _proxy;
    TRDOpSubConfig *_logicConfig;
    TRDOpSubConfig *_u_f_Config;
    TRDOpSubConfig *_dataConfig;
    TRDOpSubConfig *_specialConfig;
    NSString *_traceId;
    NSString *_debugId;
    long long _duration;
    long long _retryTimes;
    TRDRTUploadStrategy *_uploadStrategy;
    NSArray *_filterNetwork;
    NSString *_rootPath;
    NSString *_networkType;
    NSString *_deviceId;
    NSString *_deviceModule;
    NSString *_appInfo;
    NSString *_userNick;
    NSString *_userId;
    NSString *_appVersion;
    NSString *_version;
    NSString *_appKey;
    NSString *_carrier;
    NSString *_brand;
    NSString *_os;
    NSString *_testNick;
    NSString *_dumpFilePath;
}

+ (id)transferLevelToPrefix:(long long)arg1;
+ (long long)transferLevelStrToEnum:(id)arg1;
+ (long long)formatLevelValue:(id)arg1;
@property(retain, nonatomic) NSString *dumpFilePath; // @synthesize dumpFilePath=_dumpFilePath;
@property(retain, nonatomic) NSString *testNick; // @synthesize testNick=_testNick;
@property(nonatomic) _Bool proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *deviceModule; // @synthesize deviceModule=_deviceModule;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSArray *filterNetwork; // @synthesize filterNetwork=_filterNetwork;
@property(retain, nonatomic) TRDRTUploadStrategy *uploadStrategy; // @synthesize uploadStrategy=_uploadStrategy;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) _Bool bRuntimeTurnOn; // @synthesize bRuntimeTurnOn=_bRuntimeTurnOn;
@property(retain, nonatomic) TRDOpSubConfig *specialConfig; // @synthesize specialConfig=_specialConfig;
@property(retain, nonatomic) TRDOpSubConfig *dataConfig; // @synthesize dataConfig=_dataConfig;
@property(retain, nonatomic) TRDOpSubConfig *u_f_Config; // @synthesize u_f_Config=_u_f_Config;
@property(retain, nonatomic) TRDOpSubConfig *logicConfig; // @synthesize logicConfig=_logicConfig;
@property(nonatomic) _Bool bMtopServiceVaild; // @synthesize bMtopServiceVaild=_bMtopServiceVaild;
@property(nonatomic) _Bool bLevelAutoFormat; // @synthesize bLevelAutoFormat=_bLevelAutoFormat;
@property(nonatomic) _Bool logDestroy; // @synthesize logDestroy=_logDestroy;
@property(nonatomic) _Bool logSwitch; // @synthesize logSwitch=_logSwitch;
- (void).cxx_destruct;
- (id)getTRDConfigForDebug;
- (void)resetRealTimeConfig;
- (void)setTRDConfig:(id)arg1;
- (id)trdRootPath;
- (_Bool)checkRealTimeIsVaild;
- (void)saveConfigToFile;
- (void)initConfigFromFile;
- (void)setConfigInfo:(id)arg1;
- (void)removeInvaildFile;
- (id)trdConfigFilePath;
- (id)getDefaultConfig;
- (void)resetAllPerperties;
- (void)formatSubConfigValue:(id)arg1 andOutput:(id)arg2 andLevelKey:(id)arg3 andModuleKey:(id)arg4 andSwitchKey:(id)arg5;
- (id)formatModuleValue:(id)arg1 andLevel:(long long)arg2 andAssert:(CDUnknownBlockType)arg3;
- (_Bool)formatBoolValue:(id)arg1 andAssert:(CDUnknownBlockType)arg2;
- (long long)dateDistance:(id)arg1 andNearDate:(id)arg2;
- (id)getInvaildDumpFile;
- (void)deleteDumpFile;

@end

