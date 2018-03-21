//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BlueTaskThread, NSTimer;

@interface MemoryUploadCenter : NSObject
{
    BlueTaskThread *_thread;
    double _freeMemory;
    double _residentMemory;
    double _heapMemory;
    double _maxMemory;
    double _maxHeapMemory;
    double _singleLoginMaxMemory;
    _Bool _hasUpLoadLastData;
    _Bool _hasUpdateUin;
    NSTimer *_watchDogTimer;
    double _fristLaunchTime;
    double _firstOOMTime;
}

+ (id)getInstance;
- (double)appMaxMemory;
- (double)appUsedMemory;
- (double)freeMemory;
- (void)appReceiveMemoryWarning;
- (id)singleLoginMaxMemoryDir;
- (id)readLastMaxHeapMemory;
- (void)saveLastMaxHeapMemory;
- (void)saveLastSingleLoginMaxMemory;
- (double)getThreshold;
- (void)uploadLastSingleLoginMaxMemory;
- (void)updateMemory;
- (void)dealloc;
- (void)doUploadTask;
- (void)initMemoryWindow;
- (id)init;

@end

