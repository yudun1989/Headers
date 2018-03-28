//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSMediaExportable-Protocol.h"
#import "HTSMediaMixPlayerDelegate-Protocol.h"
#import "HTSMoviePlayerDelegate-Protocol.h"

@class AVMutableVideoComposition, HTSGLPreview, HTSMediaExporter, HTSMediaMixPlayer, HTSMoviePlayer, HTSVideoData, IESMediaTranscoder, IESVideoProcessLocal, NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface IESMMImportVideoPlayer : NSObject <HTSMediaMixPlayerDelegate, HTSMoviePlayerDelegate, HTSMediaExportable>
{
    void *operationQueueKey;
    _Bool _isForeground;
    int _mergeProgress;
    HTSMediaMixPlayer *_mixPlayer;
    long long _status;
    long long _previewModeType;
    unsigned long long _currFilterType;
    double _videoProcessCost;
    double _currentPlayerTime;
    CDUnknownBlockType _mixPlayerCompleteBlock;
    NSObject<OS_dispatch_queue> *_operationQueue;
    AVMutableVideoComposition *_videoComposition;
    HTSVideoData *_videoData;
    long long _encodeStatus;
    HTSGLPreview *_videoPreviewView;
    NSMutableArray *_observerArray;
    IESVideoProcessLocal *_videoProcess;
    HTSMoviePlayer *_videoProcessPlayer;
    double _startTime;
    CDUnknownBlockType _completeBlock;
    IESMediaTranscoder *_mediaTranscoder;
    NSTimer *_transcoderTimer;
    double _overTimeStart;
    double _lastMergeProgress;
    double _overTime;
    struct CGSize _outputVideoSize;
    struct CGSize _videoSize;
}

+ (void)getImageWithAsset:(id)arg1 atTime:(double)arg2 preferredSize:(struct CGSize)arg3 compeletion:(CDUnknownBlockType)arg4;
+ (id)playerWithView:(id)arg1 videoData:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)playerWithView:(id)arg1 videoData:(id)arg2;
@property(nonatomic) double overTime; // @synthesize overTime=_overTime;
@property(nonatomic) double lastMergeProgress; // @synthesize lastMergeProgress=_lastMergeProgress;
@property(nonatomic) double overTimeStart; // @synthesize overTimeStart=_overTimeStart;
@property(retain, nonatomic) NSTimer *transcoderTimer; // @synthesize transcoderTimer=_transcoderTimer;
@property(retain, nonatomic) IESMediaTranscoder *mediaTranscoder; // @synthesize mediaTranscoder=_mediaTranscoder;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) HTSMoviePlayer *videoProcessPlayer; // @synthesize videoProcessPlayer=_videoProcessPlayer;
@property(retain, nonatomic) IESVideoProcessLocal *videoProcess; // @synthesize videoProcess=_videoProcess;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) HTSGLPreview *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(nonatomic) long long encodeStatus; // @synthesize encodeStatus=_encodeStatus;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType mixPlayerCompleteBlock; // @synthesize mixPlayerCompleteBlock=_mixPlayerCompleteBlock;
@property(nonatomic) double currentPlayerTime; // @synthesize currentPlayerTime=_currentPlayerTime;
@property(nonatomic) double videoProcessCost; // @synthesize videoProcessCost=_videoProcessCost;
@property(nonatomic) int mergeProgress; // @synthesize mergeProgress=_mergeProgress;
@property(nonatomic) struct CGSize outputVideoSize; // @synthesize outputVideoSize=_outputVideoSize;
@property(readonly, nonatomic) unsigned long long currFilterType; // @synthesize currFilterType=_currFilterType;
@property(nonatomic) long long previewModeType; // @synthesize previewModeType=_previewModeType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) HTSMediaMixPlayer *mixPlayer; // @synthesize mixPlayer=_mixPlayer;
- (void).cxx_destruct;
- (void)moviePlayerNeedReset;
- (void)getPreviewImageAtTime:(double)arg1 preferredSize:(struct CGSize)arg2 compeletion:(CDUnknownBlockType)arg3;
- (void)mediaMixPlayer:(id)arg1 didResetItem:(id)arg2;
- (void)mediaMixPlayer:(id)arg1 willResetItem:(id)arg2;
- (void)resetRefer;
- (void)handleAppDidBecomeActive:(id)arg1;
- (void)handleAppWillResignActive:(id)arg1;
- (void)clearOutputsForPlayerItem:(id)arg1;
- (void)cancelVideoEditing;
- (double)getProgress;
- (id)getMetadataItem;
- (_Bool)exportClippedVideoWithCompleteBlock:(CDUnknownBlockType)arg1 enforceReencode:(_Bool)arg2;
- (_Bool)exportClippedVideoWithCompleteBlock:(CDUnknownBlockType)arg1;
- (_Bool)exportClippedVideo;
- (void)mergeCancel;
- (void)mergeCompleteWithUrl:(id)arg1 error:(id)arg2 progress:(int)arg3;
- (void)changeTimeRange:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)startMoviePlayer;
- (void)stopMoviePlayer;
- (void)replay;
- (void)stop;
- (void)pause;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)play;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)runInOperationQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)resetPlayerWithView:(id)arg1 andIndex:(int)arg2;
- (void)resetPlayerWithView:(id)arg1;
- (void)resetPlayerWithError:(id)arg1;
- (void)addAllObserver;
- (id)initWithView:(id)arg1 videoData:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HTSMediaExporter *mediaExporter;
@property(readonly) Class superclass;

@end

