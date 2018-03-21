//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, ScanLicenceBackgroundView, UIView, WCPayCardNumberScanForeView;
@protocol WCPayCardNumberScanDelegate;

@interface WCPayCardNumberScanViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int cutImgVScreenHeight;
    int cutImgVScreenWidth;
    struct MyImage *origImg;
    struct MyImage *grayImg;
    UIView *_topBarView;
    UIView *_bottomBarView;
    UIView *_leftBarView;
    UIView *_rightBarView;
    ScanLicenceBackgroundView *m_backgroundView;
    WCPayCardNumberScanForeView *m_foreView;
    _Bool shouldStopCapture;
    _Bool _didHandledRotate;
    _Bool _didSetupUI;
    NSString *_username;
    id <WCPayCardNumberScanDelegate> _delegate;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_prevLayer;
}

@property(retain, nonatomic) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <WCPayCardNumberScanDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)setBarViewToInvisible:(id)arg1;
- (void)handleVisible:(_Bool)arg1 forView:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)useHighResolution;
- (void)finalizeCapture;
- (void)continuousAutoFocus:(struct CGPoint)arg1;
- (_Bool)addOutput:(id)arg1;
- (void)stopCapture;
- (void)startCapture;
- (void)printVersion;
- (struct CGRect)viewBounds;
- (void)backAction:(id)arg1;
- (void)personTipsAction:(id)arg1;
- (void)setupUI;
- (void)setGreenBarView;
- (void)setupEngine;
- (void)stopEngine;
- (float)getRotateRadius:(long long)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

