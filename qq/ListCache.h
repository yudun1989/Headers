//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString, QQLockDictionary;

@interface ListCache : NSObject <DBAccountChangedProtocol, IQQDBOperationBase>
{
    QQLockDictionary *_foldersCache;
    _Bool _favCountsInvalidated;
}

@property(nonatomic) _Bool favCountsInvalidated; // @synthesize favCountsInvalidated=_favCountsInvalidated;
- (unsigned long long)maxFolderModifyTime;
- (void)balanceFavCount:(unsigned long long)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;
- (_Bool)removeFolder:(unsigned int)arg1;
- (_Bool)updateFolder:(id)arg1;
- (_Bool)insertFolder:(id)arg1;
- (id)queryFolder:(unsigned int)arg1;
- (id)queryFolderList;
- (id)defaultFolder;
- (id)_removeFolder:(unsigned int)arg1 db:(id)arg2;
- (id)_updateFolder:(id)arg1 db:(id)arg2;
- (id)_insertFolder:(id)arg1 db:(id)arg2;
- (id)_queryFolder:(unsigned int)arg1 db:(id)arg2;
- (id)_countFavsInFolders:(id)arg1;
- (void)_clearRarbageItems:(id)arg1;
- (void)clearRarbageItems;
- (id)_queryFolders:(id)arg1;
- (id)_parseFolderFromResultSet:(id)arg1;
- (unsigned long long)getTableSign;
- (unsigned long long)cid2LocalId:(id)arg1;
- (id)localId2Cid:(unsigned long long)arg1;
- (_Bool)updateItem:(id)arg1;
- (_Bool)updateItem:(unsigned long long)arg1 folder:(unsigned int)arg2 folderModifyTime:(unsigned long long)arg3;
- (_Bool)updateItem:(unsigned long long)arg1 topTime:(unsigned long long)arg2;
- (_Bool)updateItem:(unsigned long long)arg1 status:(int)arg2 collectTime:(unsigned long long)arg3 andCid:(id)arg4;
- (_Bool)updateItemDetail:(id)arg1;
- (_Bool)delItem:(unsigned long long)arg1;
- (unsigned long long)insertItem:(id)arg1;
- (id)queryImageSiblingForItem:(unsigned long long)arg1 next:(_Bool)arg2;
- (id)queryItem:(unsigned long long)arg1 withDetail:(_Bool)arg2;
- (id)queryItem:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (id)queryTopItems:(unsigned int)arg1;
- (id)queryListByStatuses:(id)arg1;
- (id)queryListByTypes:(id)arg1;
- (id)queryListWithDetail:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)queryList:(unsigned long long)arg1 count:(unsigned long long)arg2 filterFolder:(unsigned int)arg3 reverseFilter:(_Bool)arg4 class:(int)arg5 withDetail:(_Bool)arg6;
- (_Bool)_updateItem:(unsigned long long)arg1 folder:(unsigned int)arg2 folderModifyTime:(unsigned long long)arg3 db:(id)arg4;
- (_Bool)_updateItemStatusToTable:(unsigned long long)arg1 status:(int)arg2 collectTime:(unsigned long long)arg3 andCid:(id)arg4 db:(id)arg5;
- (_Bool)_updateItemTopTime:(unsigned long long)arg1 topTime:(unsigned long long)arg2 db:(id)arg3;
- (_Bool)_updateItemDetailToTable:(id)arg1 detail:(id)arg2 db:(id)arg3;
- (_Bool)_delItemFromFavTable:(unsigned long long)arg1 db:(id)arg2;
- (_Bool)_updateFavTable:(id)arg1 data:(id)arg2 detail:(id)arg3 draft:(id)arg4 db:(id)arg5;
- (_Bool)upgradeDatabase:(id)arg1;
- (id)_insertFavTable:(id)arg1 data:(id)arg2 detail:(id)arg3 draft:(id)arg4 db:(id)arg5;
- (id)_queryImageSiblingFromTable:(unsigned long long)arg1 next:(_Bool)arg2 db:(id)arg3;
- (id)_queryItemFromTable:(unsigned long long)arg1 withDetail:(_Bool)arg2 db:(id)arg3;
- (id)_getTotalCountFromTable:(id)arg1;
- (id)_queryLocalIdFromTable:(id)arg1 db:(id)arg2;
- (id)_queryCidFromTable:(unsigned long long)arg1 db:(id)arg2;
- (id)_queryTopItems:(unsigned int)arg1 db:(id)arg2;
- (id)_queryListFromTableByTypes:(id)arg1 db:(id)arg2;
- (id)_queryListFromTableByStatuses:(id)arg1 db:(id)arg2;
- (id)_queryAndGetModels:(id)arg1 db:(id)arg2;
- (id)_queryListFromTable:(unsigned long long)arg1 count:(unsigned long long)arg2 filterFolder:(unsigned int)arg3 reverseFilter:(_Bool)arg4 class:(int)arg5 withDetail:(_Bool)arg6 db:(id)arg7;
- (id)typeFilterWithClassification:(int)arg1 filterFolder:(unsigned int)arg2 reverseFilter:(_Bool)arg3;
- (void)addSubclauseForClause:(id)arg1 withValues:(id)arg2 prefix:(id)arg3;
- (id)_convertNSMutableArray2NSData:(id)arg1;
- (id)_convertNSData2NSMutableArray:(id)arg1;
- (id)_convertNSDictionary2NSData:(id)arg1;
- (id)_convertNSData2NSDictionary:(id)arg1;
- (id)_parseModelFromResultSet:(id)arg1;
- (id)_getDraftModelByType:(int)arg1;
- (id)_getModelByType:(int)arg1;
- (void)_createFavTable:(id)arg1;
- (void)_dropFavTable:(id)arg1;
- (id)_getFolderDBName;
- (id)_getFavDBName;
- (void)onDBChanged:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

