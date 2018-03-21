//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARDeviceMotion;

@interface QQARTrackManager : NSObject
{
    ARDeviceMotion *_arDeviceMotion;
    union _GLKMatrix4 _projectMatrix;
    union _GLKMatrix4 _poseMatrix;
    struct CGSize _markerSize;
    struct CGSize _dimensions;
    int _arType;
    _Bool _startTrack;
    _Bool _TrackReady;
    long long _trackModelType;
}

@property(nonatomic) long long trackModelType; // @synthesize trackModelType=_trackModelType;
- (_Bool)isGLKMatrix4Identity:(union _GLKMatrix4)arg1;
- (_Bool)stopArTrack;
- (_Bool)resetArTrack:(long long)arg1 featureType:(int)arg2 markerSize:(struct CGSize)arg3;
- (_Bool)doTrackPerFrame:(union _GLKMatrix4 *)arg1 projectMatrix:(union _GLKMatrix4 *)arg2 yaw:(float *)arg3 pitch:(float *)arg4;
- (_Bool)startArTrack:(long long)arg1 featureType:(int)arg2 markerSize:(struct CGSize)arg3;
- (_Bool)doInitArTrack:(struct CGSize)arg1;
- (void)dealloc;

@end

