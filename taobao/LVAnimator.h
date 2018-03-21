//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class CABasicAnimation, LuaViewCore, NSString, NSValue, UIView;

@interface LVAnimator : NSObject <LVProtocal, LVClassProtocal, NSCopying, NSMutableCopying>
{
    NSString *_animationKey;
    CABasicAnimation *_pausedAnimation;
    double _timeOffset;
    _Bool _autoreverses;
    float _duration;
    float _delay;
    int _repeatCount;
    int _interpolator;
    NSString *_keyPath;
    NSValue *_toValue;
    UIView *_target;
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
@property(nonatomic) __weak UIView *target; // @synthesize target=_target;
@property(nonatomic) int interpolator; // @synthesize interpolator=_interpolator;
@property(nonatomic) _Bool autoreverses; // @synthesize autoreverses=_autoreverses;
@property(nonatomic) int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) float delay; // @synthesize delay=_delay;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSValue *toValue; // @synthesize toValue=_toValue;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)callback:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @dynamic paused;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @dynamic running;
- (void)cancel;
- (void)start;
- (void)syncAnimatingValue:(id)arg1;
- (id)buildAnimation;
- (id)buildTimingFunction:(int)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)lv_nativeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

