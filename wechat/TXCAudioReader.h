//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetImageGenerator, AVAssetTrack, NSMutableArray, TXSAudioPacket;
@protocol OS_dispatch_queue;

@interface TXCAudioReader : NSObject
{
    AVAsset *avAsset;
    AVAssetTrack *videoTrack;
    AVAssetTrack *audioTrack;
    AVAssetImageGenerator *generate;
    NSMutableArray *videoTracks;
    NSMutableArray *videoAssets;
    NSMutableArray *startVideoTimeArray;
    NSMutableArray *audioTracks;
    NSMutableArray *audioAssets;
    NSMutableArray *startAudioTimeArray;
    long long _index;
    NSObject<OS_dispatch_queue> *_readQueue;
    _Bool _audioCanRead;
    _Bool _audioNeedRead;
    int _bitrate;
    int _fps;
    int _width;
    int _height;
    float _angle;
    long long _totalSampleDataLength;
    long long _videoCutType;
    TXSAudioPacket *_audioInfo;
    CDStruct_1b6d18a9 _duration;
}

@property _Bool audioNeedRead; // @synthesize audioNeedRead=_audioNeedRead;
@property _Bool audioCanRead; // @synthesize audioCanRead=_audioCanRead;
@property(readonly) TXSAudioPacket *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(readonly) long long videoCutType; // @synthesize videoCutType=_videoCutType;
@property(readonly) long long totalSampleDataLength; // @synthesize totalSampleDataLength=_totalSampleDataLength;
@property(readonly) float angle; // @synthesize angle=_angle;
@property(readonly) int height; // @synthesize height=_height;
@property(readonly) int width; // @synthesize width=_width;
@property(readonly) int fps; // @synthesize fps=_fps;
@property(readonly) int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)stopAudioRead;
- (void)startAudioRead;
- (void)readAudioFrameFromTime:(float)arg1 toTime:(float)arg2 readOneFrame:(CDUnknownBlockType)arg3 readFinished:(CDUnknownBlockType)arg4;
- (struct opaqueCMSampleBuffer *)readFrameAtTime:(float)arg1 isVideo:(_Bool)arg2;
- (id)getAssetReader:(long long)arg1 isVideo:(_Bool)arg2 trackOutput:(id)arg3;
- (id)getTrackOutput:(long long)arg1 isVideo:(_Bool)arg2;
- (long long)findFrameIndex:(float)arg1 isVideo:(_Bool)arg2;
- (void)cutAudioToPieces:(float)arg1;
- (void)cutAudioFromTime:(float)arg1 toTime:(float)arg2;
- (void)cutVideoFromTime:(float)arg1 toTime:(float)arg2;
- (void)initAudioReader;
- (void)initAVReaderWithAsset:(id)arg1;
- (void)initAVReaderWithPath:(id)arg1;
- (void)initWithPathInternal:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

