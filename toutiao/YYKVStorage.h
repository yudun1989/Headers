//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface YYKVStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_trashQueue;
    NSString *_path;
    NSString *_dbPath;
    NSString *_dataPath;
    NSString *_trashPath;
    struct sqlite3 *_db;
    struct __CFDictionary *_dbStmtCache;
    double _dbLastOpenErrorTime;
    unsigned long long _dbOpenErrorCount;
    _Bool _errorLogsEnabled;
    unsigned long long _type;
}

@property(nonatomic) _Bool errorLogsEnabled; // @synthesize errorLogsEnabled=_errorLogsEnabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (int)getItemsSize;
- (int)getItemsCount;
- (_Bool)itemExistsForKey:(id)arg1;
- (id)getItemValueForKeys:(id)arg1;
- (id)getItemInfoForKeys:(id)arg1;
- (id)getItemForKeys:(id)arg1;
- (id)getItemValueForKey:(id)arg1;
- (id)getItemInfoForKey:(id)arg1;
- (id)getItemForKey:(id)arg1;
- (void)removeAllItemsWithProgressBlock:(CDUnknownBlockType)arg1 endBlock:(CDUnknownBlockType)arg2;
- (_Bool)removeAllItems;
- (_Bool)removeItemsToFitCount:(int)arg1;
- (_Bool)removeItemsToFitSize:(int)arg1;
- (_Bool)removeItemsEarlierThanTime:(int)arg1;
- (_Bool)removeItemsLargerThanSize:(int)arg1;
- (_Bool)removeItemForKeys:(id)arg1;
- (_Bool)removeItemForKey:(id)arg1;
- (_Bool)saveItemWithKey:(id)arg1 value:(id)arg2 filename:(id)arg3 extendedData:(id)arg4;
- (_Bool)saveItemWithKey:(id)arg1 value:(id)arg2;
- (_Bool)saveItem:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (void)_reset;
- (void)_fileEmptyTrashInBackground;
- (_Bool)_fileMoveAllToTrash;
- (_Bool)_fileDeleteWithName:(id)arg1;
- (id)_fileReadWithName:(id)arg1;
- (_Bool)_fileWriteWithName:(id)arg1 data:(id)arg2;
- (int)_dbGetTotalItemCount;
- (int)_dbGetTotalItemSize;
- (int)_dbGetItemCountWithKey:(id)arg1;
- (id)_dbGetItemSizeInfoOrderByTimeAscWithLimit:(int)arg1;
- (id)_dbGetFilenamesWithTimeEarlierThan:(int)arg1;
- (id)_dbGetFilenamesWithSizeLargerThan:(int)arg1;
- (id)_dbGetFilenameWithKeys:(id)arg1;
- (id)_dbGetFilenameWithKey:(id)arg1;
- (id)_dbGetValueWithKey:(id)arg1;
- (id)_dbGetItemWithKeys:(id)arg1 excludeInlineData:(_Bool)arg2;
- (id)_dbGetItemWithKey:(id)arg1 excludeInlineData:(_Bool)arg2;
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt *)arg1 excludeInlineData:(_Bool)arg2;
- (_Bool)_dbDeleteItemsWithTimeEarlierThan:(int)arg1;
- (_Bool)_dbDeleteItemsWithSizeLargerThan:(int)arg1;
- (_Bool)_dbDeleteItemWithKeys:(id)arg1;
- (_Bool)_dbDeleteItemWithKey:(id)arg1;
- (_Bool)_dbUpdateAccessTimeWithKeys:(id)arg1;
- (_Bool)_dbUpdateAccessTimeWithKey:(id)arg1;
- (_Bool)_dbSaveWithKey:(id)arg1 value:(id)arg2 fileName:(id)arg3 extendedData:(id)arg4;
- (void)_dbBindJoinedKeys:(id)arg1 stmt:(struct sqlite3_stmt *)arg2 fromIndex:(int)arg3;
- (id)_dbJoinedKeys:(id)arg1;
- (struct sqlite3_stmt *)_dbPrepareStmt:(id)arg1;
- (_Bool)_dbExecute:(id)arg1;
- (void)_dbCheckpoint;
- (_Bool)_dbInitialize;
- (_Bool)_dbCheck;
- (_Bool)_dbClose;
- (_Bool)_dbOpen;

@end

