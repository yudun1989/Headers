//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface APBackgroundTaskManager : NSObject
{
    NSArray *_syncTasks;
    NSArray *_asyncTasks;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSMutableDictionary *_lastStartTimes;
}

+ (id)shared;
- (void).cxx_destruct;
- (unsigned long long)runAsyncTasks:(id)arg1;
- (unsigned long long)runSyncTasks:(id)arg1;
- (unsigned long long)runTasksInternal:(id)arg1 tasks:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)createTaskByName:(id)arg1;
- (_Bool)isIgnoredTask:(id)arg1;
- (id)init;

@end

