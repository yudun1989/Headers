//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMAttitude, CMMotionManager, NSOperationQueue;
@protocol Ant3DGyroscopeTrackerDelegate;

@interface Ant3DGyroTracker : NSObject
{
    float _initMatrix[16];
    float _initRotation[16];
    float _transform[16];
    _Bool _coherent;
    _Bool _updateEnabled;
    float _distance;
    float _csSign;
    float _gravityRotation;
    float _gravityFaceRotation;
    id <Ant3DGyroscopeTrackerDelegate> _delegate;
    unsigned long long _cs;
    unsigned long long _attitudeMode;
    unsigned long long _resetMode;
    CMMotionManager *_motionManager;
    CMAttitude *_referenceAttitude;
    unsigned long long _updateCount;
    NSOperationQueue *_queue;
    struct Vector3 _gravityAxis;
    CDStruct_31142d93 _referenceGravity;
}

@property(nonatomic) float gravityFaceRotation; // @synthesize gravityFaceRotation=_gravityFaceRotation;
@property(nonatomic) float gravityRotation; // @synthesize gravityRotation=_gravityRotation;
@property(nonatomic) struct Vector3 gravityAxis; // @synthesize gravityAxis=_gravityAxis;
@property(nonatomic) float csSign; // @synthesize csSign=_csSign;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) _Bool updateEnabled; // @synthesize updateEnabled=_updateEnabled;
@property(nonatomic) CDStruct_31142d93 referenceGravity; // @synthesize referenceGravity=_referenceGravity;
@property(retain, nonatomic) CMAttitude *referenceAttitude; // @synthesize referenceAttitude=_referenceAttitude;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) unsigned long long resetMode; // @synthesize resetMode=_resetMode;
@property(nonatomic) _Bool coherent; // @synthesize coherent=_coherent;
@property(nonatomic) unsigned long long attitudeMode; // @synthesize attitudeMode=_attitudeMode;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned long long cs; // @synthesize cs=_cs;
@property(nonatomic) __weak id <Ant3DGyroscopeTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setInitAttitude:(unsigned long long)arg1;
- (void)updateResetMode;
- (_Bool)exceedChangesThreshold:(id)arg1;
- (void)adjustAttitude:(float *)arg1 toMatrix:(struct Matrix *)arg2;
- (void)adjustAttidute:(struct Matrix *)arg1;
- (void)calcTransformFromAttitude:(id)arg1;
- (void)updateGravityRotation;
- (void)startUpdateInternal;
- (void)stopUpdate;
- (void)startUpdate;
- (void)dealloc;
- (id)init;

@end

