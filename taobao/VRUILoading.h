//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VRUINode.h"

@interface VRUILoading : VRUINode
{
    float _radianStep;
    float _red;
    float _green;
    float _blue;
    float _radius[2];
    _Bool _animating;
    int _animators;
    int _drawingCount;
    union _GLKMatrix4 _modelViewProjectionMatrix;
}

- (void)dealloc;
- (void)setColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)removeAllAnimations;
- (void)addAnimationInSeconds:(float)arg1;
- (void)drawInContext:(struct VRContext)arg1;
- (int)esGenLoadingSphere;
- (void)releaseVAO;
- (void)createVAO;
- (void)buildProgram;
- (void)setupContext;
- (id)init;

@end

