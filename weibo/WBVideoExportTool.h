//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetExportSession, GPUImageMovieWriter, NSMutableDictionary, NSMutableString, WBVideoExportMovie;

@interface WBVideoExportTool : NSObject
{
    _Bool _isVideoExportCanceled;
    WBVideoExportMovie *_movie;
    GPUImageMovieWriter *_movieWriter;
    AVAssetExportSession *_assetExport;
    NSMutableDictionary *_exportVideoStatistic;
    NSMutableString *_exportVideoRoute;
    CDUnknownBlockType _exportVideoFailure;
}

@property(copy, nonatomic) CDUnknownBlockType exportVideoFailure; // @synthesize exportVideoFailure=_exportVideoFailure;
@property(retain, nonatomic) NSMutableString *exportVideoRoute; // @synthesize exportVideoRoute=_exportVideoRoute;
@property(retain, nonatomic) NSMutableDictionary *exportVideoStatistic; // @synthesize exportVideoStatistic=_exportVideoStatistic;
@property(retain, nonatomic) AVAssetExportSession *assetExport; // @synthesize assetExport=_assetExport;
@property(retain, nonatomic) GPUImageMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) WBVideoExportMovie *movie; // @synthesize movie=_movie;
@property(nonatomic) _Bool isVideoExportCanceled; // @synthesize isVideoExportCanceled=_isVideoExportCanceled;
- (void).cxx_destruct;
- (id)movieWriterSettingWithBitrate:(double)arg1 size:(struct CGSize)arg2;
- (void)uploadVideoStatisticWithError:(id)arg1;
- (void)cancelVideoExport;
- (void)cancelVideoExportNeedCallBack:(_Bool)arg1;
- (void)movieWriterFinished:(CDUnknownBlockType)arg1;
- (void)exportVideoConfigure:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)appendOutputVideoStatistic:(id)arg1;
- (void)mixVideoAsset:(id)arg1 videoExportConfig:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)appWillTerminate;
- (void)appDidEnterBackground;
- (void)dealloc;
- (id)init;

@end

