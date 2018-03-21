//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTXLoggerConfigurator, GTXMutableDictionary, NSRecursiveLock;

@interface GTXLoggerFactory : NSObject
{
    _Bool _initialized;
    _Bool _debug;
    GTXMutableDictionary *_loggerCache;
    GTXLoggerConfigurator *_config;
    NSRecursiveLock *_lock;
}

+ (void)parseTransmission:(id)arg1;
+ (id)defaultLogger;
+ (void)sendReports;
+ (void)interruptThenSync;
+ (void)sync:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
+ (void)sync;
+ (_Bool)isOn;
+ (void)turnOff;
+ (void)turnOn;
+ (void)bindAlias:(id)arg1;
+ (void)setApiUrl:(id)arg1;
+ (void)setAppSecret:(id)arg1;
+ (void)setAppId:(id)arg1;
+ (id)config;
+ (id)logger:(id)arg1;
+ (_Bool)isDebugMode;
+ (void)setDebugMode:(_Bool)arg1;
+ (id)version;
+ (void)initWithConfig:(id)arg1;
+ (void)init;
+ (id)factory;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) GTXLoggerConfigurator *config; // @synthesize config=_config;
@property(retain, nonatomic) GTXMutableDictionary *loggerCache; // @synthesize loggerCache=_loggerCache;
- (void).cxx_destruct;
- (id)defaultMsgLayout;
- (id)defaultLoggerName;
- (id)getLogger:(id)arg1;
- (void)initSystem;
- (id)init;

@end

