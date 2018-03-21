//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EZAnimationFlowListener-Protocol.h"

@class EZAnimationManager, NSMutableArray, NSString;
@protocol EZAnimationFlowListener;

@interface EZAnimationFlow : NSObject <EZAnimationFlowListener>
{
    _Bool _mStatePaused;
    _Bool _mStateStated;
    id <EZAnimationFlowListener> _mListener;
    EZAnimationManager *_mAnimationManager;
    NSMutableArray *_mLanes;
}

@property(nonatomic) _Bool mStateStated; // @synthesize mStateStated=_mStateStated;
@property(nonatomic) _Bool mStatePaused; // @synthesize mStatePaused=_mStatePaused;
@property(retain, nonatomic) NSMutableArray *mLanes; // @synthesize mLanes=_mLanes;
@property(nonatomic) __weak EZAnimationManager *mAnimationManager; // @synthesize mAnimationManager=_mAnimationManager;
@property(nonatomic) __weak id <EZAnimationFlowListener> mListener; // @synthesize mListener=_mListener;
- (void).cxx_destruct;
- (_Bool)update:(double)arg1;
- (id)addLane:(id)arg1;
- (void)pause;
- (void)resume;
- (void)cancel;
- (void)start;
- (void)eventAnimationRepeat:(id)arg1 currentRepeatCount:(int)arg2 direction:(int)arg3;
- (void)eventAnimationEnd:(id)arg1;
- (void)eventAnimationStart:(id)arg1;
- (void)eventResume;
- (void)eventPause;
- (void)eventCancel;
- (void)eventEnd;
- (void)eventStart;
- (id)initWithAnimationManager:(id)arg1;
- (void)onEnd:(id)arg1;
- (void)onEndBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

