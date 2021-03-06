//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LOTAnimationStateObserver-Protocol.h"

@class CADisplayLink, CALayer, LOTAnimationState, LOTComposition, LOTCompositionLayer, NSString;
@protocol LOTAnimationOberver;

@interface LOTAnimationView : UIView <LOTAnimationStateObserver>
{
    CALayer *_timingLayer;
    LOTCompositionLayer *_compLayer;
    CADisplayLink *_completionDisplayLink;
    _Bool hasFullyInitialized_;
    id <LOTAnimationOberver> _animationObserver;
    LOTComposition *_sceneModel;
    LOTAnimationState *_animationState;
    CDUnknownBlockType _completionBlock;
}

+ (id)animationViewWithJSON:(id)arg1 withAssetRootDir:(id)arg2;
+ (id)animationViewWithPath:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) LOTAnimationState *animationState; // @synthesize animationState=_animationState;
@property(readonly, nonatomic) LOTComposition *sceneModel; // @synthesize sceneModel=_sceneModel;
@property(nonatomic) __weak id <LOTAnimationOberver> animationObserver; // @synthesize animationObserver=_animationObserver;
- (void).cxx_destruct;
- (void)didEndAnimation;
- (void)didUpdateAnimation;
- (void)_layout;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) _Bool isAnimationPlaying;
@property(nonatomic) double animationSpeed;
@property(nonatomic) _Bool loopAnimation;
@property(nonatomic) double animationProgress;
- (void)_callCompletionIfNecesarry;
- (void)checkAnimationState;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)addSubview:(id)arg1 toLayerNamed:(id)arg2;
- (void)pause;
- (void)playWithCompletion:(CDUnknownBlockType)arg1;
- (void)play;
- (void)_buildSubviewsFromModel;
- (void)_setupWithSceneModel:(id)arg1 restoreAnimationState:(_Bool)arg2;
- (void)_initializeAnimationContainer;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

