//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZCAppConfigExport-Protocol.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface QZCAppConfig : NSObject <QZCAppConfigExport>
{
    NSMutableDictionary *_defaultConfig;
    NSMutableDictionary *_serverConfig;
    NSRecursiveLock *_lock;
    long long _scene;
    NSString *_cookies;
}

+ (id)numberArrayWithFirstKey:(id)arg1 secondKey:(id)arg2;
+ (id)stringArrayWithFirstKey:(id)arg1 secondKey:(id)arg2 separator:(id)arg3;
+ (id)stringArrayWithFirstKey:(id)arg1 secondKey:(id)arg2;
+ (_Bool)boolWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (double)doubleWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (float)floatWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (long long)longlongWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (long long)integerWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (id)numberWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (id)stringWithFirstKey:(id)arg1 SecondKey:(id)arg2;
+ (void)setAppConfigItemValue:(id)arg1 forFirstKey:(id)arg2 secondKey:(id)arg3;
+ (id)shareInastance;
@property(readonly, nonatomic) NSString *cookies; // @synthesize cookies=_cookies;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)generateIniFileWithConfig:(id)arg1;
- (id)stringWithFirstKey:(id)arg1 SecondKey:(id)arg2;
- (void)setAppConfigItemValue:(id)arg1 forFirstKey:(id)arg2 secondKey:(id)arg3;
- (void)printQzoneAppConfig;
- (void)clearLocalConfig;
- (void)clearAllConfig;
- (_Bool)needResetStategy:(id)arg1;
- (void)initDirectIPFromWNS;
- (void)updateSetting:(id)arg1;
- (void)parseAppConfig:(id)arg1;
- (id)getCookies;
- (_Bool)checkConfigExpired;
- (void)loadSeverAppConfig;
- (void)loadLocalAppConfig;
- (id)init;

@end

