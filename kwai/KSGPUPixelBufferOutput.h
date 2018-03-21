//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

@class KSGPUYUVToRGBConverter;

@interface KSGPUPixelBufferOutput : GPUImageOutput
{
    _Bool _needsUpdateConverter;
    KSGPUYUVToRGBConverter *_yuvtoRGBConverter;
}

@property(nonatomic) _Bool needsUpdateConverter; // @synthesize needsUpdateConverter=_needsUpdateConverter;
@property(retain, nonatomic) KSGPUYUVToRGBConverter *yuvtoRGBConverter; // @synthesize yuvtoRGBConverter=_yuvtoRGBConverter;
- (void).cxx_destruct;
- (void)_processMovieFrame:(struct __CVBuffer *)arg1;
- (void)process:(struct __CVBuffer *)arg1;
- (void)pixelBufferSourceDidChange;
- (id)init;

@end

