//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTNumberInterpolator, LOTPointInterpolator, LOTSizeInterpolator;

@interface LOTTransformInterpolator : NSObject
{
    LOTPointInterpolator *_positionInterpolator;
    LOTPointInterpolator *_anchorInterpolator;
    LOTSizeInterpolator *_scaleInterpolator;
    LOTNumberInterpolator *_rotationInterpolator;
    LOTNumberInterpolator *_positionXInterpolator;
    LOTNumberInterpolator *_positionYInterpolator;
    LOTTransformInterpolator *_inputNode;
}

+ (id)transformForLayer:(id)arg1;
@property(retain, nonatomic) LOTTransformInterpolator *inputNode; // @synthesize inputNode=_inputNode;
- (void).cxx_destruct;
- (struct CATransform3D)transformForFrame:(id)arg1;
- (_Bool)hasUpdateForFrame:(id)arg1;
- (void)initializeWithPositionX:(id)arg1 positionY:(id)arg2 position:(id)arg3 rotation:(id)arg4 anchor:(id)arg5 scale:(id)arg6;
- (id)initWithPositionX:(id)arg1 positionY:(id)arg2 rotation:(id)arg3 anchor:(id)arg4 scale:(id)arg5;
- (id)initWithPosition:(id)arg1 rotation:(id)arg2 anchor:(id)arg3 scale:(id)arg4;

@end

