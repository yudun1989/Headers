//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSSegmentsCompositorInput-Protocol.h"

@class BFTask, NSArray, NSMutableArray, NSString;
@protocol KSMovieWriter;

@interface KSRecordingSegment : NSObject <KSSegmentsCompositorInput>
{
    unsigned long long _sequenceNumber;
    NSObject<KSMovieWriter> *_videoWriter;
    BFTask *_writerTask;
    NSMutableArray *_scalesList;
    NSArray *_stepsAfterComposition;
    CDStruct_1b6d18a9 _scaledDuration;
    CDStruct_1b6d18a9 _startTimeOffset;
}

@property(retain, nonatomic) NSArray *stepsAfterComposition; // @synthesize stepsAfterComposition=_stepsAfterComposition;
@property(nonatomic) CDStruct_1b6d18a9 startTimeOffset; // @synthesize startTimeOffset=_startTimeOffset;
@property(nonatomic) CDStruct_1b6d18a9 scaledDuration; // @synthesize scaledDuration=_scaledDuration;
@property(retain, nonatomic) NSMutableArray *scalesList; // @synthesize scalesList=_scalesList;
@property(retain, nonatomic) BFTask *writerTask; // @synthesize writerTask=_writerTask;
@property(retain, nonatomic) NSObject<KSMovieWriter> *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) _Bool scaled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

