//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QAVVideoCtrl.h>

#import <QQMainProject/QAVVideoDelegate-Protocol.h>

@class NSString, VideoCapture;
@protocol QAVLocalVideoDelegate, QAVRemoteVideoDelegate;

@interface QAVVideoCtrlImpl : QAVVideoCtrl <QAVVideoDelegate>
{
    _Bool _isEnableExternalCapture;
    _Bool _shouldRender;
    CDUnknownBlockType _enableExternalCaptureBlock;
    NSString *_preset;
    VideoCapture *_pVideoCapture;
    unsigned int _sequence;
    int _nfps;
    int _rotateAngle;
    id <QAVRemoteVideoDelegate> _remoteVideoDlg;
    id <QAVLocalVideoDelegate> _localVideoDlg;
}

@property(nonatomic) int rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) id <QAVLocalVideoDelegate> localVideoDlg; // @synthesize localVideoDlg=_localVideoDlg;
@property(nonatomic) id <QAVRemoteVideoDelegate> remoteVideoDlg; // @synthesize remoteVideoDlg=_remoteVideoDlg;
- (void)transmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (int)getRotateAngle;
- (int)getEncodeRotateAngle;
- (void)swapVideo;
- (void)releaseVideo;
- (void)stopVideo;
- (void)startVideo;
- (void)setVideoFps:(int)arg1;
- (void)setVideoPreset:(id)arg1;
- (void)initVideoWithPreset:(id)arg1 format:(int)arg2 fps:(int)arg3;
- (void)onReopenCameraEvent:(id)arg1;
- (void)OnEnableExternalCaptureComplete:(int)arg1;
- (void)onRecvVideoData:(char *)arg1 length:(int)arg2 FrameAngle:(int)arg3;
- (id)getQualityTips;
- (long long)addWaterMark:(long long)arg1 image:(id)arg2;
- (void)inputWhiteningParam:(float)arg1;
- (void)inputBeautyParam:(float)arg1;
- (_Bool)isEnableBeauty;
- (id)getCaptureSession;
- (id)getPreviewLayer;
- (int)colorFormat2imageFomat:(long long)arg1;
- (int)fillExternalCaptureFrame:(id)arg1;
- (_Bool)enableExternalCapture:(_Bool)arg1 shouldRender:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setMediaVideoDelegate:(id)arg1;
- (void)setScreenVideoDelegate:(id)arg1;
- (void)setLocalVideoDelegate:(id)arg1;
- (void)setRemoteVideoDelegate:(id)arg1;
- (_Bool)isFrontcamera;
- (long long)enableCamera:(long long)arg1 isEnable:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (long long)switchCamera:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)clear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

