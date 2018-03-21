//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class APGGroupConfig, APGLocalSearchEngineResult, APGLocalSearchIndexConfig, APGSearchGroupResult, NSArray, NSDictionary, NSOrderedSet, NSString;

@protocol APGLocalSearchService <DTService>
- (void)excuteByUser:(NSString *)arg1 block:(void (^)(void))arg2;
- (APGGroupConfig *)groupConfigByGroupKey:(NSString *)arg1;
- (void)deleteTableDoc:(NSString *)arg1 tableName:(NSString *)arg2;
- (void)deleteIndexDataWithPrimaryKey:(NSString *)arg1 withIndexName:(NSString *)arg2;
- (void)insertIndexData:(NSDictionary *)arg1 withPrimaryKey:(NSString *)arg2 withIndexName:(NSString *)arg3;
- (void)deleteTableWithIndexName:(NSString *)arg1 withTableName:(NSString *)arg2 withPrimaryKeys:(NSArray *)arg3;
- (void)deleteTableWithIndexName:(NSString *)arg1 withTableName:(NSString *)arg2;
- (void)addTableWithIndexName:(NSString *)arg1 withTableName:(NSString *)arg2;
- (NSArray *)allIndexConfigs;
- (void)make_invokeEachConfig:(void (^)(APGLocalSearchIndexConfig *, _Bool *))arg1;
- (APGLocalSearchEngineResult *)searchText:(NSString *)arg1 indexName:(NSString *)arg2 start:(long long)arg3 size:(long long)arg4 searchFields:(NSOrderedSet *)arg5;
- (APGSearchGroupResult *)groupResultByInverseSearchResult:(APGLocalSearchEngineResult *)arg1 groupKey:(NSString *)arg2;
- (APGSearchGroupResult *)searchForGlobalSearchWithKeyword:(NSString *)arg1 groupKey:(NSString *)arg2 start:(long long)arg3 size:(long long)arg4 isDetailSearch:(_Bool)arg5;
- (void)asyncGlobalSearchWithKeyword:(NSString *)arg1 groupKey:(NSString *)arg2 start:(long long)arg3 size:(long long)arg4 resultBlock:(void (^)(APGSearchGroupResult *))arg5;
- (void)asyncSearchWithKeyword:(NSString *)arg1 atIndexName:(NSString *)arg2 start:(long long)arg3 size:(long long)arg4 resultBlock:(void (^)(APGLocalSearchEngineResult *))arg5;
- (APGLocalSearchEngineResult *)searchWithKeyword:(NSString *)arg1 atIndexName:(NSString *)arg2 start:(long long)arg3 size:(long long)arg4;
- (_Bool)isRegisteredInGlobalSearchEngineWithIndexName:(NSString *)arg1;
- (APGLocalSearchIndexConfig *)indexConfigByIndexName:(NSString *)arg1;
- (void)registerSearchEngineIndex:(APGLocalSearchIndexConfig *)arg1;
@end

