//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VRUINode.h"

@interface VRUISpatialButton : VRUINode
{
    float _initStepX;
    float _initStepY;
    float _radianStep;
    float _radianX;
    float _radianY;
}

@property(nonatomic) float radianY; // @synthesize radianY=_radianY;
@property(nonatomic) float radianX; // @synthesize radianX=_radianX;
- (void)dealloc;
- (void)startLeaveAnimation;
- (void)startEnterAnimation:(float)arg1;
- (void)doAnimationWithGazeInput:(_Bool)arg1;
- (void)calculateFocusAreaWithParallel:(int)arg1 slice:(int)arg2;
- (union _GLKVector3)getPositionFromX:(float)arg1 y:(float)arg2;
- (int)esGenArcSphere;
- (void)drawInContext:(struct VRContext)arg1;
- (void)setupContext;
- (void)buildProgram;
- (id)initWithId:(long long)arg1 normal:(id)arg2 focus:(id)arg3 offsetX:(float)arg4 offsetY:(float)arg5 width:(float)arg6 height:(float)arg7 inParent:(id)arg8;
- (id)initWithId:(long long)arg1 normal:(id)arg2 focus:(id)arg3 angleX:(float)arg4 angleY:(float)arg5 width:(float)arg6 height:(float)arg7;
- (id)initWithId:(long long)arg1 normal:(id)arg2 focus:(id)arg3 width:(float)arg4 height:(float)arg5;

@end

