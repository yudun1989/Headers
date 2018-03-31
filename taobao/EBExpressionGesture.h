//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EBExpressionHandler.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate;

@interface EBExpressionGesture : EBExpressionHandler <UIGestureRecognizerDelegate>
{
    _Bool _isMutex;
    _Bool _isHorizontal;
    _Bool _isVertical;
    UIGestureRecognizer *_gesture;
    id <UIGestureRecognizerDelegate> _tmpDelegate;
}

@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) _Bool isHorizontal; // @synthesize isHorizontal=_isHorizontal;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> tmpDelegate; // @synthesize tmpDelegate=_tmpDelegate;
@property(nonatomic) __weak UIGestureRecognizer *gesture; // @synthesize gesture=_gesture;
- (void).cxx_destruct;
- (_Bool)isGestureEnded:(long long)arg1;
- (id)stateToString:(long long)arg1;
- (id)setUpScopeForGesture:(id)arg1;
- (void)handleGesture:(id)arg1;
- (_Bool)isInnerPan:(id)arg1 otherPan:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureMap:(id)arg1;
- (void)fireExitEvent:(id)arg1;
- (void)fireStateChangedEvent:(id)arg1;
- (void)addGuestureOnMainThread;
- (void)initGesture;
- (void)removeExpressionBinding;
- (void)updateTargetExpression:(id)arg1 options:(id)arg2 exitExpression:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithExpressionType:(long long)arg1 source:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
