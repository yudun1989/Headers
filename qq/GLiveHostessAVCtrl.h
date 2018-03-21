//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GLiveCommonAVCtrl.h>

#import <QQMainProject/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>
#import <QQMainProject/IAVHostessCtrl-Protocol.h>

@class GLiveCameraManager, NSString;
@protocol GLiveHostessAVCtrlDelegate;

@interface GLiveHostessAVCtrl : GLiveCommonAVCtrl <AVCaptureVideoDataOutputSampleBufferDelegate, IAVHostessCtrl>
{
    _Bool _liveEnabled;
    long long _eCameraDirection;
    GLiveCameraManager *_cameraManager;
    long long _toBeProcFrameCount;
    id <GLiveHostessAVCtrlDelegate> _hostessDelegate;
}

@property(nonatomic) __weak id <GLiveHostessAVCtrlDelegate> hostessDelegate; // @synthesize hostessDelegate=_hostessDelegate;
- (void).cxx_destruct;
- (void)willTeminal:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (_Bool)allowUseFilter;
- (_Bool)enableMic:(_Bool)arg1;
- (_Bool)enableCamera:(_Bool)arg1;
- (long long)getCameraFps;
- (void)setCameraFps:(long long)arg1;
- (long long)getCameraResolution;
- (void)setCameraResolution:(long long)arg1 withCfgWidth:(int)arg2 withCfgHeight:(int)arg3;
- (long long)getCameraDirection;
- (void)setCameraDirection:(long long)arg1;
- (id)extractVideoFrameFromCamera:(id)arg1;
- (void)videoFrameDataDelete:(id)arg1;
- (void)renderVideoFrameFromCamera:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)stopLive;
- (_Bool)startLive;
- (_Bool)setAnimEffect:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getFilterList;
- (_Bool)setFilter:(id)arg1 param:(id)arg2;
- (_Bool)setBeautyLevel:(float)arg1 param:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

