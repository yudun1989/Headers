//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTAnimatableNumberValue, LOTAnimatablePointValue, LOTAnimatableScaleValue;

@interface LOTShapeTransform : NSObject
{
    LOTAnimatablePointValue *_position;
    LOTAnimatablePointValue *_anchor;
    LOTAnimatableScaleValue *_scale;
    LOTAnimatableNumberValue *_rotation;
    LOTAnimatableNumberValue *_opacity;
    struct CGRect _compBounds;
}

+ (id)transformIdentityWithCompBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) LOTAnimatableNumberValue *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTAnimatableNumberValue *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) LOTAnimatableScaleValue *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) LOTAnimatablePointValue *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) LOTAnimatablePointValue *position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGRect compBounds; // @synthesize compBounds=_compBounds;
- (void).cxx_destruct;
- (id)description;
- (void)_mapFromJSON:(id)arg1 frameRate:(id)arg2 compBounds:(struct CGRect)arg3;
- (id)initWithJSON:(id)arg1 frameRate:(id)arg2 compBounds:(struct CGRect)arg3;

@end

