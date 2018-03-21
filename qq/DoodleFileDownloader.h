//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DoodleInfo, NSTimer, QQMessageModel;
@protocol DoodleFileDownloadDelegate;

@interface DoodleFileDownloader : NSObject
{
    unsigned int _u32FileCookie;
    id <DoodleFileDownloadDelegate> _downloadDelegate;
    QQMessageModel *_msgModel;
    NSTimer *_timer;
    unsigned int _timerCount;
    DoodleInfo *_doodleInfo;
    _Bool _gifResDownloading;
}

- (void).cxx_destruct;
- (void)timerAction;
- (void)startTimer;
- (void)downloadFailed:(id)arg1 originUrl:(id)arg2 error:(id)arg3;
- (void)downloadSuccess:(id)arg1 originUrl:(id)arg2 resObject:(id)arg3;
- (void)downloadDoodleFile:(unsigned int)arg1 model:(id)arg2 downloadDelegate:(id)arg3;

@end

