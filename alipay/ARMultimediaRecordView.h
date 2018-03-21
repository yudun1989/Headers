//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class Ant3DCameraSource, Ant3DImageSource, Ant3DRecorder, Ant3DSceneSource, Ant3DViewSource, CADisplayLink, CALayer, CAShapeLayer, NSString, UIButton;

@interface ARMultimediaRecordView : UIView
{
    CALayer *_recordingOnLayer;
    CAShapeLayer *_circleProgressLayer;
    CADisplayLink *_recordProgressDisplayLink;
    double _lastFrameTime;
    _Bool _isVideoRecording;
    _Bool _isCaptureSnapshot;
    NSString *_resAppId;
    UIButton *_capturePicButtton;
    UIButton *_recordVideoButton;
    double _recordMaxduration;
    double _progress;
    Ant3DCameraSource *_cameraSource;
    Ant3DSceneSource *_sceneSource;
    Ant3DViewSource *_viewSource;
    Ant3DImageSource *_imageSource;
    Ant3DRecorder *_recorder;
}

+ (void)dissmissRecordViewFromView:(id)arg1;
+ (id)showRecordViewToView:(id)arg1 recordSource:(unsigned long long)arg2 recordSourceView:(id)arg3;
@property(retain, nonatomic) Ant3DRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) Ant3DImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(retain, nonatomic) Ant3DViewSource *viewSource; // @synthesize viewSource=_viewSource;
@property(retain, nonatomic) Ant3DSceneSource *sceneSource; // @synthesize sceneSource=_sceneSource;
@property(retain, nonatomic) Ant3DCameraSource *cameraSource; // @synthesize cameraSource=_cameraSource;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double recordMaxduration; // @synthesize recordMaxduration=_recordMaxduration;
@property(nonatomic) _Bool isCaptureSnapshot; // @synthesize isCaptureSnapshot=_isCaptureSnapshot;
@property(nonatomic) _Bool isVideoRecording; // @synthesize isVideoRecording=_isVideoRecording;
@property(retain, nonatomic) UIButton *recordVideoButton; // @synthesize recordVideoButton=_recordVideoButton;
@property(retain, nonatomic) UIButton *capturePicButtton; // @synthesize capturePicButtton=_capturePicButtton;
@property(retain, nonatomic) NSString *resAppId; // @synthesize resAppId=_resAppId;
- (void).cxx_destruct;
- (_Bool)photoAuthGuideIsImage:(_Bool)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)snapshotImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)tapRecordVideoButton;
- (void)tapCapturePicButtton;
- (void)updateProgress;
- (void)applicationEnterBackground;
- (void)recievedCameraFrame:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetViewWhenStopRecording;
- (void)updateViewWhenRecordingVedio;
- (void)removeFromSuperview;
- (void)setupRecordSource:(id)arg1 recordSource:(unsigned long long)arg2;
- (void)setupViews;
- (id)initWithSourceView:(id)arg1 recordSource:(unsigned long long)arg2;

@end

