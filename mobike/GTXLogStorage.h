//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTXLogStorage : NSObject
{
    NSString *_logDirPath;
    NSString *_crashReportDirPath;
    NSString *_attachmentDirPath;
    NSString *_cacheDirPath;
}

+ (id)systemConfigFilePath;
+ (unsigned long long)logFileSize:(id)arg1;
+ (_Bool)isLogFile:(id)arg1;
+ (id)cacheFilePath:(id)arg1;
+ (id)crashReportFilePath:(id)arg1;
+ (id)attachmentFilePath:(id)arg1;
+ (id)logFilePath:(id)arg1;
+ (id)cacheDir;
+ (id)crashReportDir;
+ (id)logDir;
+ (_Bool)fileExistsAtPath:(id)arg1;
+ (void)initStorage;
+ (id)storage;
@property(retain, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property(retain, nonatomic) NSString *attachmentDirPath; // @synthesize attachmentDirPath=_attachmentDirPath;
@property(retain, nonatomic) NSString *crashReportDirPath; // @synthesize crashReportDirPath=_crashReportDirPath;
@property(retain, nonatomic) NSString *logDirPath; // @synthesize logDirPath=_logDirPath;
- (void).cxx_destruct;
- (id)dirWithName:(id)arg1;

@end

