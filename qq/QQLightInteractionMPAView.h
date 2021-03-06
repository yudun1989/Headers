//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQLightInteractionAnimationActorDelegate-Protocol.h>

@class LOTAnimationView, NSMutableArray, NSString;

@interface QQLightInteractionMPAView : UIView <QQLightInteractionAnimationActorDelegate>
{
    NSMutableArray *_animtList;
    LOTAnimationView *_lotiView;
    _Bool _isPlaying;
}

@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)cancel;
- (void)replay;
- (void)loadVipPokeAnimation:(id)arg1;
- (void)loadlikeAnimation;
- (void)loadHeartAnimation;
- (void)animationDidStop:(id)arg1 anim:(id)arg2 finished:(_Bool)arg3;
- (void)animationDidStart:(id)arg1 anim:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

