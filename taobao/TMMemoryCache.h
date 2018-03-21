//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TMYYLinkedMap;
@protocol OS_dispatch_queue;

@interface TMMemoryCache : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    TMYYLinkedMap *_lru;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _shouldRemoveAllObjectsOnMemoryWarning;
    _Bool _shouldRemoveAllObjectsWhenEnteringBackground;
    _Bool _releaseOnMainThread;
    NSString *_name;
    unsigned long long _countLimit;
    unsigned long long _costLimit;
    double _ageLimit;
    double _autoTrimInterval;
    CDUnknownBlockType _didReceiveMemoryWarningBlock;
    CDUnknownBlockType _didEnterBackgroundBlock;
}

@property _Bool releaseOnMainThread; // @synthesize releaseOnMainThread=_releaseOnMainThread;
@property(copy) CDUnknownBlockType didEnterBackgroundBlock; // @synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock;
@property(copy) CDUnknownBlockType didReceiveMemoryWarningBlock; // @synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock;
@property _Bool shouldRemoveAllObjectsWhenEnteringBackground; // @synthesize shouldRemoveAllObjectsWhenEnteringBackground=_shouldRemoveAllObjectsWhenEnteringBackground;
@property _Bool shouldRemoveAllObjectsOnMemoryWarning; // @synthesize shouldRemoveAllObjectsOnMemoryWarning=_shouldRemoveAllObjectsOnMemoryWarning;
@property double autoTrimInterval; // @synthesize autoTrimInterval=_autoTrimInterval;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)trimToAge:(double)arg1;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
@property _Bool releaseAsynchronously;
- (void)setReleaseInMainThread:(_Bool)arg1;
- (_Bool)releaseInMainThread;
@property(readonly) unsigned long long totalCost;
@property(readonly) unsigned long long totalCount;
- (void)dealloc;
- (id)init;
- (void)_appDidEnterBackgroundNotification;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)_trimToAge:(double)arg1;
- (void)_trimToCount:(unsigned long long)arg1;
- (void)_trimToCost:(unsigned long long)arg1;
- (void)_trimInBackground;
- (void)_trimRecursively;

@end

