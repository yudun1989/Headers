//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MADataCache-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MADiskCache : NSObject <MADataCache>
{
    NSObject<OS_dispatch_queue> *_diskCacheQueue;
}

+ (int)isExistCacheWithIndexName:(id)arg1 withTile:(struct MATile)arg2;
+ (_Bool)createCachedDataPath:(id)arg1 withIndexName:(id)arg2 withDataName:(id)arg3;
+ (id)getCacheFilePath:(struct MATile)arg1 cacheKey:(id)arg2;
+ (struct JMergePoint)GetJMergeDirection:(struct MATile)arg1;
+ (struct JMergePoint)GetJMergeGrid:(struct MATile)arg1;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)removeAllCachedImagesForCacheKey:(id)arg1;
- (void)removeAllCachedImages;
- (void)addImage:(id)arg1 forTile:(struct MATile)arg2 withCacheKey:(id)arg3;
- (id)cachedImage:(struct MATile)arg1 withCacheKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

