//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString, UIColor;

@interface MBCircularProgressBarLayer : CALayer
{
    double _animationDuration;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void)drawText:(struct CGSize)arg1 context:(struct CGContext *)arg2;
- (void)drawProgressBar:(struct CGSize)arg1 context:(struct CGContext *)arg2;
- (void)drawEmptyBar:(struct CGSize)arg1 context:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1;

// Remaining properties
@property(nonatomic) _Bool countdown; // @dynamic countdown;
@property(nonatomic) long long decimalPlaces; // @dynamic decimalPlaces;
@property(nonatomic) int emptyCapType; // @dynamic emptyCapType;
@property(retain, nonatomic) UIColor *emptyLineColor; // @dynamic emptyLineColor;
@property(retain, nonatomic) UIColor *emptyLineStrokeColor; // @dynamic emptyLineStrokeColor;
@property(nonatomic) double emptyLineWidth; // @dynamic emptyLineWidth;
@property(retain, nonatomic) UIColor *fontColor; // @dynamic fontColor;
@property(nonatomic) double maxValue; // @dynamic maxValue;
@property(nonatomic) double progressAngle; // @dynamic progressAngle;
@property(nonatomic) int progressCapType; // @dynamic progressCapType;
@property(retain, nonatomic) UIColor *progressColor; // @dynamic progressColor;
@property(nonatomic) double progressLineWidth; // @dynamic progressLineWidth;
@property(nonatomic) double progressRotationAngle; // @dynamic progressRotationAngle;
@property(retain, nonatomic) UIColor *progressStrokeColor; // @dynamic progressStrokeColor;
@property(nonatomic) _Bool showUnitString; // @dynamic showUnitString;
@property(nonatomic) _Bool showValueString; // @dynamic showValueString;
@property(nonatomic) struct CGPoint textOffset; // @dynamic textOffset;
@property(copy, nonatomic) NSString *unitFontName; // @dynamic unitFontName;
@property(nonatomic) double unitFontSize; // @dynamic unitFontSize;
@property(copy, nonatomic) NSString *unitString; // @dynamic unitString;
@property(nonatomic) double value; // @dynamic value;
@property(nonatomic) double valueDecimalFontSize; // @dynamic valueDecimalFontSize;
@property(copy, nonatomic) NSString *valueFontName; // @dynamic valueFontName;
@property(nonatomic) double valueFontSize; // @dynamic valueFontSize;

@end

