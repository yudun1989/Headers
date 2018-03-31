//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EBGyroEuler, EBGyroQuaternion, EBGyroVector3, NSNumber;

@interface EBGyroOrientationEvaluator : NSObject
{
    _Bool _enabled;
    int _screenOrientation;
    NSNumber *_constraintAlpha;
    NSNumber *_constraintBeta;
    NSNumber *_constraintGamma;
    double _constraintAlphaOffset;
    double _constraintBetaOffset;
    double _constraintGammaOffset;
    EBGyroQuaternion *_quaternion;
    EBGyroQuaternion *_q0;
    EBGyroQuaternion *_q1;
    EBGyroVector3 *_zee;
    EBGyroEuler *_euler;
}

@property(retain, nonatomic) EBGyroEuler *euler; // @synthesize euler=_euler;
@property(retain, nonatomic) EBGyroVector3 *zee; // @synthesize zee=_zee;
@property(retain, nonatomic) EBGyroQuaternion *q1; // @synthesize q1=_q1;
@property(retain, nonatomic) EBGyroQuaternion *q0; // @synthesize q0=_q0;
@property(retain, nonatomic) EBGyroQuaternion *quaternion; // @synthesize quaternion=_quaternion;
@property(nonatomic) double constraintGammaOffset; // @synthesize constraintGammaOffset=_constraintGammaOffset;
@property(nonatomic) double constraintBetaOffset; // @synthesize constraintBetaOffset=_constraintBetaOffset;
@property(nonatomic) double constraintAlphaOffset; // @synthesize constraintAlphaOffset=_constraintAlphaOffset;
@property(retain, nonatomic) NSNumber *constraintGamma; // @synthesize constraintGamma=_constraintGamma;
@property(retain, nonatomic) NSNumber *constraintBeta; // @synthesize constraintBeta=_constraintBeta;
@property(retain, nonatomic) NSNumber *constraintAlpha; // @synthesize constraintAlpha=_constraintAlpha;
@property(nonatomic) int screenOrientation; // @synthesize screenOrientation=_screenOrientation;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)calculateWithDeviceAlpha:(double)arg1 deviceBeta:(double)arg2 deviceGamma:(double)arg3;
- (id)initWithConstraintAlpha:(id)arg1 constraintBeta:(id)arg2 constraintGamma:(id)arg3;

@end
