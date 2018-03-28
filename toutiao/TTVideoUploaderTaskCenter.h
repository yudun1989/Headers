//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface TTVideoUploaderTaskCenter : NSObject
{
    NSMutableArray *_tasks;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
- (void)removeAllTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)removeAllTasks;
- (void)removeTaskFromDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)removeFromDiskForTaskID:(id)arg1;
- (void)fetchTasksCompletion:(CDUnknownBlockType)arg1;
- (id)fetchTasks;
- (void)fetchTaskWithTaskID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchTaskWithTaskID:(id)arg1;
- (void)persistentTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)persistentTask:(id)arg1;
- (id)createTaskWithTaskID:(id)arg1;
- (id)init;

@end

