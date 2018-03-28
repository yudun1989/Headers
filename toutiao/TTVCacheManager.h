//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, YYCache;

@interface TTVCacheManager : NSObject
{
    NSHashTable *_cacheHashTable;
    NSMutableArray *_cachePathArray;
    YYCache *_localCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) YYCache *localCache; // @synthesize localCache=_localCache;
@property(retain, nonatomic) NSMutableArray *cachePathArray; // @synthesize cachePathArray=_cachePathArray;
@property(retain, nonatomic) NSHashTable *cacheHashTable; // @synthesize cacheHashTable=_cacheHashTable;
- (void).cxx_destruct;
- (void)didUserLogout:(id)arg1;
- (void)appendCachaPath:(id)arg1;
- (id)init;

@end

