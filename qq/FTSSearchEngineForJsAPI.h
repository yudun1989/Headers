//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTSSearchRecordModule, NSMutableArray, NSOperationQueue, QQRelationSearchFilter;

@interface FTSSearchEngineForJsAPI : NSObject
{
    NSMutableArray *_engineList;
    NSOperationQueue *_ftsOperationQueue;
    FTSSearchRecordModule *_searchRecordModule;
    QQRelationSearchFilter *_ftsBaseSearchFilter;
}

+ (id)sharedInstance;
- (void)ftsClearAllBusinessSearchEngine;
- (unsigned long long)ftsGetAllBusinessSearchEngineCount;
- (void)ftsRegisterBusinessSearchEngine:(long long)arg1;
- (void)ftsPauseSearch;
- (void)ftsStopSearch;
- (void)ftsGetAllResultsWithSearchKeyword:(id)arg1;
- (void)ftsDestructFTSEngine;
- (void)ftsConstructFTSEngine;
- (void)setLastSearchKeyword:(id)arg1;
- (id)getLastSearchKeyword;
- (void)deleteSearchRecord:(id)arg1;
- (void)clickSearchRecord:(id)arg1;
- (id)getAllSearchRecords;
- (id)init;

@end

