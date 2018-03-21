//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XFDBQueue;
@protocol XFDBObjectProtocol;

@interface XFDBConnection : NSObject
{
    _Bool _isSchemaChecked;
    NSString *_dbPath;
    id <XFDBObjectProtocol> _dbObject;
    XFDBQueue *_dbQueue;
}

+ (id)primaryKeysFromDBObject:(id)arg1;
+ (id)indexedPropertiesFromDBObject:(id)arg1;
+ (id)tableNameFromDBObject:(id)arg1;
@property(retain, nonatomic) XFDBQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(nonatomic) _Bool isSchemaChecked; // @synthesize isSchemaChecked=_isSchemaChecked;
@property(retain, nonatomic) id <XFDBObjectProtocol> dbObject; // @synthesize dbObject=_dbObject;
@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
- (void).cxx_destruct;
- (id)querySqlFromRequest:(id)arg1 tableName:(id)arg2;
- (id)alterTableSqlWithColumn:(id)arg1 sqlType:(id)arg2 tableName:(id)arg3;
- (id)sqlTypeFromPropertyType:(id)arg1;
- (id)createTableSqlForDBObject:(id)arg1;
- (_Bool)tryAlterTableWithSchemaDict:(id)arg1 tableName:(id)arg2;
- (_Bool)tryCreateTableWithDBObject:(id)arg1;
- (_Bool)_checkDBSchemaWithDBObject:(id)arg1;
- (_Bool)checkDBSchemaWithDBObject:(id)arg1 errorPtr:(id *)arg2;
- (id)dictByAddKeyPrefix:(id)arg1 fromDict:(id)arg2;
- (id)bindKeyArrayWithKeys:(id)arg1 prefix:(id)arg2;
- (_Bool)_deleteAllObjectsWithError:(id *)arg1 dbObject:(id)arg2;
- (_Bool)_deleteObjectsWithError:(id *)arg1 dbObject:(id)arg2 where:(id)arg3 arguments:(char *)arg4;
- (id)_fetchWithRequest:(id)arg1 dbObject:(id)arg2 errorPtr:(id *)arg3;
- (_Bool)_updateWhere:(CDUnknownBlockType)arg1 withObject:(CDUnknownBlockType)arg2 dbObject:(id)arg3 errorPrt:(id *)arg4;
- (_Bool)_insertObject:(id)arg1 replace:(_Bool)arg2 errorPtr:(id *)arg3;
- (void)performTransactionWithFMDB:(CDUnknownBlockType)arg1;
- (void)performActionWithFMDB:(CDUnknownBlockType)arg1;
- (_Bool)deleteAllObjectsWithError:(id *)arg1;
- (_Bool)deleteObjectsWithError:(id *)arg1 where:(id)arg2 arguments:(char *)arg3;
- (_Bool)deleteObjectsWithError:(id *)arg1 where:(id)arg2;
- (id)fetchWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)updateWhere:(CDUnknownBlockType)arg1 withObject:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)batchInsert:(id)arg1 error:(id *)arg2;
- (_Bool)batchInsertOrUpdate:(id)arg1 error:(id *)arg2;
- (_Bool)insertOrUpdateObject:(id)arg1 error:(id *)arg2;
- (_Bool)insertObject:(id)arg1 error:(id *)arg2;
- (_Bool)checkRowLimitWithRow:(id)arg1 limit:(long long)arg2 error:(id *)arg3;
- (_Bool)removeDBFile;
- (void)close;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (void)customInit;
- (id)initWithDBPath:(id)arg1 object:(id)arg2;

@end

