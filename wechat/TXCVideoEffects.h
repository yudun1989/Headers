//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXCRGB2YUVOutput, TXCVEFDarkDreamFilter, TXCVEFRockLightFilter, TXCVEFRockLightParam, TXCVEFScaleFiter, TXCVEFSoulOutFilter, TXCVEFSoulOutParam, TXCVEFSoulSplitFilter, TXCVEFSoulSplitParam, TXCYUV2RGBInput;

@interface TXCVideoEffects : NSObject
{
    TXCYUV2RGBInput *_yuvFilter;
    TXCVEFDarkDreamFilter *_darkDreamFilter;
    TXCVEFRockLightFilter *_rockLightFilter;
    TXCVEFSoulOutFilter *_soulOutFilter;
    TXCVEFSoulSplitFilter *_soulSplitFilter;
    TXCVEFScaleFiter *_scaleFiter;
    _Bool _activeFlags[4];
    _Bool _init;
    TXCVEFRockLightParam *_rockLightParam;
    TXCVEFSoulSplitParam *_soulSplitParam;
    TXCVEFSoulOutParam *_soulOutParam;
    _Bool _isAsync;
    long long _outputFormat;
    struct opaqueCMSampleBuffer *_nv12SampleBuffer;
    struct opaqueCMSampleBuffer *_i420SampleBuffer;
    struct opaqueCMSampleBuffer *_rgbSampleBuffer;
    struct opaqueCMSampleBuffer *_outSampleBufferRef;
    TXCRGB2YUVOutput *_rgbFilter;
    struct CGSize _outputSize;
}

@property(retain, nonatomic) TXCRGB2YUVOutput *rgbFilter; // @synthesize rgbFilter=_rgbFilter;
@property(nonatomic) struct opaqueCMSampleBuffer *outSampleBufferRef; // @synthesize outSampleBufferRef=_outSampleBufferRef;
@property(nonatomic) struct opaqueCMSampleBuffer *rgbSampleBuffer; // @synthesize rgbSampleBuffer=_rgbSampleBuffer;
@property(nonatomic) struct opaqueCMSampleBuffer *i420SampleBuffer; // @synthesize i420SampleBuffer=_i420SampleBuffer;
@property(nonatomic) struct opaqueCMSampleBuffer *nv12SampleBuffer; // @synthesize nv12SampleBuffer=_nv12SampleBuffer;
@property(nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) _Bool isAsync; // @synthesize isAsync=_isAsync;
- (void).cxx_destruct;
- (void)dealloc;
- (struct opaqueCMSampleBuffer *)getSampleBuffer:(char *)arg1 bufferSize:(struct CGSize)arg2;
- (struct opaqueCMSampleBuffer *)processFrame:(struct opaqueCMSampleBuffer *)arg1 outputFormat:(long long)arg2;
- (void)setEffect:(long long)arg1 Param:(id)arg2;
- (id)init;

@end

