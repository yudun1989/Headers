//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBARCameraDelegate-Protocol.h"

@protocol TBARCameraCaptureDelegate <TBARCameraDelegate>
- (void)captureVideo:(char **)arg1 width:(int)arg2 height:(int)arg3;

@optional
- (void)captureCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 video:(char **)arg2 width:(int)arg3 height:(int)arg4;
@end
