//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DatabaseItem : NSObject
{
}

+ (id)selectSQLForTable:(id)arg1 whereClause:(id)arg2;
+ (id)createTableSQLForTable:(id)arg1;
+ (id)primaryKey;
+ (id)dbTypes;
- (id)deleteSQLForTable:(id)arg1 whereClause:(id)arg2;
- (id)updateSQLForTable:(id)arg1 whereClause:(id)arg2;
- (id)insertSQLForTable:(id)arg1;
- (void)convertFromDictionary:(id)arg1;
- (id)valueDictionary;

@end

