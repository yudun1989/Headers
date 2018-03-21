//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "KTVHCDataUnitWorkingDelegate-Protocol.h"

@class NSCondition, NSOperationQueue, NSString;

@interface KTVHCDataStorage : NSObject <KTVHCDataUnitWorkingDelegate>
{
    long long _maxCacheLength;
    NSCondition *_condition;
    NSOperationQueue *_operationQueue;
}

+ (id)storage;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(nonatomic) long long maxCacheLength; // @synthesize maxCacheLength=_maxCacheLength;
- (void).cxx_destruct;
- (void)unitDidStopWorking:(id)arg1;
- (void)mergeCacheWithURLString:(id)arg1;
- (void)mergeAllCache;
- (void)deleteCacheWithUniqueIdentifier:(id)arg1;
- (void)deleteCacheWithURLString:(id)arg1;
- (void)deleteAllCache;
- (id)fetchCacheItemWithURLString:(id)arg1;
- (id)fetchAllCacheItem;
- (long long)totalCacheLength;
- (id)readerWithRequest:(id)arg1 concurrent:(_Bool)arg2;
- (void)serialReaderWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serialReaderWithRequest:(id)arg1;
- (id)concurrentReaderWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

