//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FMMorphResource : NSObject
{
    float _eyeOffset;
    float _lipOffset;
    float _browOffset;
    float _noseOffset;
    float _mouthOffset;
    float _outterRadio;
    int _interpolationPartition;
    NSArray *_faceScale;
    NSArray *_eyeScale;
    NSArray *_noseScale;
    NSArray *_browScale;
    NSArray *_mouthScale;
}

+ (id)objectWithKeyValues:(id)arg1;
@property(nonatomic) int interpolationPartition; // @synthesize interpolationPartition=_interpolationPartition;
@property(nonatomic) float outterRadio; // @synthesize outterRadio=_outterRadio;
@property(nonatomic) float mouthOffset; // @synthesize mouthOffset=_mouthOffset;
@property(nonatomic) float noseOffset; // @synthesize noseOffset=_noseOffset;
@property(nonatomic) float browOffset; // @synthesize browOffset=_browOffset;
@property(nonatomic) float lipOffset; // @synthesize lipOffset=_lipOffset;
@property(nonatomic) float eyeOffset; // @synthesize eyeOffset=_eyeOffset;
@property(retain, nonatomic) NSArray *mouthScale; // @synthesize mouthScale=_mouthScale;
@property(retain, nonatomic) NSArray *browScale; // @synthesize browScale=_browScale;
@property(retain, nonatomic) NSArray *noseScale; // @synthesize noseScale=_noseScale;
@property(retain, nonatomic) NSArray *eyeScale; // @synthesize eyeScale=_eyeScale;
@property(retain, nonatomic) NSArray *faceScale; // @synthesize faceScale=_faceScale;
- (void).cxx_destruct;

@end

