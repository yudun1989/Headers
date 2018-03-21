//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MemoryCache.h"

@class NSObject, NSString, _APMLinkedMap;
@protocol OS_dispatch_queue;

@interface LRUMemoryCache : MemoryCache
{
    struct _opaque_pthread_mutex_t _lock;
    _APMLinkedMap *_lru;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _shouldRemoveAllObjectsOnMemoryWarning;
    _Bool _shouldRemoveAllObjectsWhenEnteringBackground;
    _Bool _releaseOnMainThread;
    _Bool _releaseAsynchronously;
    NSString *_name;
}

@property(nonatomic) _Bool releaseAsynchronously; // @synthesize releaseAsynchronously=_releaseAsynchronously;
@property(nonatomic) _Bool releaseOnMainThread; // @synthesize releaseOnMainThread=_releaseOnMainThread;
@property(nonatomic) _Bool shouldRemoveAllObjectsWhenEnteringBackground; // @synthesize shouldRemoveAllObjectsWhenEnteringBackground=_shouldRemoveAllObjectsWhenEnteringBackground;
@property(nonatomic) _Bool shouldRemoveAllObjectsOnMemoryWarning; // @synthesize shouldRemoveAllObjectsOnMemoryWarning=_shouldRemoveAllObjectsOnMemoryWarning;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (long long)totalCost;
- (unsigned long long)totalCount;
- (void)trimToAge:(double)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (void)trimToCost:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

