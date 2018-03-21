//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSDB;

@interface FTSFavDB : NSObject
{
    FTSDB *_database;
}

@property(retain, nonatomic) FTSDB *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)queryText:(id)arg1 limit:(int)arg2 searchAll:(id *)arg3;
- (id)queryText:(id)arg1;
- (_Bool)deleteAllRowsInFavTable;
- (_Bool)deleteRowsInFavTable:(id)arg1;
- (_Bool)deleteRowInFavTable:(unsigned int)arg1;
- (_Bool)updateRowsInFavTable:(id)arg1;
- (_Bool)updateRowInFavTable:(id)arg1;
- (_Bool)insertRowsInFavTable:(id)arg1;
- (_Bool)insertRowInFavTable:(id)arg1;
- (_Bool)createAllTable;
- (void)reloadDB;
- (void)dealloc;
- (void)initDB:(id)arg1;

@end

