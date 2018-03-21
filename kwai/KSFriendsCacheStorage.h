//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSCache;
@protocol OS_dispatch_queue;

@interface KSFriendsCacheStorage : NSObject
{
    NSCache *_cache;
    FMDatabaseQueue *_databaseQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultCacheStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)dealloc;

@end

