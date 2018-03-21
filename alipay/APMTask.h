//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperation, NSString;
@protocol APMTaskDelegate, OS_dispatch_queue;

@interface APMTask : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _Bool _completeBlockHandled;
    CDUnknownBlockType _runningBlock;
    CDUnknownBlockType _completeBlock;
    NSString *_taskAliasName;
    NSString *_taskId;
    unsigned long long _priority;
    unsigned long long _executeSequence;
    unsigned long long _taskStatus;
    CDUnknownBlockType _taskBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <APMTaskDelegate> _delegate;
    NSMutableArray *_duplicateTasks;
    double _taskAddedToWaitingListTime;
    double _taskWaitingTime;
    double _taskExecutingTime;
    NSOperation *_operation;
    CDUnknownBlockType _runningBlockInternal;
    CDUnknownBlockType _completeBlockInternal;
}

@property(nonatomic, getter=isCompleteBlockHandled) _Bool completeBlockHandled; // @synthesize completeBlockHandled=_completeBlockHandled;
@property(copy, nonatomic) CDUnknownBlockType completeBlockInternal; // @synthesize completeBlockInternal=_completeBlockInternal;
@property(copy, nonatomic) CDUnknownBlockType runningBlockInternal; // @synthesize runningBlockInternal=_runningBlockInternal;
@property(nonatomic) __weak NSOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) double taskExecutingTime; // @synthesize taskExecutingTime=_taskExecutingTime;
@property(nonatomic) double taskWaitingTime; // @synthesize taskWaitingTime=_taskWaitingTime;
@property(nonatomic) double taskAddedToWaitingListTime; // @synthesize taskAddedToWaitingListTime=_taskAddedToWaitingListTime;
@property(retain, nonatomic) NSMutableArray *duplicateTasks; // @synthesize duplicateTasks=_duplicateTasks;
@property(nonatomic) __weak id <APMTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
@property(nonatomic) unsigned long long taskStatus; // @synthesize taskStatus=_taskStatus;
@property(nonatomic) unsigned long long executeSequence; // @synthesize executeSequence=_executeSequence;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *taskAliasName; // @synthesize taskAliasName=_taskAliasName;
- (void).cxx_destruct;
- (void)delegateForTaskFinished;
- (void)doCallbackWithObject:(id)arg1 error:(id)arg2 userInfo:(id)arg3 isRunningBlock:(_Bool)arg4 notifyFinish:(_Bool)arg5;
- (void)callbackWithObject:(id)arg1 error:(id)arg2 userInfo:(id)arg3 isRunningBlock:(_Bool)arg4 notifyFinish:(_Bool)arg5;
- (void)doCallback:(id)arg1 error:(id)arg2 userInfo:(id)arg3 isRunningBlock:(_Bool)arg4;
- (void)statusChangedToDeletedFromTaskScheduler;
- (void)statusChangedToStartRunning;
- (void)statusChangedToAddedToWaitingQueue;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType runningBlock; // @synthesize runningBlock=_runningBlock;
- (void)deleteAllDuplicateTask;
- (void)addTaskToDuplicateTaskSet:(id)arg1;
- (id)initWithTaskID:(id)arg1 priority:(unsigned long long)arg2 executeSequence:(unsigned long long)arg3 runningBlock:(CDUnknownBlockType)arg4 compelteBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (id)initWithTaskID:(id)arg1 priority:(unsigned long long)arg2 executeSequence:(unsigned long long)arg3 runningBlock:(CDUnknownBlockType)arg4 compelteBlock:(CDUnknownBlockType)arg5;
- (id)initWithTaskID:(id)arg1 priority:(unsigned long long)arg2 runningBlock:(CDUnknownBlockType)arg3 compelteBlock:(CDUnknownBlockType)arg4;
- (id)initWithTaskID:(id)arg1 runningBlock:(CDUnknownBlockType)arg2 compelteBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)initWithTaskID:(id)arg1 priority:(unsigned long long)arg2 callbackQueue:(id)arg3;
- (void)dealloc;

@end

