//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTokenCodeGenerator.h"

@interface YXClockTokenCodeGenerator : YXTokenCodeGenerator
{
    double _period;
}

+ (double)defaultPeriod;
@property(nonatomic) double period; // @synthesize period=_period;
- (id)generateOTPForDate:(id)arg1;
- (id)generateOTP;
- (id)initWithSecret:(id)arg1 algorithm:(id)arg2 digits:(unsigned long long)arg3 period:(double)arg4;

@end

