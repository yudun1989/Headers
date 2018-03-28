//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSGLInput-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, HTSGLContext, HTSGLFramebuffer, HTSGLProgram, NSArray, NSString, NSURL;
@protocol HTSGLMovieWriterDelegate, OS_dispatch_queue;

@interface HTSGLMovieWriter : NSObject <HTSGLInput>
{
    _Bool alreadyFinishedRecording;
    NSURL *movieURL;
    NSString *fileType;
    AVAssetWriter *assetWriter;
    AVAssetWriterInput *assetWriterAudioInput;
    AVAssetWriterInput *assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *assetWriterPixelBufferInput;
    HTSGLContext *_movieWriterContext;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    struct CGSize videoSize;
    unsigned long long inputRotation;
    unsigned int movieFramebuffer;
    unsigned int movieRenderbuffer;
    HTSGLProgram *colorSwizzlingProgram;
    int colorSwizzlingPositionAttribute;
    int colorSwizzlingTextureCoordinateAttribute;
    int colorSwizzlingInputTextureUniform;
    HTSGLFramebuffer *firstInputFramebuffer;
    CDStruct_1b6d18a9 startTime;
    CDStruct_1b6d18a9 previousFrameTime;
    CDStruct_1b6d18a9 previousAudioTime;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *videoQueue;
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    _Bool isRecording;
    double startFrameTime;
    long long frameCount;
    _Bool _hasAudioTrack;
    _Bool _encodingLiveVideo;
    _Bool _shouldPassthroughAudio;
    _Bool enabled;
    _Bool _shouldInvalidateAudioSampleWhenDone;
    _Bool _paused;
    _Bool _needStatisticProgress;
    _Bool _isFromRecorder;
    _Bool _isAudioReady;
    int _controlFrameRate;
    CDUnknownBlockType completionBlock;
    CDUnknownBlockType failureBlock;
    CDUnknownBlockType videoInputReadyCallback;
    CDUnknownBlockType audioInputReadyCallback;
    id <HTSGLMovieWriterDelegate> _delegate;
    double _progressStartTime;
    double _progressTotalTime;
    double _progressCurrentTime;
    CDUnknownBlockType _audioProcessingCallback;
    double _recordRate;
}

@property(nonatomic) double recordRate; // @synthesize recordRate=_recordRate;
@property(copy, nonatomic) CDUnknownBlockType audioProcessingCallback; // @synthesize audioProcessingCallback=_audioProcessingCallback;
@property(nonatomic) _Bool isAudioReady; // @synthesize isAudioReady=_isAudioReady;
@property(nonatomic) _Bool isFromRecorder; // @synthesize isFromRecorder=_isFromRecorder;
@property(nonatomic) _Bool needStatisticProgress; // @synthesize needStatisticProgress=_needStatisticProgress;
@property(nonatomic) double progressCurrentTime; // @synthesize progressCurrentTime=_progressCurrentTime;
@property(nonatomic) double progressTotalTime; // @synthesize progressTotalTime=_progressTotalTime;
@property(nonatomic) double progressStartTime; // @synthesize progressStartTime=_progressStartTime;
@property(nonatomic) __weak id <HTSGLMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HTSGLContext *movieWriterContext; // @synthesize movieWriterContext=_movieWriterContext;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool shouldInvalidateAudioSampleWhenDone; // @synthesize shouldInvalidateAudioSampleWhenDone=_shouldInvalidateAudioSampleWhenDone;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(copy, nonatomic) CDUnknownBlockType audioInputReadyCallback; // @synthesize audioInputReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType videoInputReadyCallback; // @synthesize videoInputReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(nonatomic) _Bool shouldPassthroughAudio; // @synthesize shouldPassthroughAudio=_shouldPassthroughAudio;
@property(nonatomic) _Bool encodingLiveVideo; // @synthesize encodingLiveVideo=_encodingLiveVideo;
@property(nonatomic) _Bool hasAudioTrack; // @synthesize hasAudioTrack=_hasAudioTrack;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAssetWriter *assetWriter;
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(copy, nonatomic) NSArray *metaData;
- (void)setHasAudioTrack:(_Bool)arg1 audioSettings:(id)arg2;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)renderAtInternalSizeUsingFramebuffer:(id)arg1;
- (void)setFilterFBO;
- (void)destroyDataFBO;
- (void)createDataFBO;
- (void)enableSynchronizationCallbacks;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishRecording;
- (void)cancelRecording;
- (void)startRecordingInOrientation:(struct CGAffineTransform)arg1;
- (void)startRecording;
@property(nonatomic) int controlFrameRate; // @synthesize controlFrameRate=_controlFrameRate;
- (void)initializeMovieWithOutputSettings:(id)arg1;
- (void)dealloc;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2;
- (double)getProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

