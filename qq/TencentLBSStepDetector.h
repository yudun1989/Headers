//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, TencentLBSAccelerometerData;
@protocol TencentLBSStepDetectorDeleagte;

@interface TencentLBSStepDetector : NSObject
{
    _Bool _isPeak;
    id <TencentLBSStepDetectorDeleagte> _delegate;
    NSMutableArray *_deltaInfoes;
    TencentLBSAccelerometerData *_lowPassAccData;
    TencentLBSAccelerometerData *_lastAccData;
    double _delta;
    double _lastDelta;
    double _startTime;
    double _diff;
    NSMutableArray *_nonStaticDatas;
    double _lastTimestamp;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) double lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(retain, nonatomic) NSMutableArray *nonStaticDatas; // @synthesize nonStaticDatas=_nonStaticDatas;
@property(nonatomic) double diff; // @synthesize diff=_diff;
@property(nonatomic) _Bool isPeak; // @synthesize isPeak=_isPeak;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double lastDelta; // @synthesize lastDelta=_lastDelta;
@property(nonatomic) double delta; // @synthesize delta=_delta;
@property(retain, nonatomic) TencentLBSAccelerometerData *lastAccData; // @synthesize lastAccData=_lastAccData;
@property(retain, nonatomic) TencentLBSAccelerometerData *lowPassAccData; // @synthesize lowPassAccData=_lowPassAccData;
@property(retain, nonatomic) NSMutableArray *deltaInfoes; // @synthesize deltaInfoes=_deltaInfoes;
@property(nonatomic) __weak id <TencentLBSStepDetectorDeleagte> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)findMaxPeak:(id)arg1;
- (_Bool)findMinPeak:(id)arg1;
- (void)lowPassFilteringWithTime:(double)arg1 data:(CDStruct_31142d93)arg2;
- (void)checkMotionWithData:(id)arg1;
- (void)addCMAccelerometerDataToStepDetector:(id)arg1;
- (void)reset;
- (double)getTimeIntervalBetweenMotion;
- (id)init;

@end

