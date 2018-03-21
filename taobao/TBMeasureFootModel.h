//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBMeasureFootModel : TBJSONModel
{
    long long _leftLength;
    long long _leftWidth;
    long long _rightLength;
    long long _rightWidth;
    NSString *_widthUnit;
    NSString *_lengthUnit;
}

+ (long long)minLength;
+ (long long)maxLength;
@property(retain, nonatomic) NSString *lengthUnit; // @synthesize lengthUnit=_lengthUnit;
@property(retain, nonatomic) NSString *widthUnit; // @synthesize widthUnit=_widthUnit;
@property(nonatomic) long long rightWidth; // @synthesize rightWidth=_rightWidth;
@property(nonatomic) long long rightLength; // @synthesize rightLength=_rightLength;
@property(nonatomic) long long leftWidth; // @synthesize leftWidth=_leftWidth;
@property(nonatomic) long long leftLength; // @synthesize leftLength=_leftLength;
- (void).cxx_destruct;
- (id)getRequestData;
- (void)setRight:(double)arg1 width:(double)arg2;
- (void)setLeft:(double)arg1 width:(double)arg2;
- (_Bool)isFinished;

@end

