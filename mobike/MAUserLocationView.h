//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnnotationView.h"

@class CALayer, UIColor;

@interface MAUserLocationView : MAAnnotationView
{
    _Bool _allowInnerPulse;
    float _baseDiameter;
    float _innerDiameter;
    CALayer *_baseLayer;
    CALayer *_innerBaseLayer;
    UIColor *_innerBaseColor;
    CALayer *_innerCircleLayer;
    UIColor *_innerCircleColor;
}

@property(nonatomic) _Bool allowInnerPulse; // @synthesize allowInnerPulse=_allowInnerPulse;
@property(nonatomic) float innerDiameter; // @synthesize innerDiameter=_innerDiameter;
@property(nonatomic) float baseDiameter; // @synthesize baseDiameter=_baseDiameter;
@property(retain, nonatomic) UIColor *innerCircleColor; // @synthesize innerCircleColor=_innerCircleColor;
@property(retain, nonatomic) CALayer *innerCircleLayer; // @synthesize innerCircleLayer=_innerCircleLayer;
@property(retain, nonatomic) UIColor *innerBaseColor; // @synthesize innerBaseColor=_innerBaseColor;
@property(retain, nonatomic) CALayer *innerBaseLayer; // @synthesize innerBaseLayer=_innerBaseLayer;
@property(retain, nonatomic) CALayer *baseLayer; // @synthesize baseLayer=_baseLayer;
- (void).cxx_destruct;
- (void)updateWithDisplayParam:(id)arg1;
- (id)userLocation;
- (void)initLayers;
- (void)initAttributes;
- (id)getInnerAnimationWithDuration:(float)arg1;
- (void)removeFromSuperview;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

