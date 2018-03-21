//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VITaskQueue;

@interface VITaskManager : NSObject
{
    VITaskQueue *_taskQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) VITaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void).cxx_destruct;
- (void)monitorTaskQueueFull;
- (void)monitorCancelTask;
- (id)currentModule;
- (id)currentTask;
- (void)removeTask:(id)arg1;
- (void)continueAddTask:(id)arg1;
- (void)enqueueTask:(id)arg1;
- (void)forceExit;
- (void)logout;
- (id)init;

@end

