//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPTAxis.h"

@class CPTConstraints;

@interface CPTXYAxis : CPTAxis
{
    CDStruct_6ece915e orthogonalCoordinateDecimal;
    CPTConstraints *axisConstraints;
}

@property(retain, nonatomic) CPTConstraints *axisConstraints; // @synthesize axisConstraints;
@property(nonatomic) CDStruct_6ece915e orthogonalCoordinateDecimal; // @synthesize orthogonalCoordinateDecimal;
- (void)setCoordinate:(int)arg1;
- (CDStruct_6ece915e)defaultTitleLocation;
- (id)description;
- (void)drawBackgroundLimitsInContext:(struct CGContext *)arg1;
- (void)drawBackgroundBandsInContext:(struct CGContext *)arg1;
- (void)drawGridLinesInContext:(struct CGContext *)arg1 isMajor:(_Bool)arg2;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)drawTicksInContext:(struct CGContext *)arg1 atLocations:(id)arg2 withLength:(double)arg3 inRange:(id)arg4 isMajor:(_Bool)arg5;
- (struct CGPoint)viewPointForCoordinateDecimalNumber:(CDStruct_6ece915e)arg1;
- (struct CGPoint)viewPointForOrthogonalCoordinateDecimal:(CDStruct_6ece915e)arg1 axisCoordinateDecimal:(CDStruct_6ece915e)arg2;
- (void)orthogonalCoordinateViewLowerBound:(double *)arg1 upperBound:(double *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

