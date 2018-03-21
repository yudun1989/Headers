//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageMovieWriter.h"

#import "KSMovieWriter-Protocol.h"

@class AVAssetWriter, NSString;

@interface KSVideoPrioritizedMovieWriter : GPUImageMovieWriter <KSMovieWriter>
{
    CDUnknownBlockType _willStartSessionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType willStartSessionBlock; // @synthesize willStartSessionBlock=_willStartSessionBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsTrimming;
@property(nonatomic) unsigned long long inputRotation;
@property(readonly, nonatomic) CDStruct_1b6d18a9 previousFrameTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, nonatomic) AVAssetWriter *assetWriter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAudioTrack;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

