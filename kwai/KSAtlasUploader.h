//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasUploaderAspects-Protocol.h"
#import "KSFeedUploader-Protocol.h"

@class BFExecutor, KSAtlasUploadItem, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface KSAtlasUploader : NSObject <KSAtlasUploaderAspects, KSFeedUploader>
{
    KSAtlasUploadItem *_item;
    NSProgress *_progress;
    BFExecutor *_executor;
    NSObject<OS_dispatch_queue> *_uploadQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) BFExecutor *executor; // @synthesize executor=_executor;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) KSAtlasUploadItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)p_feedTaskWithTask:(id)arg1;
- (id)p_makeFileWithKey:(id)arg1 cancellationToken:(id)arg2;
- (id)p_uploadResourceWithTaskManager:(id)arg1 request:(id)arg2 progress:(id *)arg3 cancellationToken:(id)arg4;
- (id)p_uploadResource:(id)arg1 key:(id)arg2 taskManager:(id)arg3 retryCount:(long long)arg4 cancellationToken:(id)arg5;
- (id)p_atlasUploadResourcesWithKey:(id)arg1 cancellationToken:(id)arg2;
- (id)p_fetchKeyWithCancellationToken:(id)arg1;
- (id)uploadItemWithCancellationToken:(id)arg1 progress:(id *)arg2;
- (id)initWithItem:(id)arg1;
- (id)timeFor:(id)arg1;
- (void)addTimeFor:(id)arg1;
- (id)publishHolder;
- (id)atlasKeyHolder;
- (void)uploaderDidCancelPublish;
- (void)uploaderDidPublishWithError:(id)arg1;
- (void)uploaderWillPublish;
- (void)uploaderDidCancelUploadResource:(id)arg1;
- (void)uploaderDidUploadResource:(id)arg1 error:(id)arg2;
- (void)uploaderWillUploadResource:(id)arg1;
- (void)uploaderDidCancelRequestAtlasKey;
- (void)uploaderDidRequestAtlasKeyWithError:(id)arg1;
- (void)uploaderWillRequestAtlasKey;
- (void)uploaderDidCancelUpload;
- (void)uploaderDidEndUploadWithResult:(id)arg1 error:(id)arg2;
- (void)uploaderWillBeginUpload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

