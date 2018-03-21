//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliDBSQLExtProcessor-Protocol.h"

@class AliDB, NSString;

@interface MKTVfsDBAdapter : NSObject <AliDBSQLExtProcessor>
{
    AliDB *_db;
}

+ (id)vfsDatasetToArray:(id)arg1;
+ (void)openDBWithCallback:(CDUnknownBlockType)arg1;
+ (id)openDB;
+ (id)updateSql:(id)arg1;
+ (void)asyncInTransaction:(CDUnknownBlockType)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)asyncQuerySql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)asyncUpdateSql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)dbQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) AliDB *db; // @synthesize db=_db;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

