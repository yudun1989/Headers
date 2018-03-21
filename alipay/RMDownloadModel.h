//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface RMDownloadModel : NSObject
{
    NSRecursiveLock *_downloadListLock;
    NSRecursiveLock *_downloadingTasksLock;
    NSMutableDictionary *_tasksToBeDownload;
    NSMutableDictionary *_tasksInDownloading;
    NSRecursiveLock *_errorListLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *errorListLock; // @synthesize errorListLock=_errorListLock;
@property(retain, nonatomic) NSMutableDictionary *tasksInDownloading; // @synthesize tasksInDownloading=_tasksInDownloading;
@property(retain, nonatomic) NSMutableDictionary *tasksToBeDownload; // @synthesize tasksToBeDownload=_tasksToBeDownload;
@property(retain, nonatomic) NSRecursiveLock *downloadingTasksLock; // @synthesize downloadingTasksLock=_downloadingTasksLock;
@property(retain, nonatomic) NSRecursiveLock *downloadListLock; // @synthesize downloadListLock=_downloadListLock;
- (void).cxx_destruct;
- (void)processWithExceptionValue:(id)arg1;
- (id)downloadingTasks;
- (id)valueFromDownloadingTasksWithKey:(id)arg1;
- (void)removeObjectFromDownloadingTasksWithKey:(id)arg1;
- (void)addToDownloadingTasksWithKey:(id)arg1 Value:(id)arg2;
- (id)downloadListByPriority;
- (void)asyncUpdateDownloadStatusWithKey:(id)arg1 Object:(id)arg2;
- (void)updateDownloadStatusWithKey:(id)arg1 Object:(id)arg2;
- (long long)downloadStatusWithKey:(id)arg1;
- (void)removeObjectFromDownloadListWithKey:(id)arg1;
- (id)addToDownloadListWithTaskList:(id)arg1;
- (void)saveDownloadListToDataCenter;

@end

