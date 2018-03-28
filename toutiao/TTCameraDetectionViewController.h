//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CIDetector, CMMotionManager, NSDictionary, NSObject, NSOperationQueue, NSString, UIImage;
@protocol OS_dispatch_queue, TTCameraDetectionDelegate;

@interface TTCameraDetectionViewController : SSViewControllerBase <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _saveToAlbum;
    _Bool _autoVideoOrientation;
    _Bool _hasInitialCamera;
    id <TTCameraDetectionDelegate> _delegate;
    long long _defaultVideoOrientation;
    long long _defaultDevicePosition;
    long long _defaultFlashmode;
    UIImage *_currentImage;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSOperationQueue *_accelerometerQueue;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureStillImageOutput *_deviceOutput;
    AVCaptureVideoDataOutput *_deviceVideoOutput;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CIDetector *_detector;
    NSDictionary *_imageOptions;
    CMMotionManager *_motionManager;
    long long _currentDeviceOrientation;
    long long _type;
    unsigned long long _currentSampleCount;
    unsigned long long _maxSampleCount;
}

@property(nonatomic) unsigned long long maxSampleCount; // @synthesize maxSampleCount=_maxSampleCount;
@property(nonatomic) unsigned long long currentSampleCount; // @synthesize currentSampleCount=_currentSampleCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long currentDeviceOrientation; // @synthesize currentDeviceOrientation=_currentDeviceOrientation;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSDictionary *imageOptions; // @synthesize imageOptions=_imageOptions;
@property(retain, nonatomic) CIDetector *detector; // @synthesize detector=_detector;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureVideoDataOutput *deviceVideoOutput; // @synthesize deviceVideoOutput=_deviceVideoOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *deviceOutput; // @synthesize deviceOutput=_deviceOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSOperationQueue *accelerometerQueue; // @synthesize accelerometerQueue=_accelerometerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(readonly, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic) _Bool hasInitialCamera; // @synthesize hasInitialCamera=_hasInitialCamera;
@property(nonatomic) _Bool autoVideoOrientation; // @synthesize autoVideoOrientation=_autoVideoOrientation;
@property(nonatomic) _Bool saveToAlbum; // @synthesize saveToAlbum=_saveToAlbum;
@property(nonatomic) long long defaultFlashmode; // @synthesize defaultFlashmode=_defaultFlashmode;
@property(nonatomic) long long defaultDevicePosition; // @synthesize defaultDevicePosition=_defaultDevicePosition;
@property(nonatomic) long long defaultVideoOrientation; // @synthesize defaultVideoOrientation=_defaultVideoOrientation;
@property(nonatomic) __weak id <TTCameraDetectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)currentDeviceVideoOrientation;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureWithComplectionBlock:(CDUnknownBlockType)arg1;
- (void)stopCamera;
- (void)startCamera;
- (void)showAlertWithTitle:(id)arg1 msg:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)checkAlbumAuth;
- (long long)checkVideoAuth;
- (id)connectionWithOutput:(id)arg1;
- (id)cameraWithPosition:(long long)arg1;
@property(readonly, nonatomic) unsigned long long currentSamplingRate;
- (void)setupSamplingRate:(unsigned long long)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentFrameDuration;
- (void)setupFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)toggleVideoOrientation:(long long)arg1;
- (void)toggleFlashMode:(long long)arg1;
- (void)toggleCameraWithCallback:(CDUnknownBlockType)arg1;
- (void)setupCamera;
- (void)setupDetectorImageOptions:(id)arg1;
- (void)setupDetectorOptions:(id)arg1;
- (void)setupPreviewLayerWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) long long currentDevicePosition;
@property(readonly, nonatomic) long long currentFlashMode;
@property(readonly, nonatomic) long long currentVideoOrientation;
- (void)flipPreviewLayer;
- (id)initWithType:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

