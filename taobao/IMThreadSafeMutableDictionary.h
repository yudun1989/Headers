//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMThreadSafeMutableDictionary : NSObject
{
    struct _opaque_pthread_rwlock_t s_pthread_rwlock_t;
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)performLockedWithDictionary:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (void)dealloc;
- (id)init;

@end

