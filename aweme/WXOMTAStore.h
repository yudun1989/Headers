//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock;

@interface WXOMTAStore : NSObject
{
    struct dispatch_queue_s *task_queue;
    struct sqlite3 *db;
    unsigned int numStoredEvents;
    _Bool _isSendingCacheEvent;
    NSLock *cacheEventLock;
}

+ (id)getInstance;
@property _Bool isSendingCacheEvent; // @synthesize isSendingCacheEvent=_isSendingCacheEvent;
@property(retain) NSLock *cacheEventLock; // @synthesize cacheEventLock;
- (void).cxx_destruct;
- (void)sendCachedEvents:(int)arg1;
- (void)storeEvent:(id)arg1 hasTrySent:(_Bool)arg2 CB:(CDUnknownBlockType)arg3;
- (void)loadConfig:(CDUnknownBlockType)arg1;
- (void)storeConfig:(id)arg1;
- (void)loadCachedEvents:(id)arg1;
- (unsigned int)storedEventCount;
- (id)loadUser;
- (void)storeUser:(id)arg1;
- (void)updateEvents:(id)arg1 status:(unsigned int)arg2;
- (void)updateSendFailedEvents:(id)arg1 updateCount:(_Bool)arg2;
- (void)deleteEvents:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned int)getStoredEventsNum;
- (id)getMtaOpenUDID;
- (int)updateDatabase:(const char *)arg1;
- (void)deleteDB;
- (void)closeDB;
- (struct sqlite3 *)getDB;
- (id)getDbPath;
- (void)initDB;
- (void)launch;
- (void)dealloc;
- (id)init;

@end

