//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class AVAssetWriter, AVAssetWriterInput, NSString;

@interface FaceRecogVideoWriter : MMObject
{
    _Bool _hadStartSession;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    NSString *_path;
}

+ (id)writerForPath:(id)arg1 Height:(long long)arg2 width:(long long)arg3 channels:(int)arg4 samples:(double)arg5;
@property(nonatomic) _Bool hadStartSession; // @synthesize hadStartSession=_hadStartSession;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
- (void).cxx_destruct;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;
- (struct CGAffineTransform)transformFromCurrentVideoOrientationToOrientation:(long long)arg1;
- (_Bool)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 isVideo:(_Bool)arg2;
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)writerStatus;
- (_Bool)startWriting;
- (void)initAudioInputChannels:(int)arg1 samples:(double)arg2;
- (void)initVideoInputHeight:(long long)arg1 width:(long long)arg2;
- (id)initPath:(id)arg1 Height:(long long)arg2 width:(long long)arg3 channels:(int)arg4 samples:(double)arg5;
- (void)dealloc;
- (id)init;

@end

