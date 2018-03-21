//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMThreadSafeMutableArry : NSObject
{
    struct _opaque_pthread_rwlock_t s_pthread_rwlock_t;
    NSMutableArray *_mutableArry;
}

@property(readonly, nonatomic) NSMutableArray *mutableArry; // @synthesize mutableArry=_mutableArry;
- (void).cxx_destruct;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
@property(readonly, nonatomic) id firstObject;
@property(readonly, nonatomic) id lastObject;
- (void)enumerateReverseOrderObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (unsigned long long)getCount;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

