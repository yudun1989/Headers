//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, ZCPackageConfig;

@interface ZCPackageConfigBuilder : NSObject
{
    _Bool _needSaveConfig;
    NSString *_version;
    long long _type;
    ZCPackageConfig *_oldConfig;
    NSDictionary *_oldZcacheMap;
    NSMutableDictionary *_mutableApps;
    NSMutableDictionary *_zcacheMap;
}

@property(retain, nonatomic) NSMutableDictionary *zcacheMap; // @synthesize zcacheMap=_zcacheMap;
@property(retain, nonatomic) NSMutableDictionary *mutableApps; // @synthesize mutableApps=_mutableApps;
@property(copy, nonatomic) NSDictionary *oldZcacheMap; // @synthesize oldZcacheMap=_oldZcacheMap;
@property(retain, nonatomic) ZCPackageConfig *oldConfig; // @synthesize oldConfig=_oldConfig;
@property(nonatomic) _Bool needSaveConfig; // @synthesize needSaveConfig=_needSaveConfig;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)removeInvalidZCacheMap;
- (void)removeZCacheMap:(id)arg1;
- (void)removeApp:(id)arg1;
- (id)removeAppInstallationInfo:(id)arg1;
- (void)updateZcache:(id)arg1 withMD5List:(id)arg2 isIncrement:(_Bool)arg3;
- (void)setApp:(id)arg1 installedVersion:(id)arg2 installedSeq:(unsigned long long)arg3 resource:(id)arg4;
- (void)setApp:(id)arg1 withAppInfo:(id)arg2;
- (void)setApp:(id)arg1 withConfig:(id)arg2;
- (void)markAppDelete:(id)arg1;
- (void)setApp:(id)arg1 withStatus:(long long)arg2;
- (_Bool)registerApp:(id)arg1;
- (void)mergeAppConfig:(id)arg1;
- (void)mergeConfig:(id)arg1 isOptional:(_Bool)arg2;
- (id)buildZCacheMap;
- (id)buildConfig;
@property(readonly, copy, nonatomic) NSDictionary *apps;
- (id)initWithConfig:(id)arg1 withZCacheMap:(id)arg2;

@end

