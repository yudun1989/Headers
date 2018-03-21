//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdhocDatabase, AdhocStatement, NSMutableDictionary, NSString;

@interface AdhocResultSet : NSObject
{
    AdhocDatabase *_parentDB;
    AdhocStatement *_statement;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
@property(retain) AdhocStatement *statement; // @synthesize statement=_statement;
@property(copy) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)resultDictionary;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(int)arg1;
- (id)columnNameForIndex:(int)arg1;
- (id)objectForColumnName:(id)arg1;
- (id)objectForColumnIndex:(int)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)stringForColumn:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumn:(id)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (long long)longLongIntForColumn:(id)arg1;
- (int)columnIndexForName:(id)arg1;
- (id)columnNameToIndexMap;
- (_Bool)next;
- (void)setParentDB:(id)arg1;
- (void)close;
- (void)dealloc;

@end

