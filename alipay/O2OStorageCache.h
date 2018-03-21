//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OCache.h"

@class APLRUDiskCache;
@protocol SAAccountService;

@interface O2OStorageCache : O2OCache
{
    APLRUDiskCache *_internalCache;
    id <SAAccountService> accountService;
}

+ (id)sharedImportentUserCache;
+ (id)sharedUserCache;
+ (id)sharedCommonCache;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)wrapperForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withExpires:(id)arg3;
- (id)initWithName:(id)arg1 withCapacity:(long long)arg2 withScope:(unsigned long long)arg3;

@end

