//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSString;
@protocol OS_dispatch_queue;

@interface KSSearchHistoryStorage : NSObject
{
    NSString *_domain;
    NSString *_domainHash;
    FMDatabaseQueue *_oldDatabaseQueue;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

+ (unsigned long long)version;
+ (void)deleteHistoriesWithQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)clearAllStorageCompletion:(CDUnknownBlockType)arg1;
+ (id)storageWithName:(id)arg1;
+ (void)migrateDataLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedFMDatabaseQueue;
+ (id)oldDbPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(retain, nonatomic) FMDatabaseQueue *oldDatabaseQueue; // @synthesize oldDatabaseQueue=_oldDatabaseQueue;
@property(retain, nonatomic) NSString *domainHash; // @synthesize domainHash=_domainHash;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)deleteAllSearchHistoriesCompletion:(CDUnknownBlockType)arg1;
- (void)addSearchUserHistory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFrequentSearchHistoriesLimit:(unsigned long long)arg1 recentSearchHistoriesLimit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSearchHistory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSearchHistory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSearchHistoriesLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1;

@end
