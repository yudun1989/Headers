//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, YYCache;

@interface AWEStorage : NSObject
{
    NSString *_domain;
    double _ageLimit;
    YYCache *_cache;
}

+ (id)universalStorage;
+ (id)storageWithDomain:(id)arg1;
+ (id)IMStorage;
+ (id)studioStorage;
+ (id)foundationStorage;
+ (id)liveStorage;
+ (id)mainStorage;
@property(retain, nonatomic) YYCache *cache; // @synthesize cache=_cache;
@property(nonatomic) double ageLimit; // @synthesize ageLimit=_ageLimit;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)awe_MD5StringForKey:(id)arg1;
- (id)awe_sharedUserDefaults;
- (id)awe_valueForKey:(id)arg1 typeOfValue:(Class)arg2;
- (void)awe_setValue:(id)arg1 forKey:(id)arg2 typeOfValue:(Class)arg3;
@property(nonatomic) double autoTrimInterval;
@property(nonatomic) unsigned long long freeDiskSpaceLimit;
@property(nonatomic) unsigned long long costLimit;
@property(nonatomic) unsigned long long countLimit;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)init;

@end
