//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface _priv_NBSTraceItem : NSLock
{
    long long time_start;
    long long time_finish;
    NSString *key;
    long long time_exclusive;
    long long mem_1;
    long long mem_2;
    int cpu_1;
    int cpu_2;
    NSMutableArray *subList;
    NSMutableDictionary *otherData;
    _Bool ignore;
    _Bool isClosed;
    int category;
    NSString *classNm;
    NSString *methodNm;
    NSArray *threadInfo;
    NSRecursiveLock *recursiveLock;
}

@property(readonly) NSMutableArray *subList; // @synthesize subList;
@property(retain, nonatomic) NSString *methodNm; // @synthesize methodNm;
@property(retain, nonatomic) NSString *classNm; // @synthesize classNm;
@property int category; // @synthesize category;
@property _Bool isClosed; // @synthesize isClosed;
@property _Bool ignore; // @synthesize ignore;
@property(readonly) NSMutableDictionary *otherData; // @synthesize otherData;
@property(retain, nonatomic) NSString *key; // @synthesize key;
@property int cpu_2; // @synthesize cpu_2;
@property int cpu_1; // @synthesize cpu_1;
@property long long mem_2; // @synthesize mem_2;
@property long long mem_1; // @synthesize mem_1;
@property long long time_start; // @synthesize time_start;
@property long long time_finish; // @synthesize time_finish;
@property long long time_exclusive; // @synthesize time_exclusive;
- (void).cxx_destruct;
- (int)threadId;
- (id)taillorWithTM1:(long long)arg1 andWithTM2:(long long)arg2;
- (void)copyFrom:(id)arg1;
- (id)renderByAbsoluteTime:(long long)arg1;
- (void)calculate_time_excWithSub;
- (id)init;

@end

