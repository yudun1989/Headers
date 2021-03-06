//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BubbleView, NSTimer, UIView, WeakTimerTarget;

@interface VideoBubbleViewManager : NSObject
{
    BubbleView *_bubbleView;
    double _timerDelay;
    double _hiddenTimerDelay;
    _Bool _hasAddBubbleView;
    NSTimer *_showTimer;
    WeakTimerTarget *_showTimeTarget;
    NSTimer *_hiddenTimer;
    WeakTimerTarget *_hiddenTimeTarget;
    UIView *_parentView;
    long long _maxShowCount;
    struct CGPoint _showPoint;
}

@property(nonatomic) long long maxShowCount; // @synthesize maxShowCount=_maxShowCount;
@property(nonatomic) struct CGPoint showPoint; // @synthesize showPoint=_showPoint;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) WeakTimerTarget *hiddenTimeTarget; // @synthesize hiddenTimeTarget=_hiddenTimeTarget;
@property(retain, nonatomic) NSTimer *hiddenTimer; // @synthesize hiddenTimer=_hiddenTimer;
@property(retain, nonatomic) WeakTimerTarget *showTimeTarget; // @synthesize showTimeTarget=_showTimeTarget;
@property(retain, nonatomic) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(nonatomic) _Bool hasAddBubbleView; // @synthesize hasAddBubbleView=_hasAddBubbleView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)RemoveBubble;
- (void)cancelHiddenBubbleDelay;
- (void)cancelShowBubbleDelay;
- (void)setShowCenterPoint:(struct CGPoint)arg1;
- (void)addBobbleView;
- (int)getShowCount;
- (void)addShowCount;
- (_Bool)canShowBubble;
- (id)getBubbleView;
- (void)initBubbleView:(id)arg1;
- (void)initWeakTimerTarget;
- (id)init:(id)arg1;

@end

