//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAMediaTimingFunction : NSObject
{
    long long _type;
}

+ (id)functionWithType:(long long)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1;
- (double)interpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutCircularInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutCircularInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInCircularInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutExpInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutExpInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInExpInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutSinInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutSinInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInSinInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutQuinticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutQuinticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInQuinticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutQuarticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutQuarticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInQuarticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutCubicInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutCubicInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInCubicInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInEaseOutQuadraticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeOutQuadraticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)easeInQuadraticInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)linearInterpolateBySlice:(double)arg1 start:(double)arg2 end:(double)arg3;
- (double)normalizeValue:(double)arg1;

@end

