//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ANSUploaderDelegate-Protocol.h"

@class ANSCrashMetadata, ANSEventFilter, ANSMetadata, ANSNetworkRetryHandler, ANSSettings, ANSTimer, ANSUploader, NSOperationQueue, NSString, NSURL;

@interface ANSAnswersController : NSObject <ANSUploaderDelegate>
{
    NSOperationQueue *_eventQueue;
    NSString *_rootEventDirectory;
    ANSMetadata *_metadata;
    ANSCrashMetadata *_previousExecutionMetadata;
    ANSUploader *_uploader;
    ANSNetworkRetryHandler *_networkRetryHandler;
    NSURL *_currentLogURL;
    ANSEventFilter *_eventFilter;
    ANSSettings *_settings;
    ANSTimer *_flushTimer;
}

+ (id)rootDirectory;
@property(readonly, nonatomic) ANSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(readonly, nonatomic) ANSSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) ANSEventFilter *eventFilter; // @synthesize eventFilter=_eventFilter;
@property(readonly, nonatomic) NSURL *currentLogURL; // @synthesize currentLogURL=_currentLogURL;
@property(readonly, nonatomic) ANSNetworkRetryHandler *networkRetryHandler; // @synthesize networkRetryHandler=_networkRetryHandler;
@property(readonly, nonatomic) ANSUploader *uploader; // @synthesize uploader=_uploader;
@property(readonly, nonatomic) ANSCrashMetadata *previousExecutionMetadata; // @synthesize previousExecutionMetadata=_previousExecutionMetadata;
@property(readonly, nonatomic) ANSMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *rootEventDirectory; // @synthesize rootEventDirectory=_rootEventDirectory;
@property(readonly, nonatomic) NSOperationQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void).cxx_destruct;
- (void)uploader:(id)arg1 completedRequest:(id)arg2 withResponse:(id)arg3 uniqueName:(id)arg4 error:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)uploader:(id)arg1 session:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)uploader:(id)arg1 didFinishUploadWithUniqueName:(id)arg2 error:(id)arg3;
- (id)uploader:(id)arg1 filePathForUniqueName:(id)arg2;
- (id)multipartMimeURLWithBoundary:(id)arg1;
- (id)boundaryFromURL:(id)arg1;
- (void)uploadMultipartFiles:(id)arg1;
- (void)uploadAllMultipartFiles;
- (void)cleanupAndProcessExistingFiles;
- (id)uploadOperationForFileAtURL:(id)arg1 withBoundary:(id)arg2;
- (id)operationsForCompressedLog:(id)arg1;
- (id)operationsForUncompressedLog:(id)arg1;
- (void)rotateAndSubmitCurrentLog;
- (_Bool)shouldSubmitLogAtURL:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)logCrashEvent:(id)arg1;
- (_Bool)shouldLogEvent;
- (void)logEvent:(id)arg1;
- (id)replacePreviousExecutionMetadataWithCurrentMetadata:(id)arg1 inRootDirectory:(id)arg2;
- (void)removeAllLogs;
- (void)flushTimerFired;
- (void)setupFlushTimer;
- (void)initializeSettingsIfNeededWithFabricSettings:(id)arg1;
- (void)fabricSettingsDidBecomeAvailable:(id)arg1;
- (id)generateNewLogPath;
- (void)applicationLifecycleEvent:(id)arg1;
- (void)registerForApplicationLifecycleEvents;
- (id)uploaderWithQueue:(id)arg1 delegate:(id)arg2;
- (id)sharedFabricSDK;
- (id)crashMetadataPathForRootDirectory:(id)arg1;
- (id)eventDirectoryForRootDirectory:(id)arg1;
- (id)initWithBetaToken:(id)arg1 rootDirectory:(id)arg2;
- (id)initWithBetaToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

