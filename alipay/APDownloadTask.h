//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class APDownloadRequest, NSError, NSMutableURLRequest, NSOutputStream, NSString, NSURLConnection;
@protocol APDownloadTaskDelegate;

@interface APDownloadTask : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _executing;
    unsigned long long _fileSize;
    unsigned long long _totalBytesRead;
    unsigned long long _existFileSize;
    NSError *_error;
    NSString *_path;
    APDownloadRequest *_downloadReq;
    id <APDownloadTaskDelegate> _delegate;
    CDUnknownBlockType _internalCompletionBlock;
    CDUnknownBlockType _internalProgressBlock;
    NSURLConnection *_connection;
    NSOutputStream *_outputStream;
    NSMutableURLRequest *_req;
    NSString *_tag;
}

+ (unsigned long long)fileReadForPath:(id)arg1;
+ (id)pathForURL:(id)arg1;
+ (id)tempPathForURL:(id)arg1;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSMutableURLRequest *req; // @synthesize req=_req;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType internalProgressBlock; // @synthesize internalProgressBlock=_internalProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType internalCompletionBlock; // @synthesize internalCompletionBlock=_internalCompletionBlock;
@property(nonatomic) __weak id <APDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APDownloadRequest *downloadReq; // @synthesize downloadReq=_downloadReq;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setProgressBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelImpl;
- (void)cancel;
- (void)startImpl;
- (void)start;
- (_Bool)isStarted;
- (void)dealloc;
- (id)initWithDownloadReq:(id)arg1;
- (id)initWithFileAtURL:(id)arg1 timeoutInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

