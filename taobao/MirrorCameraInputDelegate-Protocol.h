//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MirrorCameraInput, NSNotification;

@protocol MirrorCameraInputDelegate <NSObject>

@optional
- (void)videoCameraDidFinishAdjustingWhiteBalance:(MirrorCameraInput *)arg1;
- (void)videoCameraDidBeginAdjustingWhiteBalance:(MirrorCameraInput *)arg1;
- (void)videoCameraDidFinishAdjustingExposure:(MirrorCameraInput *)arg1;
- (void)videoCameraDidBeginAdjustingExposure:(MirrorCameraInput *)arg1;
- (void)videoCameraDidFinishAdjustingFocus:(MirrorCameraInput *)arg1;
- (void)videoCameraDidBeginAdjustingFocus:(MirrorCameraInput *)arg1;
- (void)videoCamera:(MirrorCameraInput *)arg1 didUpdateSecondsPerFrame:(double)arg2;
- (void)deviceSubjectAreaDidChange:(NSNotification *)arg1;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

