//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MQZTaskModelCompressBatch;

@interface MQZTaskCompressBatchManager : NSObject
{
    long long _compressBatchId;
    MQZTaskModelCompressBatch *_batch;
}

+ (long long)getCurrentModelScaleType;
+ (long long)getCompressBatchID;
+ (id)instance;
@property(nonatomic) long long compressBatchId; // @synthesize compressBatchId=_compressBatchId;
- (void).cxx_destruct;
- (_Bool)waitForCompress:(id)arg1;
- (long long)imageFileStatus:(long long)arg1 path:(id)arg2;
- (_Bool)waitForCompressFile:(long long)arg1 path:(id)arg2;
- (id)getModelByAsset:(long long)arg1 asset:(id)arg2;
- (id)getModelWithBatchId:(long long)arg1 path:(id)arg2;
- (void)setCompressedModels:(id)arg1 batchId:(long long)arg2;
- (id)getModelArray:(long long)arg1;
- (void)cancelTasks:(long long)arg1;
- (void)cancelTaskByPath:(id)arg1 batchId:(long long)arg2;
- (void)cancelTask:(id)arg1 batchId:(long long)arg2;
- (void)addTaskByImage:(id)arg1 batchId:(long long)arg2;
- (void)addTaskByFilePath:(id)arg1 batchId:(long long)arg2;
- (void)addTaskByAssetURL:(id)arg1 assetIdentifier:(id)arg2 batchId:(long long)arg3 path:(id)arg4 scaleType:(long long)arg5 assetType:(int)arg6;
- (void)addTaskByAsset:(id)arg1 batchId:(long long)arg2 scaleType:(long long)arg3 userInfo:(id)arg4;
- (void)addTaskByAsset:(id)arg1 batchId:(long long)arg2 userInfo:(id)arg3;
- (void)addTaskByModels:(id)arg1 batchId:(long long)arg2 scaleType:(long long)arg3;
- (void)addTaskByAsset:(id)arg1 batchId:(long long)arg2 scaleType:(long long)arg3;
- (void)addTaskByAsset:(id)arg1 batchId:(long long)arg2;
- (void)prepareBatch;
- (id)init;

@end

