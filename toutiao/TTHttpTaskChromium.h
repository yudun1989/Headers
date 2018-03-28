//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTHttpTask.h"

#import "TTFetcherProtocol-Protocol.h"

@class NSMutableIndexSet, NSProgress, NSString, TTHttpRequestChromium;

@interface TTHttpTaskChromium : TTHttpTask <TTFetcherProtocol>
{
    struct scoped_refptr<TTFetcherDelegate> fetcher_delegate;
    _Bool _enableCustomizedCookie;
    _Bool _enableHttpCache;
    _Bool _isCancelled;
    _Bool _isCompleted;
    float _taskPriority;
    NSProgress *_uploadProgress;
    NSProgress *_downloadProgress;
    struct CronetEnvironment *_engine;
    TTHttpRequestChromium *_request;
    unsigned long long _taskId;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _downloadProgressBlock;
    NSMutableIndexSet *_acceptableStatusCodes;
}

@property(retain, nonatomic) NSMutableIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) float taskPriority; // @synthesize taskPriority=_taskPriority;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(nonatomic) _Bool enableHttpCache; // @synthesize enableHttpCache=_enableHttpCache;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) TTHttpRequestChromium *request; // @synthesize request=_request;
@property(nonatomic) struct CronetEnvironment *engine; // @synthesize engine=_engine;
@property(nonatomic) _Bool enableCustomizedCookie; // @synthesize enableCustomizedCookie=_enableCustomizedCookie;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSProgress *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFetcherPriority_:(struct URLFetcher *)arg1;
- (void)OnTimeout:(int)arg1 error:(int)arg2 details:(id)arg3;
- (void)OnURLFetchUploadProgress:(const struct URLFetcher *)arg1 current:(long long)arg2 total:(long long)arg3;
- (void)OnURLFetchDownloadProgress:(const struct URLFetcher *)arg1 current:(long long)arg2 total:(long long)arg3 current_network_bytes:(long long)arg4;
- (void)OnURLFetchComplete:(const struct URLFetcher *)arg1;
- (long long)state;
- (void)setPriority:(float)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 engine:(struct CronetEnvironment *)arg2 taskId:(unsigned long long)arg3 enableHttpCache:(_Bool)arg4 completedCallback:(CDUnknownBlockType)arg5 uploadProgressCallback:(CDUnknownBlockType)arg6 downloadProgressCallback:(CDUnknownBlockType)arg7;
- (id)initWithRequest:(id)arg1 engine:(struct CronetEnvironment *)arg2 taskId:(unsigned long long)arg3 completedCallback:(CDUnknownBlockType)arg4 uploadProgressCallback:(CDUnknownBlockType)arg5 downloadProgressCallback:(CDUnknownBlockType)arg6;
- (id)initWithRequest:(id)arg1 engine:(struct CronetEnvironment *)arg2 taskId:(unsigned long long)arg3 completedCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

