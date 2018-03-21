//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, RecTrack;
@protocol LocalProcessorTrackDelegate, OS_dispatch_queue;

@interface AlphaArManager : NSObject
{
    float projectMatrix[4][4];
    struct IARToolkit *_arTool;
    NSMutableArray *_items;
    NSMutableArray *_dynamicItems;
    _Bool _willUpdateSize;
    _Bool _enginePrepared;
    long long _bufferSize;
    long long _oldIndex;
    int _algorithmRecCount;
    int _algorithmTrackCount;
    double _totalConsumeRecTime;
    double _totalConsumeTrackTime;
    _Bool _hasDestoryedHiar;
    _Bool _isLocalProcessorPause;
    RecTrack *_track;
    int _curMarkerId;
    _Bool _hadRecog;
    NSDate *_getFirstFrameDataTime;
    _Bool _isCameraSetup;
    _Bool _viewFinderEnable;
    _Bool _filterEnable;
    _Bool _isRunning;
    _Bool _isEditing;
    _Bool _recognized;
    double _recTime;
    double _trackTime;
    double _avgRecTime;
    double _avgTrackTime;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    long long _recogCount;
    long long _recogQuality;
    long long _trackingQuality;
    long long _performanQuality;
    long long _frames;
    id <LocalProcessorTrackDelegate> _localProcessorDelegate;
    struct CGSize _scale;
}

@property _Bool recognized; // @synthesize recognized=_recognized;
@property _Bool isEditing; // @synthesize isEditing=_isEditing;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <LocalProcessorTrackDelegate> localProcessorDelegate; // @synthesize localProcessorDelegate=_localProcessorDelegate;
@property(nonatomic) long long frames; // @synthesize frames=_frames;
@property(nonatomic) _Bool filterEnable; // @synthesize filterEnable=_filterEnable;
@property(nonatomic) _Bool viewFinderEnable; // @synthesize viewFinderEnable=_viewFinderEnable;
@property(nonatomic) long long performanQuality; // @synthesize performanQuality=_performanQuality;
@property(nonatomic) long long trackingQuality; // @synthesize trackingQuality=_trackingQuality;
@property(nonatomic) long long recogQuality; // @synthesize recogQuality=_recogQuality;
@property long long recogCount; // @synthesize recogCount=_recogCount;
@property(readonly) NSObject<OS_dispatch_queue> *dispatch_queue; // @synthesize dispatch_queue=_dispatch_queue;
@property double avgTrackTime; // @synthesize avgTrackTime=_avgTrackTime;
@property double avgRecTime; // @synthesize avgRecTime=_avgRecTime;
@property(readonly) double trackTime; // @synthesize trackTime=_trackTime;
@property(readonly) double recTime; // @synthesize recTime=_recTime;
@property(readonly) _Bool isCameraSetup; // @synthesize isCameraSetup=_isCameraSetup;
@property(readonly) struct CGSize scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (_Bool)localProcessorInvalid;
- (_Bool)loadFeatureFiles:(id)arg1;
- (void)pauseLocalProcessor;
- (void)resumeLocalProcessor;
- (void)doInitLocalProcessorHiAR:(struct CGRect)arg1 drawRect:(struct CGRect *)arg2 avCaptureTypeIndex:(int *)arg3;
- (struct _HiARQSize)getCameraSize:(int)arg1;
- (unsigned long long)getHiARQItemCount;
- (void)addHiArQItem:(id)arg1;
- (void)resetTrackState;
- (void)addFrameBuffer:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)startReport:(long long)arg1 hiItem:(id)arg2;
- (void)resetAlgorithmCount;
- (long long)prepare:(id)arg1;
- (unsigned long long)getExistItemCount;
- (_Bool)loadDynamicFeature:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (void)destoryLocalProcessorHiAR;
- (id)init;

@end

