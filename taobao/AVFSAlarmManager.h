//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVFSAlarmManager : NSObject
{
    Class loggerClass;
}

+ (void)commitMonitorDirsInfo;
+ (void)commitAppInfo:(long long)arg1 fileCount:(long long)arg2;
+ (void)commitDiskInfo;
+ (void)writeLog2Disk:(id)arg1;
+ (void)commitScanResults:(id)arg1;
+ (id)convertScanResult:(id)arg1 totalSize:(long long *)arg2;
+ (id)sharedManager;
- (void)statAppInfo:(id)arg1;
- (void)statDiskInfo:(id)arg1;
- (void)statModuleDesc:(id)arg1 attrs:(id)arg2;
- (void)alarmScanFile:(id)arg1 error:(id)arg2;
- (void)alarmDeleteFile:(id)arg1 file:(id)arg2 error:(id)arg3;
- (id)init;

@end

