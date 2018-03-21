//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliBAbstractAnimator.h"

#import "CAAnimationDelegate-Protocol.h"

@class AliBPropertyAnimatorDelegate, CAAnimationGroup, NSArray, NSString;

@interface AliBPropertyAnimator : AliBAbstractAnimator <CAAnimationDelegate>
{
    _Bool _completeState;
    CAAnimationGroup *_group;
    long long _completeCount;
    AliBPropertyAnimatorDelegate *_animatorDelegate;
    NSArray *_properties;
    NSArray *_pivotProperties;
    struct CGPoint _anchorPoint;
}

@property(copy, nonatomic) NSArray *pivotProperties; // @synthesize pivotProperties=_pivotProperties;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) AliBPropertyAnimatorDelegate *animatorDelegate; // @synthesize animatorDelegate=_animatorDelegate;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) _Bool completeState; // @synthesize completeState=_completeState;
@property(nonatomic) long long completeCount; // @synthesize completeCount=_completeCount;
@property(retain, nonatomic) CAAnimationGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)createAnimation:(id)arg1;
- (id)getCalculationStr:(id)arg1;
- (id)createKeyFramesAnimation:(id)arg1;
- (id)processValue:(id)arg1 propertyName:(id)arg2;
- (id)createPropertyAnimation:(id)arg1;
- (id)keyPathForPropertyName:(id)arg1;
- (id)timingFunctionName:(id)arg1;
- (id)createAnimationGroup;
- (_Bool)isValid;
- (_Bool)animate;
- (void)preProcessConfig;
- (void)updatePivotConfig;
- (id)initWithKey:(id)arg1 info:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

