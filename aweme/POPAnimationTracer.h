//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, POPAnimation;

@interface POPAnimationTracer : NSObject
{
    POPAnimation *_animation;
    struct _POPAnimationState *_animationState;
    NSMutableArray *_events;
    _Bool _animationHasVelocity;
    _Bool _shouldLogAndResetOnCompletion;
}

@property(nonatomic) _Bool shouldLogAndResetOnCompletion; // @synthesize shouldLogAndResetOnCompletion=_shouldLogAndResetOnCompletion;
- (void).cxx_destruct;
- (id)eventsWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *writeEvents;
@property(readonly, nonatomic) NSArray *allEvents;
- (void)reset;
- (void)stop;
- (void)start;
- (void)autoreversed;
- (void)didReachToValue:(id)arg1;
- (void)didStop:(_Bool)arg1;
- (void)didStart;
- (void)updateTension:(float)arg1;
- (void)updateMass:(float)arg1;
- (void)updateFriction:(float)arg1;
- (void)updateBounciness:(float)arg1;
- (void)updateSpeed:(float)arg1;
- (void)updateVelocity:(id)arg1;
- (void)updateFromValue:(id)arg1;
- (void)updateToValue:(id)arg1;
- (void)writePropertyValue:(id)arg1;
- (void)readPropertyValue:(id)arg1;
- (id)initWithAnimation:(id)arg1;

@end

