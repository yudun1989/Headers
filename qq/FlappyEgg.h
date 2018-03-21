//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSTimer;

@interface FlappyEgg : UIImageView
{
    float _vecX;
    float _vecY;
    float _gravity;
    _Bool _firstJump;
    _Bool _disappear;
    struct CGPoint _jumpEndPosition;
    NSTimer *_timer;
    double _timeDelay;
    CDUnknownBlockType _action;
    CDUnknownBlockType _beforeEggRemoved;
}

@property(copy, nonatomic) CDUnknownBlockType beforeEggRemoved; // @synthesize beforeEggRemoved=_beforeEggRemoved;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) double timeDelay; // @synthesize timeDelay=_timeDelay;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (_Bool)play0;
- (void)play2;
- (void)play1;
- (void)play;
- (void)cancel;
- (float)randomDropDistRatio;
- (id)initWithImage:(id)arg1;

@end
