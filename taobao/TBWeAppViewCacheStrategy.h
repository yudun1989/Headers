//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBWeAppViewCacheStrategy : NSObject
{
    int _cacheType;
    int _loadType;
    int _cacheSyncPeriod;
    NSArray *_cacheKeys;
}

@property(retain, nonatomic) NSArray *cacheKeys; // @synthesize cacheKeys=_cacheKeys;
@property(nonatomic) int cacheSyncPeriod; // @synthesize cacheSyncPeriod=_cacheSyncPeriod;
@property(nonatomic) int loadType; // @synthesize loadType=_loadType;
@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
- (void).cxx_destruct;
- (void)setFromDict:(id)arg1;

@end

