//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AdhocDataCache : NSObject
{
    NSDictionary *_flags;
    NSDictionary *_config;
}

+ (void)forceToDeleteCacheInfo;
+ (id)sharedInstance;
@property(retain, nonatomic, setter=setConfig:) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic, setter=setFlags:) NSDictionary *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)setLastTrackInterval;
- (long long)getLastTrackInterval;
- (long long)getLastSDKConfigInterval;
- (long long)getLastUpdateInterval;
- (_Bool)compareFlags:(id)arg1 withFlags:(id)arg2;
- (void)updateAccountValue:(id)arg1 forStat:(id)arg2;
- (void)updateUsedFlag:(id)arg1;
- (id)getUsedFlags;
- (id)getExperimentsIDs;
- (id)getExperimentsNames;
- (id)getExperiments;
- (id)getWYSIWYGChanges;
- (void)synchronizeCache;
- (id)init;

@end

