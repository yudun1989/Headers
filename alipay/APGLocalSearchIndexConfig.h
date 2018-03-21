//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class APGLocalSearchDataBase, NSArray, NSString;

@interface APGLocalSearchIndexConfig : NSObject <NSCoding>
{
    _Bool _isEncrypt;
    _Bool _useDataBase;
    NSString *_indexName;
    APGLocalSearchDataBase *_dataBase;
    NSString *_tableNameKeyword;
    unsigned long long _tableNameMatch;
    NSArray *_fields;
    NSString *_delegateClassName;
    NSString *_primaryKeyField;
    NSArray *_searchFields;
    NSArray *_excludeTableNameKeywords;
    NSArray *_fieldsNeedPinyin;
    NSArray *_fieldsNoToken;
    long long _maxRowId;
    NSString *_whereCondition;
    NSArray *_encryptFields;
}

@property _Bool useDataBase; // @synthesize useDataBase=_useDataBase;
@property(retain) NSArray *encryptFields; // @synthesize encryptFields=_encryptFields;
@property _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(copy) NSString *whereCondition; // @synthesize whereCondition=_whereCondition;
@property long long maxRowId; // @synthesize maxRowId=_maxRowId;
@property(retain) NSArray *fieldsNoToken; // @synthesize fieldsNoToken=_fieldsNoToken;
@property(retain) NSArray *fieldsNeedPinyin; // @synthesize fieldsNeedPinyin=_fieldsNeedPinyin;
@property(retain) NSArray *excludeTableNameKeywords; // @synthesize excludeTableNameKeywords=_excludeTableNameKeywords;
@property(retain) NSArray *searchFields; // @synthesize searchFields=_searchFields;
@property(retain) NSString *primaryKeyField; // @synthesize primaryKeyField=_primaryKeyField;
@property(retain) NSString *delegateClassName; // @synthesize delegateClassName=_delegateClassName;
@property(retain) NSArray *fields; // @synthesize fields=_fields;
@property unsigned long long tableNameMatch; // @synthesize tableNameMatch=_tableNameMatch;
@property(copy) NSString *tableNameKeyword; // @synthesize tableNameKeyword=_tableNameKeyword;
@property(retain) APGLocalSearchDataBase *dataBase; // @synthesize dataBase=_dataBase;
@property(retain) NSString *indexName; // @synthesize indexName=_indexName;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filterTableNames:(id)arg1 excludeNames:(id)arg2;
- (id)tableNamesMatchingSuffix;
- (id)tableNamesMatchingPrefix;
- (id)tableNamesWithSearchEngineIndex;
- (_Bool)fieldIsInEncryptFields:(id)arg1;
- (id)init;

@end

