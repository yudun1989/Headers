//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseSystemMonitorRecorder.h"

@interface TTMemoryUsageMonitorRecorder : TTBaseSystemMonitorRecorder
{
    unsigned long long _memoryActiveBytes;
    unsigned long long _memoryInactiveBytes;
    unsigned long long _memoryWiredBytes;
    unsigned long long _memoryFreeBytes;
    unsigned long long _memoryUsedBytes;
    unsigned long long _memoryTotalBytes;
    unsigned long long _memoryPageSize;
    double _startTime;
}

- (void)updateInfo;
- (double)totalMemory;
- (double)memoryNow;
- (void)recordIfNeeded:(_Bool)arg1;
- (_Bool)isEnabled;
- (double)monitorInterval;
- (id)type;
- (id)init;

@end

