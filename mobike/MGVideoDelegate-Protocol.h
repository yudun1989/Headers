//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVCaptureConnection, AVCaptureOutput;

@protocol MGVideoDelegate <NSObject>
- (void)MGCaptureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;

@optional
- (void)MGCaptureOutput:(AVCaptureOutput *)arg1 error:(unsigned long long)arg2;
@end

