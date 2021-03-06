//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, CADisplayLink, NSDate, NSOperationQueue, NSRunLoop, NSString, UIView;
@protocol YXScreenRecordManagerDelegate;

@interface YXScreenRecordManager : NSObject
{
    NSObject<YXScreenRecordManagerDelegate> *_delegate;
    UIView *_recordView;
    struct opaqueCMSampleBuffer *_audioInputSampleBuffer;
    CADisplayLink *_screenRecordTimer;
    AVAssetWriterInput *_assetWriterAudioInput;
    AVAssetWriterInput *_assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *_assetWriterInputPixelBufferAdaptor;
    AVAssetWriter *_assetWriter;
    long long _videoEndImageCount;
    NSOperationQueue *_recordQueue;
    long long _videoEndingIndex;
    NSString *_localVideoPath;
    NSDate *_startRecordTime;
    long long _recordStatus;
    NSRunLoop *_recordRunloop;
    CDStruct_1b6d18a9 _pauseTime;
}

@property(nonatomic) CDStruct_1b6d18a9 pauseTime; // @synthesize pauseTime=_pauseTime;
@property(nonatomic) __weak NSRunLoop *recordRunloop; // @synthesize recordRunloop=_recordRunloop;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(retain, nonatomic) NSDate *startRecordTime; // @synthesize startRecordTime=_startRecordTime;
@property(copy, nonatomic) NSString *localVideoPath; // @synthesize localVideoPath=_localVideoPath;
@property(nonatomic) long long videoEndingIndex; // @synthesize videoEndingIndex=_videoEndingIndex;
@property(retain, nonatomic) NSOperationQueue *recordQueue; // @synthesize recordQueue=_recordQueue;
@property(nonatomic) long long videoEndImageCount; // @synthesize videoEndImageCount=_videoEndImageCount;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *assetWriterInputPixelBufferAdaptor; // @synthesize assetWriterInputPixelBufferAdaptor=_assetWriterInputPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterVideoInput; // @synthesize assetWriterVideoInput=_assetWriterVideoInput;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterAudioInput; // @synthesize assetWriterAudioInput=_assetWriterAudioInput;
@property(retain, nonatomic) CADisplayLink *screenRecordTimer; // @synthesize screenRecordTimer=_screenRecordTimer;
@property(nonatomic) struct opaqueCMSampleBuffer *audioInputSampleBuffer; // @synthesize audioInputSampleBuffer=_audioInputSampleBuffer;
@property(nonatomic) __weak UIView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) __weak NSObject<YXScreenRecordManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initDisplayLink;
- (void)initAudioInputDevice;
- (void)initVideoInputDevice;
- (void)initAssetWriter;
- (_Bool)initLocalPath;
- (_Bool)enoughMemory;
- (_Bool)assetWriterStart;
- (void)writePixel:(struct __CVBuffer *)arg1 at:(CDStruct_1b6d18a9)arg2;
- (void)writeBuffer:(id)arg1 atTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)writeLogo:(id)arg1 atTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)handleStopWithImage:(id)arg1 atTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)handleSuspendWithImage:(id)arg1 atTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)takeScreenSnapshotSampleBuffer;
- (void)saveRecord;
- (_Bool)resetRecord;
- (void)startRecord;
- (_Bool)stillRecording;
- (void)suspendRecord;
- (void)stopRecord;
- (void)cancelRecord;
- (void)startTimer;
@property(readonly, nonatomic) long long status;
- (void)dealloc;
@property(readonly, nonatomic) long long currentRecordingDuration;
- (void)commonInit;
- (id)init;

@end

