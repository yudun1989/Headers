//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString;
@protocol MBKCameraCaptureDelegate, OS_dispatch_queue;

@interface MBKCameraCapture : NSObject <UIAlertViewDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    struct QBar qbarLib;
    NSObject<OS_dispatch_queue> *decodeQueue;
    _Bool tryingQBar;
    id <MBKCameraCaptureDelegate> _delegate;
    AVCaptureSession *_session;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    long long _decoderType;
    struct CGSize _previewSize;
    struct CGRect _identifyFrame;
}

@property(nonatomic) struct CGRect identifyFrame; // @synthesize identifyFrame=_identifyFrame;
@property(nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(nonatomic) long long decoderType; // @synthesize decoderType=_decoderType;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureMetadataOutput *metadataOutput; // @synthesize metadataOutput=_metadataOutput;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <MBKCameraCaptureDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)getDataStringFromUTF8Bytes:(const char *)arg1 length:(long long)arg2;
- (void)frameReady:(struct RGBAVideoFrame)arg1;
- (_Bool)lockFocus;
- (_Bool)startFocus;
- (_Bool)forceFocus:(struct CGPoint)arg1;
- (_Bool)forceFocus;
- (id)getAVCaptureVideoPreviewLayer;
- (id)backCamera;
- (id)frontCamera;
- (void)releaseSession;
- (void)releaseDevice;
- (void)stopCamera;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startCamera;
- (void)setDecoderType:(long long)arg1 previewSize:(struct CGSize)arg2 identifyFrame:(struct CGRect)arg3;
- (void)setupQBar;
- (void)setupCamera;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

