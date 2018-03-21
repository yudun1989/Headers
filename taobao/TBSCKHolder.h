//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSConditionLock, NSFileManager, NSMutableArray, NSMutableDictionary, NSString;

@interface TBSCKHolder : NSObject
{
    NSMutableDictionary *objects;
    NSMutableArray *keys;
    unsigned long long size;
    _Bool _archiving;
    _Bool _cleaning;
    NSFileManager *_fileManager;
    NSMutableArray *_keys;
    unsigned long long _size;
    NSMutableDictionary *_objects;
    NSString *_path;
    NSConditionLock *_lock;
    unsigned long long _fileCount;
}

@property unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(retain) NSConditionLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property _Bool cleaning; // @synthesize cleaning=_cleaning;
@property _Bool archiving; // @synthesize archiving=_archiving;
- (void).cxx_destruct;
- (void)unserializeFrom:(id)arg1;
- (id)serialize;
- (id)objectForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 expiredAfter:(long long)arg3;
- (void)clearAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)trimCacheDir:(id)arg1;
- (void)cleanFileWithSize;
- (void)cleanExpiredObjects;
- (void)doClean;
- (void)loadCounts;
- (void)saveCounts;
- (void)archiveAllData;
- (void)archiveData;
- (void)doArchive;
- (id)initWithToken:(id)arg1 needRunInBackground:(_Bool)arg2;
- (id)initWithToken:(id)arg1;
- (id)init;

@end

