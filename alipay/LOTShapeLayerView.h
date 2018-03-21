//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTAnimatableLayer.h"

@class CAAnimationGroup, CAShapeLayer, LOTShapeFill, LOTShapePath, LOTShapeStroke, LOTShapeTransform, LOTShapeTrimPath, LOTStrokeShapeLayer;

@interface LOTShapeLayerView : LOTAnimatableLayer
{
    LOTShapeTransform *_transform;
    LOTShapeStroke *_stroke;
    LOTShapeFill *_fill;
    LOTShapePath *_path;
    LOTShapeTrimPath *_trim;
    CAShapeLayer *_fillLayer;
    LOTStrokeShapeLayer *_strokeLayer;
    CAAnimationGroup *_animation;
    CAAnimationGroup *_strokeAnimation;
    CAAnimationGroup *_fillAnimation;
}

- (void).cxx_destruct;
- (void)_buildAnimation;
- (id)initWithShape:(id)arg1 fill:(id)arg2 stroke:(id)arg3 trim:(id)arg4 transform:(id)arg5 withLayerDuration:(double)arg6;

@end

