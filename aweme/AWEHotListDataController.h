//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSNumber;

@interface AWEHotListDataController : AWEListDataController
{
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    long long _type;
    long long _initFetchCount;
    long long _refreshCount;
    long long _loadmoreCount;
}

+ (CDUnknownBlockType)_didGetDuplicatedArrayBlock:(long long)arg1;
@property(nonatomic) long long loadmoreCount; // @synthesize loadmoreCount=_loadmoreCount;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(nonatomic) long long initFetchCount; // @synthesize initFetchCount=_initFetchCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(copy, nonatomic) NSNumber *minCursor; // @synthesize minCursor=_minCursor;
- (void).cxx_destruct;
- (id)filterDuplicatedDatasourceWithArray:(id)arg1 isEqual:(CDUnknownBlockType)arg2 didGetDuplicatedArray:(CDUnknownBlockType)arg3;
- (id)_loadmoreDataSourceWithArray:(id)arg1;
- (id)_refreshDataSourceWithArray:(id)arg1 cleanRefresh:(_Bool)arg2;
- (_Bool)_isValidRequest;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1;

@end

