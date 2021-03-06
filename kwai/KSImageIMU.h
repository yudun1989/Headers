//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface KSImageIMU : NSObject
{
    CMMotionManager *motionManager;
    _Bool inMotionTracking;
    struct mutex imuBufferMutex;
    struct vector<CMRotationMatrix, std::__1::allocator<CMRotationMatrix>> orientations;
    vector_3f7ffb82 timestamps;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)PrintCMRotationMatrix:(CDStruct_afa449f9)arg1;
- (void)PrintQuaternion:(CDStruct_d2b197d1)arg1;
- (CDStruct_afa449f9)getCurrentDeviceMotionRotationMatrix:(double)arg1;
- (void)updateMotion;
- (struct Mat)motionRotationMatrix2OpencvMatrix:(CDStruct_afa449f9 *)arg1;
- (CDStruct_afa449f9)getCurrentDeviceMotionRotationMatrix;
- (_Bool)isInMotionTracking;
- (void)stopCapturingMotionData;
- (void)startCapturingMotionData;
- (id)motionManager;
- (void)init_IMU_motion;
- (id)init;

@end

