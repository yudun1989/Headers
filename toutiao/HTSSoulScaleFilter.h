//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@class HTSGLFramebuffer;

@interface HTSSoulScaleFilter : HTSGLFilter
{
    unsigned int scaleUniform;
    int mixUniform;
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
    unsigned long long inputRotation2;
    HTSGLFramebuffer *secondInputFramebuffer;
    double _currentFrameTime;
    unsigned long long _count;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (void)setMix:(double)arg1;
- (void)setScaleUniform:(double)arg1;
- (void)initializeAttributes;
- (id)init;

@end

