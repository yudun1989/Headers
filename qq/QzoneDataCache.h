//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, QzoneDataCacheHelper;
@protocol OS_dispatch_queue, QzoneDataCacheStrategyProtocol;

@interface QzoneDataCache : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    NSMutableDictionary *_memoryDataCache;
    long long _memoryDataCacheMaxLen;
    QzoneDataCacheHelper *_cacheHelper;
    id <QzoneDataCacheStrategyProtocol> _strategyProtocol;
}

+ (void)removeOldCachePath:(id)arg1;
+ (id)sharedCacheWithoutPurge;
+ (id)sharedDiskCache;
+ (id)sharedCache;
@property(retain, nonatomic) id <QzoneDataCacheStrategyProtocol> strategyProtocol; // @synthesize strategyProtocol=_strategyProtocol;
- (void).cxx_destruct;
- (void)syncCacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4 expireDate:(id)arg5;
- (void)onReceiveMemoryWarning;
- (void)clearMemoryCache;
- (void)setDataNode:(id)arg1 forKey:(id)arg2;
- (void)doSynchronize:(id)arg1;
- (void)synchronize;
- (void)clearAllDataAndResources;
- (void)clearResources;
- (void)clearAllData;
- (_Bool)hasDataFor:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (void)removeDataFor:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (void)expireMemroyCacheIfNeed;
- (id)loadDataForKey:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (void)cacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4 expireDate:(id)arg5;
- (void)cacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4;
- (void)cacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4 encrypt:(_Bool)arg5 expireDate:(id)arg6;
- (_Bool)prepareForUse;
- (void)dealloc;
- (id)initWithStrategy:(id)arg1;
- (id)init;

@end

