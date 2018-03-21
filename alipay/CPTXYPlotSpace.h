//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPTPlotSpace.h"

#import "CPTAnimationDelegate-Protocol.h"

@class CPTPlotRange, NSMutableArray, NSString;

@interface CPTXYPlotSpace : CPTPlotSpace <CPTAnimationDelegate>
{
    CPTPlotRange *xRange;
    CPTPlotRange *yRange;
    CPTPlotRange *globalXRange;
    CPTPlotRange *globalYRange;
    int xScaleType;
    int yScaleType;
    struct CGPoint lastDragPoint;
    struct CGPoint lastDisplacement;
    double lastDragTime;
    double lastDeltaTime;
    _Bool isDragging;
    _Bool allowsMomentum;
    NSMutableArray *animations;
    int momentumAnimationCurve;
    int bounceAnimationCurve;
    double momentumAcceleration;
    double bounceAcceleration;
}

@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations;
@property(nonatomic) double lastDeltaTime; // @synthesize lastDeltaTime;
@property(nonatomic) double lastDragTime; // @synthesize lastDragTime;
@property(nonatomic) struct CGPoint lastDisplacement; // @synthesize lastDisplacement;
@property(nonatomic) struct CGPoint lastDragPoint; // @synthesize lastDragPoint;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging;
@property(nonatomic) double bounceAcceleration; // @synthesize bounceAcceleration;
@property(nonatomic) double momentumAcceleration; // @synthesize momentumAcceleration;
@property(nonatomic) int bounceAnimationCurve; // @synthesize bounceAnimationCurve;
@property(nonatomic) int momentumAnimationCurve; // @synthesize momentumAnimationCurve;
@property(nonatomic) _Bool allowsMomentum; // @synthesize allowsMomentum;
@property(nonatomic) int yScaleType; // @synthesize yScaleType;
@property(nonatomic) int xScaleType; // @synthesize xScaleType;
@property(copy, nonatomic) CPTPlotRange *globalYRange; // @synthesize globalYRange;
@property(copy, nonatomic) CPTPlotRange *globalXRange; // @synthesize globalXRange;
@property(copy, nonatomic) CPTPlotRange *yRange; // @synthesize yRange;
@property(copy, nonatomic) CPTPlotRange *xRange; // @synthesize xRange;
- (void)animationDidFinish:(id)arg1;
- (id)shiftRange:(id)arg1 by:(CDStruct_6ece915e)arg2 inGlobalRange:(id)arg3 withDisplacement:(double *)arg4;
- (_Bool)pointingDeviceDraggedEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (void)scaleBy:(double)arg1 aboutPoint:(struct CGPoint)arg2;
- (void)doublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2 forEvent:(struct UIEvent *)arg3;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2 forEvent:(struct UIEvent *)arg3;
- (struct CGPoint)plotAreaViewPointForEvent:(struct UIEvent *)arg1;
- (void)doublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2 forPlotAreaViewPoint:(struct CGPoint)arg3;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2 forPlotAreaViewPoint:(struct CGPoint)arg3;
- (struct CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2;
- (struct CGPoint)plotAreaViewPointForPlotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2;
- (unsigned long long)numberOfCoordinates;
- (double)doublePrecisionPlotCoordinateForViewLength:(double)arg1 logPlotRange:(id)arg2 boundsLength:(double)arg3;
- (double)viewCoordinateForViewLength:(double)arg1 logPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3;
- (double)doublePrecisionPlotCoordinateForViewLength:(double)arg1 linearPlotRange:(id)arg2 boundsLength:(double)arg3;
- (CDStruct_6ece915e)plotCoordinateForViewLength:(double)arg1 linearPlotRange:(id)arg2 boundsLength:(double)arg3;
- (double)viewCoordinateForViewLength:(double)arg1 linearPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3;
- (double)viewCoordinateForViewLength:(double)arg1 linearPlotRange:(id)arg2 plotCoordinateValue:(CDStruct_6ece915e)arg3;
- (void)scaleToFitPlots:(id)arg1;
- (double)viewCoordinateForRange:(id)arg1 coordinate:(int)arg2 direction:(_Bool)arg3;
- (void)animateRangeForCoordinate:(int)arg1 shift:(CDStruct_6ece915e)arg2 momentumTime:(double)arg3 speed:(double)arg4 acceleration:(double)arg5;
- (id)constrainRange:(id)arg1 toGlobalRange:(id)arg2;
- (int)scaleTypeForCoordinate:(int)arg1;
- (id)plotRangeForCoordinate:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

