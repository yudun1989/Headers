//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "O2OImageAnimatorProtocol-Protocol.h"

@class NSArray, NSString, UIImageView, UIView;

@interface O2OImageFoldAnimator : NSObject <O2OImageAnimatorProtocol, CAAnimationDelegate>
{
    unsigned long long _foldType;
    UIImageView *_targetView;
    UIView *_renderView;
    CDUnknownBlockType _animationFinishBlock;
    NSArray *_transitionViews;
    unsigned long long _finishTime;
}

@property unsigned long long finishTime; // @synthesize finishTime=_finishTime;
@property(retain, nonatomic) NSArray *transitionViews; // @synthesize transitionViews=_transitionViews;
@property(copy, nonatomic) CDUnknownBlockType animationFinishBlock; // @synthesize animationFinishBlock=_animationFinishBlock;
@property(nonatomic) __weak UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIImageView *targetView; // @synthesize targetView=_targetView;
@property unsigned long long foldType; // @synthesize foldType=_foldType;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)viewsSpliteWithView:(id)arg1 type:(unsigned long long)arg2;
- (void)actionFoldAnimationWithType:(unsigned long long)arg1;
- (void)resetTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

