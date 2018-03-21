//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBDTDownloader.h"

#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSString, NSURL, NSURLSession;

@interface TBURLSessionDownloader : TBDTDownloader <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    NSMutableDictionary *_taskDictionary;
    CDUnknownBlockType _backgroundSessionCompletionHandler;
    NSURLSession *_defaultSession;
    NSURLSession *_backgroundSession;
    NSURLSession *_accelerateSession;
    NSLock *_taskDictionaryLock;
    NSURL *_tempFileDirectory;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *tempFileDirectory; // @synthesize tempFileDirectory=_tempFileDirectory;
@property(retain, nonatomic) NSLock *taskDictionaryLock; // @synthesize taskDictionaryLock=_taskDictionaryLock;
@property(retain, nonatomic) NSURLSession *accelerateSession; // @synthesize accelerateSession=_accelerateSession;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSURLSession *defaultSession; // @synthesize defaultSession=_defaultSession;
@property(copy) CDUnknownBlockType backgroundSessionCompletionHandler; // @synthesize backgroundSessionCompletionHandler=_backgroundSessionCompletionHandler;
@property(retain, nonatomic) NSMutableDictionary *taskDictionary; // @synthesize taskDictionary=_taskDictionary;
- (void).cxx_destruct;
- (void)setBackgroundSessionCompletionHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (_Bool)needRetryTask:(id)arg1 error:(id)arg2;
- (void)retryTask:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)cancelTask:(id)arg1;
- (void)resumeTask:(id)arg1;
- (void)suspendTask:(id)arg1;
- (void)startTask:(id)arg1;
- (id)getResumeDataFileLocation:(id)arg1;
- (id)customTaskForURLSessionTask:(id)arg1;
- (id)downLoadTaskForTask:(id)arg1;
- (id)monitorDelegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

