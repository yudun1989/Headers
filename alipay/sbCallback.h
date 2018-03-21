//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "BeautyRendererDelegate-Protocol.h"

@class BeautyRenderer, NSString;

@interface sbCallback : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, BeautyRendererDelegate>
{
    weak_ptr_48e2a55c m_source;
    _Bool _isLandscape;
    BeautyRenderer *_beautyRenderer;
}

@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) BeautyRenderer *beautyRenderer; // @synthesize beautyRenderer=_beautyRenderer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setEnableBeautyMode:(_Bool)arg1;
- (void)setBeautyLevel:(double)arg1;
- (void)beautyRenderer:(id)arg1 didOutputSampleBuffer:(struct __CVBuffer *)arg2;
- (void)orientationChanged:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)setSource:(weak_ptr_48e2a55c)arg1;
- (void)dealloc;
- (id)initWithDimension:(struct CGSize)arg1 isLandscape:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

