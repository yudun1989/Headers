//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer, TBPLBaseTriggerService, TBPopLayerEvent;

@interface TBPLBaseTimerManager : NSObject
{
    TBPLBaseTriggerService *_triggerService;
    TBPopLayerEvent *_popLayerEvent;
    NSMutableArray *_unreachedStartTimeConfigArray;
    NSTimer *_beginTimer;
}

@property(retain, nonatomic) NSTimer *beginTimer; // @synthesize beginTimer=_beginTimer;
@property(retain, nonatomic) NSMutableArray *unreachedStartTimeConfigArray; // @synthesize unreachedStartTimeConfigArray=_unreachedStartTimeConfigArray;
@property(retain, nonatomic) TBPopLayerEvent *popLayerEvent; // @synthesize popLayerEvent=_popLayerEvent;
@property(nonatomic) __weak TBPLBaseTriggerService *triggerService; // @synthesize triggerService=_triggerService;
- (void).cxx_destruct;
- (void)fireTimer:(id)arg1;
- (void)startTimer:(id)arg1;
- (void)addConfigArray:(id)arg1;
- (void)installTimerWithConfigArray:(id)arg1 forEvent:(id)arg2;
- (void)cleanAll;
- (void)enterForeground;
- (void)enterBackground;
- (void)registerObserver;
- (void)dealloc;
- (id)init;

@end

