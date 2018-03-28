//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSString, NSURL, NSURLRequest;
@protocol BDDownloadTaskDelegate;

@interface BDDownloadTask : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    _Bool _downloadResumeEnabled;
    NSURL *_url;
    NSURLRequest *_request;
    NSString *_identifier;
    NSDictionary *_defaultHeaders;
    unsigned long long _options;
    NSString *_tempPath;
    id <BDDownloadTaskDelegate> _delegate;
    long long _expectedSize;
    long long _receivedSize;
    double _startTime;
    double _finishTime;
}

@property(nonatomic) double finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long receivedSize; // @synthesize receivedSize=_receivedSize;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) __weak id <BDDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool downloadResumeEnabled; // @synthesize downloadResumeEnabled=_downloadResumeEnabled;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)_setReceivedSize:(long long)arg1 expectedSize:(long long)arg2;
- (void)cancel;
- (void)start;
- (_Bool)asynchronous;
- (_Bool)isConcurrent;
- (void)setExecuting:(_Bool)arg1;
- (_Bool)isExecuting;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isFinished;
- (id)initWithURL:(id)arg1;

@end

