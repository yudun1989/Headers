//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DownloadTmpFileInfo : NSObject
{
    int _networkStatus;
    NSString *_tmpFilePath;
    long long _tmpFileSize;
    long long _totalFileSize;
}

+ (id)existingDownloadTmpFileInfo:(id)arg1;
@property(nonatomic) int networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic) long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(nonatomic) long long tmpFileSize; // @synthesize tmpFileSize=_tmpFileSize;
@property(retain, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
- (void).cxx_destruct;
- (float)downloadProgress;
- (void)moveToPath:(id)arg1 error:(id *)arg2;
- (id)removeTmpFile;
- (id)initWithPath:(id)arg1 andTotalFileSize:(long long)arg2 andNetWorkStatus:(int)arg3;

@end

