//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TTAddressBookCache : NSObject
{
    NSMutableArray *_cache;
}

@property(retain, nonatomic) NSMutableArray *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)ttRecords;
- (void)addRecordsToCache:(id)arg1;
- (void)addRecordToCache:(id)arg1;
- (void)removeRecordsFromCache:(id)arg1;
- (void)removeRecordFromCache:(id)arg1;
- (void)contructCacheWithRecords:(id)arg1;
- (_Bool)containRecord:(id)arg1;
- (void)clearCache;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

