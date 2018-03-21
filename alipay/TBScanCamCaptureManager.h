//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, TBScanCamCaptureManagerDelegate;

@interface TBScanCamCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _bFrontCamera;
    _Bool _cancelCameraTask;
    AVCaptureSession *_session;
    long long _orientation;
    AVCaptureDeviceInput *_videoInput;
    id <TBScanCamCaptureManagerDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_cameraLayer;
    long long _setupResult;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSObject<OS_dispatch_source> *_focusTimer;
    double _cameraMaxZoomFactor;
    double _cameraNormalZoomFactor;
    NSObject<OS_dispatch_queue> *_capQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSString *_sessionPreset;
    struct CGPoint _focusPoint;
    struct CGPoint _focusPointOfInterest;
}

@property(nonatomic) _Bool cancelCameraTask; // @synthesize cancelCameraTask=_cancelCameraTask;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *capQueue; // @synthesize capQueue=_capQueue;
@property(nonatomic) double cameraNormalZoomFactor; // @synthesize cameraNormalZoomFactor=_cameraNormalZoomFactor;
@property(nonatomic) double cameraMaxZoomFactor; // @synthesize cameraMaxZoomFactor=_cameraMaxZoomFactor;
@property(nonatomic) struct CGPoint focusPointOfInterest; // @synthesize focusPointOfInterest=_focusPointOfInterest;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *focusTimer; // @synthesize focusTimer=_focusTimer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(nonatomic) _Bool bFrontCamera; // @synthesize bFrontCamera=_bFrontCamera;
@property(nonatomic) long long setupResult; // @synthesize setupResult=_setupResult;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *cameraLayer; // @synthesize cameraLayer=_cameraLayer;
@property(nonatomic) __weak id <TBScanCamCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)focusWithMode:(long long)arg1 exposeWithMode:(long long)arg2 atDevicePoint:(struct CGPoint)arg3;
- (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1;
- (void)_continuousFocusAtPoint:(struct CGPoint)arg1;
- (_Bool)useDefaultCamera;
- (_Bool)cameraToggle;
- (void)captureStillImage:(CDUnknownBlockType)arg1;
@property(nonatomic) long long exposureMode;
- (_Bool)hasExposure;
- (void)changeCameraZoom:(double)arg1;
- (void)doubleTapZoom;
- (void)rollbackZoom;
@property(nonatomic) long long focusMode;
- (_Bool)hasFocus;
@property(nonatomic) long long torchMode;
- (_Bool)hasTorch;
- (void)onTimerFocus:(struct CGPoint)arg1;
- (void)continuousFocusAtPoint:(struct CGPoint)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (_Bool)adjustingFocus;
- (void)stopRunning:(CDUnknownBlockType)arg1;
- (void)startRunningWithFocus:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (void)releaseCamera;
- (void)setupCameraLayer;
- (void)setupCameraWithComplete:(CDUnknownBlockType)arg1;
- (id)init;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (id)cameraWithPosition:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

