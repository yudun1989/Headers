//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"
#import "StepFrameCaptureDelegate-Protocol.h"
#import "TBLiveAudioRecorderDelegate-Protocol.h"
#import "TBLiveScreenRecorderProtocol-Protocol.h"

@class NSString, StepFrameCapture, TBLiveAudioRecorder, UIViewController;
@protocol TBLiveScreenRecorderCallBack;

@interface StepFrameScreenRecorder : NSObject <StepFrameCaptureDelegate, TBLiveAudioRecorderDelegate, AVAudioRecorderDelegate, TBLiveScreenRecorderProtocol>
{
    UIViewController *viewController;
    id <TBLiveScreenRecorderCallBack> callback;
    StepFrameCapture *_capture;
    TBLiveAudioRecorder *_audioRecord;
    NSString *_videoFilePath;
    NSString *_audioFilePath;
    NSString *_movieFilePath;
}

@property(copy, nonatomic) NSString *movieFilePath; // @synthesize movieFilePath=_movieFilePath;
@property(copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(copy, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(retain, nonatomic) TBLiveAudioRecorder *audioRecord; // @synthesize audioRecord=_audioRecord;
@property(retain, nonatomic) StepFrameCapture *capture; // @synthesize capture=_capture;
@property(nonatomic) __weak id <TBLiveScreenRecorderCallBack> callback; // @synthesize callback;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)arg1;
- (void)saveVideoToPhotoLibrary:(id)arg1;
- (void)recordingFaild:(id)arg1 error:(id)arg2;
- (void)recordingFinished:(id)arg1;
- (void)wavCompleteWithOutputFile:(id)arg1;
- (void)setupFileSavePath;
- (id)getCaptureView;
- (_Bool)isRecording;
- (void)discardRecording;
- (void)stopRecording;
- (void)startRecordingWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

