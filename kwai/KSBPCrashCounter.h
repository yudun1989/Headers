//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface KSBPCrashCounter : NSObject
{
    _Bool _isFinished;
    long long _crashCount;
    NSTimer *_timer;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)destoryInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) long long crashCount; // @synthesize crashCount=_crashCount;
- (void).cxx_destruct;
- (void)loadProperty;
- (void)archiveProperty;
- (void)invalidateTimer;
- (void)reset;
- (void)enterBackground;
- (void)startTimer;
- (void)removeObserver;
- (void)addObservers;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

