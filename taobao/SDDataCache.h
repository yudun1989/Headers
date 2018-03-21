//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface SDDataCache : NSObject
{
    NSMutableDictionary *memCache;
    NSString *diskCachePath;
    NSOperationQueue *cacheInQueue;
    NSOperationQueue *cacheOutQueue;
}

+ (id)sharedDataCache;
- (void)cleanDisk;
- (void)clearDisk;
- (void)clearMemory;
- (void)removeDataForKey:(id)arg1;
- (_Bool)changeDataKey:(id)arg1 toNewKey:(id)arg2;
- (void)queryDiskCacheForKey:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3;
- (_Bool)isExistFileData:(id)arg1;
- (_Bool)isExistFileKey:(id)arg1;
- (id)dataFromKey:(id)arg1 fromDisk:(_Bool)arg2;
- (id)dataFromKey:(id)arg1;
- (void)storeData:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)copyFromKeyDataToKey:(id)arg1 toKey:(id)arg2;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3 withRepresentation:(_Bool)arg4;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)queryDiskCacheOperation:(id)arg1;
- (void)notifyDelegate:(id)arg1;
- (void)storeKeyWithDataToDisk:(id)arg1;
- (id)cachePathForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

