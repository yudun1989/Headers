//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAGradientLayer.h>

@class UIColor;

@interface MQZoneGradientLayer : CAGradientLayer
{
    UIColor *_beginColor;
    double _beginAlpha;
    UIColor *_endColor;
    double _endAlpha;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(nonatomic) double beginAlpha; // @synthesize beginAlpha=_beginAlpha;
@property(retain, nonatomic) UIColor *beginColor; // @synthesize beginColor=_beginColor;
- (void).cxx_destruct;
- (void)setup;
- (id)init;

@end

