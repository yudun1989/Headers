//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DBConnectionPool, DBOperationScheduler, DBProcessorManager;
@protocol AliDBLoggerProtocol;

@interface AliDB : NSObject
{
    DBConnectionPool *_connectionPool;
    DBOperationScheduler *_operationScheduler;
    DBProcessorManager *_processorManager;
    id <AliDBLoggerProtocol> _logger;
}

@property(nonatomic) __weak id <AliDBLoggerProtocol> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)createConnectionPool:(id)arg1 version:(long long)arg2 key:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (long long)setSQLExtProcessor:(id)arg1 extType:(id)arg2;
- (void)inTransaction:(CDUnknownBlockType)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)execUpdateExt:(id)arg1 sqlExt:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)execQueryExt:(id)arg1 sqlExt:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)execQuery:(id)arg1 withArgumentsArray:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)execQuery:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)execUpdate:(id)arg1 withArgumentsArray:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)execBatchUpdate:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)execUpdate:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)inTransaction:(CDUnknownBlockType)arg1;
- (id)execUpdateExt:(id)arg1 sqlExt:(id)arg2;
- (id)execQueryExt:(id)arg1 sqlExt:(id)arg2;
- (id)execUpdate:(id)arg1 withArgumentsArray:(id)arg2;
- (id)execBatchUpdate:(id)arg1;
- (id)execUpdate:(id)arg1;
- (id)execQuery:(id)arg1 withArgumentsArray:(id)arg2;
- (id)execQuery:(id)arg1;
- (void)setDBLogger:(id)arg1;
- (unsigned long long)mergedCount;
- (unsigned long long)extConnectionCount;
- (unsigned long long)connectionCount;
- (unsigned long long)setConnectionCount:(unsigned long long)arg1;
- (id)initWithDBPath:(id)arg1 version:(long long)arg2 key:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (id)initWithDBPath:(id)arg1 version:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;

@end

